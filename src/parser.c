#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 209
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 108
#define ALIAS_COUNT 13
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 18

enum {
  sym__identifier = 1,
  sym_string = 2,
  sym_number = 3,
  anon_sym_true = 4,
  anon_sym_false = 5,
  anon_sym_null = 6,
  anon_sym_nil = 7,
  sym__comment = 8,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 9,
  aux_sym_multiline_string_token1 = 10,
  anon_sym_LF = 11,
  anon_sym_SLASH_STAR = 12,
  anon_sym_STAR_SLASH = 13,
  anon_sym_bool = 14,
  anon_sym_boolean = 15,
  anon_sym_date = 16,
  anon_sym_datetime = 17,
  anon_sym_int = 18,
  anon_sym_integer = 19,
  anon_sym_string = 20,
  anon_sym_text = 21,
  anon_sym_timestamp = 22,
  anon_sym_varchar = 23,
  anon_sym_COLON = 24,
  anon_sym_project = 25,
  anon_sym_Project = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  anon_sym_table = 29,
  anon_sym_Table = 30,
  anon_sym_DOT = 31,
  anon_sym_as = 32,
  anon_sym_LBRACK = 33,
  anon_sym_COMMA = 34,
  anon_sym_RBRACK = 35,
  anon_sym_primarykey = 36,
  anon_sym_pk = 37,
  anon_sym_notnull = 38,
  anon_sym_unique = 39,
  anon_sym_increment = 40,
  anon_sym_default = 41,
  anon_sym_ref = 42,
  anon_sym_enum = 43,
  anon_sym_Enum = 44,
  anon_sym_Ref = 45,
  anon_sym_LT = 46,
  anon_sym_GT = 47,
  anon_sym_DASH = 48,
  anon_sym_LT_GT = 49,
  anon_sym_tablegroup = 50,
  anon_sym_TableGroup = 51,
  anon_sym_note = 52,
  anon_sym_Note = 53,
  sym_schema = 54,
  sym_boolean = 55,
  sym_null = 56,
  sym_multiline_string = 57,
  sym__multiline_comment = 58,
  sym_type = 59,
  sym_key_value = 60,
  sym_value = 61,
  sym__definition = 62,
  sym_project = 63,
  sym__project_row = 64,
  sym_table = 65,
  sym__table_alias = 66,
  sym_table_settings = 67,
  sym__table_row = 68,
  sym_column = 69,
  sym_column_settings = 70,
  sym__unary_setting = 71,
  sym__binary_setting = 72,
  sym_default_setting = 73,
  sym__inline_reference = 74,
  sym_enum = 75,
  sym__enum_row = 76,
  sym_variant = 77,
  sym_variant_notes = 78,
  sym_reference = 79,
  sym__short_reference = 80,
  sym__long_reference = 81,
  sym__relationship = 82,
  sym_one_to_many = 83,
  sym_inline_one_to_many = 84,
  sym_many_to_one = 85,
  sym_inline_many_to_one = 86,
  sym_one_to_one = 87,
  sym_inline_one_to_one = 88,
  sym_many_to_many = 89,
  sym_inline_many_to_many = 90,
  sym__column_reference = 91,
  sym_table_group = 92,
  sym__table_group_row = 93,
  sym_comment = 94,
  sym_note = 95,
  sym_note_text = 96,
  sym__short_note = 97,
  sym__long_note = 98,
  aux_sym_schema_repeat1 = 99,
  aux_sym_multiline_string_repeat1 = 100,
  aux_sym_project_repeat1 = 101,
  aux_sym_table_repeat1 = 102,
  aux_sym_table_settings_repeat1 = 103,
  aux_sym_column_settings_repeat1 = 104,
  aux_sym_enum_repeat1 = 105,
  aux_sym_variant_notes_repeat1 = 106,
  aux_sym_table_group_repeat1 = 107,
  alias_sym_column_name = 108,
  alias_sym_enum_name = 109,
  alias_sym_from_column = 110,
  alias_sym_key = 111,
  alias_sym_keyword = 112,
  alias_sym_note_name = 113,
  alias_sym_null_setting = 114,
  alias_sym_project_name = 115,
  alias_sym_reference_name = 116,
  alias_sym_schema_name = 117,
  alias_sym_table_alias = 118,
  alias_sym_table_group_name = 119,
  alias_sym_table_name = 120,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_null] = "null",
  [anon_sym_nil] = "nil",
  [sym__comment] = "_comment",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [aux_sym_multiline_string_token1] = "multiline_string_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
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
  [anon_sym_DOT] = ".",
  [anon_sym_as] = "as",
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
  [anon_sym_tablegroup] = "tablegroup",
  [anon_sym_TableGroup] = "TableGroup",
  [anon_sym_note] = "note",
  [anon_sym_Note] = "Note",
  [sym_schema] = "schema",
  [sym_boolean] = "boolean",
  [sym_null] = "null",
  [sym_multiline_string] = "multiline_string",
  [sym__multiline_comment] = "_multiline_comment",
  [sym_type] = "type",
  [sym_key_value] = "key_value",
  [sym_value] = "value",
  [sym__definition] = "_definition",
  [sym_project] = "project",
  [sym__project_row] = "_project_row",
  [sym_table] = "table",
  [sym__table_alias] = "_table_alias",
  [sym_table_settings] = "table_settings",
  [sym__table_row] = "_table_row",
  [sym_column] = "column",
  [sym_column_settings] = "column_settings",
  [sym__unary_setting] = "_unary_setting",
  [sym__binary_setting] = "_binary_setting",
  [sym_default_setting] = "default_setting",
  [sym__inline_reference] = "_inline_reference",
  [sym_enum] = "enum",
  [sym__enum_row] = "_enum_row",
  [sym_variant] = "variant",
  [sym_variant_notes] = "variant_notes",
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
  [sym__table_group_row] = "_table_group_row",
  [sym_comment] = "comment",
  [sym_note] = "note",
  [sym_note_text] = "note_text",
  [sym__short_note] = "_short_note",
  [sym__long_note] = "_long_note",
  [aux_sym_schema_repeat1] = "schema_repeat1",
  [aux_sym_multiline_string_repeat1] = "multiline_string_repeat1",
  [aux_sym_project_repeat1] = "project_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_table_settings_repeat1] = "table_settings_repeat1",
  [aux_sym_column_settings_repeat1] = "column_settings_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_variant_notes_repeat1] = "variant_notes_repeat1",
  [aux_sym_table_group_repeat1] = "table_group_repeat1",
  [alias_sym_column_name] = "column_name",
  [alias_sym_enum_name] = "enum_name",
  [alias_sym_from_column] = "from_column",
  [alias_sym_key] = "key",
  [alias_sym_keyword] = "keyword",
  [alias_sym_note_name] = "note_name",
  [alias_sym_null_setting] = "null_setting",
  [alias_sym_project_name] = "project_name",
  [alias_sym_reference_name] = "reference_name",
  [alias_sym_schema_name] = "schema_name",
  [alias_sym_table_alias] = "table_alias",
  [alias_sym_table_group_name] = "table_group_name",
  [alias_sym_table_name] = "table_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_nil] = anon_sym_nil,
  [sym__comment] = sym__comment,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [aux_sym_multiline_string_token1] = aux_sym_multiline_string_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_as] = anon_sym_as,
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
  [anon_sym_tablegroup] = anon_sym_tablegroup,
  [anon_sym_TableGroup] = anon_sym_TableGroup,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_Note] = anon_sym_Note,
  [sym_schema] = sym_schema,
  [sym_boolean] = sym_boolean,
  [sym_null] = sym_null,
  [sym_multiline_string] = sym_multiline_string,
  [sym__multiline_comment] = sym__multiline_comment,
  [sym_type] = sym_type,
  [sym_key_value] = sym_key_value,
  [sym_value] = sym_value,
  [sym__definition] = sym__definition,
  [sym_project] = sym_project,
  [sym__project_row] = sym__project_row,
  [sym_table] = sym_table,
  [sym__table_alias] = sym__table_alias,
  [sym_table_settings] = sym_table_settings,
  [sym__table_row] = sym__table_row,
  [sym_column] = sym_column,
  [sym_column_settings] = sym_column_settings,
  [sym__unary_setting] = sym__unary_setting,
  [sym__binary_setting] = sym__binary_setting,
  [sym_default_setting] = sym_default_setting,
  [sym__inline_reference] = sym__inline_reference,
  [sym_enum] = sym_enum,
  [sym__enum_row] = sym__enum_row,
  [sym_variant] = sym_variant,
  [sym_variant_notes] = sym_variant_notes,
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
  [sym__table_group_row] = sym__table_group_row,
  [sym_comment] = sym_comment,
  [sym_note] = sym_note,
  [sym_note_text] = sym_note_text,
  [sym__short_note] = sym__short_note,
  [sym__long_note] = sym__long_note,
  [aux_sym_schema_repeat1] = aux_sym_schema_repeat1,
  [aux_sym_multiline_string_repeat1] = aux_sym_multiline_string_repeat1,
  [aux_sym_project_repeat1] = aux_sym_project_repeat1,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_table_settings_repeat1] = aux_sym_table_settings_repeat1,
  [aux_sym_column_settings_repeat1] = aux_sym_column_settings_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_variant_notes_repeat1] = aux_sym_variant_notes_repeat1,
  [aux_sym_table_group_repeat1] = aux_sym_table_group_repeat1,
  [alias_sym_column_name] = alias_sym_column_name,
  [alias_sym_enum_name] = alias_sym_enum_name,
  [alias_sym_from_column] = alias_sym_from_column,
  [alias_sym_key] = alias_sym_key,
  [alias_sym_keyword] = alias_sym_keyword,
  [alias_sym_note_name] = alias_sym_note_name,
  [alias_sym_null_setting] = alias_sym_null_setting,
  [alias_sym_project_name] = alias_sym_project_name,
  [alias_sym_reference_name] = alias_sym_reference_name,
  [alias_sym_schema_name] = alias_sym_schema_name,
  [alias_sym_table_alias] = alias_sym_table_alias,
  [alias_sym_table_group_name] = alias_sym_table_group_name,
  [alias_sym_table_name] = alias_sym_table_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
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
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
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
  [anon_sym_tablegroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TableGroup] = {
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
  [sym_schema] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_string] = {
    .visible = true,
    .named = true,
  },
  [sym__multiline_comment] = {
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
  [sym__table_alias] = {
    .visible = false,
    .named = true,
  },
  [sym_table_settings] = {
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
  [sym__enum_row] = {
    .visible = false,
    .named = true,
  },
  [sym_variant] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_notes] = {
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
  [sym__table_group_row] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
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
  [aux_sym_schema_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_multiline_string_repeat1] = {
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
  [aux_sym_table_settings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_settings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variant_notes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_group_repeat1] = {
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
  [alias_sym_keyword] = {
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
  [alias_sym_table_alias] = {
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
    [0] = alias_sym_table_name,
  },
  [2] = {
    [1] = alias_sym_project_name,
  },
  [3] = {
    [1] = alias_sym_table_name,
  },
  [4] = {
    [1] = alias_sym_table_alias,
  },
  [5] = {
    [1] = alias_sym_reference_name,
  },
  [6] = {
    [1] = alias_sym_enum_name,
  },
  [7] = {
    [1] = alias_sym_table_group_name,
  },
  [8] = {
    [1] = alias_sym_note_name,
  },
  [9] = {
    [0] = alias_sym_column_name,
    [1] = sym_type,
  },
  [10] = {
    [0] = alias_sym_column_name,
  },
  [11] = {
    [1] = alias_sym_keyword,
  },
  [12] = {
    [0] = alias_sym_table_name,
    [2] = alias_sym_column_name,
  },
  [13] = {
    [0] = alias_sym_from_column,
  },
  [14] = {
    [0] = alias_sym_key,
  },
  [15] = {
    [1] = alias_sym_schema_name,
    [3] = alias_sym_table_name,
  },
  [16] = {
    [0] = alias_sym_null_setting,
  },
  [17] = {
    [0] = alias_sym_schema_name,
    [2] = alias_sym_table_name,
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
  [63] = 6,
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
  [87] = 13,
  [88] = 88,
  [89] = 7,
  [90] = 17,
  [91] = 11,
  [92] = 10,
  [93] = 30,
  [94] = 94,
  [95] = 12,
  [96] = 96,
  [97] = 97,
  [98] = 38,
  [99] = 16,
  [100] = 100,
  [101] = 35,
  [102] = 102,
  [103] = 8,
  [104] = 14,
  [105] = 105,
  [106] = 106,
  [107] = 30,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 35,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 38,
  [116] = 116,
  [117] = 116,
  [118] = 114,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 124,
  [130] = 130,
  [131] = 125,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 126,
  [137] = 128,
  [138] = 127,
  [139] = 139,
  [140] = 140,
  [141] = 125,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 130,
  [148] = 148,
  [149] = 124,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 153,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 195,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 201,
  [204] = 185,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 205,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(129);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == ',') ADVANCE(223);
      if (lookahead == '-') ADVANCE(237);
      if (lookahead == '.') ADVANCE(220);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == '<') ADVANCE(235);
      if (lookahead == '>') ADVANCE(236);
      if (lookahead == 'E') ADVANCE(78);
      if (lookahead == 'N') ADVANCE(87);
      if (lookahead == 'P') ADVANCE(101);
      if (lookahead == 'R') ADVANCE(29);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == 'b') ADVANCE(88);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 's') ADVANCE(114);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(80);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(180);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(189);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ',') ADVANCE(223);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(155);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(213);
      if (lookahead == '[') ADVANCE(222);
      if (lookahead == ']') ADVANCE(224);
      if (lookahead == '{') ADVANCE(216);
      if (lookahead == '}') ADVANCE(217);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(181);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(190);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(191);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(123);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(73);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(157);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 's') ADVANCE(166);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == 'v') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 23:
      if (lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(70);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(177);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(218);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(234);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(231);
      END_STATE();
    case 48:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 50:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(61);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == 'j') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'j') ADVANCE(45);
      END_STATE();
    case 59:
      if (lookahead == 'k') ADVANCE(226);
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 60:
      if (lookahead == 'k') ADVANCE(39);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(179);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(194);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(233);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 74:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 75:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 76:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 77:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(209);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(240);
      END_STATE();
    case 94:
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 95:
      if (lookahead == 'q') ADVANCE(124);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 99:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 100:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 101:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 102:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 103:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 104:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 107:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(207);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(215);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(230);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(214);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(229);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(72);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 126:
      if (lookahead == 'x') ADVANCE(109);
      END_STATE();
    case 127:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 128:
      if (lookahead == 'y') ADVANCE(225);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\'') ADVANCE(185);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\'') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\'') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '*') ADVANCE(187);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '/') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(188);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'e') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 't') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_text);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_timestamp);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_varchar);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_varchar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(102);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(238);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_Note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
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
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
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
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 22},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 6},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 186},
  [125] = {.lex_state = 186},
  [126] = {.lex_state = 186},
  [127] = {.lex_state = 183},
  [128] = {.lex_state = 183},
  [129] = {.lex_state = 186},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 186},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 183},
  [137] = {.lex_state = 183},
  [138] = {.lex_state = 183},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 186},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 186},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 186},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 183},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 6},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 6},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 2},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [sym__comment] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
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
    [anon_sym_tablegroup] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_Note] = ACTIONS(1),
  },
  [1] = {
    [sym_schema] = STATE(188),
    [sym__multiline_comment] = STATE(35),
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(43),
    [sym__long_reference] = STATE(43),
    [sym_table_group] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_note] = STATE(3),
    [sym__short_note] = STATE(12),
    [sym__long_note] = STATE(12),
    [aux_sym_schema_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__comment] = ACTIONS(5),
    [anon_sym_SLASH_STAR] = ACTIONS(7),
    [anon_sym_project] = ACTIONS(9),
    [anon_sym_Project] = ACTIONS(9),
    [anon_sym_table] = ACTIONS(11),
    [anon_sym_Table] = ACTIONS(11),
    [anon_sym_ref] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_Enum] = ACTIONS(15),
    [anon_sym_Ref] = ACTIONS(13),
    [anon_sym_tablegroup] = ACTIONS(17),
    [anon_sym_TableGroup] = ACTIONS(17),
    [anon_sym_note] = ACTIONS(19),
    [anon_sym_Note] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym__comment,
    ACTIONS(26), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym__multiline_comment,
    ACTIONS(29), 2,
      anon_sym_project,
      anon_sym_Project,
    ACTIONS(32), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(35), 2,
      anon_sym_ref,
      anon_sym_Ref,
    ACTIONS(38), 2,
      anon_sym_enum,
      anon_sym_Enum,
    ACTIONS(41), 2,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
    ACTIONS(44), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    STATE(43), 2,
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
      aux_sym_schema_repeat1,
  [56] = 13,
    ACTIONS(5), 1,
      sym__comment,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      sym__multiline_comment,
    ACTIONS(9), 2,
      anon_sym_project,
      anon_sym_Project,
    ACTIONS(11), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(13), 2,
      anon_sym_ref,
      anon_sym_Ref,
    ACTIONS(15), 2,
      anon_sym_enum,
      anon_sym_Enum,
    ACTIONS(17), 2,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    STATE(43), 2,
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
      aux_sym_schema_repeat1,
  [112] = 3,
    ACTIONS(53), 1,
      anon_sym_DOT,
    ACTIONS(51), 3,
      anon_sym_table,
      anon_sym_Table,
      anon_sym_LT,
    ACTIONS(49), 19,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
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
      anon_sym_note,
      anon_sym_Note,
  [142] = 2,
    ACTIONS(57), 3,
      anon_sym_table,
      anon_sym_Table,
      anon_sym_LT,
    ACTIONS(55), 19,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
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
      anon_sym_note,
      anon_sym_Note,
  [169] = 6,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(10), 1,
      sym_multiline_string,
    STATE(11), 1,
      sym_note_text,
    ACTIONS(65), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(59), 15,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
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
      anon_sym_note,
      anon_sym_Note,
  [203] = 2,
    ACTIONS(69), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(67), 16,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
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
      anon_sym_note,
      anon_sym_Note,
  [226] = 2,
    ACTIONS(73), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(71), 16,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
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
      anon_sym_note,
      anon_sym_Note,
  [249] = 8,
    ACTIONS(75), 1,
      anon_sym_null,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    ACTIONS(81), 1,
      anon_sym_default,
    ACTIONS(83), 1,
      anon_sym_ref,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(79), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
    STATE(145), 5,
      sym__unary_setting,
      sym__binary_setting,
      sym_default_setting,
      sym__inline_reference,
      sym_note,
  [284] = 2,
    ACTIONS(87), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(85), 16,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
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
      anon_sym_note,
      anon_sym_Note,
  [307] = 2,
    ACTIONS(91), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(89), 15,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
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
      anon_sym_note,
      anon_sym_Note,
  [329] = 2,
    ACTIONS(95), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(93), 15,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
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
      anon_sym_note,
      anon_sym_Note,
  [351] = 2,
    ACTIONS(99), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(97), 15,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
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
      anon_sym_note,
      anon_sym_Note,
  [373] = 2,
    ACTIONS(103), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(101), 15,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
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
      anon_sym_note,
      anon_sym_Note,
  [395] = 7,
    ACTIONS(75), 1,
      anon_sym_null,
    ACTIONS(81), 1,
      anon_sym_default,
    ACTIONS(83), 1,
      anon_sym_ref,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(105), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
    STATE(170), 5,
      sym__unary_setting,
      sym__binary_setting,
      sym_default_setting,
      sym__inline_reference,
      sym_note,
  [427] = 2,
    ACTIONS(109), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(107), 15,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
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
      anon_sym_note,
      anon_sym_Note,
  [449] = 2,
    ACTIONS(113), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(111), 15,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
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
      anon_sym_note,
      anon_sym_Note,
  [471] = 2,
    ACTIONS(117), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(115), 14,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [492] = 2,
    ACTIONS(121), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(119), 14,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [513] = 2,
    ACTIONS(125), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(123), 14,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [534] = 2,
    ACTIONS(129), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(127), 14,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [555] = 2,
    ACTIONS(133), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(131), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [575] = 2,
    ACTIONS(137), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(135), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [595] = 2,
    ACTIONS(141), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(139), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [615] = 2,
    ACTIONS(145), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(143), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [635] = 2,
    ACTIONS(149), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(147), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [655] = 2,
    ACTIONS(153), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(151), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [675] = 2,
    ACTIONS(157), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(155), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [695] = 2,
    ACTIONS(161), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(159), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [715] = 2,
    ACTIONS(165), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(163), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [735] = 2,
    ACTIONS(169), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(167), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [755] = 2,
    ACTIONS(173), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(171), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [775] = 2,
    ACTIONS(177), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(175), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [795] = 2,
    ACTIONS(181), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(179), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [815] = 2,
    ACTIONS(185), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(183), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [835] = 2,
    ACTIONS(189), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(187), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [855] = 2,
    ACTIONS(193), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(191), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [875] = 2,
    ACTIONS(197), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(195), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [895] = 2,
    ACTIONS(201), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(199), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [915] = 2,
    ACTIONS(205), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(203), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [935] = 2,
    ACTIONS(209), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(207), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [955] = 2,
    ACTIONS(213), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(211), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [975] = 2,
    ACTIONS(217), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(215), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [995] = 2,
    ACTIONS(221), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(219), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1015] = 2,
    ACTIONS(225), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(223), 13,
      ts_builtin_sym_end,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_ref,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      anon_sym_note,
      anon_sym_Note,
  [1035] = 8,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym__comment,
    ACTIONS(231), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(59), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1066] = 8,
    ACTIONS(237), 1,
      sym__identifier,
    ACTIONS(240), 1,
      sym__comment,
    ACTIONS(243), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(248), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(47), 5,
      sym_key_value,
      sym__project_row,
      sym_comment,
      sym_note,
      aux_sym_project_repeat1,
  [1097] = 8,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym__comment,
    ACTIONS(231), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(57), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1128] = 8,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym__comment,
    ACTIONS(231), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(59), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1159] = 8,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym__comment,
    ACTIONS(231), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(56), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1190] = 8,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym__comment,
    ACTIONS(231), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(46), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1221] = 8,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym__comment,
    ACTIONS(231), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(49), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1252] = 8,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym__comment,
    ACTIONS(231), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(54), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1283] = 8,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym__comment,
    ACTIONS(231), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(59), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1314] = 8,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym__comment,
    ACTIONS(231), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(59), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1345] = 8,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym__comment,
    ACTIONS(231), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(261), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(59), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1376] = 8,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym__comment,
    ACTIONS(231), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(59), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1407] = 8,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(229), 1,
      sym__comment,
    ACTIONS(231), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(55), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1438] = 8,
    ACTIONS(265), 1,
      sym__identifier,
    ACTIONS(268), 1,
      sym__comment,
    ACTIONS(271), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(276), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(59), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1469] = 8,
    ACTIONS(229), 1,
      sym__comment,
    ACTIONS(231), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      sym__identifier,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(47), 5,
      sym_key_value,
      sym__project_row,
      sym_comment,
      sym_note,
      aux_sym_project_repeat1,
  [1500] = 8,
    ACTIONS(229), 1,
      sym__comment,
    ACTIONS(231), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      sym__identifier,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(101), 1,
      sym__multiline_comment,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(95), 2,
      sym__short_note,
      sym__long_note,
    STATE(60), 5,
      sym_key_value,
      sym__project_row,
      sym_comment,
      sym_note,
      aux_sym_project_repeat1,
  [1531] = 3,
    ACTIONS(285), 1,
      sym__identifier,
    STATE(79), 1,
      sym_type,
    ACTIONS(287), 10,
      anon_sym_bool,
      anon_sym_boolean,
      anon_sym_date,
      anon_sym_datetime,
      anon_sym_int,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_text,
      anon_sym_timestamp,
      anon_sym_varchar,
  [1550] = 6,
    ACTIONS(289), 1,
      sym_string,
    ACTIONS(291), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(91), 1,
      sym_note_text,
    STATE(92), 1,
      sym_multiline_string,
    ACTIONS(59), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(65), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1573] = 6,
    ACTIONS(296), 1,
      sym__comment,
    ACTIONS(299), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(302), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    ACTIONS(293), 2,
      sym__identifier,
      sym_string,
    STATE(64), 4,
      sym__enum_row,
      sym_variant,
      sym_comment,
      aux_sym_enum_repeat1,
  [1596] = 6,
    ACTIONS(306), 1,
      sym__comment,
    ACTIONS(308), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    ACTIONS(304), 2,
      sym__identifier,
      sym_string,
    STATE(64), 4,
      sym__enum_row,
      sym_variant,
      sym_comment,
      aux_sym_enum_repeat1,
  [1619] = 6,
    ACTIONS(306), 1,
      sym__comment,
    ACTIONS(308), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    ACTIONS(304), 2,
      sym__identifier,
      sym_string,
    STATE(65), 4,
      sym__enum_row,
      sym_variant,
      sym_comment,
      aux_sym_enum_repeat1,
  [1642] = 5,
    STATE(164), 1,
      sym_value,
    ACTIONS(314), 2,
      sym_string,
      sym_number,
    ACTIONS(316), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(318), 2,
      anon_sym_null,
      anon_sym_nil,
    STATE(71), 2,
      sym_boolean,
      sym_null,
  [1662] = 5,
    STATE(73), 1,
      sym_value,
    ACTIONS(314), 2,
      sym_string,
      sym_number,
    ACTIONS(316), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(318), 2,
      anon_sym_null,
      anon_sym_nil,
    STATE(71), 2,
      sym_boolean,
      sym_null,
  [1682] = 5,
    ACTIONS(320), 1,
      anon_sym_LT,
    ACTIONS(322), 1,
      anon_sym_GT,
    ACTIONS(324), 1,
      anon_sym_DASH,
    ACTIONS(326), 1,
      anon_sym_LT_GT,
    STATE(169), 4,
      sym_inline_one_to_many,
      sym_inline_many_to_one,
      sym_inline_one_to_one,
      sym_inline_many_to_many,
  [1701] = 2,
    ACTIONS(328), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(330), 5,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1714] = 2,
    ACTIONS(332), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(334), 5,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1727] = 6,
    ACTIONS(306), 1,
      sym__comment,
    ACTIONS(308), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      sym__identifier,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    STATE(74), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [1748] = 2,
    ACTIONS(340), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(342), 5,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1761] = 6,
    ACTIONS(306), 1,
      sym__comment,
    ACTIONS(308), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      sym__identifier,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    STATE(77), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [1782] = 6,
    ACTIONS(306), 1,
      sym__comment,
    ACTIONS(308), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      sym__identifier,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    STATE(76), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [1803] = 6,
    ACTIONS(306), 1,
      sym__comment,
    ACTIONS(308), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(336), 1,
      sym__identifier,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    STATE(77), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [1824] = 6,
    ACTIONS(350), 1,
      sym__identifier,
    ACTIONS(353), 1,
      sym__comment,
    ACTIONS(356), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    STATE(77), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [1845] = 2,
    ACTIONS(361), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(363), 5,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1858] = 4,
    ACTIONS(369), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym_column_settings,
    ACTIONS(365), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(367), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [1875] = 4,
    ACTIONS(369), 1,
      anon_sym_LBRACK,
    STATE(96), 1,
      sym_column_settings,
    ACTIONS(371), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(373), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [1892] = 3,
    ACTIONS(377), 1,
      anon_sym_LBRACK,
    STATE(112), 1,
      sym_variant_notes,
    ACTIONS(375), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [1906] = 3,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(119), 1,
      sym__column_reference,
    STATE(189), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1920] = 3,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(119), 1,
      sym__column_reference,
    STATE(42), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1934] = 3,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(119), 1,
      sym__column_reference,
    STATE(41), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1948] = 3,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(119), 1,
      sym__column_reference,
    STATE(191), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1962] = 2,
    ACTIONS(381), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(383), 4,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1974] = 2,
    ACTIONS(97), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(99), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1985] = 2,
    ACTIONS(385), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(387), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [1996] = 2,
    ACTIONS(67), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(69), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2007] = 2,
    ACTIONS(111), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(113), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2018] = 2,
    ACTIONS(89), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(91), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2029] = 2,
    ACTIONS(85), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(87), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2040] = 2,
    ACTIONS(163), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(165), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2051] = 2,
    ACTIONS(389), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(391), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2062] = 2,
    ACTIONS(93), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(95), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2073] = 2,
    ACTIONS(393), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(395), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2084] = 4,
    ACTIONS(397), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      sym_note,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
  [2099] = 2,
    ACTIONS(195), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(197), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2110] = 2,
    ACTIONS(107), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(109), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2121] = 2,
    ACTIONS(399), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(401), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2132] = 2,
    ACTIONS(183), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(185), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2143] = 2,
    ACTIONS(403), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(405), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2154] = 2,
    ACTIONS(71), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(73), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2165] = 2,
    ACTIONS(101), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(103), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2176] = 6,
    ACTIONS(407), 1,
      anon_sym_LBRACE,
    ACTIONS(409), 1,
      anon_sym_DOT,
    ACTIONS(411), 1,
      anon_sym_as,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    STATE(139), 1,
      sym__table_alias,
    STATE(175), 1,
      sym_table_settings,
  [2195] = 3,
    STATE(163), 1,
      sym_note,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(12), 2,
      sym__short_note,
      sym__long_note,
  [2207] = 1,
    ACTIONS(163), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2215] = 1,
    ACTIONS(415), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2223] = 1,
    ACTIONS(417), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2231] = 1,
    ACTIONS(419), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2239] = 1,
    ACTIONS(183), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2247] = 1,
    ACTIONS(421), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2255] = 5,
    ACTIONS(411), 1,
      anon_sym_as,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    STATE(142), 1,
      sym__table_alias,
    STATE(178), 1,
      sym_table_settings,
  [2271] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_multiline_string,
    STATE(185), 1,
      sym_note_text,
  [2287] = 1,
    ACTIONS(195), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2295] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_multiline_string,
    STATE(201), 1,
      sym_note_text,
  [2311] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_multiline_string,
    STATE(203), 1,
      sym_note_text,
  [2327] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(431), 1,
      anon_sym_RBRACE,
    STATE(10), 1,
      sym_multiline_string,
    STATE(204), 1,
      sym_note_text,
  [2343] = 4,
    ACTIONS(433), 1,
      anon_sym_LT,
    ACTIONS(435), 1,
      anon_sym_GT,
    ACTIONS(437), 1,
      anon_sym_DASH,
    ACTIONS(439), 1,
      anon_sym_LT_GT,
  [2356] = 4,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      anon_sym_RBRACK,
    STATE(146), 1,
      aux_sym_table_settings_repeat1,
  [2369] = 1,
    ACTIONS(447), 4,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2376] = 3,
    ACTIONS(449), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_RBRACK,
    STATE(122), 1,
      aux_sym_column_settings_repeat1,
  [2386] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
    STATE(122), 1,
      aux_sym_column_settings_repeat1,
  [2396] = 3,
    ACTIONS(458), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(460), 1,
      anon_sym_STAR_SLASH,
    STATE(126), 1,
      aux_sym_multiline_string_repeat1,
  [2406] = 3,
    ACTIONS(458), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(462), 1,
      anon_sym_STAR_SLASH,
    STATE(124), 1,
      aux_sym_multiline_string_repeat1,
  [2416] = 3,
    ACTIONS(464), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(467), 1,
      anon_sym_STAR_SLASH,
    STATE(126), 1,
      aux_sym_multiline_string_repeat1,
  [2426] = 3,
    ACTIONS(469), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(471), 1,
      aux_sym_multiline_string_token1,
    STATE(136), 1,
      aux_sym_multiline_string_repeat1,
  [2436] = 3,
    ACTIONS(471), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(473), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(127), 1,
      aux_sym_multiline_string_repeat1,
  [2446] = 3,
    ACTIONS(458), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(475), 1,
      anon_sym_STAR_SLASH,
    STATE(126), 1,
      aux_sym_multiline_string_repeat1,
  [2456] = 3,
    ACTIONS(477), 1,
      sym__identifier,
    ACTIONS(479), 1,
      anon_sym_COLON,
    ACTIONS(481), 1,
      anon_sym_LBRACE,
  [2466] = 3,
    ACTIONS(458), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(483), 1,
      anon_sym_STAR_SLASH,
    STATE(129), 1,
      aux_sym_multiline_string_repeat1,
  [2476] = 2,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(485), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2484] = 3,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RBRACK,
    STATE(143), 1,
      aux_sym_table_settings_repeat1,
  [2494] = 3,
    ACTIONS(489), 1,
      sym__identifier,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      sym_key_value,
  [2504] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    STATE(135), 1,
      aux_sym_table_settings_repeat1,
  [2514] = 3,
    ACTIONS(467), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(498), 1,
      aux_sym_multiline_string_token1,
    STATE(136), 1,
      aux_sym_multiline_string_repeat1,
  [2524] = 3,
    ACTIONS(471), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(501), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(138), 1,
      aux_sym_multiline_string_repeat1,
  [2534] = 3,
    ACTIONS(471), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(503), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(136), 1,
      aux_sym_multiline_string_repeat1,
  [2544] = 3,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_table_settings,
  [2554] = 3,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RBRACK,
    STATE(144), 1,
      aux_sym_variant_notes_repeat1,
  [2564] = 3,
    ACTIONS(458), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(511), 1,
      anon_sym_STAR_SLASH,
    STATE(149), 1,
      aux_sym_multiline_string_repeat1,
  [2574] = 3,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
    STATE(197), 1,
      sym_table_settings,
  [2584] = 3,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(515), 1,
      anon_sym_RBRACK,
    STATE(135), 1,
      aux_sym_table_settings_repeat1,
  [2594] = 3,
    ACTIONS(507), 1,
      anon_sym_COMMA,
    ACTIONS(517), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_variant_notes_repeat1,
  [2604] = 3,
    ACTIONS(454), 1,
      anon_sym_COMMA,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      aux_sym_column_settings_repeat1,
  [2614] = 3,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_RBRACK,
    STATE(135), 1,
      aux_sym_table_settings_repeat1,
  [2624] = 3,
    ACTIONS(523), 1,
      sym__identifier,
    ACTIONS(525), 1,
      anon_sym_COLON,
    ACTIONS(527), 1,
      anon_sym_LBRACE,
  [2634] = 3,
    ACTIONS(529), 1,
      sym__identifier,
    ACTIONS(531), 1,
      anon_sym_COLON,
    ACTIONS(533), 1,
      anon_sym_LBRACE,
  [2644] = 3,
    ACTIONS(458), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(535), 1,
      anon_sym_STAR_SLASH,
    STATE(126), 1,
      aux_sym_multiline_string_repeat1,
  [2654] = 3,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_variant_notes_repeat1,
  [2664] = 2,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(20), 1,
      sym__column_reference,
  [2671] = 1,
    ACTIONS(542), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2676] = 1,
    ACTIONS(467), 2,
      aux_sym_multiline_string_token1,
      anon_sym_STAR_SLASH,
  [2681] = 2,
    ACTIONS(544), 1,
      anon_sym_COLON,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
  [2688] = 1,
    ACTIONS(496), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2693] = 1,
    ACTIONS(548), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2698] = 2,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(18), 1,
      sym__column_reference,
  [2705] = 2,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(19), 1,
      sym__column_reference,
  [2712] = 2,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(21), 1,
      sym__column_reference,
  [2719] = 2,
    ACTIONS(550), 1,
      sym__identifier,
    ACTIONS(552), 1,
      anon_sym_LBRACE,
  [2726] = 1,
    ACTIONS(554), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2731] = 1,
    ACTIONS(467), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_multiline_string_token1,
  [2736] = 1,
    ACTIONS(540), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2741] = 1,
    ACTIONS(556), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2746] = 2,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(174), 1,
      sym__column_reference,
  [2753] = 2,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(152), 1,
      sym__column_reference,
  [2760] = 2,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(171), 1,
      sym__column_reference,
  [2767] = 2,
    ACTIONS(379), 1,
      sym__identifier,
    STATE(173), 1,
      sym__column_reference,
  [2774] = 1,
    ACTIONS(558), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2779] = 1,
    ACTIONS(452), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2784] = 1,
    ACTIONS(560), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2789] = 2,
    ACTIONS(562), 1,
      sym__identifier,
    STATE(155), 1,
      sym_key_value,
  [2796] = 1,
    ACTIONS(564), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2801] = 1,
    ACTIONS(566), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2806] = 1,
    ACTIONS(505), 1,
      anon_sym_LBRACE,
  [2810] = 1,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
  [2814] = 1,
    ACTIONS(570), 1,
      sym__identifier,
  [2818] = 1,
    ACTIONS(513), 1,
      anon_sym_LBRACE,
  [2822] = 1,
    ACTIONS(572), 1,
      sym__identifier,
  [2826] = 1,
    ACTIONS(574), 1,
      anon_sym_COLON,
  [2830] = 1,
    ACTIONS(576), 1,
      sym__identifier,
  [2834] = 1,
    ACTIONS(578), 1,
      anon_sym_COLON,
  [2838] = 1,
    ACTIONS(580), 1,
      sym__identifier,
  [2842] = 1,
    ACTIONS(582), 1,
      sym__identifier,
  [2846] = 1,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
  [2850] = 1,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
  [2854] = 1,
    ACTIONS(588), 1,
      anon_sym_LBRACE,
  [2858] = 1,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
  [2862] = 1,
    ACTIONS(592), 1,
      anon_sym_RBRACE,
  [2866] = 1,
    ACTIONS(594), 1,
      sym__identifier,
  [2870] = 1,
    ACTIONS(596), 1,
      anon_sym_RBRACE,
  [2874] = 1,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
  [2878] = 1,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
  [2882] = 1,
    ACTIONS(602), 1,
      anon_sym_LBRACE,
  [2886] = 1,
    ACTIONS(604), 1,
      anon_sym_LF,
  [2890] = 1,
    ACTIONS(606), 1,
      anon_sym_LBRACE,
  [2894] = 1,
    ACTIONS(608), 1,
      anon_sym_LBRACE,
  [2898] = 1,
    ACTIONS(610), 1,
      anon_sym_LF,
  [2902] = 1,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
  [2906] = 1,
    ACTIONS(441), 1,
      anon_sym_COLON,
  [2910] = 1,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
  [2914] = 1,
    ACTIONS(616), 1,
      anon_sym_LBRACE,
  [2918] = 1,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
  [2922] = 1,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
  [2926] = 1,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
  [2930] = 1,
    ACTIONS(624), 1,
      anon_sym_DOT,
  [2934] = 1,
    ACTIONS(626), 1,
      sym__identifier,
  [2938] = 1,
    ACTIONS(628), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 142,
  [SMALL_STATE(6)] = 169,
  [SMALL_STATE(7)] = 203,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 249,
  [SMALL_STATE(10)] = 284,
  [SMALL_STATE(11)] = 307,
  [SMALL_STATE(12)] = 329,
  [SMALL_STATE(13)] = 351,
  [SMALL_STATE(14)] = 373,
  [SMALL_STATE(15)] = 395,
  [SMALL_STATE(16)] = 427,
  [SMALL_STATE(17)] = 449,
  [SMALL_STATE(18)] = 471,
  [SMALL_STATE(19)] = 492,
  [SMALL_STATE(20)] = 513,
  [SMALL_STATE(21)] = 534,
  [SMALL_STATE(22)] = 555,
  [SMALL_STATE(23)] = 575,
  [SMALL_STATE(24)] = 595,
  [SMALL_STATE(25)] = 615,
  [SMALL_STATE(26)] = 635,
  [SMALL_STATE(27)] = 655,
  [SMALL_STATE(28)] = 675,
  [SMALL_STATE(29)] = 695,
  [SMALL_STATE(30)] = 715,
  [SMALL_STATE(31)] = 735,
  [SMALL_STATE(32)] = 755,
  [SMALL_STATE(33)] = 775,
  [SMALL_STATE(34)] = 795,
  [SMALL_STATE(35)] = 815,
  [SMALL_STATE(36)] = 835,
  [SMALL_STATE(37)] = 855,
  [SMALL_STATE(38)] = 875,
  [SMALL_STATE(39)] = 895,
  [SMALL_STATE(40)] = 915,
  [SMALL_STATE(41)] = 935,
  [SMALL_STATE(42)] = 955,
  [SMALL_STATE(43)] = 975,
  [SMALL_STATE(44)] = 995,
  [SMALL_STATE(45)] = 1015,
  [SMALL_STATE(46)] = 1035,
  [SMALL_STATE(47)] = 1066,
  [SMALL_STATE(48)] = 1097,
  [SMALL_STATE(49)] = 1128,
  [SMALL_STATE(50)] = 1159,
  [SMALL_STATE(51)] = 1190,
  [SMALL_STATE(52)] = 1221,
  [SMALL_STATE(53)] = 1252,
  [SMALL_STATE(54)] = 1283,
  [SMALL_STATE(55)] = 1314,
  [SMALL_STATE(56)] = 1345,
  [SMALL_STATE(57)] = 1376,
  [SMALL_STATE(58)] = 1407,
  [SMALL_STATE(59)] = 1438,
  [SMALL_STATE(60)] = 1469,
  [SMALL_STATE(61)] = 1500,
  [SMALL_STATE(62)] = 1531,
  [SMALL_STATE(63)] = 1550,
  [SMALL_STATE(64)] = 1573,
  [SMALL_STATE(65)] = 1596,
  [SMALL_STATE(66)] = 1619,
  [SMALL_STATE(67)] = 1642,
  [SMALL_STATE(68)] = 1662,
  [SMALL_STATE(69)] = 1682,
  [SMALL_STATE(70)] = 1701,
  [SMALL_STATE(71)] = 1714,
  [SMALL_STATE(72)] = 1727,
  [SMALL_STATE(73)] = 1748,
  [SMALL_STATE(74)] = 1761,
  [SMALL_STATE(75)] = 1782,
  [SMALL_STATE(76)] = 1803,
  [SMALL_STATE(77)] = 1824,
  [SMALL_STATE(78)] = 1845,
  [SMALL_STATE(79)] = 1858,
  [SMALL_STATE(80)] = 1875,
  [SMALL_STATE(81)] = 1892,
  [SMALL_STATE(82)] = 1906,
  [SMALL_STATE(83)] = 1920,
  [SMALL_STATE(84)] = 1934,
  [SMALL_STATE(85)] = 1948,
  [SMALL_STATE(86)] = 1962,
  [SMALL_STATE(87)] = 1974,
  [SMALL_STATE(88)] = 1985,
  [SMALL_STATE(89)] = 1996,
  [SMALL_STATE(90)] = 2007,
  [SMALL_STATE(91)] = 2018,
  [SMALL_STATE(92)] = 2029,
  [SMALL_STATE(93)] = 2040,
  [SMALL_STATE(94)] = 2051,
  [SMALL_STATE(95)] = 2062,
  [SMALL_STATE(96)] = 2073,
  [SMALL_STATE(97)] = 2084,
  [SMALL_STATE(98)] = 2099,
  [SMALL_STATE(99)] = 2110,
  [SMALL_STATE(100)] = 2121,
  [SMALL_STATE(101)] = 2132,
  [SMALL_STATE(102)] = 2143,
  [SMALL_STATE(103)] = 2154,
  [SMALL_STATE(104)] = 2165,
  [SMALL_STATE(105)] = 2176,
  [SMALL_STATE(106)] = 2195,
  [SMALL_STATE(107)] = 2207,
  [SMALL_STATE(108)] = 2215,
  [SMALL_STATE(109)] = 2223,
  [SMALL_STATE(110)] = 2231,
  [SMALL_STATE(111)] = 2239,
  [SMALL_STATE(112)] = 2247,
  [SMALL_STATE(113)] = 2255,
  [SMALL_STATE(114)] = 2271,
  [SMALL_STATE(115)] = 2287,
  [SMALL_STATE(116)] = 2295,
  [SMALL_STATE(117)] = 2311,
  [SMALL_STATE(118)] = 2327,
  [SMALL_STATE(119)] = 2343,
  [SMALL_STATE(120)] = 2356,
  [SMALL_STATE(121)] = 2369,
  [SMALL_STATE(122)] = 2376,
  [SMALL_STATE(123)] = 2386,
  [SMALL_STATE(124)] = 2396,
  [SMALL_STATE(125)] = 2406,
  [SMALL_STATE(126)] = 2416,
  [SMALL_STATE(127)] = 2426,
  [SMALL_STATE(128)] = 2436,
  [SMALL_STATE(129)] = 2446,
  [SMALL_STATE(130)] = 2456,
  [SMALL_STATE(131)] = 2466,
  [SMALL_STATE(132)] = 2476,
  [SMALL_STATE(133)] = 2484,
  [SMALL_STATE(134)] = 2494,
  [SMALL_STATE(135)] = 2504,
  [SMALL_STATE(136)] = 2514,
  [SMALL_STATE(137)] = 2524,
  [SMALL_STATE(138)] = 2534,
  [SMALL_STATE(139)] = 2544,
  [SMALL_STATE(140)] = 2554,
  [SMALL_STATE(141)] = 2564,
  [SMALL_STATE(142)] = 2574,
  [SMALL_STATE(143)] = 2584,
  [SMALL_STATE(144)] = 2594,
  [SMALL_STATE(145)] = 2604,
  [SMALL_STATE(146)] = 2614,
  [SMALL_STATE(147)] = 2624,
  [SMALL_STATE(148)] = 2634,
  [SMALL_STATE(149)] = 2644,
  [SMALL_STATE(150)] = 2654,
  [SMALL_STATE(151)] = 2664,
  [SMALL_STATE(152)] = 2671,
  [SMALL_STATE(153)] = 2676,
  [SMALL_STATE(154)] = 2681,
  [SMALL_STATE(155)] = 2688,
  [SMALL_STATE(156)] = 2693,
  [SMALL_STATE(157)] = 2698,
  [SMALL_STATE(158)] = 2705,
  [SMALL_STATE(159)] = 2712,
  [SMALL_STATE(160)] = 2719,
  [SMALL_STATE(161)] = 2726,
  [SMALL_STATE(162)] = 2731,
  [SMALL_STATE(163)] = 2736,
  [SMALL_STATE(164)] = 2741,
  [SMALL_STATE(165)] = 2746,
  [SMALL_STATE(166)] = 2753,
  [SMALL_STATE(167)] = 2760,
  [SMALL_STATE(168)] = 2767,
  [SMALL_STATE(169)] = 2774,
  [SMALL_STATE(170)] = 2779,
  [SMALL_STATE(171)] = 2784,
  [SMALL_STATE(172)] = 2789,
  [SMALL_STATE(173)] = 2796,
  [SMALL_STATE(174)] = 2801,
  [SMALL_STATE(175)] = 2806,
  [SMALL_STATE(176)] = 2810,
  [SMALL_STATE(177)] = 2814,
  [SMALL_STATE(178)] = 2818,
  [SMALL_STATE(179)] = 2822,
  [SMALL_STATE(180)] = 2826,
  [SMALL_STATE(181)] = 2830,
  [SMALL_STATE(182)] = 2834,
  [SMALL_STATE(183)] = 2838,
  [SMALL_STATE(184)] = 2842,
  [SMALL_STATE(185)] = 2846,
  [SMALL_STATE(186)] = 2850,
  [SMALL_STATE(187)] = 2854,
  [SMALL_STATE(188)] = 2858,
  [SMALL_STATE(189)] = 2862,
  [SMALL_STATE(190)] = 2866,
  [SMALL_STATE(191)] = 2870,
  [SMALL_STATE(192)] = 2874,
  [SMALL_STATE(193)] = 2878,
  [SMALL_STATE(194)] = 2882,
  [SMALL_STATE(195)] = 2886,
  [SMALL_STATE(196)] = 2890,
  [SMALL_STATE(197)] = 2894,
  [SMALL_STATE(198)] = 2898,
  [SMALL_STATE(199)] = 2902,
  [SMALL_STATE(200)] = 2906,
  [SMALL_STATE(201)] = 2910,
  [SMALL_STATE(202)] = 2914,
  [SMALL_STATE(203)] = 2918,
  [SMALL_STATE(204)] = 2922,
  [SMALL_STATE(205)] = 2926,
  [SMALL_STATE(206)] = 2930,
  [SMALL_STATE(207)] = 2934,
  [SMALL_STATE(208)] = 2938,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(35),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(141),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(181),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(177),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(148),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(183),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(160),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(147),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 3, .production_id = 12),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 3, .production_id = 12),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 5, .production_id = 17),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 5, .production_id = 17),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_text, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, .production_id = 8),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, .production_id = 8),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 5, .production_id = 8),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 5, .production_id = 8),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_to_many, 3, .production_id = 13),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_to_many, 3, .production_id = 13),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_to_one, 3, .production_id = 13),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_to_one, 3, .production_id = 13),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_to_one, 3, .production_id = 13),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_to_one, 3, .production_id = 13),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_to_many, 3, .production_id = 13),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_to_many, 3, .production_id = 13),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 5, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 5, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 7),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 7),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, .production_id = 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 6, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 6),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 6),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, .production_id = 15),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 6, .production_id = 15),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 5, .production_id = 7),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 5, .production_id = 7),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 7, .production_id = 15),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 7, .production_id = 15),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, .production_id = 6),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5, .production_id = 6),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 9, .production_id = 15),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 9, .production_id = 15),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 8, .production_id = 15),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 8, .production_id = 15),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 2),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 7, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 7, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 5, .production_id = 5),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 5, .production_id = 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 4, .production_id = 5),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 4, .production_id = 5),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, .production_id = 3),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5, .production_id = 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [237] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(200),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(101),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(125),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(130),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(62),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(101),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(125),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(130),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(81),
  [296] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(111),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(131),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [320] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [332] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, .production_id = 14),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 14),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [350] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2), SHIFT_REPEAT(121),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2), SHIFT_REPEAT(111),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2), SHIFT_REPEAT(131),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, .production_id = 10),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 10),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, .production_id = 9),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 9),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 10),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 10),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 9),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 9),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 2),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_group_row, 1, .production_id = 1),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2), SHIFT_REPEAT(15),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(195),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [464] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(195),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2, .production_id = 11),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2), SHIFT_REPEAT(172),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2),
  [498] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(198),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_notes_repeat1, 2), SHIFT_REPEAT(106),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_notes_repeat1, 2),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_one, 2),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_alias, 2, .production_id = 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_setting, 1, .production_id = 16),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_setting, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_reference, 3),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_one, 2),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_many, 2),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_many, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 3),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 4),
  [590] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 3, .production_id = 11),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 4, .production_id = 11),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
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
