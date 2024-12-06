[
  "$"
  "${"
  "}"
] @punctuation.special

[
  ":"
  "|"
  ","
  ":+"
  ":-"
  ":?"
  "/"
] @punctuation.delimiter

[
  "/upcase"
  "/downcase"
  "/capitalize"
  "/camelcase"
  "/pascalcase"
] @function.call

(int) @number

(text_content) @string

(escape_sequence) @string.escape

(regex_flags) @character.special

(regex_pattern) @string.regexp

(identifier) @variable

((identifier) @variable.builtin
  (#any-of? @variable.builtin
    ; NOTE: Copy all variables from this list?
    ; https://github.com/microsoft/vscode/blob/7ec55aa30e27ce6eca38156f1302ff4cc0db0dbe/src/vs/editor/contrib/snippet/browser/snippet.md?plain=1#L22
    "TM_SELECTED_TEXT" "TM_CURRENT_LINE" "TM_CURRENT_WORD" "TM_LINE_INDEX" "TM_LINE_NUMBER"
    "TM_FILENAME" "TM_FILENAME_BASE" "TM_DIRECTORY" "TM_FILEPATH"))
