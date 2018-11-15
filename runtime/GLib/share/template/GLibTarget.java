/*
 * [The "BSD license"]
 *  Copyright (c) 2016 David Sisson, Mike Lischke
 *  Copyright (c) 2012 Terence Parr
 *  Copyright (c) 2012 Sam Harwell
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. The name of the author may not be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 *  IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 *  OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 *  IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 *  NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 *  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

package org.antlr.v4.codegen.target;

import org.antlr.v4.codegen.CodeGenerator;
import org.antlr.v4.codegen.Target;
import org.antlr.v4.tool.ErrorType;
import org.antlr.v4.tool.Grammar;
import org.antlr.v4.tool.ast.GrammarAST;
import org.stringtemplate.v4.NumberRenderer;
import org.stringtemplate.v4.STErrorListener;
import org.stringtemplate.v4.ST;
import org.stringtemplate.v4.STGroup;
import org.stringtemplate.v4.STGroupFile;
import org.stringtemplate.v4.StringRenderer;
import org.stringtemplate.v4.misc.STMessage;

import java.util.Arrays;
import java.util.HashSet;
import java.util.Locale;
import java.util.Set;

public class GLibTarget extends Target {

	protected static final String[] glibKeywords = {
	};

	/** Avoid grammar symbols in this set to prevent conflicts in gen'd code. */
	protected final Set<String> badWords = new HashSet<String>();

	public GLibTarget(CodeGenerator gen) {
		super(gen, "GLib");
	}

	public String getVersion() {
		return "4.6";
	}

    public boolean needsHeader() { return true; }

	public Set<String> getBadWords() {
		if (badWords.isEmpty()) {
			addBadWords();
		}

		return badWords;
	}

	protected void addBadWords() {
		badWords.addAll(Arrays.asList(glibKeywords));
		badWords.add("rule");
		badWords.add("parserRule");
	}

	/**
	 * {@inheritDoc}
	 * <p/>
	 * For C++, this is the translation {@code 'a\n"'} &rarr; {@code "a\n\""}.
	 * Expect single quotes around the incoming literal. Just flip the quotes
	 * and replace double quotes with {@code \"}.
	 * <p/>
	 * Note that we have decided to allow people to use '\"' without penalty, so
	 * we must build the target string in a loop as {@link String#replace}
	 * cannot handle both {@code \"} and {@code "} without a lot of messing
	 * around.
	 */
	@Override
	public String getTargetStringLiteralFromANTLRStringLiteral(
		CodeGenerator generator,
		String literal, boolean addQuotes)
	{
		StringBuilder sb = new StringBuilder();
		String is = literal;

		if ( addQuotes ) sb.append('"');

		for (int i = 1; i < is.length() -1; i++) {
			if  (is.charAt(i) == '\\') {
				// Anything escaped is what it is! We assume that
				// people know how to escape characters correctly. However
				// we catch anything that does not need an escape in Java (which
				// is what the default implementation is dealing with and remove
				// the escape. The C target does this for instance.
				//
				switch (is.charAt(i+1)) {
					// Pass through any escapes that Java also needs
					//
					case    '"':
					case    'n':
					case    'r':
					case    't':
					case    'b':
					case    'f':
					case    '\\':
						// Pass the escape through
						sb.append('\\');
						break;

					case    'u':    // Assume unnnn
						// Pass the escape through as double \\
						// so that Java leaves as \u0000 string not char
						sb.append('\\');
						sb.append('\\');
						break;

					default:
						// Remove the escape by virtue of not adding it here
						// Thus \' becomes ' and so on
						break;
				}

				// Go past the \ character
				i++;
			} else {
				// Characters that don't need \ in ANTLR 'strings' but do in Java
				if (is.charAt(i) == '"') {
					// We need to escape " in Java
					sb.append('\\');
				}
			}
			// Add in the next character, which may have been escaped
			sb.append(is.charAt(i));
		}

		if ( addQuotes ) sb.append('"');

		return sb.toString();
	}

	@Override
	public String encodeIntAsCharEscape(int v) {
		//return "0x" + Integer.toHexString(v) + ", ";
		if ( v>=0 && v<=255 ) {
			String hex = Integer.toHexString(v|0x10000).substring(3,5);
			return "0x"+hex.toUpperCase();
		}

                String hex = Integer.toHexString(v|0x10000).substring(1,5);
                return "0x"+hex.toUpperCase();
        }

	@Override
	public int getSerializedATNSegmentLimit() {
		// 65535 is the class file format byte limit for a UTF-8 encoded string literal
		// 3 is the maximum number of bytes it takes to encode a value in the range 0-0xFFFF
		return 65535 / 3;
	}

	@Override
	public String getRecognizerFileName(boolean header) {
		ST extST = getTemplates().getInstanceOf(header ? "headerFileExtension" : "codeFileExtension");
		String recognizerName = gen.g.getRecognizerName();
		return recognizerName+extST.render();
	}

	@Override
	public String getListenerFileName(boolean header) {
		assert gen.g.name != null;
		ST extST = getTemplates().getInstanceOf(header ? "headerFileExtension" : "codeFileExtension");
		String listenerName = gen.g.name + "Listener";
		return listenerName+extST.render();
	}

	@Override
	public String getVisitorFileName(boolean header) {
		assert gen.g.name != null;
		ST extST = getTemplates().getInstanceOf(header ? "headerFileExtension" : "codeFileExtension");
		String listenerName = gen.g.name + "Visitor";
		return listenerName+extST.render();
	}

	@Override
	public String getBaseListenerFileName(boolean header) {
		assert gen.g.name != null;
		ST extST = getTemplates().getInstanceOf(header ? "headerFileExtension" : "codeFileExtension");
		String listenerName = gen.g.name + "BaseListener";
		return listenerName+extST.render();
	}

	@Override
	public String getBaseVisitorFileName(boolean header) {
		assert gen.g.name != null;
		ST extST = getTemplates().getInstanceOf(header ? "headerFileExtension" : "codeFileExtension");
		String listenerName = gen.g.name + "BaseVisitor";
		return listenerName+extST.render();
	}

	@Override
	protected boolean visibleGrammarSymbolCausesIssueInGeneratedCode(GrammarAST idNode) {
		return getBadWords().contains(idNode.getText());
	}

	@Override
	protected STGroup loadTemplates() {
		STGroup result = super.loadTemplates();
		result.registerRenderer(Integer.class, new NumberRenderer());
		result.registerRenderer(String.class, new GLibStringRenderer());
		result.setListener(new STErrorListener() {
			@Override
			public void compileTimeError(STMessage msg) {
				reportError(msg);
			}

			@Override
			public void runTimeError(STMessage msg) {
				reportError(msg);
			}

			@Override
			public void IOError(STMessage msg) {
				reportError(msg);
			}

			@Override
			public void internalError(STMessage msg) {
				reportError(msg);
			}

			private void reportError(STMessage msg) {
				getCodeGenerator().tool.errMgr.toolError(ErrorType.STRING_TEMPLATE_WARNING, msg.cause, msg.toString());
			}
		});

		return result;
	}

	protected static class GLibStringRenderer extends StringRenderer {
		public String trimChannel(String str) {
			String regex = "([a-zA-Z0-9_]+)+Channel$";
			String replacement = "$1";
			String output = str.replaceAll(regex, replacement);
			String[] parts = output.split("_");
			String camelCaseString = "";
			for (String part : parts){
				camelCaseString = camelCaseString + part.substring(0, 1).toUpperCase() + part.substring(1).toLowerCase();
			}
			return camelCaseString;
		}
		public String trimLexer(String str) {
			String regex = "([a-zA-Z0-9_]+)+Lexer$";
			String replacement = "$1";
			String output = str.replaceAll(regex, replacement);
			String[] parts = output.split("_");
			String camelCaseString = "";
			for (String part : parts){
				camelCaseString = camelCaseString + part.substring(0, 1).toUpperCase() + part.substring(1).toLowerCase();
			}
			return camelCaseString;
		}
		public String trimParser(String str) {
			String regex = "([a-zA-Z0-9_]+)+Parser$";
			String replacement = "$1";
			String output = str.replaceAll(regex, replacement);
			String[] parts = output.split("_");
			String camelCaseString = "";
			for (String part : parts){
				camelCaseString = camelCaseString + part.substring(0, 1).toUpperCase() + part.substring(1).toLowerCase();
			}
			return camelCaseString;
		}
		public String trimContext(String str) {
			String regex = "([a-zA-Z0-9_]+)+Context$";
			String replacement = "$1";
			return str.replaceAll(regex, replacement);
		}

                @Override
                public String toString(Object o, String formatString, Locale locale) {
                        if ("c-escape".equals(formatString)) {
                                // 5C is the hex code for the \ itself
                                return ((String)o).replace("\\u", "\\u005Cu");
                        } else if ("underscore".equals(formatString)) {
                            String regex = "([A-Z][a-z]+)";
                            String replacement = "_$1";
                            String out = ((String)o).replaceAll(regex, replacement);
                            if (out.charAt(0) == '_') {
                                out = out.substring(1);
                            }
                            return out.toLowerCase();
                        } else if ("underscore_upper".equals(formatString)) {
                            String regex = "([A-Z][a-z]+)";
                            String replacement = "_$1";
                            String out = ((String)o).replaceAll(regex, replacement);
                            if (out.charAt(0) == '_') {
                                out = out.substring(1);
                            }
                            return out.toUpperCase();
                        } else if ("underscore_lower".equals(formatString)) {
                            String regex = "([A-Z][a-z]+)";
                            String replacement = "_$1";
                            String out = ((String)o).replaceAll(regex, replacement);
                            if (out.charAt(0) == '_') {
                                out = out.substring(1);
                            }
                            return out.toLowerCase();
                        } else if ("camel".equals(formatString)) {
                            return ((String)o);
                        } else if ("hyphen".equals(formatString)) {// dashCase
                            String regex = "([A-Z][a-z]+)";
                            String replacement = "-$1";
                            String out = ((String)o).replaceAll(regex, replacement);
                            if (out.charAt(0) == '-') {
                                out = out.substring(1);
                            }
                            return out.toUpperCase();
                        } else if ("context".equals(formatString)) {
                            String regex = "([a-zA-Z0-9]+)+Context$";
                            String replacement = "Context_$1";
                            String output = ((String)o).replaceAll(regex, replacement);
                            String[] parts = output.split("_");
                            String camelCaseString = "";
                            for (String part : parts){
                                camelCaseString = camelCaseString + part.substring(0, 1).toUpperCase() + part.substring(1).toLowerCase();
                            }
                            return camelCaseString;
                        } else if ("channels".equals(formatString)) {
                            return trimChannel((String)o);
                        } else if ("channelsUpper".equals(formatString)) {
                            return trimChannel((String)o).toUpperCase();
                        } else if ("channelsCap".equals(formatString)) {
                            return trimChannel((String)o);
                        } else if ("channelsLower".equals(formatString)) {
                            return trimChannel((String)o).toLowerCase();
                        } else if ("lexer".equals(formatString)) {
                            return trimLexer((String)o);
                        } else if ("type".equals(formatString)) {
                            String regex = "([a-z])([A-Z]+)";
                            String replacement = "$1_$2";
                            String str = ((String)o).replaceAll(regex, replacement).toLowerCase();
                            return str + "_get_type()";
                        } else if ("parser".equals(formatString)) {
                            return trimParser((String)o);
                        } else if ("toSnack".equals(formatString)) {
                            String regex = "([a-z])([A-Z]+)";
                            String replacement = "$1_$2";
                            return ((String) o).replaceAll(regex, replacement).toLowerCase();
                        } else if ("toPascal".equals(formatString)) {
                            String output = ((String)o);
                            String[] parts = output.split("_");
                            String camelCaseString = "";
                            for (String part : parts){
                                camelCaseString = camelCaseString + part.substring(0, 1).toUpperCase() + part.substring(1);
                            }
                            return camelCaseString;
                        } else if ("trimContext".equals(formatString)) {
                            return trimContext((String) o);
                        } else if ("include_super_class".equals(formatString)) {
                            String v = (String) o;
                            if (v.equals("AntlrLexer")) {
                                return "";
                            } else {
                                return "#include \""+v+".h\"";
                            }
                        }




                        return super.toString(o, formatString, locale);
                }

        }
}
