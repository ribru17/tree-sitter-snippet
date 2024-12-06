/**
 * @file A parser for LSP snippet syntax
 * @author Riley Bruins <ribru17@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

/**
 * @param {string[]} extraEscapeChars
 */
function createEscapedText(extraEscapeChars) {
  return (/** @type {any} */ $) =>
    alias(
      prec.left(repeat1(
        choice(
          alias(
            new RegExp(`[^\\\\${extraEscapeChars.join('')}]+`),
            $.text_content,
          ),
          alias(
            choice('\\\\', ...extraEscapeChars.map((c) => `\\${c}`)),
            $.escape_sequence,
          ),
        ),
      )),
      $.text,
    );
}

module.exports = grammar({
  name: 'snippet',

  rules: {
    source: ($) => $._any,

    _any: ($) =>
      // See https://github.com/microsoft/language-server-protocol/pull/2032
      repeat1(choice($.tabstop, $.placeholder, $.choice, $.variable, $._text)),

    tabstop: ($) =>
      choice(
        seq('$', $.int),
        seq('${', $.int, '}'),
        seq('${', $.int, $.transform, '}'),
      ),
    placeholder: ($) => seq('${', $.int, ':', $._any, '}'),
    choice: ($) =>
      seq(
        '${',
        $.int,
        '|',
        $._choice_text,
        repeat(seq(',', $._choice_text)),
        seq('|', token.immediate('}')),
      ),
    variable: ($) =>
      choice(
        seq('$', $.identifier),
        seq('${', $.identifier, '}'),
        seq('${', $.identifier, ':', $._any, '}'),
        seq('${', $.identifier, $.transform, '}'),
      ),
    transform: ($) =>
      seq(
        token.immediate('/'),
        $.regex_pattern,
        token.immediate(prec(1, '/')),
        repeat(choice($.format, $._format_text)),
        token.immediate(prec(1, '/')),
        optional($.regex_flags),
      ),
    format: ($) =>
      choice(
        seq('$', $.int),
        seq('${', $.int, '}'),
        seq(
          '${',
          $.int,
          ':',
          // From https://github.com/microsoft/vscode/blob/7ec55aa30e27ce6eca38156f1302ff4cc0db0dbe/src/vs/editor/contrib/snippet/browser/snippet.md?plain=1#L120C74-L120C102
          choice(
            '/upcase',
            '/downcase',
            '/capitalize',
            '/camelcase',
            '/pascalcase',
          ),
          '}',
        ),
        seq('${', $.int, ':+', field('if', $._if_only), '}'),
        seq(
          '${',
          $.int,
          ':?',
          field('if', $._if),
          ':',
          field('else', $._else),
          '}',
        ),
        seq('${', $.int, ':-', field('else', $._else), '}'),
        seq('${', $.int, ':', field('else', $._else), '}'),
      ),

    // From tree-sitter-javascript
    regex_pattern: (_) =>
      repeat1(choice(
        seq(
          '[',
          repeat(choice(
            seq('\\', /./), // escaped character
            /[^\]\n\\]/, // any character besides ']' or '\n'
          )),
          ']',
        ), // square-bracket-delimited character class
        seq('\\', /./), // escaped character
        /[^/\\\[\n]/, // any character besides '[', '\', '/', '\n'
      )),
    regex_flags: (_) => /[a-z]+/,

    identifier: (_) => /[_a-zA-Z][_a-zA-Z0-9]*/,
    int: (_) => /[0-9]+/,

    _text: createEscapedText(['$', '}']),
    _choice_text: createEscapedText([',', '|']),
    _format_text: createEscapedText(['$', '/']),

    _if_only: ($) => $._text,
    _if: createEscapedText([':']),
    _else: ($) => $._text,
  },
});
