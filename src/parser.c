#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 199
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 106
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
  sym_variant = 76,
  sym_variant_notes = 77,
  sym_reference = 78,
  sym__short_reference = 79,
  sym__long_reference = 80,
  sym__relationship = 81,
  sym_one_to_many = 82,
  sym_inline_one_to_many = 83,
  sym_many_to_one = 84,
  sym_inline_many_to_one = 85,
  sym_one_to_one = 86,
  sym_inline_one_to_one = 87,
  sym_many_to_many = 88,
  sym_inline_many_to_many = 89,
  sym__column_reference = 90,
  sym_table_group = 91,
  sym_comment = 92,
  sym_note = 93,
  sym_note_text = 94,
  sym__short_note = 95,
  sym__long_note = 96,
  aux_sym_schema_repeat1 = 97,
  aux_sym_multiline_string_repeat1 = 98,
  aux_sym_project_repeat1 = 99,
  aux_sym_table_repeat1 = 100,
  aux_sym_table_settings_repeat1 = 101,
  aux_sym_column_settings_repeat1 = 102,
  aux_sym_enum_repeat1 = 103,
  aux_sym_variant_notes_repeat1 = 104,
  aux_sym_table_group_repeat1 = 105,
  alias_sym_column_name = 106,
  alias_sym_enum_name = 107,
  alias_sym_from_column = 108,
  alias_sym_key = 109,
  alias_sym_keyword = 110,
  alias_sym_note_name = 111,
  alias_sym_null_setting = 112,
  alias_sym_project_name = 113,
  alias_sym_reference_name = 114,
  alias_sym_schema_name = 115,
  alias_sym_table_alias = 116,
  alias_sym_table_group_name = 117,
  alias_sym_table_name = 118,
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
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 6,
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
  [83] = 79,
  [84] = 82,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 8,
  [95] = 14,
  [96] = 96,
  [97] = 13,
  [98] = 98,
  [99] = 99,
  [100] = 9,
  [101] = 12,
  [102] = 17,
  [103] = 15,
  [104] = 16,
  [105] = 7,
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
  [123] = 116,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 127,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 109,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 122,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 149,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
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
  [191] = 180,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 181,
  [196] = 192,
  [197] = 197,
  [198] = 175,
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
      if (lookahead == 'N') ADVANCE(157);
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
      if (lookahead == 'b') ADVANCE(156);
      if (lookahead == 'd') ADVANCE(130);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'v') ADVANCE(131);
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
      if (lookahead == 'a') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(163);
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
      if (lookahead == 'e') ADVANCE(172);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(242);
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
      if (lookahead == 'h') ADVANCE(134);
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
      if (lookahead == 'm') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(139);
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
      if (lookahead == 'o') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(171);
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
      if (lookahead == 's') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(137);
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
      if (lookahead == 't') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(141);
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
      if (lookahead == 'e') ADVANCE(133);
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
  [46] = {.lex_state = 22},
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
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 186},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 183},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 186},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 183},
  [123] = {.lex_state = 183},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 6},
  [133] = {.lex_state = 183},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 186},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 183},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 183},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 186},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 6},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
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
    [sym_schema] = STATE(165),
    [sym__multiline_comment] = STATE(26),
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(22),
    [sym__long_reference] = STATE(22),
    [sym_table_group] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_note] = STATE(3),
    [sym__short_note] = STATE(15),
    [sym__long_note] = STATE(15),
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
    STATE(26), 1,
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
    STATE(15), 2,
      sym__short_note,
      sym__long_note,
    STATE(22), 2,
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
    STATE(26), 1,
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
    STATE(15), 2,
      sym__short_note,
      sym__long_note,
    STATE(22), 2,
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
    STATE(7), 1,
      sym_multiline_string,
    STATE(16), 1,
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
  [249] = 2,
    ACTIONS(77), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(75), 16,
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
  [272] = 8,
    ACTIONS(79), 1,
      anon_sym_null,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    ACTIONS(85), 1,
      anon_sym_default,
    ACTIONS(87), 1,
      anon_sym_ref,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(15), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(83), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
    STATE(137), 5,
      sym__unary_setting,
      sym__binary_setting,
      sym_default_setting,
      sym__inline_reference,
      sym_note,
  [307] = 7,
    ACTIONS(79), 1,
      anon_sym_null,
    ACTIONS(85), 1,
      anon_sym_default,
    ACTIONS(87), 1,
      anon_sym_ref,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(15), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(89), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
    STATE(159), 5,
      sym__unary_setting,
      sym__binary_setting,
      sym_default_setting,
      sym__inline_reference,
      sym_note,
  [339] = 2,
    ACTIONS(93), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(91), 15,
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
  [361] = 2,
    ACTIONS(97), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(95), 15,
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
  [383] = 2,
    ACTIONS(101), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(99), 15,
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
  [405] = 2,
    ACTIONS(105), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(103), 15,
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
  [1035] = 3,
    ACTIONS(227), 1,
      sym__identifier,
    STATE(74), 1,
      sym_type,
    ACTIONS(229), 10,
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
  [1054] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(54), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1075] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(57), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1096] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(57), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1117] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(49), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1138] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(57), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1159] = 5,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(244), 1,
      anon_sym_RBRACE,
    ACTIONS(246), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(52), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [1180] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(48), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1201] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(57), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1222] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(61), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1243] = 5,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(58), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [1264] = 5,
    ACTIONS(259), 1,
      sym__identifier,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(264), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(57), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1285] = 5,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(52), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [1306] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(57), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1327] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(51), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1348] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(57), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1369] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(103), 2,
      sym__short_note,
      sym__long_note,
    STATE(59), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1390] = 5,
    STATE(164), 1,
      sym_value,
    ACTIONS(273), 2,
      sym_string,
      sym_number,
    ACTIONS(275), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym_null,
      anon_sym_nil,
    STATE(77), 2,
      sym_boolean,
      sym_null,
  [1410] = 5,
    STATE(72), 1,
      sym_value,
    ACTIONS(273), 2,
      sym_string,
      sym_number,
    ACTIONS(275), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      anon_sym_null,
      anon_sym_nil,
    STATE(77), 2,
      sym_boolean,
      sym_null,
  [1430] = 5,
    ACTIONS(279), 1,
      anon_sym_LT,
    ACTIONS(281), 1,
      anon_sym_GT,
    ACTIONS(283), 1,
      anon_sym_DASH,
    ACTIONS(285), 1,
      anon_sym_LT_GT,
    STATE(162), 4,
      sym_inline_one_to_many,
      sym_inline_many_to_one,
      sym_inline_one_to_one,
      sym_inline_many_to_many,
  [1449] = 6,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(287), 1,
      sym_string,
    ACTIONS(289), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(104), 1,
      sym_note_text,
    STATE(105), 1,
      sym_multiline_string,
    ACTIONS(65), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1470] = 3,
    ACTIONS(291), 1,
      sym__identifier,
    STATE(96), 1,
      sym__column_reference,
    STATE(172), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1484] = 3,
    ACTIONS(291), 1,
      sym__identifier,
    STATE(96), 1,
      sym__column_reference,
    STATE(42), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1498] = 3,
    ACTIONS(291), 1,
      sym__identifier,
    STATE(96), 1,
      sym__column_reference,
    STATE(31), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1512] = 3,
    ACTIONS(291), 1,
      sym__identifier,
    STATE(96), 1,
      sym__column_reference,
    STATE(190), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1526] = 4,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    STATE(126), 1,
      sym_note,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(15), 2,
      sym__short_note,
      sym__long_note,
  [1541] = 2,
    ACTIONS(295), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(297), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1552] = 2,
    ACTIONS(299), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(301), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1563] = 4,
    ACTIONS(305), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    STATE(90), 1,
      sym_column_settings,
    ACTIONS(303), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1578] = 2,
    ACTIONS(309), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(311), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1589] = 4,
    ACTIONS(307), 1,
      anon_sym_LBRACK,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(93), 1,
      sym_column_settings,
    ACTIONS(313), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1604] = 2,
    ACTIONS(317), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(319), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1615] = 6,
    ACTIONS(321), 1,
      anon_sym_LBRACE,
    ACTIONS(323), 1,
      anon_sym_DOT,
    ACTIONS(325), 1,
      anon_sym_as,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    STATE(120), 1,
      sym__table_alias,
    STATE(168), 1,
      sym_table_settings,
  [1634] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(329), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(192), 1,
      sym_note_text,
  [1650] = 5,
    ACTIONS(325), 1,
      anon_sym_as,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(331), 1,
      anon_sym_LBRACE,
    STATE(115), 1,
      sym__table_alias,
    STATE(187), 1,
      sym_table_settings,
  [1666] = 3,
    STATE(161), 1,
      sym_note,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(15), 2,
      sym__short_note,
      sym__long_note,
  [1678] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(181), 1,
      sym_note_text,
  [1694] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(196), 1,
      sym_note_text,
  [1710] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(337), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(195), 1,
      sym_note_text,
  [1726] = 3,
    ACTIONS(341), 1,
      anon_sym_LBRACK,
    STATE(114), 1,
      sym_variant_notes,
    ACTIONS(339), 3,
      sym__identifier,
      sym_string,
      anon_sym_RBRACE,
  [1738] = 3,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 2,
      sym__identifier,
      sym_string,
    STATE(87), 2,
      sym_variant,
      aux_sym_enum_repeat1,
  [1750] = 3,
    ACTIONS(350), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 2,
      sym__identifier,
      sym_string,
    STATE(87), 2,
      sym_variant,
      aux_sym_enum_repeat1,
  [1762] = 3,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    ACTIONS(343), 2,
      sym__identifier,
      sym_string,
    STATE(86), 2,
      sym_variant,
      aux_sym_enum_repeat1,
  [1774] = 2,
    ACTIONS(356), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(354), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1784] = 2,
    ACTIONS(360), 1,
      anon_sym_RBRACE,
    ACTIONS(358), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1793] = 2,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    ACTIONS(362), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1802] = 2,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(366), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1811] = 2,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    ACTIONS(370), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1820] = 2,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1829] = 2,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1838] = 4,
    ACTIONS(374), 1,
      anon_sym_LT,
    ACTIONS(376), 1,
      anon_sym_GT,
    ACTIONS(378), 1,
      anon_sym_DASH,
    ACTIONS(380), 1,
      anon_sym_LT_GT,
  [1851] = 2,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1860] = 4,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(386), 1,
      anon_sym_RBRACK,
    STATE(108), 1,
      aux_sym_table_settings_repeat1,
  [1873] = 2,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(388), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1882] = 2,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    ACTIONS(77), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1891] = 2,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1900] = 2,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    ACTIONS(113), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1909] = 2,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1918] = 2,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1927] = 2,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1936] = 3,
    ACTIONS(392), 1,
      sym__identifier,
    ACTIONS(394), 1,
      anon_sym_COLON,
    ACTIONS(396), 1,
      anon_sym_LBRACE,
  [1946] = 3,
    ACTIONS(398), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(400), 1,
      anon_sym_STAR_SLASH,
    STATE(135), 1,
      aux_sym_multiline_string_repeat1,
  [1956] = 3,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym_table_settings_repeat1,
  [1966] = 3,
    ACTIONS(404), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(406), 1,
      aux_sym_multiline_string_token1,
    STATE(138), 1,
      aux_sym_multiline_string_repeat1,
  [1976] = 3,
    ACTIONS(408), 1,
      sym__identifier,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      aux_sym_table_group_repeat1,
  [1986] = 3,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(415), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_column_settings_repeat1,
  [1996] = 3,
    ACTIONS(408), 1,
      sym__identifier,
    ACTIONS(417), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      aux_sym_table_group_repeat1,
  [2006] = 3,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(419), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym_table_settings_repeat1,
  [2016] = 1,
    ACTIONS(421), 3,
      sym__identifier,
      sym_string,
      anon_sym_RBRACE,
  [2022] = 3,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    STATE(176), 1,
      sym_table_settings,
  [2032] = 3,
    ACTIONS(425), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(428), 1,
      anon_sym_STAR_SLASH,
    STATE(116), 1,
      aux_sym_multiline_string_repeat1,
  [2042] = 3,
    ACTIONS(384), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_RBRACK,
    STATE(113), 1,
      aux_sym_table_settings_repeat1,
  [2052] = 3,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      aux_sym_variant_notes_repeat1,
  [2062] = 1,
    ACTIONS(437), 3,
      sym__identifier,
      sym_string,
      anon_sym_RBRACE,
  [2068] = 3,
    ACTIONS(327), 1,
      anon_sym_LBRACK,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_table_settings,
  [2078] = 3,
    ACTIONS(441), 1,
      sym__identifier,
    ACTIONS(443), 1,
      anon_sym_RBRACK,
    STATE(117), 1,
      sym_key_value,
  [2088] = 3,
    ACTIONS(406), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(445), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(123), 1,
      aux_sym_multiline_string_repeat1,
  [2098] = 3,
    ACTIONS(428), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(447), 1,
      aux_sym_multiline_string_token1,
    STATE(123), 1,
      aux_sym_multiline_string_repeat1,
  [2108] = 3,
    ACTIONS(450), 1,
      sym__identifier,
    ACTIONS(453), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      aux_sym_table_group_repeat1,
  [2118] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RBRACK,
    STATE(111), 1,
      aux_sym_column_settings_repeat1,
  [2128] = 3,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(461), 1,
      anon_sym_RBRACK,
    STATE(130), 1,
      aux_sym_variant_notes_repeat1,
  [2138] = 3,
    ACTIONS(463), 1,
      sym__identifier,
    ACTIONS(465), 1,
      anon_sym_COLON,
    ACTIONS(467), 1,
      anon_sym_LBRACE,
  [2148] = 3,
    ACTIONS(408), 1,
      sym__identifier,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    STATE(124), 1,
      aux_sym_table_group_repeat1,
  [2158] = 3,
    ACTIONS(471), 1,
      sym__identifier,
    ACTIONS(473), 1,
      anon_sym_COLON,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
  [2168] = 3,
    ACTIONS(459), 1,
      anon_sym_COMMA,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
    STATE(118), 1,
      aux_sym_variant_notes_repeat1,
  [2178] = 2,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(479), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2186] = 1,
    ACTIONS(481), 3,
      sym__identifier,
      sym_string,
      anon_sym_RBRACE,
  [2192] = 3,
    ACTIONS(406), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(483), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(122), 1,
      aux_sym_multiline_string_repeat1,
  [2202] = 3,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    ACTIONS(488), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym_table_settings_repeat1,
  [2212] = 3,
    ACTIONS(398), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(490), 1,
      anon_sym_STAR_SLASH,
    STATE(116), 1,
      aux_sym_multiline_string_repeat1,
  [2222] = 3,
    ACTIONS(408), 1,
      sym__identifier,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      aux_sym_table_group_repeat1,
  [2232] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    STATE(125), 1,
      aux_sym_column_settings_repeat1,
  [2242] = 3,
    ACTIONS(406), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(496), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(123), 1,
      aux_sym_multiline_string_repeat1,
  [2252] = 1,
    ACTIONS(498), 3,
      sym__identifier,
      sym_string,
      anon_sym_RBRACE,
  [2258] = 2,
    ACTIONS(291), 1,
      sym__identifier,
    STATE(152), 1,
      sym__column_reference,
  [2265] = 2,
    ACTIONS(291), 1,
      sym__identifier,
    STATE(157), 1,
      sym__column_reference,
  [2272] = 2,
    ACTIONS(291), 1,
      sym__identifier,
    STATE(19), 1,
      sym__column_reference,
  [2279] = 2,
    ACTIONS(291), 1,
      sym__identifier,
    STATE(18), 1,
      sym__column_reference,
  [2286] = 2,
    ACTIONS(291), 1,
      sym__identifier,
    STATE(21), 1,
      sym__column_reference,
  [2293] = 2,
    ACTIONS(291), 1,
      sym__identifier,
    STATE(20), 1,
      sym__column_reference,
  [2300] = 2,
    ACTIONS(500), 1,
      sym__identifier,
    STATE(153), 1,
      sym_key_value,
  [2307] = 2,
    ACTIONS(502), 1,
      anon_sym_COLON,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
  [2314] = 1,
    ACTIONS(506), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2319] = 1,
    ACTIONS(428), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_multiline_string_token1,
  [2324] = 1,
    ACTIONS(508), 2,
      sym__identifier,
      anon_sym_RBRACE,
  [2329] = 1,
    ACTIONS(510), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2334] = 1,
    ACTIONS(512), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2339] = 1,
    ACTIONS(488), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2344] = 1,
    ACTIONS(514), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2349] = 1,
    ACTIONS(516), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2354] = 2,
    ACTIONS(518), 1,
      sym__identifier,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
  [2361] = 1,
    ACTIONS(522), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2366] = 1,
    ACTIONS(428), 2,
      aux_sym_multiline_string_token1,
      anon_sym_STAR_SLASH,
  [2371] = 1,
    ACTIONS(415), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2376] = 2,
    ACTIONS(291), 1,
      sym__identifier,
    STATE(155), 1,
      sym__column_reference,
  [2383] = 1,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2388] = 1,
    ACTIONS(524), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2393] = 2,
    ACTIONS(291), 1,
      sym__identifier,
    STATE(151), 1,
      sym__column_reference,
  [2400] = 1,
    ACTIONS(526), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2405] = 1,
    ACTIONS(528), 1,
      ts_builtin_sym_end,
  [2409] = 1,
    ACTIONS(382), 1,
      anon_sym_COLON,
  [2413] = 1,
    ACTIONS(530), 1,
      sym__identifier,
  [2417] = 1,
    ACTIONS(439), 1,
      anon_sym_LBRACE,
  [2421] = 1,
    ACTIONS(532), 1,
      sym__identifier,
  [2425] = 1,
    ACTIONS(534), 1,
      anon_sym_COLON,
  [2429] = 1,
    ACTIONS(536), 1,
      anon_sym_DOT,
  [2433] = 1,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
  [2437] = 1,
    ACTIONS(540), 1,
      sym__identifier,
  [2441] = 1,
    ACTIONS(542), 1,
      sym__identifier,
  [2445] = 1,
    ACTIONS(544), 1,
      anon_sym_LBRACE,
  [2449] = 1,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
  [2453] = 1,
    ACTIONS(548), 1,
      anon_sym_LBRACE,
  [2457] = 1,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
  [2461] = 1,
    ACTIONS(552), 1,
      sym__identifier,
  [2465] = 1,
    ACTIONS(554), 1,
      anon_sym_LF,
  [2469] = 1,
    ACTIONS(556), 1,
      anon_sym_RBRACE,
  [2473] = 1,
    ACTIONS(558), 1,
      sym__identifier,
  [2477] = 1,
    ACTIONS(560), 1,
      anon_sym_LBRACE,
  [2481] = 1,
    ACTIONS(562), 1,
      anon_sym_LBRACE,
  [2485] = 1,
    ACTIONS(564), 1,
      anon_sym_LBRACE,
  [2489] = 1,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
  [2493] = 1,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
  [2497] = 1,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
  [2501] = 1,
    ACTIONS(570), 1,
      anon_sym_LBRACE,
  [2505] = 1,
    ACTIONS(572), 1,
      anon_sym_RBRACE,
  [2509] = 1,
    ACTIONS(574), 1,
      anon_sym_LF,
  [2513] = 1,
    ACTIONS(576), 1,
      anon_sym_RBRACE,
  [2517] = 1,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
  [2521] = 1,
    ACTIONS(580), 1,
      sym__identifier,
  [2525] = 1,
    ACTIONS(582), 1,
      anon_sym_RBRACE,
  [2529] = 1,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
  [2533] = 1,
    ACTIONS(586), 1,
      anon_sym_COLON,
  [2537] = 1,
    ACTIONS(588), 1,
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
  [SMALL_STATE(10)] = 272,
  [SMALL_STATE(11)] = 307,
  [SMALL_STATE(12)] = 339,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 383,
  [SMALL_STATE(15)] = 405,
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
  [SMALL_STATE(47)] = 1054,
  [SMALL_STATE(48)] = 1075,
  [SMALL_STATE(49)] = 1096,
  [SMALL_STATE(50)] = 1117,
  [SMALL_STATE(51)] = 1138,
  [SMALL_STATE(52)] = 1159,
  [SMALL_STATE(53)] = 1180,
  [SMALL_STATE(54)] = 1201,
  [SMALL_STATE(55)] = 1222,
  [SMALL_STATE(56)] = 1243,
  [SMALL_STATE(57)] = 1264,
  [SMALL_STATE(58)] = 1285,
  [SMALL_STATE(59)] = 1306,
  [SMALL_STATE(60)] = 1327,
  [SMALL_STATE(61)] = 1348,
  [SMALL_STATE(62)] = 1369,
  [SMALL_STATE(63)] = 1390,
  [SMALL_STATE(64)] = 1410,
  [SMALL_STATE(65)] = 1430,
  [SMALL_STATE(66)] = 1449,
  [SMALL_STATE(67)] = 1470,
  [SMALL_STATE(68)] = 1484,
  [SMALL_STATE(69)] = 1498,
  [SMALL_STATE(70)] = 1512,
  [SMALL_STATE(71)] = 1526,
  [SMALL_STATE(72)] = 1541,
  [SMALL_STATE(73)] = 1552,
  [SMALL_STATE(74)] = 1563,
  [SMALL_STATE(75)] = 1578,
  [SMALL_STATE(76)] = 1589,
  [SMALL_STATE(77)] = 1604,
  [SMALL_STATE(78)] = 1615,
  [SMALL_STATE(79)] = 1634,
  [SMALL_STATE(80)] = 1650,
  [SMALL_STATE(81)] = 1666,
  [SMALL_STATE(82)] = 1678,
  [SMALL_STATE(83)] = 1694,
  [SMALL_STATE(84)] = 1710,
  [SMALL_STATE(85)] = 1726,
  [SMALL_STATE(86)] = 1738,
  [SMALL_STATE(87)] = 1750,
  [SMALL_STATE(88)] = 1762,
  [SMALL_STATE(89)] = 1774,
  [SMALL_STATE(90)] = 1784,
  [SMALL_STATE(91)] = 1793,
  [SMALL_STATE(92)] = 1802,
  [SMALL_STATE(93)] = 1811,
  [SMALL_STATE(94)] = 1820,
  [SMALL_STATE(95)] = 1829,
  [SMALL_STATE(96)] = 1838,
  [SMALL_STATE(97)] = 1851,
  [SMALL_STATE(98)] = 1860,
  [SMALL_STATE(99)] = 1873,
  [SMALL_STATE(100)] = 1882,
  [SMALL_STATE(101)] = 1891,
  [SMALL_STATE(102)] = 1900,
  [SMALL_STATE(103)] = 1909,
  [SMALL_STATE(104)] = 1918,
  [SMALL_STATE(105)] = 1927,
  [SMALL_STATE(106)] = 1936,
  [SMALL_STATE(107)] = 1946,
  [SMALL_STATE(108)] = 1956,
  [SMALL_STATE(109)] = 1966,
  [SMALL_STATE(110)] = 1976,
  [SMALL_STATE(111)] = 1986,
  [SMALL_STATE(112)] = 1996,
  [SMALL_STATE(113)] = 2006,
  [SMALL_STATE(114)] = 2016,
  [SMALL_STATE(115)] = 2022,
  [SMALL_STATE(116)] = 2032,
  [SMALL_STATE(117)] = 2042,
  [SMALL_STATE(118)] = 2052,
  [SMALL_STATE(119)] = 2062,
  [SMALL_STATE(120)] = 2068,
  [SMALL_STATE(121)] = 2078,
  [SMALL_STATE(122)] = 2088,
  [SMALL_STATE(123)] = 2098,
  [SMALL_STATE(124)] = 2108,
  [SMALL_STATE(125)] = 2118,
  [SMALL_STATE(126)] = 2128,
  [SMALL_STATE(127)] = 2138,
  [SMALL_STATE(128)] = 2148,
  [SMALL_STATE(129)] = 2158,
  [SMALL_STATE(130)] = 2168,
  [SMALL_STATE(131)] = 2178,
  [SMALL_STATE(132)] = 2186,
  [SMALL_STATE(133)] = 2192,
  [SMALL_STATE(134)] = 2202,
  [SMALL_STATE(135)] = 2212,
  [SMALL_STATE(136)] = 2222,
  [SMALL_STATE(137)] = 2232,
  [SMALL_STATE(138)] = 2242,
  [SMALL_STATE(139)] = 2252,
  [SMALL_STATE(140)] = 2258,
  [SMALL_STATE(141)] = 2265,
  [SMALL_STATE(142)] = 2272,
  [SMALL_STATE(143)] = 2279,
  [SMALL_STATE(144)] = 2286,
  [SMALL_STATE(145)] = 2293,
  [SMALL_STATE(146)] = 2300,
  [SMALL_STATE(147)] = 2307,
  [SMALL_STATE(148)] = 2314,
  [SMALL_STATE(149)] = 2319,
  [SMALL_STATE(150)] = 2324,
  [SMALL_STATE(151)] = 2329,
  [SMALL_STATE(152)] = 2334,
  [SMALL_STATE(153)] = 2339,
  [SMALL_STATE(154)] = 2344,
  [SMALL_STATE(155)] = 2349,
  [SMALL_STATE(156)] = 2354,
  [SMALL_STATE(157)] = 2361,
  [SMALL_STATE(158)] = 2366,
  [SMALL_STATE(159)] = 2371,
  [SMALL_STATE(160)] = 2376,
  [SMALL_STATE(161)] = 2383,
  [SMALL_STATE(162)] = 2388,
  [SMALL_STATE(163)] = 2393,
  [SMALL_STATE(164)] = 2400,
  [SMALL_STATE(165)] = 2405,
  [SMALL_STATE(166)] = 2409,
  [SMALL_STATE(167)] = 2413,
  [SMALL_STATE(168)] = 2417,
  [SMALL_STATE(169)] = 2421,
  [SMALL_STATE(170)] = 2425,
  [SMALL_STATE(171)] = 2429,
  [SMALL_STATE(172)] = 2433,
  [SMALL_STATE(173)] = 2437,
  [SMALL_STATE(174)] = 2441,
  [SMALL_STATE(175)] = 2445,
  [SMALL_STATE(176)] = 2449,
  [SMALL_STATE(177)] = 2453,
  [SMALL_STATE(178)] = 2457,
  [SMALL_STATE(179)] = 2461,
  [SMALL_STATE(180)] = 2465,
  [SMALL_STATE(181)] = 2469,
  [SMALL_STATE(182)] = 2473,
  [SMALL_STATE(183)] = 2477,
  [SMALL_STATE(184)] = 2481,
  [SMALL_STATE(185)] = 2485,
  [SMALL_STATE(186)] = 2489,
  [SMALL_STATE(187)] = 2493,
  [SMALL_STATE(188)] = 2497,
  [SMALL_STATE(189)] = 2501,
  [SMALL_STATE(190)] = 2505,
  [SMALL_STATE(191)] = 2509,
  [SMALL_STATE(192)] = 2513,
  [SMALL_STATE(193)] = 2517,
  [SMALL_STATE(194)] = 2521,
  [SMALL_STATE(195)] = 2525,
  [SMALL_STATE(196)] = 2529,
  [SMALL_STATE(197)] = 2533,
  [SMALL_STATE(198)] = 2537,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(26),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(107),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(179),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(173),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(106),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(174),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(156),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(129),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 3, .production_id = 12),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 3, .production_id = 12),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 5, .production_id = 17),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 5, .production_id = 17),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_text, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, .production_id = 8),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, .production_id = 8),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 5, .production_id = 8),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 5, .production_id = 8),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_to_one, 3, .production_id = 13),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_to_one, 3, .production_id = 13),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_to_many, 3, .production_id = 13),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_to_many, 3, .production_id = 13),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_to_many, 3, .production_id = 13),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_to_many, 3, .production_id = 13),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_to_one, 3, .production_id = 13),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_to_one, 3, .production_id = 13),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 5, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 5, .production_id = 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 6),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 6),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, .production_id = 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4, .production_id = 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, .production_id = 15),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 6, .production_id = 15),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, .production_id = 3),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5, .production_id = 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 4, .production_id = 5),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 4, .production_id = 5),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 5, .production_id = 5),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 5, .production_id = 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 7, .production_id = 15),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 7, .production_id = 15),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 7),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 6, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 7, .production_id = 3),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 7, .production_id = 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 8, .production_id = 15),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 8, .production_id = 15),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 5, .production_id = 7),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 5, .production_id = 7),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, .production_id = 6),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5, .production_id = 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 9, .production_id = 15),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 9, .production_id = 15),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [241] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(166),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2),
  [246] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(127),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(46),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [264] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(127),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, .production_id = 14),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 14),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, .production_id = 10),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 10),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, .production_id = 9),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 9),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [347] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(85),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 10),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 10),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 2),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 9),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 9),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2), SHIFT_REPEAT(11),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 2),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [425] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(180),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_notes_repeat1, 2), SHIFT_REPEAT(81),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_notes_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(191),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2), SHIFT_REPEAT(150),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2, .production_id = 11),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2), SHIFT_REPEAT(146),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_alias, 2, .production_id = 4),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 1, .production_id = 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_many, 2),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_one, 2),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_setting, 1, .production_id = 16),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_one, 2),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_many, 2),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_reference, 3),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_setting, 3),
  [528] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 4, .production_id = 11),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 4),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 3, .production_id = 11),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
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
