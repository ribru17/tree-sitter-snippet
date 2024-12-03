#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
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
  anon_sym_PIPE_RBRACE = 7,
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
  [anon_sym_PIPE_RBRACE] = "|}",
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
  [anon_sym_PIPE_RBRACE] = anon_sym_PIPE_RBRACE,
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
  [anon_sym_PIPE_RBRACE] = {
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
  [42] = 13,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '$', 20,
        ',', 26,
        '/', 29,
        ':', 24,
        '[', 38,
        '\\', 39,
        ']', 44,
        '|', 25,
        '}', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '[') ADVANCE(38);
      if (lookahead == '\\') ADVANCE(39);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '\\') ADVANCE(39);
      if (lookahead == ']') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == '\\') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 6:
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(91);
      END_STATE();
    case 7:
      if (lookahead == '$') ADVANCE(92);
      if (lookahead == '\\') ADVANCE(91);
      if (lookahead == '}') ADVANCE(93);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead == '|') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0) ADVANCE(95);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(26);
      if (lookahead == '|') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '\\') ADVANCE(91);
      if (lookahead == '|') ADVANCE(97);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '\\') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '|') ADVANCE(25);
      if (lookahead == '}') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == '}') ADVANCE(27);
      END_STATE();
    case 17:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '$', 20,
        ',', 26,
        ':', 24,
        '[', 38,
        '\\', 39,
        ']', 44,
        '|', 25,
        '}', 22,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 18:
      if (eof) ADVANCE(19);
      if (lookahead == '$') ADVANCE(20);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '}') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '+') ADVANCE(35);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '?') ADVANCE(36);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PIPE_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH2);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_SLASHupcase);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_SLASHdowncase);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SLASHcapitalize);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SLASHcamelcase);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SLASHpascalcase);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON_PLUS);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON_QMARK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_regex_pattern_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_regex_pattern_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_regex_pattern_token2);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_regex_pattern_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\\' &&
          lookahead != ']') ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_regex_pattern_token3);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_regex_pattern_token3);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '/' &&
          lookahead != '[' &&
          lookahead != '\\') ADVANCE(45);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_regex_flags);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_regex_flags);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == '/') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'a') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(52);
      if (lookahead == 'd') ADVANCE(79);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'u') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'c') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'i') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'p') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'n') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'p') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 's') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'w') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead == 'z') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym__text_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '\\' &&
          lookahead != '}') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_BSLASH_DOLLAR);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_BSLASH_RBRACE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__choice_text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__choice_text_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_BSLASH_COMMA);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_BSLASH_PIPE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__format_text_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__format_text_token1);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_BSLASH_SLASH);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__if_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__if_token1);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_BSLASH_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 18},
  [3] = {.lex_state = 18},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 13},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 13},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 13},
  [58] = {.lex_state = 9},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 9},
  [61] = {.lex_state = 9},
  [62] = {.lex_state = 9},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 9},
  [66] = {.lex_state = 9},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 12},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 4},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
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
    [sym_source] = STATE(71),
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
    STATE(42), 1,
      aux_sym__text_repeat1,
    STATE(69), 2,
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
    ACTIONS(37), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(39), 1,
      anon_sym_SLASH2,
    ACTIONS(43), 1,
      aux_sym__format_text_token1,
    STATE(24), 1,
      aux_sym__format_text_repeat1,
    ACTIONS(41), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
    STATE(11), 3,
      sym_format,
      sym__format_text,
      aux_sym_transform_repeat1,
  [218] = 7,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(43), 1,
      aux_sym__format_text_token1,
    ACTIONS(45), 1,
      anon_sym_SLASH2,
    STATE(24), 1,
      aux_sym__format_text_repeat1,
    ACTIONS(41), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
    STATE(9), 3,
      sym_format,
      sym__format_text,
      aux_sym_transform_repeat1,
  [244] = 7,
    ACTIONS(47), 1,
      anon_sym_DOLLAR,
    ACTIONS(50), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(53), 1,
      anon_sym_SLASH2,
    ACTIONS(58), 1,
      aux_sym__format_text_token1,
    STATE(24), 1,
      aux_sym__format_text_repeat1,
    ACTIONS(55), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
    STATE(11), 3,
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
  [290] = 3,
    STATE(12), 1,
      aux_sym__text_repeat1,
    ACTIONS(71), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(73), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [306] = 2,
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
  [319] = 2,
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
  [332] = 2,
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
  [345] = 2,
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
  [358] = 2,
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
  [371] = 2,
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
  [384] = 2,
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
  [397] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      aux_sym__text_token1,
    ACTIONS(105), 6,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [410] = 2,
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
  [423] = 2,
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
  [436] = 3,
    STATE(25), 1,
      aux_sym__format_text_repeat1,
    ACTIONS(117), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(115), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [451] = 5,
    ACTIONS(121), 1,
      anon_sym_SLASH2,
    ACTIONS(126), 1,
      aux_sym__format_text_token1,
    STATE(25), 1,
      aux_sym__format_text_repeat1,
    ACTIONS(119), 2,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(123), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [470] = 2,
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
  [483] = 2,
    ACTIONS(135), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(133), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [495] = 2,
    ACTIONS(139), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(137), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [507] = 4,
    ACTIONS(145), 1,
      aux_sym__choice_text_token1,
    STATE(30), 1,
      aux_sym__choice_text_repeat1,
    ACTIONS(141), 2,
      anon_sym_COMMA,
      anon_sym_PIPE_RBRACE,
    ACTIONS(143), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_PIPE,
  [523] = 4,
    ACTIONS(152), 1,
      aux_sym__choice_text_token1,
    STATE(30), 1,
      aux_sym__choice_text_repeat1,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_PIPE_RBRACE,
    ACTIONS(149), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_PIPE,
  [539] = 2,
    ACTIONS(157), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(155), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [551] = 2,
    ACTIONS(161), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(159), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [563] = 2,
    ACTIONS(165), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(163), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [575] = 4,
    ACTIONS(7), 1,
      aux_sym__text_token1,
    STATE(42), 1,
      aux_sym__text_repeat1,
    STATE(67), 2,
      sym__text,
      sym__if_only,
    ACTIONS(9), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [591] = 4,
    ACTIONS(7), 1,
      aux_sym__text_token1,
    STATE(42), 1,
      aux_sym__text_repeat1,
    STATE(69), 2,
      sym__text,
      sym__else,
    ACTIONS(9), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [607] = 2,
    ACTIONS(169), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(167), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [619] = 2,
    ACTIONS(173), 2,
      anon_sym_SLASH2,
      aux_sym__format_text_token1,
    ACTIONS(171), 5,
      anon_sym_DOLLAR,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_SLASH,
  [631] = 4,
    ACTIONS(7), 1,
      aux_sym__text_token1,
    STATE(42), 1,
      aux_sym__text_repeat1,
    STATE(79), 2,
      sym__text,
      sym__else,
    ACTIONS(9), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [647] = 2,
    ACTIONS(177), 1,
      aux_sym__choice_text_token1,
    ACTIONS(175), 5,
      anon_sym_COMMA,
      anon_sym_PIPE_RBRACE,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_PIPE,
  [658] = 4,
    ACTIONS(145), 1,
      aux_sym__choice_text_token1,
    STATE(29), 1,
      aux_sym__choice_text_repeat1,
    STATE(62), 1,
      sym__choice_text,
    ACTIONS(143), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_PIPE,
  [673] = 4,
    ACTIONS(145), 1,
      aux_sym__choice_text_token1,
    STATE(29), 1,
      aux_sym__choice_text_repeat1,
    STATE(60), 1,
      sym__choice_text,
    ACTIONS(143), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COMMA,
      anon_sym_BSLASH_PIPE,
  [688] = 4,
    ACTIONS(7), 1,
      aux_sym__text_token1,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(12), 1,
      aux_sym__text_repeat1,
    ACTIONS(9), 3,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_DOLLAR,
      anon_sym_BSLASH_RBRACE,
  [703] = 5,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      anon_sym_COLON,
    ACTIONS(183), 1,
      anon_sym_PIPE,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    STATE(80), 1,
      sym_transform,
  [719] = 5,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      anon_sym_COLON,
    ACTIONS(191), 1,
      anon_sym_COLON_PLUS,
    ACTIONS(193), 1,
      anon_sym_COLON_QMARK,
    ACTIONS(195), 1,
      anon_sym_COLON_DASH,
  [735] = 5,
    ACTIONS(197), 1,
      anon_sym_SLASH2,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      anon_sym_BSLASH,
    ACTIONS(203), 1,
      aux_sym_regex_pattern_token3,
    STATE(46), 1,
      aux_sym_regex_pattern_repeat2,
  [751] = 5,
    ACTIONS(205), 1,
      anon_sym_SLASH2,
    ACTIONS(207), 1,
      anon_sym_LBRACK,
    ACTIONS(210), 1,
      anon_sym_BSLASH,
    ACTIONS(213), 1,
      aux_sym_regex_pattern_token3,
    STATE(46), 1,
      aux_sym_regex_pattern_repeat2,
  [767] = 4,
    ACTIONS(218), 1,
      aux_sym__if_token1,
    STATE(50), 1,
      aux_sym__if_repeat1,
    STATE(72), 1,
      sym__if,
    ACTIONS(216), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COLON,
  [781] = 4,
    ACTIONS(220), 1,
      anon_sym_COLON,
    ACTIONS(225), 1,
      aux_sym__if_token1,
    STATE(48), 1,
      aux_sym__if_repeat1,
    ACTIONS(222), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COLON,
  [795] = 5,
    ACTIONS(199), 1,
      anon_sym_LBRACK,
    ACTIONS(201), 1,
      anon_sym_BSLASH,
    ACTIONS(228), 1,
      aux_sym_regex_pattern_token3,
    STATE(45), 1,
      aux_sym_regex_pattern_repeat2,
    STATE(74), 1,
      sym_regex_pattern,
  [811] = 4,
    ACTIONS(218), 1,
      aux_sym__if_token1,
    ACTIONS(230), 1,
      anon_sym_COLON,
    STATE(48), 1,
      aux_sym__if_repeat1,
    ACTIONS(216), 2,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COLON,
  [825] = 2,
    ACTIONS(232), 2,
      anon_sym_SLASH2,
      aux_sym_regex_pattern_token3,
    ACTIONS(234), 2,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
  [834] = 4,
    ACTIONS(236), 1,
      anon_sym_BSLASH,
    ACTIONS(239), 1,
      aux_sym_regex_pattern_token2,
    ACTIONS(242), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_regex_pattern_repeat1,
  [847] = 4,
    ACTIONS(244), 1,
      anon_sym_BSLASH,
    ACTIONS(246), 1,
      aux_sym_regex_pattern_token2,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    STATE(55), 1,
      aux_sym_regex_pattern_repeat1,
  [860] = 2,
    ACTIONS(205), 2,
      anon_sym_SLASH2,
      aux_sym_regex_pattern_token3,
    ACTIONS(250), 2,
      anon_sym_LBRACK,
      anon_sym_BSLASH,
  [869] = 4,
    ACTIONS(244), 1,
      anon_sym_BSLASH,
    ACTIONS(252), 1,
      aux_sym_regex_pattern_token2,
    ACTIONS(254), 1,
      anon_sym_RBRACK,
    STATE(52), 1,
      aux_sym_regex_pattern_repeat1,
  [882] = 4,
    ACTIONS(185), 1,
      anon_sym_SLASH,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(258), 1,
      anon_sym_COLON,
    STATE(77), 1,
      sym_transform,
  [895] = 2,
    ACTIONS(262), 1,
      aux_sym__if_token1,
    ACTIONS(260), 3,
      anon_sym_COLON,
      anon_sym_BSLASH_BSLASH,
      anon_sym_BSLASH_COLON,
  [904] = 3,
    ACTIONS(264), 1,
      anon_sym_COMMA,
    ACTIONS(267), 1,
      anon_sym_PIPE_RBRACE,
    STATE(58), 1,
      aux_sym_choice_repeat1,
  [914] = 2,
    ACTIONS(269), 1,
      aux_sym_regex_pattern_token2,
    ACTIONS(242), 2,
      anon_sym_BSLASH,
      anon_sym_RBRACK,
  [922] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(273), 1,
      anon_sym_PIPE_RBRACE,
    STATE(61), 1,
      aux_sym_choice_repeat1,
  [932] = 3,
    ACTIONS(271), 1,
      anon_sym_COMMA,
    ACTIONS(275), 1,
      anon_sym_PIPE_RBRACE,
    STATE(58), 1,
      aux_sym_choice_repeat1,
  [942] = 1,
    ACTIONS(267), 2,
      anon_sym_COMMA,
      anon_sym_PIPE_RBRACE,
  [947] = 2,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 1,
      sym_regex_flags,
  [954] = 2,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(283), 1,
      sym_regex_flags,
  [961] = 2,
    ACTIONS(285), 1,
      sym_identifier,
    ACTIONS(287), 1,
      sym_int,
  [968] = 2,
    ACTIONS(289), 1,
      sym_identifier,
    ACTIONS(291), 1,
      sym_int,
  [975] = 1,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
  [979] = 1,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
  [983] = 1,
    ACTIONS(297), 1,
      anon_sym_RBRACE,
  [987] = 1,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
  [991] = 1,
    ACTIONS(299), 1,
      ts_builtin_sym_end,
  [995] = 1,
    ACTIONS(301), 1,
      anon_sym_COLON,
  [999] = 1,
    ACTIONS(303), 1,
      aux_sym_regex_pattern_token1,
  [1003] = 1,
    ACTIONS(305), 1,
      anon_sym_SLASH2,
  [1007] = 1,
    ACTIONS(307), 1,
      sym_int,
  [1011] = 1,
    ACTIONS(309), 1,
      sym_int,
  [1015] = 1,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
  [1019] = 1,
    ACTIONS(313), 1,
      aux_sym_regex_pattern_token1,
  [1023] = 1,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
  [1027] = 1,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
  [1031] = 1,
    ACTIONS(319), 1,
      anon_sym_RBRACE,
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
  [SMALL_STATE(14)] = 306,
  [SMALL_STATE(15)] = 319,
  [SMALL_STATE(16)] = 332,
  [SMALL_STATE(17)] = 345,
  [SMALL_STATE(18)] = 358,
  [SMALL_STATE(19)] = 371,
  [SMALL_STATE(20)] = 384,
  [SMALL_STATE(21)] = 397,
  [SMALL_STATE(22)] = 410,
  [SMALL_STATE(23)] = 423,
  [SMALL_STATE(24)] = 436,
  [SMALL_STATE(25)] = 451,
  [SMALL_STATE(26)] = 470,
  [SMALL_STATE(27)] = 483,
  [SMALL_STATE(28)] = 495,
  [SMALL_STATE(29)] = 507,
  [SMALL_STATE(30)] = 523,
  [SMALL_STATE(31)] = 539,
  [SMALL_STATE(32)] = 551,
  [SMALL_STATE(33)] = 563,
  [SMALL_STATE(34)] = 575,
  [SMALL_STATE(35)] = 591,
  [SMALL_STATE(36)] = 607,
  [SMALL_STATE(37)] = 619,
  [SMALL_STATE(38)] = 631,
  [SMALL_STATE(39)] = 647,
  [SMALL_STATE(40)] = 658,
  [SMALL_STATE(41)] = 673,
  [SMALL_STATE(42)] = 688,
  [SMALL_STATE(43)] = 703,
  [SMALL_STATE(44)] = 719,
  [SMALL_STATE(45)] = 735,
  [SMALL_STATE(46)] = 751,
  [SMALL_STATE(47)] = 767,
  [SMALL_STATE(48)] = 781,
  [SMALL_STATE(49)] = 795,
  [SMALL_STATE(50)] = 811,
  [SMALL_STATE(51)] = 825,
  [SMALL_STATE(52)] = 834,
  [SMALL_STATE(53)] = 847,
  [SMALL_STATE(54)] = 860,
  [SMALL_STATE(55)] = 869,
  [SMALL_STATE(56)] = 882,
  [SMALL_STATE(57)] = 895,
  [SMALL_STATE(58)] = 904,
  [SMALL_STATE(59)] = 914,
  [SMALL_STATE(60)] = 922,
  [SMALL_STATE(61)] = 932,
  [SMALL_STATE(62)] = 942,
  [SMALL_STATE(63)] = 947,
  [SMALL_STATE(64)] = 954,
  [SMALL_STATE(65)] = 961,
  [SMALL_STATE(66)] = 968,
  [SMALL_STATE(67)] = 975,
  [SMALL_STATE(68)] = 979,
  [SMALL_STATE(69)] = 983,
  [SMALL_STATE(70)] = 987,
  [SMALL_STATE(71)] = 991,
  [SMALL_STATE(72)] = 995,
  [SMALL_STATE(73)] = 999,
  [SMALL_STATE(74)] = 1003,
  [SMALL_STATE(75)] = 1007,
  [SMALL_STATE(76)] = 1011,
  [SMALL_STATE(77)] = 1015,
  [SMALL_STATE(78)] = 1019,
  [SMALL_STATE(79)] = 1023,
  [SMALL_STATE(80)] = 1027,
  [SMALL_STATE(81)] = 1031,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__any, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__any, 2, 0, 0), SHIFT_REPEAT(65),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__any, 2, 0, 0), SHIFT_REPEAT(66),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__any, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__any, 2, 0, 0), SHIFT_REPEAT(15),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__any, 2, 0, 0), SHIFT_REPEAT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transform_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transform_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transform_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transform_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transform_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
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
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tabstop, 4, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tabstop, 4, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 5, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice, 5, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_placeholder, 5, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_placeholder, 5, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 5, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 5, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice, 6, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice, 6, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__format_text, 1, 0, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__format_text, 1, 0, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__format_text_repeat1, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__format_text_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__format_text_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__format_text_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 4, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 5, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 7, 0, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 7, 0, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__choice_text, 1, 0, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__choice_text_repeat1, 2, 0, 0),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__choice_text_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [152] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__choice_text_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__format_text_repeat1, 1, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__format_text_repeat1, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 3, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 5, 0, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 5, 0, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 5, 0, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format, 5, 0, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__choice_text_repeat1, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__choice_text_repeat1, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex_pattern, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_regex_pattern_repeat2, 2, 0, 0),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_pattern_repeat2, 2, 0, 0), SHIFT_REPEAT(53),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_pattern_repeat2, 2, 0, 0), SHIFT_REPEAT(73),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_regex_pattern_repeat2, 2, 0, 0), SHIFT_REPEAT(46),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_repeat1, 2, 0, 0),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__if_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__if_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if, 1, 0, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_regex_pattern_repeat2, 3, 0, 0),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_pattern_repeat2, 3, 0, 0),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_regex_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_regex_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_pattern_repeat1, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_regex_pattern_repeat2, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__if_repeat1, 1, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__if_repeat1, 1, 0, 0),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_repeat1, 2, 0, 0),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_regex_pattern_repeat1, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 4, 0, 0),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 5, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [299] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transform, 6, 0, 0),
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
