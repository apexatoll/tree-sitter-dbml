#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 6
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum {
  sym__identifier = 1,
  sym__string = 2,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 3,
  anon_sym_LF = 4,
  aux_sym__multiline_string_token1 = 5,
  sym__number = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  anon_sym_null = 9,
  anon_sym_nil = 10,
  anon_sym_COLON = 11,
  anon_sym_project = 12,
  anon_sym_Project = 13,
  anon_sym_LBRACE = 14,
  anon_sym_RBRACE = 15,
  anon_sym_table = 16,
  anon_sym_Table = 17,
  anon_sym_enum = 18,
  anon_sym_Enum = 19,
  anon_sym_ref = 20,
  anon_sym_Ref = 21,
  anon_sym_tablegroup = 22,
  anon_sym_TableGroup = 23,
  sym__inline_comment = 24,
  anon_sym_SLASH_STAR = 25,
  anon_sym_STAR_SLASH = 26,
  anon_sym_note = 27,
  anon_sym_Note = 28,
  sym_document = 29,
  sym__multiline_string = 30,
  sym__boolean = 31,
  sym__null = 32,
  sym_key_value = 33,
  sym_value = 34,
  sym__definition = 35,
  sym_project = 36,
  sym__project_row = 37,
  sym_table = 38,
  sym_enum = 39,
  sym_reference = 40,
  sym__short_reference = 41,
  sym__long_reference = 42,
  sym_table_group = 43,
  sym_comment = 44,
  sym__multiline_comment = 45,
  sym_note = 46,
  sym_note_text = 47,
  sym__short_note = 48,
  sym__long_note = 49,
  aux_sym_document_repeat1 = 50,
  aux_sym_project_repeat1 = 51,
  alias_sym_enum_name = 52,
  alias_sym_key = 53,
  alias_sym_note_name = 54,
  alias_sym_reference_name = 55,
  alias_sym_table_group_name = 56,
  alias_sym_table_name = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "project_name",
  [sym__string] = "_string",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [anon_sym_LF] = "\n",
  [aux_sym__multiline_string_token1] = "_multiline_string_token1",
  [sym__number] = "_number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [anon_sym_nil] = "nil",
  [anon_sym_COLON] = ":",
  [anon_sym_project] = "project",
  [anon_sym_Project] = "Project",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_table] = "table",
  [anon_sym_Table] = "Table",
  [anon_sym_enum] = "enum",
  [anon_sym_Enum] = "Enum",
  [anon_sym_ref] = "ref",
  [anon_sym_Ref] = "Ref",
  [anon_sym_tablegroup] = "tablegroup",
  [anon_sym_TableGroup] = "TableGroup",
  [sym__inline_comment] = "_inline_comment",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_note] = "note",
  [anon_sym_Note] = "Note",
  [sym_document] = "document",
  [sym__multiline_string] = "_multiline_string",
  [sym__boolean] = "_boolean",
  [sym__null] = "_null",
  [sym_key_value] = "key_value",
  [sym_value] = "value",
  [sym__definition] = "_definition",
  [sym_project] = "project",
  [sym__project_row] = "_project_row",
  [sym_table] = "table",
  [sym_enum] = "enum",
  [sym_reference] = "reference",
  [sym__short_reference] = "_short_reference",
  [sym__long_reference] = "_long_reference",
  [sym_table_group] = "table_group",
  [sym_comment] = "comment",
  [sym__multiline_comment] = "_multiline_comment",
  [sym_note] = "note",
  [sym_note_text] = "note_text",
  [sym__short_note] = "_short_note",
  [sym__long_note] = "_long_note",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_project_repeat1] = "project_repeat1",
  [alias_sym_enum_name] = "enum_name",
  [alias_sym_key] = "key",
  [alias_sym_note_name] = "note_name",
  [alias_sym_reference_name] = "reference_name",
  [alias_sym_table_group_name] = "table_group_name",
  [alias_sym_table_name] = "table_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [sym__string] = sym__string,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym__multiline_string_token1] = aux_sym__multiline_string_token1,
  [sym__number] = sym__number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_project] = anon_sym_project,
  [anon_sym_Project] = anon_sym_Project,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_Table] = anon_sym_Table,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_Enum] = anon_sym_Enum,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_Ref] = anon_sym_Ref,
  [anon_sym_tablegroup] = anon_sym_tablegroup,
  [anon_sym_TableGroup] = anon_sym_TableGroup,
  [sym__inline_comment] = sym__inline_comment,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_Note] = anon_sym_Note,
  [sym_document] = sym_document,
  [sym__multiline_string] = sym__multiline_string,
  [sym__boolean] = sym__boolean,
  [sym__null] = sym__null,
  [sym_key_value] = sym_key_value,
  [sym_value] = sym_value,
  [sym__definition] = sym__definition,
  [sym_project] = sym_project,
  [sym__project_row] = sym__project_row,
  [sym_table] = sym_table,
  [sym_enum] = sym_enum,
  [sym_reference] = sym_reference,
  [sym__short_reference] = sym__short_reference,
  [sym__long_reference] = sym__long_reference,
  [sym_table_group] = sym_table_group,
  [sym_comment] = sym_comment,
  [sym__multiline_comment] = sym__multiline_comment,
  [sym_note] = sym_note,
  [sym_note_text] = sym_note_text,
  [sym__short_note] = sym__short_note,
  [sym__long_note] = sym__long_note,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_project_repeat1] = aux_sym_project_repeat1,
  [alias_sym_enum_name] = alias_sym_enum_name,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_note_name] = alias_sym_note_name,
  [alias_sym_reference_name] = alias_sym_reference_name,
  [alias_sym_table_group_name] = alias_sym_table_group_name,
  [alias_sym_table_name] = alias_sym_table_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__multiline_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_project] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Project] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Table] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tablegroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TableGroup] = {
    .visible = true,
    .named = false,
  },
  [sym__inline_comment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Note] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_string] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__null] = {
    .visible = false,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym__project_row] = {
    .visible = false,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__short_reference] = {
    .visible = false,
    .named = true,
  },
  [sym__long_reference] = {
    .visible = false,
    .named = true,
  },
  [sym_table_group] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_comment] = {
    .visible = false,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_note_text] = {
    .visible = true,
    .named = true,
  },
  [sym__short_note] = {
    .visible = false,
    .named = true,
  },
  [sym__long_note] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_project_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_enum_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_key] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_note_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_reference_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_table_group_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_table_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_reference_name,
  },
  [2] = {
    [1] = alias_sym_table_name,
  },
  [3] = {
    [1] = alias_sym_enum_name,
  },
  [4] = {
    [1] = alias_sym_table_group_name,
  },
  [5] = {
    [1] = alias_sym_note_name,
  },
  [6] = {
    [0] = alias_sym_key,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [30] = 4,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 33,
  [35] = 35,
  [36] = 36,
  [37] = 6,
  [38] = 7,
  [39] = 16,
  [40] = 17,
  [41] = 24,
  [42] = 20,
  [43] = 5,
  [44] = 13,
  [45] = 45,
  [46] = 45,
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
  [76] = 69,
  [77] = 52,
  [78] = 62,
  [79] = 64,
  [80] = 59,
  [81] = 53,
  [82] = 72,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == 'N') ADVANCE(42);
      if (lookahead == 'P') ADVANCE(49);
      if (lookahead == 'R') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(29);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'N') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(67);
      if (lookahead == '}') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(96);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '{') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 30:
      if (lookahead == 'j') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'j') ADVANCE(26);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '"') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(50);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__inline_comment);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_Note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 9},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 74},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 74},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 9},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 9},
  [75] = {.lex_state = 9},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 74},
  [82] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__string] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [sym__number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_project] = ACTIONS(1),
    [anon_sym_Project] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_Enum] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_Ref] = ACTIONS(1),
    [anon_sym_tablegroup] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
    [sym__inline_comment] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_Note] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(57),
    [sym__definition] = STATE(2),
    [sym_project] = STATE(2),
    [sym_table] = STATE(2),
    [sym_enum] = STATE(2),
    [sym_reference] = STATE(2),
    [sym__short_reference] = STATE(12),
    [sym__long_reference] = STATE(12),
    [sym_table_group] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__multiline_comment] = STATE(9),
    [sym_note] = STATE(2),
    [sym__short_note] = STATE(13),
    [sym__long_note] = STATE(13),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_project] = ACTIONS(5),
    [anon_sym_Project] = ACTIONS(5),
    [anon_sym_table] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(9),
    [anon_sym_Enum] = ACTIONS(9),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_Ref] = ACTIONS(11),
    [anon_sym_tablegroup] = ACTIONS(13),
    [anon_sym_TableGroup] = ACTIONS(13),
    [sym__inline_comment] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(17),
    [anon_sym_note] = ACTIONS(19),
    [anon_sym_Note] = ACTIONS(19),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(12),
    [sym__long_reference] = STATE(12),
    [sym_table_group] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__multiline_comment] = STATE(9),
    [sym_note] = STATE(3),
    [sym__short_note] = STATE(13),
    [sym__long_note] = STATE(13),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_project] = ACTIONS(5),
    [anon_sym_Project] = ACTIONS(5),
    [anon_sym_table] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(9),
    [anon_sym_Enum] = ACTIONS(9),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_Ref] = ACTIONS(11),
    [anon_sym_tablegroup] = ACTIONS(13),
    [anon_sym_TableGroup] = ACTIONS(13),
    [sym__inline_comment] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(17),
    [anon_sym_note] = ACTIONS(19),
    [anon_sym_Note] = ACTIONS(19),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(12),
    [sym__long_reference] = STATE(12),
    [sym_table_group] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__multiline_comment] = STATE(9),
    [sym_note] = STATE(3),
    [sym__short_note] = STATE(13),
    [sym__long_note] = STATE(13),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_project] = ACTIONS(25),
    [anon_sym_Project] = ACTIONS(25),
    [anon_sym_table] = ACTIONS(28),
    [anon_sym_Table] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(31),
    [anon_sym_Enum] = ACTIONS(31),
    [anon_sym_ref] = ACTIONS(34),
    [anon_sym_Ref] = ACTIONS(34),
    [anon_sym_tablegroup] = ACTIONS(37),
    [anon_sym_TableGroup] = ACTIONS(37),
    [sym__inline_comment] = ACTIONS(40),
    [anon_sym_SLASH_STAR] = ACTIONS(43),
    [anon_sym_note] = ACTIONS(46),
    [anon_sym_Note] = ACTIONS(46),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(5), 1,
      sym__multiline_string,
    STATE(20), 1,
      sym_note_text,
    ACTIONS(55), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(49), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [32] = 2,
    ACTIONS(59), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(57), 14,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [53] = 2,
    ACTIONS(63), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(61), 14,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [74] = 2,
    ACTIONS(67), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(65), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [94] = 2,
    ACTIONS(71), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(69), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [114] = 2,
    ACTIONS(75), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(73), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [134] = 2,
    ACTIONS(79), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(77), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [154] = 2,
    ACTIONS(83), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(81), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [174] = 2,
    ACTIONS(87), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(85), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [194] = 2,
    ACTIONS(91), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(89), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [214] = 2,
    ACTIONS(95), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(93), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [234] = 2,
    ACTIONS(99), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(97), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [254] = 2,
    ACTIONS(103), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(101), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [274] = 2,
    ACTIONS(107), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(105), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [294] = 2,
    ACTIONS(111), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(109), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [314] = 2,
    ACTIONS(115), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(113), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [334] = 2,
    ACTIONS(119), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(117), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [354] = 2,
    ACTIONS(123), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(121), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [374] = 2,
    ACTIONS(127), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(125), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [394] = 2,
    ACTIONS(131), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(129), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [414] = 2,
    ACTIONS(135), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(133), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [434] = 2,
    ACTIONS(139), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(137), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [454] = 5,
    ACTIONS(141), 1,
      sym__identifier,
    ACTIONS(143), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(44), 2,
      sym__short_note,
      sym__long_note,
    STATE(27), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [475] = 5,
    ACTIONS(141), 1,
      sym__identifier,
    ACTIONS(147), 1,
      anon_sym_RBRACE,
    ACTIONS(145), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(44), 2,
      sym__short_note,
      sym__long_note,
    STATE(28), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [496] = 5,
    ACTIONS(149), 1,
      sym__identifier,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    ACTIONS(154), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(44), 2,
      sym__short_note,
      sym__long_note,
    STATE(28), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [517] = 3,
    STATE(35), 1,
      sym_value,
    STATE(36), 2,
      sym__boolean,
      sym__null,
    ACTIONS(157), 6,
      sym__string,
      sym__number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_nil,
  [533] = 6,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(159), 1,
      sym__string,
    ACTIONS(161), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(42), 1,
      sym_note_text,
    STATE(43), 1,
      sym__multiline_string,
    ACTIONS(55), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [554] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__multiline_string,
    STATE(76), 1,
      sym_note_text,
  [570] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__multiline_string,
    STATE(69), 1,
      sym_note_text,
  [586] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__multiline_string,
    STATE(77), 1,
      sym_note_text,
  [602] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__multiline_string,
    STATE(52), 1,
      sym_note_text,
  [618] = 2,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(171), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [627] = 2,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [636] = 2,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [645] = 2,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [654] = 2,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [663] = 2,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    ACTIONS(107), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [672] = 2,
    ACTIONS(133), 1,
      anon_sym_RBRACE,
    ACTIONS(135), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [681] = 2,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [690] = 2,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [699] = 2,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [708] = 3,
    ACTIONS(179), 1,
      sym__identifier,
    ACTIONS(181), 1,
      anon_sym_COLON,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
  [718] = 3,
    ACTIONS(185), 1,
      sym__identifier,
    ACTIONS(187), 1,
      anon_sym_COLON,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
  [728] = 3,
    ACTIONS(191), 1,
      sym__identifier,
    ACTIONS(193), 1,
      anon_sym_COLON,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
  [738] = 2,
    ACTIONS(197), 1,
      anon_sym_COLON,
    ACTIONS(199), 1,
      anon_sym_LBRACE,
  [745] = 2,
    ACTIONS(201), 1,
      sym__identifier,
    ACTIONS(203), 1,
      anon_sym_LBRACE,
  [752] = 1,
    ACTIONS(205), 1,
      anon_sym_LBRACE,
  [756] = 1,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
  [760] = 1,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
  [764] = 1,
    ACTIONS(211), 1,
      aux_sym__multiline_string_token1,
  [768] = 1,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
  [772] = 1,
    ACTIONS(215), 1,
      aux_sym__multiline_string_token1,
  [776] = 1,
    ACTIONS(217), 1,
      anon_sym_LBRACE,
  [780] = 1,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
  [784] = 1,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
  [788] = 1,
    ACTIONS(223), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [792] = 1,
    ACTIONS(225), 1,
      anon_sym_LF,
  [796] = 1,
    ACTIONS(227), 1,
      anon_sym_LF,
  [800] = 1,
    ACTIONS(229), 1,
      anon_sym_LF,
  [804] = 1,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
  [808] = 1,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
  [812] = 1,
    ACTIONS(235), 1,
      anon_sym_STAR_SLASH,
  [816] = 1,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
  [820] = 1,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
  [824] = 1,
    ACTIONS(241), 1,
      anon_sym_COLON,
  [828] = 1,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
  [832] = 1,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
  [836] = 1,
    ACTIONS(247), 1,
      sym__identifier,
  [840] = 1,
    ACTIONS(249), 1,
      anon_sym_LF,
  [844] = 1,
    ACTIONS(251), 1,
      anon_sym_LBRACE,
  [848] = 1,
    ACTIONS(253), 1,
      sym__identifier,
  [852] = 1,
    ACTIONS(255), 1,
      sym__identifier,
  [856] = 1,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
  [860] = 1,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
  [864] = 1,
    ACTIONS(261), 1,
      anon_sym_LF,
  [868] = 1,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
  [872] = 1,
    ACTIONS(265), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [876] = 1,
    ACTIONS(267), 1,
      aux_sym__multiline_string_token1,
  [880] = 1,
    ACTIONS(269), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 32,
  [SMALL_STATE(6)] = 53,
  [SMALL_STATE(7)] = 74,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 114,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 154,
  [SMALL_STATE(12)] = 174,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 234,
  [SMALL_STATE(16)] = 254,
  [SMALL_STATE(17)] = 274,
  [SMALL_STATE(18)] = 294,
  [SMALL_STATE(19)] = 314,
  [SMALL_STATE(20)] = 334,
  [SMALL_STATE(21)] = 354,
  [SMALL_STATE(22)] = 374,
  [SMALL_STATE(23)] = 394,
  [SMALL_STATE(24)] = 414,
  [SMALL_STATE(25)] = 434,
  [SMALL_STATE(26)] = 454,
  [SMALL_STATE(27)] = 475,
  [SMALL_STATE(28)] = 496,
  [SMALL_STATE(29)] = 517,
  [SMALL_STATE(30)] = 533,
  [SMALL_STATE(31)] = 554,
  [SMALL_STATE(32)] = 570,
  [SMALL_STATE(33)] = 586,
  [SMALL_STATE(34)] = 602,
  [SMALL_STATE(35)] = 618,
  [SMALL_STATE(36)] = 627,
  [SMALL_STATE(37)] = 636,
  [SMALL_STATE(38)] = 645,
  [SMALL_STATE(39)] = 654,
  [SMALL_STATE(40)] = 663,
  [SMALL_STATE(41)] = 672,
  [SMALL_STATE(42)] = 681,
  [SMALL_STATE(43)] = 690,
  [SMALL_STATE(44)] = 699,
  [SMALL_STATE(45)] = 708,
  [SMALL_STATE(46)] = 718,
  [SMALL_STATE(47)] = 728,
  [SMALL_STATE(48)] = 738,
  [SMALL_STATE(49)] = 745,
  [SMALL_STATE(50)] = 752,
  [SMALL_STATE(51)] = 756,
  [SMALL_STATE(52)] = 760,
  [SMALL_STATE(53)] = 764,
  [SMALL_STATE(54)] = 768,
  [SMALL_STATE(55)] = 772,
  [SMALL_STATE(56)] = 776,
  [SMALL_STATE(57)] = 780,
  [SMALL_STATE(58)] = 784,
  [SMALL_STATE(59)] = 788,
  [SMALL_STATE(60)] = 792,
  [SMALL_STATE(61)] = 796,
  [SMALL_STATE(62)] = 800,
  [SMALL_STATE(63)] = 804,
  [SMALL_STATE(64)] = 808,
  [SMALL_STATE(65)] = 812,
  [SMALL_STATE(66)] = 816,
  [SMALL_STATE(67)] = 820,
  [SMALL_STATE(68)] = 824,
  [SMALL_STATE(69)] = 828,
  [SMALL_STATE(70)] = 832,
  [SMALL_STATE(71)] = 836,
  [SMALL_STATE(72)] = 840,
  [SMALL_STATE(73)] = 844,
  [SMALL_STATE(74)] = 848,
  [SMALL_STATE(75)] = 852,
  [SMALL_STATE(76)] = 856,
  [SMALL_STATE(77)] = 860,
  [SMALL_STATE(78)] = 864,
  [SMALL_STATE(79)] = 868,
  [SMALL_STATE(80)] = 872,
  [SMALL_STATE(81)] = 876,
  [SMALL_STATE(82)] = 880,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(75),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(49),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_text, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 5, .production_id = 5),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 5, .production_id = 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 5),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 5),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 3),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 3),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3, .production_id = 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 3),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(68),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(46),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, .production_id = 6),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 6),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [219] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_dbml(void) {
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
