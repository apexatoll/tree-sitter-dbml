#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 132
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 96
#define ALIAS_COUNT 10
#define TOKEN_COUNT 53
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 12

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
  anon_sym_ref = 37,
  anon_sym_enum = 38,
  anon_sym_Enum = 39,
  anon_sym_Ref = 40,
  anon_sym_LT = 41,
  anon_sym_GT = 42,
  anon_sym_DASH = 43,
  anon_sym_LT_GT = 44,
  anon_sym_DOT = 45,
  anon_sym_tablegroup = 46,
  anon_sym_TableGroup = 47,
  sym__inline_comment = 48,
  anon_sym_SLASH_STAR = 49,
  anon_sym_STAR_SLASH = 50,
  anon_sym_note = 51,
  anon_sym_Note = 52,
  sym_document = 53,
  sym__multiline_string = 54,
  sym__boolean = 55,
  sym__null = 56,
  sym_type = 57,
  sym_key_value = 58,
  sym_value = 59,
  sym__definition = 60,
  sym_project = 61,
  sym__project_row = 62,
  sym_table = 63,
  sym__table_row = 64,
  sym_column = 65,
  sym_column_settings = 66,
  sym__unary_setting = 67,
  sym__binary_setting = 68,
  sym_default_setting = 69,
  sym__inline_reference = 70,
  sym_enum = 71,
  sym_reference = 72,
  sym__short_reference = 73,
  sym__long_reference = 74,
  sym__relationship = 75,
  sym_one_to_many = 76,
  sym_inline_one_to_many = 77,
  sym_many_to_one = 78,
  sym_inline_many_to_one = 79,
  sym_one_to_one = 80,
  sym_inline_one_to_one = 81,
  sym_many_to_many = 82,
  sym_inline_many_to_many = 83,
  sym__column_reference = 84,
  sym_table_group = 85,
  sym_comment = 86,
  sym__multiline_comment = 87,
  sym_note = 88,
  sym_note_text = 89,
  sym__short_note = 90,
  sym__long_note = 91,
  aux_sym_document_repeat1 = 92,
  aux_sym_project_repeat1 = 93,
  aux_sym_table_repeat1 = 94,
  aux_sym_column_settings_repeat1 = 95,
  alias_sym_column_name = 96,
  alias_sym_enum_name = 97,
  alias_sym_from_column = 98,
  alias_sym_key = 99,
  alias_sym_note_name = 100,
  alias_sym_null_setting = 101,
  alias_sym_project_name = 102,
  alias_sym_reference_name = 103,
  alias_sym_schema_name = 104,
  alias_sym_table_group_name = 105,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "table_name",
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
  [anon_sym_ref] = "ref",
  [anon_sym_enum] = "enum",
  [anon_sym_Enum] = "Enum",
  [anon_sym_Ref] = "Ref",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DASH] = "-",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_DOT] = ".",
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
  [sym__inline_reference] = "_inline_reference",
  [sym_enum] = "enum",
  [sym_reference] = "reference",
  [sym__short_reference] = "_short_reference",
  [sym__long_reference] = "_long_reference",
  [sym__relationship] = "_relationship",
  [sym_one_to_many] = "one_to_many",
  [sym_inline_one_to_many] = "inline_one_to_many",
  [sym_many_to_one] = "many_to_one",
  [sym_inline_many_to_one] = "inline_many_to_one",
  [sym_one_to_one] = "one_to_one",
  [sym_inline_one_to_one] = "inline_one_to_one",
  [sym_many_to_many] = "many_to_many",
  [sym_inline_many_to_many] = "inline_many_to_many",
  [sym__column_reference] = "to_column",
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
  [alias_sym_from_column] = "from_column",
  [alias_sym_key] = "key",
  [alias_sym_note_name] = "note_name",
  [alias_sym_null_setting] = "null_setting",
  [alias_sym_project_name] = "project_name",
  [alias_sym_reference_name] = "reference_name",
  [alias_sym_schema_name] = "schema_name",
  [alias_sym_table_group_name] = "table_group_name",
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
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_Enum] = anon_sym_Enum,
  [anon_sym_Ref] = anon_sym_Ref,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [sym__inline_reference] = sym__inline_reference,
  [sym_enum] = sym_enum,
  [sym_reference] = sym_reference,
  [sym__short_reference] = sym__short_reference,
  [sym__long_reference] = sym__long_reference,
  [sym__relationship] = sym__relationship,
  [sym_one_to_many] = sym_one_to_many,
  [sym_inline_one_to_many] = sym_inline_one_to_many,
  [sym_many_to_one] = sym_many_to_one,
  [sym_inline_many_to_one] = sym_inline_many_to_one,
  [sym_one_to_one] = sym_one_to_one,
  [sym_inline_one_to_one] = sym_inline_one_to_one,
  [sym_many_to_many] = sym_many_to_many,
  [sym_inline_many_to_many] = sym_inline_many_to_many,
  [sym__column_reference] = sym__column_reference,
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
  [alias_sym_from_column] = alias_sym_from_column,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_note_name] = alias_sym_note_name,
  [alias_sym_null_setting] = alias_sym_null_setting,
  [alias_sym_project_name] = alias_sym_project_name,
  [alias_sym_reference_name] = alias_sym_reference_name,
  [alias_sym_schema_name] = alias_sym_schema_name,
  [alias_sym_table_group_name] = alias_sym_table_group_name,
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
  [anon_sym_ref] = {
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
  [anon_sym_Ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
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
  [sym__inline_reference] = {
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
  [sym__relationship] = {
    .visible = false,
    .named = true,
  },
  [sym_one_to_many] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_one_to_many] = {
    .visible = true,
    .named = true,
  },
  [sym_many_to_one] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_many_to_one] = {
    .visible = true,
    .named = true,
  },
  [sym_one_to_one] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_one_to_one] = {
    .visible = true,
    .named = true,
  },
  [sym_many_to_many] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_many_to_many] = {
    .visible = true,
    .named = true,
  },
  [sym__column_reference] = {
    .visible = true,
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
  [alias_sym_from_column] = {
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
  [alias_sym_project_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_reference_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_schema_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_table_group_name] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_project_name,
  },
  [2] = {
    [1] = alias_sym_reference_name,
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
    [2] = alias_sym_column_name,
  },
  [8] = {
    [0] = alias_sym_from_column,
  },
  [9] = {
    [0] = alias_sym_key,
  },
  [10] = {
    [0] = alias_sym_null_setting,
  },
  [11] = {
    [0] = alias_sym_schema_name,
    [4] = alias_sym_column_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__column_reference, 2,
    sym__column_reference,
    alias_sym_from_column,
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
  [44] = 6,
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
  [55] = 53,
  [56] = 52,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 13,
  [64] = 9,
  [65] = 15,
  [66] = 16,
  [67] = 14,
  [68] = 10,
  [69] = 11,
  [70] = 7,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 72,
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
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 117,
  [126] = 123,
  [127] = 102,
  [128] = 95,
  [129] = 105,
  [130] = 122,
  [131] = 116,
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
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == '<') ADVANCE(175);
      if (lookahead == '>') ADVANCE(176);
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
      if (lookahead == '\n') ADVANCE(182);
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
      if (lookahead == 'e') ADVANCE(185);
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
      if (lookahead == '*') ADVANCE(183);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(184);
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
      if (lookahead == 'e') ADVANCE(187);
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
      if (lookahead == 'f') ADVANCE(171);
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
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(172);
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
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(180);
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
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(186);
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
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(178);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__inline_comment);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 188:
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
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 11},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 11},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 11},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 11},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 11},
  [87] = {.lex_state = 11},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 11},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 11},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 138},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 11},
  [115] = {.lex_state = 2},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 11},
  [121] = {.lex_state = 11},
  [122] = {.lex_state = 138},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 11},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 138},
  [131] = {.lex_state = 2},
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
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_Enum] = ACTIONS(1),
    [anon_sym_Ref] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_tablegroup] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
    [sym__inline_comment] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_Note] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(97),
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(32),
    [sym__long_reference] = STATE(32),
    [sym_table_group] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__multiline_comment] = STATE(28),
    [sym_note] = STATE(3),
    [sym__short_note] = STATE(13),
    [sym__long_note] = STATE(13),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_project] = ACTIONS(5),
    [anon_sym_Project] = ACTIONS(5),
    [anon_sym_table] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(7),
    [anon_sym_ref] = ACTIONS(9),
    [anon_sym_enum] = ACTIONS(11),
    [anon_sym_Enum] = ACTIONS(11),
    [anon_sym_Ref] = ACTIONS(9),
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
    STATE(28), 1,
      sym__multiline_comment,
    ACTIONS(23), 2,
      anon_sym_project,
      anon_sym_Project,
    ACTIONS(26), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(29), 2,
      anon_sym_ref,
      anon_sym_Ref,
    ACTIONS(32), 2,
      anon_sym_enum,
      anon_sym_Enum,
    ACTIONS(35), 2,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
    ACTIONS(44), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(13), 2,
      sym__short_note,
      sym__long_note,
    STATE(32), 2,
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
    STATE(28), 1,
      sym__multiline_comment,
    ACTIONS(5), 2,
      anon_sym_project,
      anon_sym_Project,
    ACTIONS(7), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(9), 2,
      anon_sym_ref,
      anon_sym_Ref,
    ACTIONS(11), 2,
      anon_sym_enum,
      anon_sym_Enum,
    ACTIONS(13), 2,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(13), 2,
      sym__short_note,
      sym__long_note,
    STATE(32), 2,
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
  [112] = 3,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(51), 3,
      anon_sym_table,
      anon_sym_Table,
      anon_sym_LT,
    ACTIONS(49), 19,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_LT_GT,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [142] = 2,
    ACTIONS(57), 3,
      anon_sym_table,
      anon_sym_Table,
      anon_sym_LT,
    ACTIONS(55), 19,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_GT,
      anon_sym_DASH,
      anon_sym_LT_GT,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [169] = 6,
    ACTIONS(61), 1,
      sym__string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(7), 1,
      sym__multiline_string,
    STATE(11), 1,
      sym_note_text,
    ACTIONS(65), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(59), 15,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [203] = 2,
    ACTIONS(69), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(67), 16,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [226] = 8,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(73), 1,
      anon_sym_RBRACK,
    ACTIONS(77), 1,
      anon_sym_default,
    ACTIONS(79), 1,
      anon_sym_ref,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(13), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(75), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
    STATE(73), 5,
      sym__unary_setting,
      sym__binary_setting,
      sym_default_setting,
      sym__inline_reference,
      sym_note,
  [261] = 2,
    ACTIONS(83), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(81), 16,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [284] = 2,
    ACTIONS(87), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(85), 15,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
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
    ACTIONS(89), 15,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [328] = 7,
    ACTIONS(71), 1,
      anon_sym_null,
    ACTIONS(77), 1,
      anon_sym_default,
    ACTIONS(79), 1,
      anon_sym_ref,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(13), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(93), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
    STATE(79), 5,
      sym__unary_setting,
      sym__binary_setting,
      sym_default_setting,
      sym__inline_reference,
      sym_note,
  [360] = 2,
    ACTIONS(97), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(95), 15,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [382] = 2,
    ACTIONS(101), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(99), 15,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [404] = 2,
    ACTIONS(105), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(103), 15,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [426] = 2,
    ACTIONS(109), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(107), 15,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [448] = 2,
    ACTIONS(113), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(111), 14,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [469] = 2,
    ACTIONS(117), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(115), 14,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [490] = 2,
    ACTIONS(121), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(119), 14,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [511] = 2,
    ACTIONS(125), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(123), 14,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [532] = 2,
    ACTIONS(129), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(127), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [552] = 2,
    ACTIONS(133), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(131), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [572] = 2,
    ACTIONS(137), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(135), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [592] = 2,
    ACTIONS(141), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(139), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [612] = 2,
    ACTIONS(145), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(143), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [632] = 2,
    ACTIONS(149), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(147), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [652] = 2,
    ACTIONS(153), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(151), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [672] = 2,
    ACTIONS(157), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(155), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [692] = 2,
    ACTIONS(161), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(159), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [712] = 2,
    ACTIONS(165), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(163), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [732] = 2,
    ACTIONS(169), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(167), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [752] = 2,
    ACTIONS(173), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(171), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [772] = 2,
    ACTIONS(177), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(175), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [792] = 2,
    ACTIONS(181), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(179), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [812] = 3,
    STATE(50), 1,
      sym_type,
    ACTIONS(183), 3,
      anon_sym_bool,
      anon_sym_date,
      anon_sym_int,
    ACTIONS(185), 7,
      anon_sym_boolean,
      anon_sym_datetime,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_text,
      anon_sym_timestamp,
      anon_sym_varchar,
  [830] = 5,
    ACTIONS(187), 1,
      sym__identifier,
    ACTIONS(190), 1,
      anon_sym_RBRACE,
    ACTIONS(192), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(63), 2,
      sym__short_note,
      sym__long_note,
    STATE(36), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [851] = 5,
    ACTIONS(195), 1,
      sym__identifier,
    ACTIONS(198), 1,
      anon_sym_RBRACE,
    ACTIONS(200), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(63), 2,
      sym__short_note,
      sym__long_note,
    STATE(37), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [872] = 5,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(205), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(63), 2,
      sym__short_note,
      sym__long_note,
    STATE(41), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [893] = 5,
    ACTIONS(209), 1,
      sym__identifier,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(63), 2,
      sym__short_note,
      sym__long_note,
    STATE(36), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [914] = 5,
    ACTIONS(209), 1,
      sym__identifier,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(63), 2,
      sym__short_note,
      sym__long_note,
    STATE(39), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [935] = 5,
    ACTIONS(203), 1,
      sym__identifier,
    ACTIONS(215), 1,
      anon_sym_RBRACE,
    ACTIONS(207), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(63), 2,
      sym__short_note,
      sym__long_note,
    STATE(37), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [956] = 3,
    STATE(90), 1,
      sym_value,
    STATE(51), 2,
      sym__boolean,
      sym__null,
    ACTIONS(217), 6,
      sym__string,
      sym__number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_nil,
  [972] = 3,
    STATE(61), 1,
      sym_value,
    STATE(51), 2,
      sym__boolean,
      sym__null,
    ACTIONS(217), 6,
      sym__string,
      sym__number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_nil,
  [988] = 6,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 1,
      sym__string,
    ACTIONS(221), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(69), 1,
      sym_note_text,
    STATE(70), 1,
      sym__multiline_string,
    ACTIONS(65), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1009] = 5,
    ACTIONS(223), 1,
      anon_sym_LT,
    ACTIONS(225), 1,
      anon_sym_GT,
    ACTIONS(227), 1,
      anon_sym_DASH,
    ACTIONS(229), 1,
      anon_sym_LT_GT,
    STATE(80), 4,
      sym_inline_one_to_many,
      sym_inline_many_to_one,
      sym_inline_one_to_one,
      sym_inline_many_to_many,
  [1028] = 3,
    ACTIONS(231), 1,
      sym__identifier,
    STATE(57), 1,
      sym__column_reference,
    STATE(119), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1042] = 3,
    ACTIONS(231), 1,
      sym__identifier,
    STATE(57), 1,
      sym__column_reference,
    STATE(24), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1056] = 3,
    ACTIONS(231), 1,
      sym__identifier,
    STATE(57), 1,
      sym__column_reference,
    STATE(111), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1070] = 3,
    ACTIONS(231), 1,
      sym__identifier,
    STATE(57), 1,
      sym__column_reference,
    STATE(31), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1084] = 4,
    ACTIONS(235), 1,
      anon_sym_RBRACE,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    STATE(58), 1,
      sym_column_settings,
    ACTIONS(233), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1099] = 2,
    ACTIONS(239), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(241), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1110] = 5,
    ACTIONS(61), 1,
      sym__string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(243), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym__multiline_string,
    STATE(123), 1,
      sym_note_text,
  [1126] = 5,
    ACTIONS(61), 1,
      sym__string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym__multiline_string,
    STATE(125), 1,
      sym_note_text,
  [1142] = 2,
    ACTIONS(249), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(247), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1152] = 5,
    ACTIONS(61), 1,
      sym__string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym__multiline_string,
    STATE(117), 1,
      sym_note_text,
  [1168] = 5,
    ACTIONS(61), 1,
      sym__string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym__multiline_string,
    STATE(126), 1,
      sym_note_text,
  [1184] = 4,
    ACTIONS(255), 1,
      anon_sym_LT,
    ACTIONS(257), 1,
      anon_sym_GT,
    ACTIONS(259), 1,
      anon_sym_DASH,
    ACTIONS(261), 1,
      anon_sym_LT_GT,
  [1197] = 2,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1206] = 2,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    ACTIONS(267), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1215] = 2,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1224] = 2,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1233] = 2,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    ACTIONS(279), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1242] = 2,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1251] = 2,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    ACTIONS(83), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1260] = 2,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1269] = 2,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1278] = 2,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1287] = 2,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1296] = 2,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1305] = 2,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1314] = 3,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_column_settings_repeat1,
  [1324] = 3,
    ACTIONS(288), 1,
      sym__identifier,
    ACTIONS(290), 1,
      anon_sym_COLON,
    ACTIONS(292), 1,
      anon_sym_LBRACE,
  [1334] = 3,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(296), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      aux_sym_column_settings_repeat1,
  [1344] = 3,
    ACTIONS(294), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      aux_sym_column_settings_repeat1,
  [1354] = 3,
    ACTIONS(300), 1,
      sym__identifier,
    ACTIONS(302), 1,
      anon_sym_COLON,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
  [1364] = 3,
    ACTIONS(306), 1,
      sym__identifier,
    ACTIONS(308), 1,
      anon_sym_COLON,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
  [1374] = 2,
    ACTIONS(231), 1,
      sym__identifier,
    STATE(20), 1,
      sym__column_reference,
  [1381] = 2,
    ACTIONS(231), 1,
      sym__identifier,
    STATE(18), 1,
      sym__column_reference,
  [1388] = 1,
    ACTIONS(286), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1393] = 1,
    ACTIONS(312), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1398] = 2,
    ACTIONS(231), 1,
      sym__identifier,
    STATE(83), 1,
      sym__column_reference,
  [1405] = 2,
    ACTIONS(314), 1,
      anon_sym_COLON,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
  [1412] = 1,
    ACTIONS(318), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1417] = 2,
    ACTIONS(231), 1,
      sym__identifier,
    STATE(93), 1,
      sym__column_reference,
  [1424] = 2,
    ACTIONS(231), 1,
      sym__identifier,
    STATE(17), 1,
      sym__column_reference,
  [1431] = 2,
    ACTIONS(231), 1,
      sym__identifier,
    STATE(92), 1,
      sym__column_reference,
  [1438] = 2,
    ACTIONS(231), 1,
      sym__identifier,
    STATE(91), 1,
      sym__column_reference,
  [1445] = 1,
    ACTIONS(320), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1450] = 2,
    ACTIONS(231), 1,
      sym__identifier,
    STATE(19), 1,
      sym__column_reference,
  [1457] = 1,
    ACTIONS(322), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1462] = 1,
    ACTIONS(324), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1467] = 1,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1472] = 1,
    ACTIONS(328), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1477] = 2,
    ACTIONS(330), 1,
      sym__identifier,
    ACTIONS(332), 1,
      anon_sym_LBRACE,
  [1484] = 1,
    ACTIONS(334), 1,
      anon_sym_LBRACE,
  [1488] = 1,
    ACTIONS(336), 1,
      anon_sym_LF,
  [1492] = 1,
    ACTIONS(338), 1,
      ts_builtin_sym_end,
  [1496] = 1,
    ACTIONS(340), 1,
      anon_sym_LBRACE,
  [1500] = 1,
    ACTIONS(342), 1,
      anon_sym_STAR_SLASH,
  [1504] = 1,
    ACTIONS(344), 1,
      anon_sym_COLON,
  [1508] = 1,
    ACTIONS(346), 1,
      anon_sym_COLON,
  [1512] = 1,
    ACTIONS(348), 1,
      anon_sym_LF,
  [1516] = 1,
    ACTIONS(350), 1,
      sym__identifier,
  [1520] = 1,
    ACTIONS(352), 1,
      anon_sym_LBRACE,
  [1524] = 1,
    ACTIONS(354), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1528] = 1,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
  [1532] = 1,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
  [1536] = 1,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
  [1540] = 1,
    ACTIONS(362), 1,
      aux_sym__multiline_string_token1,
  [1544] = 1,
    ACTIONS(364), 1,
      anon_sym_DOT,
  [1548] = 1,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
  [1552] = 1,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
  [1556] = 1,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
  [1560] = 1,
    ACTIONS(372), 1,
      sym__identifier,
  [1564] = 1,
    ACTIONS(374), 1,
      anon_sym_LF,
  [1568] = 1,
    ACTIONS(376), 1,
      anon_sym_LF,
  [1572] = 1,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
  [1576] = 1,
    ACTIONS(380), 1,
      anon_sym_COLON,
  [1580] = 1,
    ACTIONS(382), 1,
      anon_sym_RBRACE,
  [1584] = 1,
    ACTIONS(384), 1,
      sym__identifier,
  [1588] = 1,
    ACTIONS(386), 1,
      sym__identifier,
  [1592] = 1,
    ACTIONS(388), 1,
      aux_sym__multiline_string_token1,
  [1596] = 1,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
  [1600] = 1,
    ACTIONS(392), 1,
      sym__identifier,
  [1604] = 1,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
  [1608] = 1,
    ACTIONS(396), 1,
      anon_sym_RBRACE,
  [1612] = 1,
    ACTIONS(398), 1,
      anon_sym_LF,
  [1616] = 1,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
  [1620] = 1,
    ACTIONS(402), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1624] = 1,
    ACTIONS(404), 1,
      aux_sym__multiline_string_token1,
  [1628] = 1,
    ACTIONS(406), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 142,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 261,
  [SMALL_STATE(10)] = 284,
  [SMALL_STATE(11)] = 306,
  [SMALL_STATE(12)] = 328,
  [SMALL_STATE(13)] = 360,
  [SMALL_STATE(14)] = 382,
  [SMALL_STATE(15)] = 404,
  [SMALL_STATE(16)] = 426,
  [SMALL_STATE(17)] = 448,
  [SMALL_STATE(18)] = 469,
  [SMALL_STATE(19)] = 490,
  [SMALL_STATE(20)] = 511,
  [SMALL_STATE(21)] = 532,
  [SMALL_STATE(22)] = 552,
  [SMALL_STATE(23)] = 572,
  [SMALL_STATE(24)] = 592,
  [SMALL_STATE(25)] = 612,
  [SMALL_STATE(26)] = 632,
  [SMALL_STATE(27)] = 652,
  [SMALL_STATE(28)] = 672,
  [SMALL_STATE(29)] = 692,
  [SMALL_STATE(30)] = 712,
  [SMALL_STATE(31)] = 732,
  [SMALL_STATE(32)] = 752,
  [SMALL_STATE(33)] = 772,
  [SMALL_STATE(34)] = 792,
  [SMALL_STATE(35)] = 812,
  [SMALL_STATE(36)] = 830,
  [SMALL_STATE(37)] = 851,
  [SMALL_STATE(38)] = 872,
  [SMALL_STATE(39)] = 893,
  [SMALL_STATE(40)] = 914,
  [SMALL_STATE(41)] = 935,
  [SMALL_STATE(42)] = 956,
  [SMALL_STATE(43)] = 972,
  [SMALL_STATE(44)] = 988,
  [SMALL_STATE(45)] = 1009,
  [SMALL_STATE(46)] = 1028,
  [SMALL_STATE(47)] = 1042,
  [SMALL_STATE(48)] = 1056,
  [SMALL_STATE(49)] = 1070,
  [SMALL_STATE(50)] = 1084,
  [SMALL_STATE(51)] = 1099,
  [SMALL_STATE(52)] = 1110,
  [SMALL_STATE(53)] = 1126,
  [SMALL_STATE(54)] = 1142,
  [SMALL_STATE(55)] = 1152,
  [SMALL_STATE(56)] = 1168,
  [SMALL_STATE(57)] = 1184,
  [SMALL_STATE(58)] = 1197,
  [SMALL_STATE(59)] = 1206,
  [SMALL_STATE(60)] = 1215,
  [SMALL_STATE(61)] = 1224,
  [SMALL_STATE(62)] = 1233,
  [SMALL_STATE(63)] = 1242,
  [SMALL_STATE(64)] = 1251,
  [SMALL_STATE(65)] = 1260,
  [SMALL_STATE(66)] = 1269,
  [SMALL_STATE(67)] = 1278,
  [SMALL_STATE(68)] = 1287,
  [SMALL_STATE(69)] = 1296,
  [SMALL_STATE(70)] = 1305,
  [SMALL_STATE(71)] = 1314,
  [SMALL_STATE(72)] = 1324,
  [SMALL_STATE(73)] = 1334,
  [SMALL_STATE(74)] = 1344,
  [SMALL_STATE(75)] = 1354,
  [SMALL_STATE(76)] = 1364,
  [SMALL_STATE(77)] = 1374,
  [SMALL_STATE(78)] = 1381,
  [SMALL_STATE(79)] = 1388,
  [SMALL_STATE(80)] = 1393,
  [SMALL_STATE(81)] = 1398,
  [SMALL_STATE(82)] = 1405,
  [SMALL_STATE(83)] = 1412,
  [SMALL_STATE(84)] = 1417,
  [SMALL_STATE(85)] = 1424,
  [SMALL_STATE(86)] = 1431,
  [SMALL_STATE(87)] = 1438,
  [SMALL_STATE(88)] = 1445,
  [SMALL_STATE(89)] = 1450,
  [SMALL_STATE(90)] = 1457,
  [SMALL_STATE(91)] = 1462,
  [SMALL_STATE(92)] = 1467,
  [SMALL_STATE(93)] = 1472,
  [SMALL_STATE(94)] = 1477,
  [SMALL_STATE(95)] = 1484,
  [SMALL_STATE(96)] = 1488,
  [SMALL_STATE(97)] = 1492,
  [SMALL_STATE(98)] = 1496,
  [SMALL_STATE(99)] = 1500,
  [SMALL_STATE(100)] = 1504,
  [SMALL_STATE(101)] = 1508,
  [SMALL_STATE(102)] = 1512,
  [SMALL_STATE(103)] = 1516,
  [SMALL_STATE(104)] = 1520,
  [SMALL_STATE(105)] = 1524,
  [SMALL_STATE(106)] = 1528,
  [SMALL_STATE(107)] = 1532,
  [SMALL_STATE(108)] = 1536,
  [SMALL_STATE(109)] = 1540,
  [SMALL_STATE(110)] = 1544,
  [SMALL_STATE(111)] = 1548,
  [SMALL_STATE(112)] = 1552,
  [SMALL_STATE(113)] = 1556,
  [SMALL_STATE(114)] = 1560,
  [SMALL_STATE(115)] = 1564,
  [SMALL_STATE(116)] = 1568,
  [SMALL_STATE(117)] = 1572,
  [SMALL_STATE(118)] = 1576,
  [SMALL_STATE(119)] = 1580,
  [SMALL_STATE(120)] = 1584,
  [SMALL_STATE(121)] = 1588,
  [SMALL_STATE(122)] = 1592,
  [SMALL_STATE(123)] = 1596,
  [SMALL_STATE(124)] = 1600,
  [SMALL_STATE(125)] = 1604,
  [SMALL_STATE(126)] = 1608,
  [SMALL_STATE(127)] = 1612,
  [SMALL_STATE(128)] = 1616,
  [SMALL_STATE(129)] = 1620,
  [SMALL_STATE(130)] = 1624,
  [SMALL_STATE(131)] = 1628,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(121),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(76),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(94),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(96),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(72),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 3, .production_id = 7),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 3, .production_id = 7),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 5, .production_id = 11),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 5, .production_id = 11),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_text, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string, 5),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 5, .production_id = 5),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 5, .production_id = 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_to_one, 3, .production_id = 8),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_to_one, 3, .production_id = 8),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_to_many, 3, .production_id = 8),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_to_many, 3, .production_id = 8),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_to_one, 3, .production_id = 8),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_to_one, 3, .production_id = 8),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_to_many, 3, .production_id = 8),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_to_many, 3, .production_id = 8),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 5),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 5),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 4, .production_id = 2),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 4, .production_id = 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, .production_id = 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4, .production_id = 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 5, .production_id = 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 5, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 5, .production_id = 2),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 5, .production_id = 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(118),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(75),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(35),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(75),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, .production_id = 6),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 6),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 6),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 6),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 2),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, .production_id = 9),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 9),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2), SHIFT_REPEAT(12),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_reference, 3),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_many, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_setting, 1, .production_id = 10),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_setting, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_many, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_one, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_one, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [338] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
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
