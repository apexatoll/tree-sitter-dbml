#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 8
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 9

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
  anon_sym_LBRACK = 28,
  anon_sym_COMMA = 29,
  anon_sym_RBRACK = 30,
  anon_sym_primarykey = 31,
  anon_sym_pk = 32,
  anon_sym_notnull = 33,
  anon_sym_unique = 34,
  anon_sym_increment = 35,
  anon_sym_enum = 36,
  anon_sym_Enum = 37,
  anon_sym_ref = 38,
  anon_sym_Ref = 39,
  anon_sym_tablegroup = 40,
  anon_sym_TableGroup = 41,
  sym__inline_comment = 42,
  anon_sym_SLASH_STAR = 43,
  anon_sym_STAR_SLASH = 44,
  anon_sym_note = 45,
  anon_sym_Note = 46,
  sym_document = 47,
  sym__multiline_string = 48,
  sym__boolean = 49,
  sym__null = 50,
  sym_type = 51,
  sym_key_value = 52,
  sym_value = 53,
  sym__definition = 54,
  sym_project = 55,
  sym__project_row = 56,
  sym_table = 57,
  sym__table_row = 58,
  sym_column = 59,
  sym_column_settings = 60,
  sym__unary_setting = 61,
  sym_enum = 62,
  sym_reference = 63,
  sym__short_reference = 64,
  sym__long_reference = 65,
  sym_table_group = 66,
  sym_comment = 67,
  sym__multiline_comment = 68,
  sym_note = 69,
  sym_note_text = 70,
  sym__short_note = 71,
  sym__long_note = 72,
  aux_sym_document_repeat1 = 73,
  aux_sym_project_repeat1 = 74,
  aux_sym_table_repeat1 = 75,
  aux_sym_column_settings_repeat1 = 76,
  alias_sym_column_name = 77,
  alias_sym_enum_name = 78,
  alias_sym_key = 79,
  alias_sym_note_name = 80,
  alias_sym_null_setting = 81,
  alias_sym_reference_name = 82,
  alias_sym_table_group_name = 83,
  alias_sym_table_name = 84,
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
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_primarykey] = "primary_key_setting",
  [anon_sym_pk] = "primary_key_setting",
  [anon_sym_notnull] = "not_null_setting",
  [anon_sym_unique] = "unique_setting",
  [anon_sym_increment] = "increment_setting",
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
  [sym_column_settings] = "column_settings",
  [sym__unary_setting] = "_unary_setting",
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
  [aux_sym_column_settings_repeat1] = "column_settings_repeat1",
  [alias_sym_column_name] = "column_name",
  [alias_sym_enum_name] = "enum_name",
  [alias_sym_key] = "key",
  [alias_sym_note_name] = "note_name",
  [alias_sym_null_setting] = "null_setting",
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
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_primarykey] = anon_sym_primarykey,
  [anon_sym_pk] = anon_sym_primarykey,
  [anon_sym_notnull] = anon_sym_notnull,
  [anon_sym_unique] = anon_sym_unique,
  [anon_sym_increment] = anon_sym_increment,
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
  [sym_column_settings] = sym_column_settings,
  [sym__unary_setting] = sym__unary_setting,
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
  [aux_sym_column_settings_repeat1] = aux_sym_column_settings_repeat1,
  [alias_sym_column_name] = alias_sym_column_name,
  [alias_sym_enum_name] = alias_sym_enum_name,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_note_name] = alias_sym_note_name,
  [alias_sym_null_setting] = alias_sym_null_setting,
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_primarykey] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pk] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_notnull] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_unique] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_increment] = {
    .visible = true,
    .named = true,
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
  [sym_column_settings] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_setting] = {
    .visible = false,
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
  [aux_sym_column_settings_repeat1] = {
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
  [alias_sym_null_setting] = {
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
  [8] = {
    [0] = alias_sym_null_setting,
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
  [35] = 35,
  [36] = 36,
  [37] = 4,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 39,
  [42] = 40,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 12,
  [48] = 6,
  [49] = 11,
  [50] = 50,
  [51] = 10,
  [52] = 9,
  [53] = 8,
  [54] = 7,
  [55] = 5,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 60,
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
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 70,
  [94] = 88,
  [95] = 72,
  [96] = 69,
  [97] = 79,
  [98] = 77,
  [99] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(122);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == ',') ADVANCE(158);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'E') ADVANCE(74);
      if (lookahead == 'N') ADVANCE(83);
      if (lookahead == 'P') ADVANCE(97);
      if (lookahead == 'R') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == ']') ADVANCE(159);
      if (lookahead == 'b') ADVANCE(84);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(50);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(36);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(76);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead == '}') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(171);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(57);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(125);
      if (lookahead == '[') ADVANCE(157);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == '}') ADVANCE(154);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(131);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(172);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(173);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == '{') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 't') ADVANCE(144);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(137);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'f') ADVANCE(168);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(167);
      END_STATE();
    case 46:
      if (lookahead == 'g') ADVANCE(146);
      END_STATE();
    case 47:
      if (lookahead == 'g') ADVANCE(41);
      END_STATE();
    case 48:
      if (lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(103);
      if (lookahead == 'u') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(71);
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 54:
      if (lookahead == 'j') ADVANCE(38);
      END_STATE();
    case 55:
      if (lookahead == 'j') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 'k') ADVANCE(161);
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 57:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(162);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 67:
      if (lookahead == 'm') ADVANCE(166);
      END_STATE();
    case 68:
      if (lookahead == 'm') ADVANCE(165);
      END_STATE();
    case 69:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(114);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 88:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 89:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 90:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 91:
      if (lookahead == 'q') ADVANCE(117);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 101:
      if (lookahead == 's') ADVANCE(111);
      END_STATE();
    case 102:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(151);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(96);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 112:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 113:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 119:
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 120:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 121:
      if (lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_varchar);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(99);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(98);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__inline_comment);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_Note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
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
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 11},
  [74] = {.lex_state = 11},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 133},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 11},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 133},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 133},
  [99] = {.lex_state = 2},
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
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_primarykey] = ACTIONS(1),
    [anon_sym_pk] = ACTIONS(1),
    [anon_sym_notnull] = ACTIONS(1),
    [anon_sym_unique] = ACTIONS(1),
    [anon_sym_increment] = ACTIONS(1),
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
    [sym_document] = STATE(90),
    [sym__definition] = STATE(2),
    [sym_project] = STATE(2),
    [sym_table] = STATE(2),
    [sym_enum] = STATE(2),
    [sym_reference] = STATE(2),
    [sym__short_reference] = STATE(16),
    [sym__long_reference] = STATE(16),
    [sym_table_group] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__multiline_comment] = STATE(19),
    [sym_note] = STATE(2),
    [sym__short_note] = STATE(12),
    [sym__long_note] = STATE(12),
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
    STATE(19), 1,
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
      sym__short_note,
      sym__long_note,
    STATE(16), 2,
      sym__short_reference,
      sym__long_reference,
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
    STATE(19), 1,
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
      sym__short_note,
      sym__long_note,
    STATE(16), 2,
      sym__short_reference,
      sym__long_reference,
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
    STATE(6), 1,
      sym__multiline_string,
    STATE(11), 1,
      sym_note_text,
    ACTIONS(55), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(49), 15,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [146] = 2,
    ACTIONS(59), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(57), 16,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [169] = 2,
    ACTIONS(63), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(61), 16,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [192] = 2,
    ACTIONS(67), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(65), 15,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
    ACTIONS(71), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(69), 15,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [236] = 2,
    ACTIONS(75), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(73), 15,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [258] = 2,
    ACTIONS(79), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(77), 15,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [280] = 2,
    ACTIONS(83), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(81), 15,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [302] = 2,
    ACTIONS(87), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(85), 15,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
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
  [324] = 2,
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
  [344] = 2,
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
  [364] = 2,
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
  [384] = 2,
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
  [404] = 2,
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
  [424] = 2,
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
  [444] = 2,
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
  [464] = 2,
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
  [484] = 2,
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
  [504] = 2,
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
  [524] = 2,
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
  [544] = 2,
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
  [564] = 2,
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
  [584] = 2,
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
  [604] = 6,
    ACTIONS(145), 1,
      anon_sym_null,
    ACTIONS(147), 1,
      anon_sym_RBRACK,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    STATE(59), 2,
      sym__unary_setting,
      sym_note,
    ACTIONS(149), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [630] = 5,
    ACTIONS(145), 1,
      anon_sym_null,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    STATE(66), 2,
      sym__unary_setting,
      sym_note,
    ACTIONS(151), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [653] = 3,
    STATE(38), 1,
      sym_type,
    ACTIONS(153), 3,
      anon_sym_bool,
      anon_sym_date,
      anon_sym_int,
    ACTIONS(155), 7,
      anon_sym_boolean,
      anon_sym_datetime,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_text,
      anon_sym_timestamp,
      anon_sym_varchar,
  [671] = 5,
    ACTIONS(157), 1,
      sym__identifier,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(47), 2,
      sym__short_note,
      sym__long_note,
    STATE(32), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [692] = 5,
    ACTIONS(163), 1,
      sym__identifier,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
    ACTIONS(168), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(47), 2,
      sym__short_note,
      sym__long_note,
    STATE(31), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [713] = 5,
    ACTIONS(171), 1,
      sym__identifier,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
    ACTIONS(176), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(47), 2,
      sym__short_note,
      sym__long_note,
    STATE(32), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [734] = 5,
    ACTIONS(179), 1,
      sym__identifier,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(47), 2,
      sym__short_note,
      sym__long_note,
    STATE(35), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [755] = 5,
    ACTIONS(157), 1,
      sym__identifier,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(47), 2,
      sym__short_note,
      sym__long_note,
    STATE(30), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [776] = 5,
    ACTIONS(179), 1,
      sym__identifier,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(47), 2,
      sym__short_note,
      sym__long_note,
    STATE(31), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [797] = 3,
    STATE(45), 1,
      sym_value,
    STATE(46), 2,
      sym__boolean,
      sym__null,
    ACTIONS(187), 6,
      sym__string,
      sym__number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_nil,
  [813] = 6,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 1,
      sym__string,
    ACTIONS(191), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(48), 1,
      sym__multiline_string,
    STATE(49), 1,
      sym_note_text,
    ACTIONS(55), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [834] = 4,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    STATE(44), 1,
      sym_column_settings,
    ACTIONS(193), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [849] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__multiline_string,
    STATE(88), 1,
      sym_note_text,
  [865] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__multiline_string,
    STATE(70), 1,
      sym_note_text,
  [881] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(203), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__multiline_string,
    STATE(94), 1,
      sym_note_text,
  [897] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__multiline_string,
    STATE(93), 1,
      sym_note_text,
  [913] = 2,
    ACTIONS(209), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(207), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [923] = 2,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [932] = 2,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [941] = 2,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [950] = 2,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [959] = 2,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [968] = 2,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [977] = 2,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [986] = 2,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [995] = 2,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1004] = 2,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1013] = 2,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1022] = 2,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1031] = 2,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1040] = 2,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1049] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_column_settings_repeat1,
  [1059] = 3,
    ACTIONS(235), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(58), 1,
      aux_sym_column_settings_repeat1,
  [1069] = 3,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      anon_sym_COLON,
    ACTIONS(245), 1,
      anon_sym_LBRACE,
  [1079] = 3,
    ACTIONS(247), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_column_settings_repeat1,
  [1089] = 3,
    ACTIONS(252), 1,
      sym__identifier,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
  [1099] = 3,
    ACTIONS(258), 1,
      sym__identifier,
    ACTIONS(260), 1,
      anon_sym_COLON,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
  [1109] = 2,
    ACTIONS(264), 1,
      anon_sym_COLON,
    ACTIONS(266), 1,
      anon_sym_LBRACE,
  [1116] = 2,
    ACTIONS(268), 1,
      sym__identifier,
    ACTIONS(270), 1,
      anon_sym_LBRACE,
  [1123] = 1,
    ACTIONS(250), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1128] = 1,
    ACTIONS(272), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1133] = 1,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
  [1137] = 1,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
  [1141] = 1,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
  [1145] = 1,
    ACTIONS(280), 1,
      anon_sym_LF,
  [1149] = 1,
    ACTIONS(282), 1,
      anon_sym_LF,
  [1153] = 1,
    ACTIONS(284), 1,
      sym__identifier,
  [1157] = 1,
    ACTIONS(286), 1,
      sym__identifier,
  [1161] = 1,
    ACTIONS(288), 1,
      anon_sym_LF,
  [1165] = 1,
    ACTIONS(290), 1,
      anon_sym_LF,
  [1169] = 1,
    ACTIONS(292), 1,
      aux_sym__multiline_string_token1,
  [1173] = 1,
    ACTIONS(294), 1,
      anon_sym_STAR_SLASH,
  [1177] = 1,
    ACTIONS(296), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1181] = 1,
    ACTIONS(298), 1,
      sym__identifier,
  [1185] = 1,
    ACTIONS(300), 1,
      anon_sym_RBRACE,
  [1189] = 1,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
  [1193] = 1,
    ACTIONS(304), 1,
      anon_sym_COLON,
  [1197] = 1,
    ACTIONS(306), 1,
      aux_sym__multiline_string_token1,
  [1201] = 1,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
  [1205] = 1,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
  [1209] = 1,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
  [1213] = 1,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
  [1217] = 1,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
  [1221] = 1,
    ACTIONS(318), 1,
      ts_builtin_sym_end,
  [1225] = 1,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
  [1229] = 1,
    ACTIONS(322), 1,
      anon_sym_LBRACE,
  [1233] = 1,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
  [1237] = 1,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
  [1241] = 1,
    ACTIONS(328), 1,
      anon_sym_LF,
  [1245] = 1,
    ACTIONS(330), 1,
      anon_sym_LBRACE,
  [1249] = 1,
    ACTIONS(332), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1253] = 1,
    ACTIONS(334), 1,
      aux_sym__multiline_string_token1,
  [1257] = 1,
    ACTIONS(336), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 146,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 214,
  [SMALL_STATE(9)] = 236,
  [SMALL_STATE(10)] = 258,
  [SMALL_STATE(11)] = 280,
  [SMALL_STATE(12)] = 302,
  [SMALL_STATE(13)] = 324,
  [SMALL_STATE(14)] = 344,
  [SMALL_STATE(15)] = 364,
  [SMALL_STATE(16)] = 384,
  [SMALL_STATE(17)] = 404,
  [SMALL_STATE(18)] = 424,
  [SMALL_STATE(19)] = 444,
  [SMALL_STATE(20)] = 464,
  [SMALL_STATE(21)] = 484,
  [SMALL_STATE(22)] = 504,
  [SMALL_STATE(23)] = 524,
  [SMALL_STATE(24)] = 544,
  [SMALL_STATE(25)] = 564,
  [SMALL_STATE(26)] = 584,
  [SMALL_STATE(27)] = 604,
  [SMALL_STATE(28)] = 630,
  [SMALL_STATE(29)] = 653,
  [SMALL_STATE(30)] = 671,
  [SMALL_STATE(31)] = 692,
  [SMALL_STATE(32)] = 713,
  [SMALL_STATE(33)] = 734,
  [SMALL_STATE(34)] = 755,
  [SMALL_STATE(35)] = 776,
  [SMALL_STATE(36)] = 797,
  [SMALL_STATE(37)] = 813,
  [SMALL_STATE(38)] = 834,
  [SMALL_STATE(39)] = 849,
  [SMALL_STATE(40)] = 865,
  [SMALL_STATE(41)] = 881,
  [SMALL_STATE(42)] = 897,
  [SMALL_STATE(43)] = 913,
  [SMALL_STATE(44)] = 923,
  [SMALL_STATE(45)] = 932,
  [SMALL_STATE(46)] = 941,
  [SMALL_STATE(47)] = 950,
  [SMALL_STATE(48)] = 959,
  [SMALL_STATE(49)] = 968,
  [SMALL_STATE(50)] = 977,
  [SMALL_STATE(51)] = 986,
  [SMALL_STATE(52)] = 995,
  [SMALL_STATE(53)] = 1004,
  [SMALL_STATE(54)] = 1013,
  [SMALL_STATE(55)] = 1022,
  [SMALL_STATE(56)] = 1031,
  [SMALL_STATE(57)] = 1040,
  [SMALL_STATE(58)] = 1049,
  [SMALL_STATE(59)] = 1059,
  [SMALL_STATE(60)] = 1069,
  [SMALL_STATE(61)] = 1079,
  [SMALL_STATE(62)] = 1089,
  [SMALL_STATE(63)] = 1099,
  [SMALL_STATE(64)] = 1109,
  [SMALL_STATE(65)] = 1116,
  [SMALL_STATE(66)] = 1123,
  [SMALL_STATE(67)] = 1128,
  [SMALL_STATE(68)] = 1133,
  [SMALL_STATE(69)] = 1137,
  [SMALL_STATE(70)] = 1141,
  [SMALL_STATE(71)] = 1145,
  [SMALL_STATE(72)] = 1149,
  [SMALL_STATE(73)] = 1153,
  [SMALL_STATE(74)] = 1157,
  [SMALL_STATE(75)] = 1161,
  [SMALL_STATE(76)] = 1165,
  [SMALL_STATE(77)] = 1169,
  [SMALL_STATE(78)] = 1173,
  [SMALL_STATE(79)] = 1177,
  [SMALL_STATE(80)] = 1181,
  [SMALL_STATE(81)] = 1185,
  [SMALL_STATE(82)] = 1189,
  [SMALL_STATE(83)] = 1193,
  [SMALL_STATE(84)] = 1197,
  [SMALL_STATE(85)] = 1201,
  [SMALL_STATE(86)] = 1205,
  [SMALL_STATE(87)] = 1209,
  [SMALL_STATE(88)] = 1213,
  [SMALL_STATE(89)] = 1217,
  [SMALL_STATE(90)] = 1221,
  [SMALL_STATE(91)] = 1225,
  [SMALL_STATE(92)] = 1229,
  [SMALL_STATE(93)] = 1233,
  [SMALL_STATE(94)] = 1237,
  [SMALL_STATE(95)] = 1241,
  [SMALL_STATE(96)] = 1245,
  [SMALL_STATE(97)] = 1249,
  [SMALL_STATE(98)] = 1253,
  [SMALL_STATE(99)] = 1257,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(73),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(74),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(80),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(62),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(65),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(71),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(63),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string, 5),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_text, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 5, .production_id = 5),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 5, .production_id = 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 3),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, .production_id = 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5, .production_id = 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 2),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(83),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(60),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(29),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(60),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, .production_id = 6),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 6),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 6),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, .production_id = 7),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 7),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [247] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2), SHIFT_REPEAT(28),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_setting, 1, .production_id = 8),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [318] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
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
