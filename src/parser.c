#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 7
#define TOKEN_COUNT 39
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 8

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
  anon_sym_bool = 11,
  anon_sym_boolean = 12,
  anon_sym_date = 13,
  anon_sym_datetime = 14,
  anon_sym_int = 15,
  anon_sym_integer = 16,
  anon_sym_string = 17,
  anon_sym_text = 18,
  anon_sym_timestamp = 19,
  anon_sym_varchar = 20,
  anon_sym_COLON = 21,
  anon_sym_project = 22,
  anon_sym_Project = 23,
  anon_sym_LBRACE = 24,
  anon_sym_RBRACE = 25,
  anon_sym_table = 26,
  anon_sym_Table = 27,
  anon_sym_enum = 28,
  anon_sym_Enum = 29,
  anon_sym_ref = 30,
  anon_sym_Ref = 31,
  anon_sym_tablegroup = 32,
  anon_sym_TableGroup = 33,
  sym__inline_comment = 34,
  anon_sym_SLASH_STAR = 35,
  anon_sym_STAR_SLASH = 36,
  anon_sym_note = 37,
  anon_sym_Note = 38,
  sym_document = 39,
  sym__multiline_string = 40,
  sym__boolean = 41,
  sym__null = 42,
  sym_type = 43,
  sym_key_value = 44,
  sym_value = 45,
  sym__definition = 46,
  sym_project = 47,
  sym__project_row = 48,
  sym_table = 49,
  sym__table_row = 50,
  sym_column = 51,
  sym_enum = 52,
  sym_reference = 53,
  sym__short_reference = 54,
  sym__long_reference = 55,
  sym_table_group = 56,
  sym_comment = 57,
  sym__multiline_comment = 58,
  sym_note = 59,
  sym_note_text = 60,
  sym__short_note = 61,
  sym__long_note = 62,
  aux_sym_document_repeat1 = 63,
  aux_sym_project_repeat1 = 64,
  aux_sym_table_repeat1 = 65,
  alias_sym_column_name = 66,
  alias_sym_enum_name = 67,
  alias_sym_key = 68,
  alias_sym_note_name = 69,
  alias_sym_reference_name = 70,
  alias_sym_table_group_name = 71,
  alias_sym_table_name = 72,
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
  [anon_sym_bool] = "bool",
  [anon_sym_boolean] = "boolean",
  [anon_sym_date] = "date",
  [anon_sym_datetime] = "datetime",
  [anon_sym_int] = "int",
  [anon_sym_integer] = "integer",
  [anon_sym_string] = "string",
  [anon_sym_text] = "text",
  [anon_sym_timestamp] = "timestamp",
  [anon_sym_varchar] = "varchar",
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
  [sym_type] = "type",
  [sym_key_value] = "key_value",
  [sym_value] = "value",
  [sym__definition] = "_definition",
  [sym_project] = "project",
  [sym__project_row] = "_project_row",
  [sym_table] = "table",
  [sym__table_row] = "_table_row",
  [sym_column] = "column",
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
  [aux_sym_table_repeat1] = "table_repeat1",
  [alias_sym_column_name] = "column_name",
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
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_date] = anon_sym_date,
  [anon_sym_datetime] = anon_sym_datetime,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_timestamp] = anon_sym_timestamp,
  [anon_sym_varchar] = anon_sym_varchar,
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
  [sym_type] = sym_type,
  [sym_key_value] = sym_key_value,
  [sym_value] = sym_value,
  [sym__definition] = sym__definition,
  [sym_project] = sym_project,
  [sym__project_row] = sym__project_row,
  [sym_table] = sym_table,
  [sym__table_row] = sym__table_row,
  [sym_column] = sym_column,
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
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [alias_sym_column_name] = alias_sym_column_name,
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
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_date] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_datetime] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_timestamp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_varchar] = {
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
  [sym_type] = {
    .visible = true,
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
  [sym__table_row] = {
    .visible = false,
    .named = true,
  },
  [sym_column] = {
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
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_column_name] = {
    .visible = true,
    .named = true,
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
    [0] = alias_sym_column_name,
  },
  [7] = {
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
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 4,
  [36] = 36,
  [37] = 37,
  [38] = 37,
  [39] = 36,
  [40] = 40,
  [41] = 6,
  [42] = 9,
  [43] = 19,
  [44] = 20,
  [45] = 26,
  [46] = 11,
  [47] = 5,
  [48] = 13,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 52,
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
  [82] = 69,
  [83] = 57,
  [84] = 68,
  [85] = 73,
  [86] = 65,
  [87] = 66,
  [88] = 78,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == 'E') ADVANCE(59);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == 'P') ADVANCE(78);
      if (lookahead == 'R') ADVANCE(23);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead == 'b') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'n') ADVANCE(42);
      if (lookahead == 'p') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(32);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(140);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(108);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 8:
      if (lookahead == '/') ADVANCE(142);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(127);
      if (lookahead == '{') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 18:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 19:
      if (lookahead == 'b') ADVANCE(53);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(145);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(137);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(136);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(16);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(48);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'j') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'j') ADVANCE(36);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(83);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(125);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(138);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 82:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(121);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(54);
      END_STATE();
    case 94:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(55);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 98:
      if (lookahead == 'x') ADVANCE(85);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '"') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_varchar);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(80);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(79);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__inline_comment);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_Note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
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
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 9},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 110},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 110},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 9},
  [80] = {.lex_state = 9},
  [81] = {.lex_state = 9},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 110},
  [88] = {.lex_state = 2},
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
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_date] = ACTIONS(1),
    [anon_sym_datetime] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_integer] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_timestamp] = ACTIONS(1),
    [anon_sym_varchar] = ACTIONS(1),
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
    [sym_document] = STATE(63),
    [sym__definition] = STATE(2),
    [sym_project] = STATE(2),
    [sym_table] = STATE(2),
    [sym_enum] = STATE(2),
    [sym_reference] = STATE(2),
    [sym__short_reference] = STATE(12),
    [sym__long_reference] = STATE(12),
    [sym_table_group] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__multiline_comment] = STATE(24),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(15), 1,
      sym__inline_comment,
    ACTIONS(17), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym__multiline_comment,
    ACTIONS(5), 2,
      anon_sym_project,
      anon_sym_Project,
    ACTIONS(7), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(9), 2,
      anon_sym_enum,
      anon_sym_Enum,
    ACTIONS(11), 2,
      anon_sym_ref,
      anon_sym_Ref,
    ACTIONS(13), 2,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_reference,
      sym__long_reference,
    STATE(13), 2,
      sym__short_note,
      sym__long_note,
    STATE(3), 9,
      sym__definition,
      sym_project,
      sym_table,
      sym_enum,
      sym_reference,
      sym_table_group,
      sym_comment,
      sym_note,
      aux_sym_document_repeat1,
  [56] = 13,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      sym__inline_comment,
    ACTIONS(43), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym__multiline_comment,
    ACTIONS(25), 2,
      anon_sym_project,
      anon_sym_Project,
    ACTIONS(28), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(31), 2,
      anon_sym_enum,
      anon_sym_Enum,
    ACTIONS(34), 2,
      anon_sym_ref,
      anon_sym_Ref,
    ACTIONS(37), 2,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
    ACTIONS(46), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_reference,
      sym__long_reference,
    STATE(13), 2,
      sym__short_note,
      sym__long_note,
    STATE(3), 9,
      sym__definition,
      sym_project,
      sym_table,
      sym_enum,
      sym_reference,
      sym_table_group,
      sym_comment,
      sym_note,
      aux_sym_document_repeat1,
  [112] = 6,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(5), 1,
      sym__multiline_string,
    STATE(11), 1,
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
  [144] = 2,
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
  [165] = 2,
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
  [186] = 2,
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
  [206] = 2,
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
  [226] = 2,
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
  [246] = 2,
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
  [266] = 2,
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
  [286] = 2,
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
  [306] = 2,
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
  [326] = 2,
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
  [346] = 2,
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
  [366] = 2,
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
  [386] = 2,
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
  [406] = 2,
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
  [426] = 2,
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
  [446] = 2,
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
  [466] = 2,
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
  [486] = 2,
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
  [506] = 2,
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
  [526] = 2,
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
  [546] = 2,
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
  [566] = 2,
    ACTIONS(143), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(141), 13,
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
  [586] = 3,
    STATE(50), 1,
      sym_type,
    ACTIONS(145), 3,
      anon_sym_bool,
      anon_sym_date,
      anon_sym_int,
    ACTIONS(147), 7,
      anon_sym_boolean,
      anon_sym_datetime,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_text,
      anon_sym_timestamp,
      anon_sym_varchar,
  [604] = 5,
    ACTIONS(149), 1,
      sym__identifier,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(48), 2,
      sym__short_note,
      sym__long_note,
    STATE(31), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [625] = 5,
    ACTIONS(155), 1,
      sym__identifier,
    ACTIONS(157), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(48), 2,
      sym__short_note,
      sym__long_note,
    STATE(30), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [646] = 5,
    ACTIONS(155), 1,
      sym__identifier,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(48), 2,
      sym__short_note,
      sym__long_note,
    STATE(33), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [667] = 5,
    ACTIONS(149), 1,
      sym__identifier,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(48), 2,
      sym__short_note,
      sym__long_note,
    STATE(32), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [688] = 5,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(48), 2,
      sym__short_note,
      sym__long_note,
    STATE(32), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [709] = 5,
    ACTIONS(171), 1,
      sym__identifier,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(176), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(48), 2,
      sym__short_note,
      sym__long_note,
    STATE(33), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [730] = 3,
    STATE(40), 1,
      sym_value,
    STATE(49), 2,
      sym__boolean,
      sym__null,
    ACTIONS(179), 6,
      sym__string,
      sym__number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_nil,
  [746] = 6,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(181), 1,
      sym__string,
    ACTIONS(183), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(46), 1,
      sym_note_text,
    STATE(47), 1,
      sym__multiline_string,
    ACTIONS(55), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [767] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__multiline_string,
    STATE(69), 1,
      sym_note_text,
  [783] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__multiline_string,
    STATE(83), 1,
      sym_note_text,
  [799] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__multiline_string,
    STATE(57), 1,
      sym_note_text,
  [815] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      sym__multiline_string,
    STATE(82), 1,
      sym_note_text,
  [831] = 2,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [840] = 2,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [849] = 2,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [858] = 2,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    ACTIONS(115), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [867] = 2,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [876] = 2,
    ACTIONS(141), 1,
      anon_sym_RBRACE,
    ACTIONS(143), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [885] = 2,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [894] = 2,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [903] = 2,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [912] = 2,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [921] = 2,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    ACTIONS(201), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [930] = 2,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    ACTIONS(205), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [939] = 3,
    ACTIONS(209), 1,
      sym__identifier,
    ACTIONS(211), 1,
      anon_sym_COLON,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
  [949] = 3,
    ACTIONS(215), 1,
      sym__identifier,
    ACTIONS(217), 1,
      anon_sym_COLON,
    ACTIONS(219), 1,
      anon_sym_LBRACE,
  [959] = 3,
    ACTIONS(221), 1,
      sym__identifier,
    ACTIONS(223), 1,
      anon_sym_COLON,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
  [969] = 2,
    ACTIONS(227), 1,
      anon_sym_COLON,
    ACTIONS(229), 1,
      anon_sym_LBRACE,
  [976] = 2,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(233), 1,
      anon_sym_LBRACE,
  [983] = 1,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
  [987] = 1,
    ACTIONS(237), 1,
      aux_sym__multiline_string_token1,
  [991] = 1,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
  [995] = 1,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
  [999] = 1,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
  [1003] = 1,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
  [1007] = 1,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
  [1011] = 1,
    ACTIONS(249), 1,
      anon_sym_COLON,
  [1015] = 1,
    ACTIONS(251), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1019] = 1,
    ACTIONS(253), 1,
      aux_sym__multiline_string_token1,
  [1023] = 1,
    ACTIONS(255), 1,
      anon_sym_LF,
  [1027] = 1,
    ACTIONS(257), 1,
      anon_sym_LF,
  [1031] = 1,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
  [1035] = 1,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
  [1039] = 1,
    ACTIONS(263), 1,
      anon_sym_STAR_SLASH,
  [1043] = 1,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
  [1047] = 1,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
  [1051] = 1,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
  [1055] = 1,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
  [1059] = 1,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
  [1063] = 1,
    ACTIONS(275), 1,
      anon_sym_LF,
  [1067] = 1,
    ACTIONS(277), 1,
      anon_sym_LF,
  [1071] = 1,
    ACTIONS(279), 1,
      sym__identifier,
  [1075] = 1,
    ACTIONS(281), 1,
      sym__identifier,
  [1079] = 1,
    ACTIONS(283), 1,
      sym__identifier,
  [1083] = 1,
    ACTIONS(285), 1,
      anon_sym_RBRACE,
  [1087] = 1,
    ACTIONS(287), 1,
      anon_sym_RBRACE,
  [1091] = 1,
    ACTIONS(289), 1,
      anon_sym_LF,
  [1095] = 1,
    ACTIONS(291), 1,
      anon_sym_LBRACE,
  [1099] = 1,
    ACTIONS(293), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1103] = 1,
    ACTIONS(295), 1,
      aux_sym__multiline_string_token1,
  [1107] = 1,
    ACTIONS(297), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 144,
  [SMALL_STATE(6)] = 165,
  [SMALL_STATE(7)] = 186,
  [SMALL_STATE(8)] = 206,
  [SMALL_STATE(9)] = 226,
  [SMALL_STATE(10)] = 246,
  [SMALL_STATE(11)] = 266,
  [SMALL_STATE(12)] = 286,
  [SMALL_STATE(13)] = 306,
  [SMALL_STATE(14)] = 326,
  [SMALL_STATE(15)] = 346,
  [SMALL_STATE(16)] = 366,
  [SMALL_STATE(17)] = 386,
  [SMALL_STATE(18)] = 406,
  [SMALL_STATE(19)] = 426,
  [SMALL_STATE(20)] = 446,
  [SMALL_STATE(21)] = 466,
  [SMALL_STATE(22)] = 486,
  [SMALL_STATE(23)] = 506,
  [SMALL_STATE(24)] = 526,
  [SMALL_STATE(25)] = 546,
  [SMALL_STATE(26)] = 566,
  [SMALL_STATE(27)] = 586,
  [SMALL_STATE(28)] = 604,
  [SMALL_STATE(29)] = 625,
  [SMALL_STATE(30)] = 646,
  [SMALL_STATE(31)] = 667,
  [SMALL_STATE(32)] = 688,
  [SMALL_STATE(33)] = 709,
  [SMALL_STATE(34)] = 730,
  [SMALL_STATE(35)] = 746,
  [SMALL_STATE(36)] = 767,
  [SMALL_STATE(37)] = 783,
  [SMALL_STATE(38)] = 799,
  [SMALL_STATE(39)] = 815,
  [SMALL_STATE(40)] = 831,
  [SMALL_STATE(41)] = 840,
  [SMALL_STATE(42)] = 849,
  [SMALL_STATE(43)] = 858,
  [SMALL_STATE(44)] = 867,
  [SMALL_STATE(45)] = 876,
  [SMALL_STATE(46)] = 885,
  [SMALL_STATE(47)] = 894,
  [SMALL_STATE(48)] = 903,
  [SMALL_STATE(49)] = 912,
  [SMALL_STATE(50)] = 921,
  [SMALL_STATE(51)] = 930,
  [SMALL_STATE(52)] = 939,
  [SMALL_STATE(53)] = 949,
  [SMALL_STATE(54)] = 959,
  [SMALL_STATE(55)] = 969,
  [SMALL_STATE(56)] = 976,
  [SMALL_STATE(57)] = 983,
  [SMALL_STATE(58)] = 987,
  [SMALL_STATE(59)] = 991,
  [SMALL_STATE(60)] = 995,
  [SMALL_STATE(61)] = 999,
  [SMALL_STATE(62)] = 1003,
  [SMALL_STATE(63)] = 1007,
  [SMALL_STATE(64)] = 1011,
  [SMALL_STATE(65)] = 1015,
  [SMALL_STATE(66)] = 1019,
  [SMALL_STATE(67)] = 1023,
  [SMALL_STATE(68)] = 1027,
  [SMALL_STATE(69)] = 1031,
  [SMALL_STATE(70)] = 1035,
  [SMALL_STATE(71)] = 1039,
  [SMALL_STATE(72)] = 1043,
  [SMALL_STATE(73)] = 1047,
  [SMALL_STATE(74)] = 1051,
  [SMALL_STATE(75)] = 1055,
  [SMALL_STATE(76)] = 1059,
  [SMALL_STATE(77)] = 1063,
  [SMALL_STATE(78)] = 1067,
  [SMALL_STATE(79)] = 1071,
  [SMALL_STATE(80)] = 1075,
  [SMALL_STATE(81)] = 1079,
  [SMALL_STATE(82)] = 1083,
  [SMALL_STATE(83)] = 1087,
  [SMALL_STATE(84)] = 1091,
  [SMALL_STATE(85)] = 1095,
  [SMALL_STATE(86)] = 1099,
  [SMALL_STATE(87)] = 1103,
  [SMALL_STATE(88)] = 1107,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(79),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(67),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(54),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_text, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 5, .production_id = 5),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 5, .production_id = 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 5),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 5),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 2),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 3),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(64),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(52),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(27),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(52),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, .production_id = 7),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 7),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, .production_id = 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 6),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [247] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
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
