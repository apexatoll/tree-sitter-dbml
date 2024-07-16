#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
#define ALIAS_COUNT 8
#define TOKEN_COUNT 48
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
  anon_sym_default = 36,
  anon_sym_enum = 37,
  anon_sym_Enum = 38,
  anon_sym_ref = 39,
  anon_sym_Ref = 40,
  anon_sym_tablegroup = 41,
  anon_sym_TableGroup = 42,
  sym__inline_comment = 43,
  anon_sym_SLASH_STAR = 44,
  anon_sym_STAR_SLASH = 45,
  anon_sym_note = 46,
  anon_sym_Note = 47,
  sym_document = 48,
  sym__multiline_string = 49,
  sym__boolean = 50,
  sym__null = 51,
  sym_type = 52,
  sym_key_value = 53,
  sym_value = 54,
  sym__definition = 55,
  sym_project = 56,
  sym__project_row = 57,
  sym_table = 58,
  sym__table_row = 59,
  sym_column = 60,
  sym_column_settings = 61,
  sym__unary_setting = 62,
  sym__binary_setting = 63,
  sym_default_setting = 64,
  sym_enum = 65,
  sym_reference = 66,
  sym__short_reference = 67,
  sym__long_reference = 68,
  sym_table_group = 69,
  sym_comment = 70,
  sym__multiline_comment = 71,
  sym_note = 72,
  sym_note_text = 73,
  sym__short_note = 74,
  sym__long_note = 75,
  aux_sym_document_repeat1 = 76,
  aux_sym_project_repeat1 = 77,
  aux_sym_table_repeat1 = 78,
  aux_sym_column_settings_repeat1 = 79,
  alias_sym_column_name = 80,
  alias_sym_enum_name = 81,
  alias_sym_key = 82,
  alias_sym_note_name = 83,
  alias_sym_null_setting = 84,
  alias_sym_reference_name = 85,
  alias_sym_table_group_name = 86,
  alias_sym_table_name = 87,
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
  [anon_sym_default] = "default",
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
  [sym__binary_setting] = "_binary_setting",
  [sym_default_setting] = "default_setting",
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
  [anon_sym_default] = anon_sym_default,
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
  [sym__binary_setting] = sym__binary_setting,
  [sym_default_setting] = sym_default_setting,
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
  [anon_sym_default] = {
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
  [sym_column_settings] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_setting] = {
    .visible = false,
    .named = true,
  },
  [sym__binary_setting] = {
    .visible = false,
    .named = true,
  },
  [sym_default_setting] = {
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
  [37] = 37,
  [38] = 4,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 41,
  [44] = 42,
  [45] = 45,
  [46] = 11,
  [47] = 47,
  [48] = 12,
  [49] = 6,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 10,
  [54] = 9,
  [55] = 8,
  [56] = 56,
  [57] = 7,
  [58] = 5,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 61,
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
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 79,
  [97] = 74,
  [98] = 87,
  [99] = 88,
  [100] = 75,
  [101] = 72,
  [102] = 83,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(127);
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == '*') ADVANCE(10);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(100);
      if (lookahead == 'R') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(6);
      if (lookahead == '\'') ADVANCE(8);
      if (lookahead == ',') ADVANCE(163);
      if (lookahead == 'N') ADVANCE(130);
      if (lookahead == '[') ADVANCE(162);
      if (lookahead == ']') ADVANCE(164);
      if (lookahead == 'n') ADVANCE(131);
      if (lookahead == '}') ADVANCE(159);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '\'') ADVANCE(136);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(178);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(179);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '{') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(66);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(69);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 't') ADVANCE(149);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(108);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 45:
      if (lookahead == 'f') ADVANCE(174);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == 'u') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 56:
      if (lookahead == 'j') ADVANCE(38);
      END_STATE();
    case 57:
      if (lookahead == 'j') ADVANCE(44);
      END_STATE();
    case 58:
      if (lookahead == 'k') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(172);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(171);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(153);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 94:
      if (lookahead == 'q') ADVANCE(122);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 104:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(169);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 124:
      if (lookahead == 'x') ADVANCE(107);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 126:
      if (lookahead == 'y') ADVANCE(165);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '"') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_varchar);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(101);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__inline_comment);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_Note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
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
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
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
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 138},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 138},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 11},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 138},
  [102] = {.lex_state = 2},
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
    [anon_sym_default] = ACTIONS(1),
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
    [sym_document] = STATE(80),
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(16),
    [sym__long_reference] = STATE(16),
    [sym_table_group] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__multiline_comment] = STATE(25),
    [sym_note] = STATE(3),
    [sym__short_note] = STATE(12),
    [sym__long_note] = STATE(12),
    [aux_sym_document_repeat1] = STATE(3),
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
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym__inline_comment,
    ACTIONS(41), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym__multiline_comment,
    ACTIONS(23), 2,
      anon_sym_project,
      anon_sym_Project,
    ACTIONS(26), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(29), 2,
      anon_sym_enum,
      anon_sym_Enum,
    ACTIONS(32), 2,
      anon_sym_ref,
      anon_sym_Ref,
    ACTIONS(35), 2,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
    ACTIONS(44), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    STATE(16), 2,
      sym__short_reference,
      sym__long_reference,
    STATE(2), 9,
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
    ACTIONS(15), 1,
      sym__inline_comment,
    ACTIONS(17), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(25), 1,
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
    STATE(2), 9,
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
  [324] = 7,
    ACTIONS(89), 1,
      anon_sym_null,
    ACTIONS(91), 1,
      anon_sym_RBRACK,
    ACTIONS(95), 1,
      anon_sym_default,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    STATE(60), 4,
      sym__unary_setting,
      sym__binary_setting,
      sym_default_setting,
      sym_note,
    ACTIONS(93), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [355] = 2,
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
  [375] = 2,
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
  [395] = 2,
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
  [415] = 2,
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
  [435] = 6,
    ACTIONS(89), 1,
      anon_sym_null,
    ACTIONS(95), 1,
      anon_sym_default,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    STATE(68), 4,
      sym__unary_setting,
      sym__binary_setting,
      sym_default_setting,
      sym_note,
    ACTIONS(113), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
  [463] = 2,
    ACTIONS(117), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(115), 13,
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
  [483] = 2,
    ACTIONS(121), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(119), 13,
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
  [503] = 2,
    ACTIONS(125), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(123), 13,
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
  [523] = 2,
    ACTIONS(129), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(127), 13,
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
  [543] = 2,
    ACTIONS(133), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(131), 13,
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
  [563] = 2,
    ACTIONS(137), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(135), 13,
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
  [583] = 2,
    ACTIONS(141), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(139), 13,
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
  [603] = 2,
    ACTIONS(145), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(143), 13,
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
  [623] = 2,
    ACTIONS(149), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(147), 13,
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
  [643] = 2,
    ACTIONS(153), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(151), 13,
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
  [663] = 3,
    STATE(40), 1,
      sym_type,
    ACTIONS(155), 3,
      anon_sym_bool,
      anon_sym_date,
      anon_sym_int,
    ACTIONS(157), 7,
      anon_sym_boolean,
      anon_sym_datetime,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_text,
      anon_sym_timestamp,
      anon_sym_varchar,
  [681] = 5,
    ACTIONS(159), 1,
      sym__identifier,
    ACTIONS(161), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 2,
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
  [702] = 5,
    ACTIONS(165), 1,
      sym__identifier,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(48), 2,
      sym__short_note,
      sym__long_note,
    STATE(34), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [723] = 5,
    ACTIONS(169), 1,
      sym__identifier,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 2,
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
  [744] = 5,
    ACTIONS(159), 1,
      sym__identifier,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(48), 2,
      sym__short_note,
      sym__long_note,
    STATE(35), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [765] = 5,
    ACTIONS(165), 1,
      sym__identifier,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 2,
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
  [786] = 5,
    ACTIONS(181), 1,
      sym__identifier,
    ACTIONS(184), 1,
      anon_sym_RBRACE,
    ACTIONS(186), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(48), 2,
      sym__short_note,
      sym__long_note,
    STATE(35), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [807] = 3,
    STATE(65), 1,
      sym_value,
    STATE(39), 2,
      sym__boolean,
      sym__null,
    ACTIONS(189), 6,
      sym__string,
      sym__number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_nil,
  [823] = 3,
    STATE(52), 1,
      sym_value,
    STATE(39), 2,
      sym__boolean,
      sym__null,
    ACTIONS(189), 6,
      sym__string,
      sym__number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_nil,
  [839] = 6,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    ACTIONS(191), 1,
      sym__string,
    ACTIONS(193), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(46), 1,
      sym_note_text,
    STATE(49), 1,
      sym__multiline_string,
    ACTIONS(55), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [860] = 2,
    ACTIONS(195), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(197), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [871] = 4,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    STATE(51), 1,
      sym_column_settings,
    ACTIONS(199), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [886] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__multiline_string,
    STATE(79), 1,
      sym_note_text,
  [902] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__multiline_string,
    STATE(74), 1,
      sym_note_text,
  [918] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__multiline_string,
    STATE(96), 1,
      sym_note_text,
  [934] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__multiline_string,
    STATE(97), 1,
      sym_note_text,
  [950] = 2,
    ACTIONS(215), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(213), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [960] = 2,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [969] = 2,
    ACTIONS(219), 1,
      anon_sym_RBRACE,
    ACTIONS(217), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [978] = 2,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [987] = 2,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [996] = 2,
    ACTIONS(223), 1,
      anon_sym_RBRACE,
    ACTIONS(221), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1005] = 2,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(225), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1014] = 2,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1023] = 2,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1032] = 2,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1041] = 2,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1050] = 2,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(233), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1059] = 2,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    ACTIONS(67), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1068] = 2,
    ACTIONS(57), 1,
      anon_sym_RBRACE,
    ACTIONS(59), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1077] = 3,
    ACTIONS(237), 1,
      anon_sym_COMMA,
    ACTIONS(240), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_column_settings_repeat1,
  [1087] = 3,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(244), 1,
      anon_sym_RBRACK,
    STATE(63), 1,
      aux_sym_column_settings_repeat1,
  [1097] = 3,
    ACTIONS(246), 1,
      sym__identifier,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
  [1107] = 3,
    ACTIONS(252), 1,
      sym__identifier,
    ACTIONS(254), 1,
      anon_sym_COLON,
    ACTIONS(256), 1,
      anon_sym_LBRACE,
  [1117] = 3,
    ACTIONS(242), 1,
      anon_sym_COMMA,
    ACTIONS(258), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_column_settings_repeat1,
  [1127] = 3,
    ACTIONS(260), 1,
      sym__identifier,
    ACTIONS(262), 1,
      anon_sym_COLON,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
  [1137] = 1,
    ACTIONS(266), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1142] = 1,
    ACTIONS(268), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1147] = 2,
    ACTIONS(270), 1,
      anon_sym_COLON,
    ACTIONS(272), 1,
      anon_sym_LBRACE,
  [1154] = 1,
    ACTIONS(240), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1159] = 2,
    ACTIONS(274), 1,
      sym__identifier,
    ACTIONS(276), 1,
      anon_sym_LBRACE,
  [1166] = 1,
    ACTIONS(278), 1,
      sym__identifier,
  [1170] = 1,
    ACTIONS(280), 1,
      anon_sym_RBRACE,
  [1174] = 1,
    ACTIONS(282), 1,
      aux_sym__multiline_string_token1,
  [1178] = 1,
    ACTIONS(284), 1,
      anon_sym_COLON,
  [1182] = 1,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
  [1186] = 1,
    ACTIONS(288), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1190] = 1,
    ACTIONS(290), 1,
      anon_sym_STAR_SLASH,
  [1194] = 1,
    ACTIONS(292), 1,
      anon_sym_LF,
  [1198] = 1,
    ACTIONS(294), 1,
      anon_sym_COLON,
  [1202] = 1,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
  [1206] = 1,
    ACTIONS(298), 1,
      ts_builtin_sym_end,
  [1210] = 1,
    ACTIONS(300), 1,
      anon_sym_LBRACE,
  [1214] = 1,
    ACTIONS(302), 1,
      sym__identifier,
  [1218] = 1,
    ACTIONS(304), 1,
      anon_sym_LF,
  [1222] = 1,
    ACTIONS(306), 1,
      anon_sym_LF,
  [1226] = 1,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
  [1230] = 1,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
  [1234] = 1,
    ACTIONS(312), 1,
      anon_sym_LF,
  [1238] = 1,
    ACTIONS(314), 1,
      anon_sym_LBRACE,
  [1242] = 1,
    ACTIONS(316), 1,
      aux_sym__multiline_string_token1,
  [1246] = 1,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
  [1250] = 1,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
  [1254] = 1,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
  [1258] = 1,
    ACTIONS(324), 1,
      sym__identifier,
  [1262] = 1,
    ACTIONS(326), 1,
      anon_sym_LBRACE,
  [1266] = 1,
    ACTIONS(328), 1,
      anon_sym_LBRACE,
  [1270] = 1,
    ACTIONS(330), 1,
      anon_sym_RBRACE,
  [1274] = 1,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
  [1278] = 1,
    ACTIONS(334), 1,
      anon_sym_LF,
  [1282] = 1,
    ACTIONS(336), 1,
      anon_sym_LBRACE,
  [1286] = 1,
    ACTIONS(338), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1290] = 1,
    ACTIONS(340), 1,
      aux_sym__multiline_string_token1,
  [1294] = 1,
    ACTIONS(342), 1,
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
  [SMALL_STATE(14)] = 355,
  [SMALL_STATE(15)] = 375,
  [SMALL_STATE(16)] = 395,
  [SMALL_STATE(17)] = 415,
  [SMALL_STATE(18)] = 435,
  [SMALL_STATE(19)] = 463,
  [SMALL_STATE(20)] = 483,
  [SMALL_STATE(21)] = 503,
  [SMALL_STATE(22)] = 523,
  [SMALL_STATE(23)] = 543,
  [SMALL_STATE(24)] = 563,
  [SMALL_STATE(25)] = 583,
  [SMALL_STATE(26)] = 603,
  [SMALL_STATE(27)] = 623,
  [SMALL_STATE(28)] = 643,
  [SMALL_STATE(29)] = 663,
  [SMALL_STATE(30)] = 681,
  [SMALL_STATE(31)] = 702,
  [SMALL_STATE(32)] = 723,
  [SMALL_STATE(33)] = 744,
  [SMALL_STATE(34)] = 765,
  [SMALL_STATE(35)] = 786,
  [SMALL_STATE(36)] = 807,
  [SMALL_STATE(37)] = 823,
  [SMALL_STATE(38)] = 839,
  [SMALL_STATE(39)] = 860,
  [SMALL_STATE(40)] = 871,
  [SMALL_STATE(41)] = 886,
  [SMALL_STATE(42)] = 902,
  [SMALL_STATE(43)] = 918,
  [SMALL_STATE(44)] = 934,
  [SMALL_STATE(45)] = 950,
  [SMALL_STATE(46)] = 960,
  [SMALL_STATE(47)] = 969,
  [SMALL_STATE(48)] = 978,
  [SMALL_STATE(49)] = 987,
  [SMALL_STATE(50)] = 996,
  [SMALL_STATE(51)] = 1005,
  [SMALL_STATE(52)] = 1014,
  [SMALL_STATE(53)] = 1023,
  [SMALL_STATE(54)] = 1032,
  [SMALL_STATE(55)] = 1041,
  [SMALL_STATE(56)] = 1050,
  [SMALL_STATE(57)] = 1059,
  [SMALL_STATE(58)] = 1068,
  [SMALL_STATE(59)] = 1077,
  [SMALL_STATE(60)] = 1087,
  [SMALL_STATE(61)] = 1097,
  [SMALL_STATE(62)] = 1107,
  [SMALL_STATE(63)] = 1117,
  [SMALL_STATE(64)] = 1127,
  [SMALL_STATE(65)] = 1137,
  [SMALL_STATE(66)] = 1142,
  [SMALL_STATE(67)] = 1147,
  [SMALL_STATE(68)] = 1154,
  [SMALL_STATE(69)] = 1159,
  [SMALL_STATE(70)] = 1166,
  [SMALL_STATE(71)] = 1170,
  [SMALL_STATE(72)] = 1174,
  [SMALL_STATE(73)] = 1178,
  [SMALL_STATE(74)] = 1182,
  [SMALL_STATE(75)] = 1186,
  [SMALL_STATE(76)] = 1190,
  [SMALL_STATE(77)] = 1194,
  [SMALL_STATE(78)] = 1198,
  [SMALL_STATE(79)] = 1202,
  [SMALL_STATE(80)] = 1206,
  [SMALL_STATE(81)] = 1210,
  [SMALL_STATE(82)] = 1214,
  [SMALL_STATE(83)] = 1218,
  [SMALL_STATE(84)] = 1222,
  [SMALL_STATE(85)] = 1226,
  [SMALL_STATE(86)] = 1230,
  [SMALL_STATE(87)] = 1234,
  [SMALL_STATE(88)] = 1238,
  [SMALL_STATE(89)] = 1242,
  [SMALL_STATE(90)] = 1246,
  [SMALL_STATE(91)] = 1250,
  [SMALL_STATE(92)] = 1254,
  [SMALL_STATE(93)] = 1258,
  [SMALL_STATE(94)] = 1262,
  [SMALL_STATE(95)] = 1266,
  [SMALL_STATE(96)] = 1270,
  [SMALL_STATE(97)] = 1274,
  [SMALL_STATE(98)] = 1278,
  [SMALL_STATE(99)] = 1282,
  [SMALL_STATE(100)] = 1286,
  [SMALL_STATE(101)] = 1290,
  [SMALL_STATE(102)] = 1294,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(82),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(70),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(64),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(77),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
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
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, .production_id = 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(78),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(62),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(29),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(62),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, .production_id = 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 6),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 6),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 6),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, .production_id = 7),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 7),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2), SHIFT_REPEAT(18),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_setting, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_setting, 1, .production_id = 8),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [298] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
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
