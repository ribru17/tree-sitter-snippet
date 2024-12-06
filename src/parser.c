#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 1
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_DOLLAR = 1,
  anon_sym_DOLLAR_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  anon_sym_PIPE = 5,
  anon_sym_COMMA = 6,
  anon_sym_RBRACE2 = 7,
  anon_sym_SLASH = 8,
  anon_sym_SLASH2 = 9,
  anon_sym_SLASHupcase = 10,
  anon_sym_SLASHdowncase = 11,
  anon_sym_SLASHcapitalize = 12,
  anon_sym_SLASHcamelcase = 13,
  anon_sym_SLASHpascalcase = 14,
  anon_sym_COLON_PLUS = 15,
  anon_sym_COLON_QMARK = 16,
  anon_sym_COLON_DASH = 17,
  anon_sym_LBRACK = 18,
  anon_sym_BSLASH = 19,
  aux_sym_regex_pattern_token1 = 20,
  aux_sym_regex_pattern_token2 = 21,
  anon_sym_RBRACK = 22,
  aux_sym_regex_pattern_token3 = 23,
  sym_regex_flags = 24,
  sym_identifier = 25,
  sym_int = 26,
  aux_sym__text_token1 = 27,
  anon_sym_BSLASH_BSLASH = 28,
  anon_sym_BSLASH_DOLLAR = 29,
  anon_sym_BSLASH_RBRACE = 30,
  aux_sym__choice_text_token1 = 31,
  anon_sym_BSLASH_COMMA = 32,
  anon_sym_BSLASH_PIPE = 33,
  aux_sym__format_text_token1 = 34,
  anon_sym_BSLASH_SLASH = 35,
  aux_sym__if_token1 = 36,
  anon_sym_BSLASH_COLON = 37,
  sym_source = 38,
  aux_sym__any = 39,
  sym_tabstop = 40,
  sym_placeholder = 41,
  sym_choice = 42,
  sym_variable = 43,
  sym_transform = 44,
  sym_format = 45,
  sym_regex_pattern = 46,
  sym__text = 47,
  sym__choice_text = 48,
  sym__format_text = 49,
  sym__if_only = 50,
  sym__if = 51,
  sym__else = 52,
  aux_sym_choice_repeat1 = 53,
  aux_sym_transform_repeat1 = 54,
  aux_sym_regex_pattern_repeat1 = 55,
  aux_sym_regex_pattern_repeat2 = 56,
  aux_sym__text_repeat1 = 57,
  aux_sym__choice_text_repeat1 = 58,
  aux_sym__format_text_repeat1 = 59,
  aux_sym__if_repeat1 = 60,
  alias_sym_text = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_PIPE] = "|",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE2] = "}",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH2] = "/",
  [anon_sym_SLASHupcase] = "/upcase",
  [anon_sym_SLASHdowncase] = "/downcase",
  [anon_sym_SLASHcapitalize] = "/capitalize",
  [anon_sym_SLASHcamelcase] = "/camelcase",
  [anon_sym_SLASHpascalcase] = "/pascalcase",
  [anon_sym_COLON_PLUS] = ":+",
  [anon_sym_COLON_QMARK] = ":\?",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_LBRACK] = "[",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_regex_pattern_token1] = "regex_pattern_token1",
  [aux_sym_regex_pattern_token2] = "regex_pattern_token2",
  [anon_sym_RBRACK] = "]",
  [aux_sym_regex_pattern_token3] = "regex_pattern_token3",
  [sym_regex_flags] = "regex_flags",
  [sym_identifier] = "identifier",
  [sym_int] = "int",
  [aux_sym__text_token1] = "text_content",
  [anon_sym_BSLASH_BSLASH] = "escape_sequence",
  [anon_sym_BSLASH_DOLLAR] = "escape_sequence",
  [anon_sym_BSLASH_RBRACE] = "escape_sequence",
  [aux_sym__choice_text_token1] = "text_content",
  [anon_sym_BSLASH_COMMA] = "escape_sequence",
  [anon_sym_BSLASH_PIPE] = "escape_sequence",
  [aux_sym__format_text_token1] = "text_content",
  [anon_sym_BSLASH_SLASH] = "escape_sequence",
  [aux_sym__if_token1] = "text_content",
  [anon_sym_BSLASH_COLON] = "escape_sequence",
  [sym_source] = "source",
  [aux_sym__any] = "_any",
  [sym_tabstop] = "tabstop",
  [sym_placeholder] = "placeholder",
  [sym_choice] = "choice",
  [sym_variable] = "variable",
  [sym_transform] = "transform",
  [sym_format] = "format",
  [sym_regex_pattern] = "regex_pattern",
  [sym__text] = "_text",
  [sym__choice_text] = "_choice_text",
  [sym__format_text] = "_format_text",
  [sym__if_only] = "_if_only",
  [sym__if] = "_if",
  [sym__else] = "_else",
  [aux_sym_choice_repeat1] = "choice_repeat1",
  [aux_sym_transform_repeat1] = "transform_repeat1",
  [aux_sym_regex_pattern_repeat1] = "regex_pattern_repeat1",
  [aux_sym_regex_pattern_repeat2] = "regex_pattern_repeat2",
  [aux_sym__text_repeat1] = "_text_repeat1",
  [aux_sym__choice_text_repeat1] = "_choice_text_repeat1",
  [aux_sym__format_text_repeat1] = "_format_text_repeat1",
  [aux_sym__if_repeat1] = "_if_repeat1",
  [alias_sym_text] = "text",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE2] = anon_sym_RBRACE,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH2] = anon_sym_SLASH,
  [anon_sym_SLASHupcase] = anon_sym_SLASHupcase,
  [anon_sym_SLASHdowncase] = anon_sym_SLASHdowncase,
  [anon_sym_SLASHcapitalize] = anon_sym_SLASHcapitalize,
  [anon_sym_SLASHcamelcase] = anon_sym_SLASHcamelcase,
  [anon_sym_SLASHpascalcase] = anon_sym_SLASHpascalcase,
  [anon_sym_COLON_PLUS] = anon_sym_COLON_PLUS,
  [anon_sym_COLON_QMARK] = anon_sym_COLON_QMARK,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_regex_pattern_token1] = aux_sym_regex_pattern_token1,
  [aux_sym_regex_pattern_token2] = aux_sym_regex_pattern_token2,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_regex_pattern_token3] = aux_sym_regex_pattern_token3,
  [sym_regex_flags] = sym_regex_flags,
  [sym_identifier] = sym_identifier,
  [sym_int] = sym_int,
  [aux_sym__text_token1] = aux_sym__text_token1,
  [anon_sym_BSLASH_BSLASH] = anon_sym_BSLASH_BSLASH,
  [anon_sym_BSLASH_DOLLAR] = anon_sym_BSLASH_BSLASH,
  [anon_sym_BSLASH_RBRACE] = anon_sym_BSLASH_BSLASH,
  [aux_sym__choice_text_token1] = aux_sym__text_token1,
  [anon_sym_BSLASH_COMMA] = anon_sym_BSLASH_BSLASH,
  [anon_sym_BSLASH_PIPE] = anon_sym_BSLASH_BSLASH,
  [aux_sym__format_text_token1] = aux_sym__text_token1,
  [anon_sym_BSLASH_SLASH] = anon_sym_BSLASH_BSLASH,
  [aux_sym__if_token1] = aux_sym__text_token1,
  [anon_sym_BSLASH_COLON] = anon_sym_BSLASH_BSLASH,
  [sym_source] = sym_source,
  [aux_sym__any] = aux_sym__any,
  [sym_tabstop] = sym_tabstop,
  [sym_placeholder] = sym_placeholder,
  [sym_choice] = sym_choice,
  [sym_variable] = sym_variable,
  [sym_transform] = sym_transform,
  [sym_format] = sym_format,
  [sym_regex_pattern] = sym_regex_pattern,
  [sym__text] = sym__text,
  [sym__choice_text] = sym__choice_text,
  [sym__format_text] = sym__format_text,
  [sym__if_only] = sym__if_only,
  [sym__if] = sym__if,
  [sym__else] = sym__else,
  [aux_sym_choice_repeat1] = aux_sym_choice_repeat1,
  [aux_sym_transform_repeat1] = aux_sym_transform_repeat1,
  [aux_sym_regex_pattern_repeat1] = aux_sym_regex_pattern_repeat1,
  [aux_sym_regex_pattern_repeat2] = aux_sym_regex_pattern_repeat2,
  [aux_sym__text_repeat1] = aux_sym__text_repeat1,
  [aux_sym__choice_text_repeat1] = aux_sym__choice_text_repeat1,
  [aux_sym__format_text_repeat1] = aux_sym__format_text_repeat1,
  [aux_sym__if_repeat1] = aux_sym__if_repeat1,
  [alias_sym_text] = alias_sym_text,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHupcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHdowncase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHcapitalize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHcamelcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASHpascalcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regex_pattern_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_pattern_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_regex_pattern_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_regex_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__text_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_DOLLAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_RBRACE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__choice_text_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_COMMA] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_PIPE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__format_text_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_SLASH] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__if_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH_COLON] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__any] = {
    .visible = false,
    .named = false,
  },
  [sym_tabstop] = {
    .visible = true,
    .named = true,
  },
  [sym_placeholder] = {
    .visible = true,
    .named = true,
  },
  [sym_choice] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_transform] = {
    .visible = true,
    .named = true,
  },
  [sym_format] = {
    .visible = true,
    .named = true,
  },
  [sym_regex_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__choice_text] = {
    .visible = false,
    .named = true,
  },
  [sym__format_text] = {
    .visible = false,
    .named = true,
  },
  [sym__if_only] = {
    .visible = false,
    .named = true,
  },
  [sym__if] = {
    .visible = false,
    .named = true,
  },
  [sym__else] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_choice_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transform_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_regex_pattern_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__choice_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__format_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__if_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_text] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_else = 1,
  field_if = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_else] = "else",
  [field_if] = "if",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_else, 3},
  [1] =
    {field_if, 3},
  [2] =
    {field_else, 5},
    {field_if, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_text,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__text_repeat1, 2,
    aux_sym__text_repeat1,
    alias_sym_text,
  aux_sym__choice_text_repeat1, 2,
    aux_sym__choice_text_repeat1,
    alias_sym_text,
  aux_sym__format_text_repeat1, 2,
    aux_sym__format_text_repeat1,
    alias_sym_text,
  aux_sym__if_repeat1, 2,
    aux_sym__if_repeat1,
    alias_sym_text,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '$', 19,
        ',', 25,
        '/', 28,
        ':', 23,
        '[', 37,
        '\\', 38,
        ']', 43,
        '|', 24,
        '}', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(38);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == ']') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '\\') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0) ADVANCE(98);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '\\') ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead == '}') ADVANCE(92);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(25);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '|') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(95);
      if (lookahead == '\\') ADVANCE(90);
      if (lookahead == '|') ADVANCE(96);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '}') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '$') ADVANCE(89);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(27);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '}') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '\\') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '|') ADVANCE(24);
      if (lookahead == '}') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(102);
      if (lookahead == '\\') ADVANCE(90);
      END_STATE();
    case 16:
      if (eof) ADVANCE(18);
      ADVANCE_MAP(
        '$', 19,
        ',', 25,
        ':', 23,
        '[', 37,
        '\\', 38,
        ']', 43,
        '|', 24,
        '}', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '$') ADVANCE(19);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '}') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '?') ADVANCE(35);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASHupcase);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASHdowncase);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASHcapitalize);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASHcamelcase);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASHpascalcase);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_regex_pattern_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_regex_pattern_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_regex_pattern_token2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_regex_pattern_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_regex_pattern_token3);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_regex_pattern_token3);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_regex_flags);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_regex_flags);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(78);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'm') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'w') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'z') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__choice_text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__choice_text_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_BSLASH_COMMA);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_BSLASH_PIPE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__format_text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__format_text_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_BSLASH_SLASH);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__if_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__if_token1);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BSLASH_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 17},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 13},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 12},
  [71] = {.lex_state = 12},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 10},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 4},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 12},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 10},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE2] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_SLASH2] = ACTIONS(1),
    [anon_sym_COLON_PLUS] = ACTIONS(1),
    [anon_sym_COLON_QMARK] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_regex_flags] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(67),
    [aux_sym__any] = STATE(3),
    [sym_tabstop] = STATE(3),
    [sym_placeholder] = STATE(3),
    [sym_choice] = STATE(3),
    [sym_variable] = STATE(3),
    [sym__text] = STATE(3),
    [aux_sym__text_repeat1] = STATE(13),
    [anon_sym_DOLLAR] = ACTIONS(3),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(5),
    [aux_sym__text_token1] = ACTIONS(7),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(9),
    [anon_sym_BSLASH_DOLLAR] = ACTIONS(9),
    [anon_sym_BSLASH_RBRACE] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_DOLLAR,
    ACTIONS(16), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      aux_sym__text_token1,
    STATE(13), 1,
      aux_sym__text_repeat1,
    ACTIONS(24), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
    STATE(2), 6,
      aux_sym__any,
      sym_tabstop,
      sym_placeholder,
      sym_choice,
      sym_variable,
      sym__text,
  [32] = 7,
    ACTIONS(3), 1,
      anon_sym_DOLLAR,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      aux_sym__text_token1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym__text_repeat1,
    ACTIONS(9), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
    STATE(2), 6,
      aux_sym__any,
      sym_tabstop,
      sym_placeholder,
      sym_choice,
      sym_variable,
      sym__text,
  [61] = 7,
    ACTIONS(3), 1,
      anon_sym_DOLLAR,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      aux_sym__text_token1,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__text_repeat1,
    ACTIONS(9), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
    STATE(2), 6,
      aux_sym__any,
      sym_tabstop,
      sym_placeholder,
      sym_choice,
      sym_variable,
      sym__text,
  [90] = 7,
    ACTIONS(3), 1,
      anon_sym_DOLLAR,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      aux_sym__text_token1,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      aux_sym__text_repeat1,
    ACTIONS(9), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
    STATE(2), 6,
      aux_sym__any,
      sym_tabstop,
      sym_placeholder,
      sym_choice,
      sym_variable,
      sym__text,
  [119] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      aux_sym__text_token1,
    STATE(13), 1,
      aux_sym__text_repeat1,
    ACTIONS(9), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
    STATE(4), 6,
      aux_sym__any,
      sym_tabstop,
      sym_placeholder,
      sym_choice,
      sym_variable,
      sym__text,
  [145] = 6,
    ACTIONS(3), 1,
      anon_sym_DOLLAR,
    ACTIONS(5), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(7), 1,
      aux_sym__text_token1,
    STATE(13), 1,
      aux_sym__text_repeat1,
    ACTIONS(9), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
    STATE(5), 6,
      aux_sym__any,
      sym_tabstop,
      sym_placeholder,
      sym_choice,
      sym_variable,
      sym__text,
  [171] = 4,
    STATE(13), 1,
      aux_sym__text_repeat1,
    STATE(71), 2,
      sym__text,
      sym__else,
    ACTIONS(9), 4,
      aux_sym__text_token1,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
    ACTIONS(33), 5,
      anon_sym_SLASHupcase,
      anon_sym_SLASHdowncase,
      anon_sym_SLASHcapitalize,
      anon_sym_SLASHcamelcase,
      anon_sym_SLASHpascalcase,
  [192] = 7,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(38), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(41), 1,
      anon_sym_SLASH2,
    ACTIONS(46), 1,
      aux_sym__format_text_token1,
    STATE(21), 1,
      aux_sym__format_text_repeat1,
    ACTIONS(43), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
    STATE(9), 3,
      sym_format,
      sym__format_text,
      aux_sym_transform_repeat1,
  [218] = 7,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(53), 1,
      anon_sym_SLASH2,
    ACTIONS(57), 1,
      aux_sym__format_text_token1,
    STATE(21), 1,
      aux_sym__format_text_repeat1,
    ACTIONS(55), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
    STATE(9), 3,
      sym_format,
      sym__format_text,
      aux_sym_transform_repeat1,
  [244] = 7,
    ACTIONS(49), 1,
      anon_sym_DOLLAR,
    ACTIONS(51), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(57), 1,
      aux_sym__format_text_token1,
    ACTIONS(59), 1,
      anon_sym_SLASH2,
    STATE(21), 1,
      aux_sym__format_text_repeat1,
    ACTIONS(55), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
    STATE(10), 3,
      sym_format,
      sym__format_text,
      aux_sym_transform_repeat1,
  [270] = 5,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      aux_sym__text_token1,
    STATE(12), 1,
      aux_sym__text_repeat1,
    ACTIONS(63), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(68), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [290] = 5,
    ACTIONS(7), 1,
      aux_sym__text_token1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      aux_sym__text_repeat1,
    ACTIONS(9), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
    ACTIONS(73), 3,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
  [310] = 2,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(77), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [323] = 2,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(81), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [336] = 2,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(85), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [349] = 2,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(89), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [362] = 2,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(93), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [375] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(97), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [388] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(101), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [401] = 5,
    ACTIONS(57), 1,
      aux_sym__format_text_token1,
    ACTIONS(105), 1,
      anon_sym_SLASH2,
    STATE(24), 1,
      aux_sym__format_text_repeat1,
    ACTIONS(103), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(55), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [420] = 2,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(109), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [433] = 2,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(113), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [446] = 5,
    ACTIONS(117), 1,
      anon_sym_SLASH2,
    ACTIONS(122), 1,
      aux_sym__format_text_token1,
    STATE(24), 1,
      aux_sym__format_text_repeat1,
    ACTIONS(115), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(119), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [465] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(127), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [478] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(131), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [491] = 2,
    ACTIONS(135), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(133), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [503] = 2,
    ACTIONS(139), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(137), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [515] = 4,
    ACTIONS(146), 1,
      aux_sym__choice_text_token1,
    STATE(29), 1,
      aux_sym__choice_text_repeat1,
    ACTIONS(141), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    ACTIONS(143), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_PIPE,
  [531] = 2,
    ACTIONS(151), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(149), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [543] = 2,
    ACTIONS(155), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(153), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [555] = 4,
    ACTIONS(161), 1,
      aux_sym__choice_text_token1,
    STATE(29), 1,
      aux_sym__choice_text_repeat1,
    ACTIONS(157), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
    ACTIONS(159), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_PIPE,
  [571] = 2,
    ACTIONS(165), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(163), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [583] = 4,
    ACTIONS(7), 1,
      aux_sym__text_token1,
    STATE(13), 1,
      aux_sym__text_repeat1,
    STATE(72), 2,
      sym__text,
      sym__if_only,
    ACTIONS(9), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [599] = 4,
    ACTIONS(7), 1,
      aux_sym__text_token1,
    STATE(13), 1,
      aux_sym__text_repeat1,
    STATE(71), 2,
      sym__text,
      sym__else,
    ACTIONS(9), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [615] = 2,
    ACTIONS(169), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(167), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [627] = 2,
    ACTIONS(173), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(171), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [639] = 4,
    ACTIONS(7), 1,
      aux_sym__text_token1,
    STATE(13), 1,
      aux_sym__text_repeat1,
    STATE(81), 2,
      sym__text,
      sym__else,
    ACTIONS(9), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [655] = 2,
    ACTIONS(177), 1,
      aux_sym__choice_text_token1,
    ACTIONS(175), 5,
      anon_sym_PIPE,
      anon_sym_COMMA,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_PIPE,
  [666] = 4,
    ACTIONS(161), 1,
      aux_sym__choice_text_token1,
    STATE(32), 1,
      aux_sym__choice_text_repeat1,
    STATE(58), 1,
      sym__choice_text,
    ACTIONS(159), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_PIPE,
  [681] = 4,
    ACTIONS(161), 1,
      aux_sym__choice_text_token1,
    STATE(32), 1,
      aux_sym__choice_text_repeat1,
    STATE(61), 1,
      sym__choice_text,
    ACTIONS(159), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_PIPE,
  [696] = 5,
    ACTIONS(179), 1,
      anon_sym_SLASH2,
    ACTIONS(181), 1,
      anon_sym_LBRACK,
    ACTIONS(184), 1,
      anon_sym_BSLASH,
    ACTIONS(187), 1,
      aux_sym_regex_pattern_token3,
    STATE(42), 1,
      aux_sym_regex_pattern_repeat2,
  [712] = 5,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 1,
      anon_sym_COLON,
    ACTIONS(194), 1,
      anon_sym_COLON_PLUS,
    ACTIONS(196), 1,
      anon_sym_COLON_QMARK,
    ACTIONS(198), 1,
      anon_sym_COLON_DASH,
  [728] = 5,
    ACTIONS(200), 1,
      anon_sym_RBRACE,
    ACTIONS(202), 1,
      anon_sym_COLON,
    ACTIONS(204), 1,
      anon_sym_PIPE,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    STATE(79), 1,
      sym_transform,
  [744] = 4,
    ACTIONS(208), 1,
      anon_sym_COLON,
    ACTIONS(212), 1,
      aux_sym__if_token1,
    STATE(49), 1,
      aux_sym__if_repeat1,
    ACTIONS(210), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COLON,
  [758] = 4,
    ACTIONS(212), 1,
      aux_sym__if_token1,
    STATE(45), 1,
      aux_sym__if_repeat1,
    STATE(66), 1,
      sym__if,
    ACTIONS(210), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COLON,
  [772] = 5,
    ACTIONS(214), 1,
      anon_sym_SLASH2,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_BSLASH,
    ACTIONS(220), 1,
      aux_sym_regex_pattern_token3,
    STATE(42), 1,
      aux_sym_regex_pattern_repeat2,
  [788] = 5,
    ACTIONS(216), 1,
      anon_sym_LBRACK,
    ACTIONS(218), 1,
      anon_sym_BSLASH,
    ACTIONS(222), 1,
      aux_sym_regex_pattern_token3,
    STATE(47), 1,
      aux_sym_regex_pattern_repeat2,
    STATE(78), 1,
      sym_regex_pattern,
  [804] = 4,
    ACTIONS(224), 1,
      anon_sym_COLON,
    ACTIONS(229), 1,
      aux_sym__if_token1,
    STATE(49), 1,
      aux_sym__if_repeat1,
    ACTIONS(226), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COLON,
  [818] = 4,
    ACTIONS(232), 1,
      anon_sym_BSLASH,
    ACTIONS(234), 1,
      aux_sym_regex_pattern_token2,
    ACTIONS(236), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_regex_pattern_repeat1,
  [831] = 4,
    ACTIONS(232), 1,
      anon_sym_BSLASH,
    ACTIONS(238), 1,
      aux_sym_regex_pattern_token2,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    STATE(50), 1,
      aux_sym_regex_pattern_repeat1,
  [844] = 2,
    ACTIONS(242), 2,
      anon_sym_SLASH2,
      aux_sym_regex_pattern_token3,
    ACTIONS(244), 2,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
  [853] = 2,
    ACTIONS(179), 2,
      anon_sym_SLASH2,
      aux_sym_regex_pattern_token3,
    ACTIONS(246), 2,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
  [862] = 2,
    ACTIONS(250), 1,
      aux_sym__if_token1,
    ACTIONS(248), 3,
      anon_sym_COLON,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COLON,
  [871] = 4,
    ACTIONS(252), 1,
      anon_sym_BSLASH,
    ACTIONS(255), 1,
      aux_sym_regex_pattern_token2,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_regex_pattern_repeat1,
  [884] = 4,
    ACTIONS(206), 1,
      anon_sym_SLASH,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    ACTIONS(262), 1,
      anon_sym_COLON,
    STATE(80), 1,
      sym_transform,
  [897] = 3,
    ACTIONS(264), 1,
      anon_sym_PIPE,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_choice_repeat1,
  [907] = 3,
    ACTIONS(269), 1,
      anon_sym_PIPE,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    STATE(59), 1,
      aux_sym_choice_repeat1,
  [917] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_PIPE,
    STATE(57), 1,
      aux_sym_choice_repeat1,
  [927] = 2,
    ACTIONS(275), 1,
      aux_sym_regex_pattern_token2,
    ACTIONS(258), 2,
      anon_sym_BSLASH,
      anon_sym_RBRACK,
  [935] = 1,
    ACTIONS(264), 2,
      anon_sym_PIPE,
      anon_sym_COMMA,
  [940] = 2,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 1,
      sym_regex_flags,
  [947] = 2,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 1,
      sym_int,
  [954] = 2,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      sym_regex_flags,
  [961] = 2,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_int,
  [968] = 1,
    ACTIONS(293), 1,
      anon_sym_COLON,
  [972] = 1,
    ACTIONS(295), 1,
      ts_builtin_sym_end,
  [976] = 1,
    ACTIONS(297), 1,
      sym_int,
  [980] = 1,
    ACTIONS(299), 1,
      anon_sym_RBRACE,
  [984] = 1,
    ACTIONS(301), 1,
      anon_sym_RBRACE,
  [988] = 1,
    ACTIONS(303), 1,
      anon_sym_RBRACE,
  [992] = 1,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
  [996] = 1,
    ACTIONS(307), 1,
      sym_int,
  [1000] = 1,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
  [1004] = 1,
    ACTIONS(309), 1,
      anon_sym_RBRACE2,
  [1008] = 1,
    ACTIONS(311), 1,
      aux_sym_regex_pattern_token1,
  [1012] = 1,
    ACTIONS(313), 1,
      aux_sym_regex_pattern_token1,
  [1016] = 1,
    ACTIONS(315), 1,
      anon_sym_SLASH2,
  [1020] = 1,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
  [1024] = 1,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
  [1028] = 1,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
  [1032] = 1,
    ACTIONS(323), 1,
      anon_sym_RBRACE2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 171,
  [SMALL_STATE(9)] = 192,
  [SMALL_STATE(10)] = 218,
  [SMALL_STATE(11)] = 244,
  [SMALL_STATE(12)] = 270,
  [SMALL_STATE(13)] = 290,
  [SMALL_STATE(14)] = 310,
  [SMALL_STATE(15)] = 323,
  [SMALL_STATE(16)] = 336,
  [SMALL_STATE(17)] = 349,
  [SMALL_STATE(18)] = 362,
  [SMALL_STATE(19)] = 375,
  [SMALL_STATE(20)] = 388,
  [SMALL_STATE(21)] = 401,
  [SMALL_STATE(22)] = 420,
  [SMALL_STATE(23)] = 433,
  [SMALL_STATE(24)] = 446,
  [SMALL_STATE(25)] = 465,
  [SMALL_STATE(26)] = 478,
  [SMALL_STATE(27)] = 491,
  [SMALL_STATE(28)] = 503,
  [SMALL_STATE(29)] = 515,
  [SMALL_STATE(30)] = 531,
  [SMALL_STATE(31)] = 543,
  [SMALL_STATE(32)] = 555,
  [SMALL_STATE(33)] = 571,
  [SMALL_STATE(34)] = 583,
  [SMALL_STATE(35)] = 599,
  [SMALL_STATE(36)] = 615,
  [SMALL_STATE(37)] = 627,
  [SMALL_STATE(38)] = 639,
  [SMALL_STATE(39)] = 655,
  [SMALL_STATE(40)] = 666,
  [SMALL_STATE(41)] = 681,
  [SMALL_STATE(42)] = 696,
  [SMALL_STATE(43)] = 712,
  [SMALL_STATE(44)] = 728,
  [SMALL_STATE(45)] = 744,
  [SMALL_STATE(46)] = 758,
  [SMALL_STATE(47)] = 772,
  [SMALL_STATE(48)] = 788,
  [SMALL_STATE(49)] = 804,
  [SMALL_STATE(50)] = 818,
  [SMALL_STATE(51)] = 831,
  [SMALL_STATE(52)] = 844,
  [SMALL_STATE(53)] = 853,
  [SMALL_STATE(54)] = 862,
  [SMALL_STATE(55)] = 871,
  [SMALL_STATE(56)] = 884,
  [SMALL_STATE(57)] = 897,
  [SMALL_STATE(58)] = 907,
  [SMALL_STATE(59)] = 917,
  [SMALL_STATE(60)] = 927,
  [SMALL_STATE(61)] = 935,
  [SMALL_STATE(62)] = 940,
  [SMALL_STATE(63)] = 947,
  [SMALL_STATE(64)] = 954,
  [SMALL_STATE(65)] = 961,
  [SMALL_STATE(66)] = 968,
  [SMALL_STATE(67)] = 972,
  [SMALL_STATE(68)] = 976,
  [SMALL_STATE(69)] = 980,
  [SMALL_STATE(70)] = 984,
  [SMALL_STATE(71)] = 988,
  [SMALL_STATE(72)] = 992,
  [SMALL_STATE(73)] = 996,
  [SMALL_STATE(74)] = 1000,
  [SMALL_STATE(75)] = 1004,
  [SMALL_STATE(76)] = 1008,
  [SMALL_STATE(77)] = 1012,
  [SMALL_STATE(78)] = 1016,
  [SMALL_STATE(79)] = 1020,
  [SMALL_STATE(80)] = 1024,
  [SMALL_STATE(81)] = 1028,
  [SMALL_STATE(82)] = 1032,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__any, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__any, 2, 0, 0), SHIFT_REPEAT(63),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__any, 2, 0, 0), SHIFT_REPEAT(65),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__any, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__any, 2, 0, 0), SHIFT_REPEAT(15),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__any, 2, 0, 0), SHIFT_REPEAT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transform_repeat1, 2, 0, 0), SHIFT_REPEAT(68),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transform_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transform_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transform_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transform_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2, 0, 0),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text, 1, 0, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__text, 1, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__text_repeat1, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__text_repeat1, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tabstop, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tabstop, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tabstop, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tabstop, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 5, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 5, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__format_text, 1, 0, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__format_text, 1, 0, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 6, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice, 6, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tabstop, 4, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tabstop, 4, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__format_text_repeat1, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__format_text_repeat1, 2, 0, 0),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__format_text_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__format_text_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 7, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice, 7, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 5, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 7, 0, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 7, 0, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__choice_text_repeat1, 2, 0, 0),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__choice_text_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_text_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__format_text_repeat1, 1, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__format_text_repeat1, 1, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__choice_text, 1, 0, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 5, 0, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 5, 0, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 5, 0, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 5, 0, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__choice_text_repeat1, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_text_repeat1, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_regex_pattern_repeat2, 2, 0, 0),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_pattern_repeat2, 2, 0, 0), SHIFT_REPEAT(51),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_pattern_repeat2, 2, 0, 0), SHIFT_REPEAT(77),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_regex_pattern_repeat2, 2, 0, 0), SHIFT_REPEAT(42),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if, 1, 0, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_pattern, 1, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_repeat1, 2, 0, 0),
  [226] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__if_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_regex_pattern_repeat2, 3, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_pattern_repeat2, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_pattern_repeat2, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_repeat1, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_repeat1, 1, 0, 0),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_regex_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_pattern_repeat1, 2, 0, 0),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2, 0, 0),
  [266] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_regex_pattern_repeat1, 2, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 4, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 5, 0, 0),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [295] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 6, 0, 0),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_snippet(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
