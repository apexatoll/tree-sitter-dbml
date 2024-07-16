#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 192
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 13
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 17

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
  anon_sym_LF = 10,
  aux_sym_multiline_string_token1 = 11,
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
  sym__boolean = 55,
  sym__null = 56,
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
  aux_sym_project_repeat1 = 98,
  aux_sym_table_repeat1 = 99,
  aux_sym_table_settings_repeat1 = 100,
  aux_sym_column_settings_repeat1 = 101,
  aux_sym_enum_repeat1 = 102,
  aux_sym_variant_notes_repeat1 = 103,
  aux_sym_table_group_repeat1 = 104,
  alias_sym_column_name = 105,
  alias_sym_enum_name = 106,
  alias_sym_from_column = 107,
  alias_sym_key = 108,
  alias_sym_keyword = 109,
  alias_sym_note_name = 110,
  alias_sym_null_setting = 111,
  alias_sym_project_name = 112,
  alias_sym_reference_name = 113,
  alias_sym_schema_name = 114,
  alias_sym_table_alias = 115,
  alias_sym_table_group_name = 116,
  alias_sym_table_name = 117,
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
  [anon_sym_LF] = "\n",
  [aux_sym_multiline_string_token1] = "multiline_string_token1",
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
  [sym__boolean] = "_boolean",
  [sym__null] = "_null",
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
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_multiline_string_token1] = aux_sym_multiline_string_token1,
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
  [sym__boolean] = sym__boolean,
  [sym__null] = sym__null,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_string_token1] = {
    .visible = false,
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
  [sym__boolean] = {
    .visible = false,
    .named = true,
  },
  [sym__null] = {
    .visible = false,
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
  },
  [10] = {
    [1] = alias_sym_keyword,
  },
  [11] = {
    [0] = alias_sym_table_name,
    [2] = alias_sym_column_name,
  },
  [12] = {
    [0] = alias_sym_from_column,
  },
  [13] = {
    [0] = alias_sym_key,
  },
  [14] = {
    [1] = alias_sym_schema_name,
    [3] = alias_sym_table_name,
  },
  [15] = {
    [0] = alias_sym_null_setting,
  },
  [16] = {
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
  [64] = 6,
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
  [81] = 77,
  [82] = 82,
  [83] = 78,
  [84] = 84,
  [85] = 11,
  [86] = 86,
  [87] = 87,
  [88] = 7,
  [89] = 89,
  [90] = 15,
  [91] = 14,
  [92] = 13,
  [93] = 10,
  [94] = 94,
  [95] = 95,
  [96] = 16,
  [97] = 8,
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
  [108] = 103,
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
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
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
  [158] = 158,
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
  [185] = 152,
  [186] = 148,
  [187] = 149,
  [188] = 181,
  [189] = 153,
  [190] = 158,
  [191] = 154,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(128);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '*') ADVANCE(11);
      if (lookahead == ',') ADVANCE(169);
      if (lookahead == '-') ADVANCE(183);
      if (lookahead == '.') ADVANCE(166);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(159);
      if (lookahead == '<') ADVANCE(181);
      if (lookahead == '>') ADVANCE(182);
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(100);
      if (lookahead == 'R') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == '[') ADVANCE(168);
      if (lookahead == ']') ADVANCE(170);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(13);
      if (lookahead == 'i') ADVANCE(78);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(58);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 's') ADVANCE(113);
      if (lookahead == 't') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(79);
      if (lookahead == 'v') ADVANCE(14);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(142);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ',') ADVANCE(169);
      if (lookahead == 'N') ADVANCE(131);
      if (lookahead == '[') ADVANCE(168);
      if (lookahead == ']') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == ':') ADVANCE(159);
      if (lookahead == '[') ADVANCE(168);
      if (lookahead == ']') ADVANCE(170);
      if (lookahead == '{') ADVANCE(162);
      if (lookahead == '}') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '\'') ADVANCE(143);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(147);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(148);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(122);
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
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(121);
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
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(105);
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
      if (lookahead == 'f') ADVANCE(180);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(177);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(155);
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
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'o') ADVANCE(107);
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
      if (lookahead == 'j') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 'j') ADVANCE(44);
      END_STATE();
    case 58:
      if (lookahead == 'k') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(141);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(173);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(106);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(110);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 72:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'm') ADVANCE(39);
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
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 80:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(112);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(157);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 94:
      if (lookahead == 'q') ADVANCE(123);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(158);
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
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 105:
      if (lookahead == 's') ADVANCE(116);
      END_STATE();
    case 106:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(156);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 114:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(70);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(92);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(93);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 125:
      if (lookahead == 'x') ADVANCE(108);
      END_STATE();
    case 126:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 127:
      if (lookahead == 'y') ADVANCE(171);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_varchar);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(101);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(184);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_Note);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
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
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 0},
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
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 2},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 145},
  [159] = {.lex_state = 145},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 6},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 145},
  [191] = {.lex_state = 2},
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
    [sym_schema] = STATE(168),
    [sym__multiline_comment] = STATE(39),
    [sym__definition] = STATE(2),
    [sym_project] = STATE(2),
    [sym_table] = STATE(2),
    [sym_enum] = STATE(2),
    [sym_reference] = STATE(2),
    [sym__short_reference] = STATE(27),
    [sym__long_reference] = STATE(27),
    [sym_table_group] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_note] = STATE(2),
    [sym__short_note] = STATE(11),
    [sym__long_note] = STATE(11),
    [aux_sym_schema_repeat1] = STATE(2),
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
    ACTIONS(5), 1,
      sym__comment,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(39), 1,
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
    STATE(11), 2,
      sym__short_note,
      sym__long_note,
    STATE(27), 2,
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
      aux_sym_schema_repeat1,
  [56] = 13,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym__comment,
    ACTIONS(28), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym__multiline_comment,
    ACTIONS(31), 2,
      anon_sym_project,
      anon_sym_Project,
    ACTIONS(34), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(37), 2,
      anon_sym_ref,
      anon_sym_Ref,
    ACTIONS(40), 2,
      anon_sym_enum,
      anon_sym_Enum,
    ACTIONS(43), 2,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
    ACTIONS(46), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(11), 2,
      sym__short_note,
      sym__long_note,
    STATE(27), 2,
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
    STATE(15), 1,
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
    STATE(11), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(79), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
    STATE(120), 5,
      sym__unary_setting,
      sym__binary_setting,
      sym_default_setting,
      sym__inline_reference,
      sym_note,
  [284] = 2,
    ACTIONS(87), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(85), 15,
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
  [306] = 2,
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
  [328] = 7,
    ACTIONS(75), 1,
      anon_sym_null,
    ACTIONS(81), 1,
      anon_sym_default,
    ACTIONS(83), 1,
      anon_sym_ref,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(11), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(93), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
    STATE(138), 5,
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
  [382] = 2,
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
  [404] = 2,
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
  [426] = 2,
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
  [448] = 2,
    ACTIONS(113), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(111), 14,
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
  [469] = 2,
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
  [490] = 2,
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
  [511] = 2,
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
  [532] = 2,
    ACTIONS(129), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(127), 13,
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
  [552] = 2,
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
  [572] = 2,
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
  [592] = 2,
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
  [612] = 2,
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
  [632] = 2,
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
  [652] = 2,
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
  [672] = 2,
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
  [692] = 2,
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
  [712] = 2,
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
  [732] = 2,
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
  [752] = 2,
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
  [772] = 2,
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
  [792] = 2,
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
  [812] = 2,
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
  [832] = 2,
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
  [852] = 2,
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
  [872] = 2,
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
  [892] = 2,
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
  [912] = 2,
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
  [932] = 2,
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
  [952] = 2,
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
  [972] = 2,
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
  [992] = 3,
    STATE(71), 1,
      sym_type,
    ACTIONS(219), 3,
      anon_sym_bool,
      anon_sym_date,
      anon_sym_int,
    ACTIONS(221), 7,
      anon_sym_boolean,
      anon_sym_datetime,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_text,
      anon_sym_timestamp,
      anon_sym_varchar,
  [1010] = 5,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(226), 1,
      anon_sym_RBRACE,
    ACTIONS(228), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(45), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [1031] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(58), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1052] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(237), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(58), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1073] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(46), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1094] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(239), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(58), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1115] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(58), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1136] = 5,
    ACTIONS(243), 1,
      sym__identifier,
    ACTIONS(245), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(45), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [1157] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(57), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1178] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(54), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1199] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(58), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1220] = 5,
    ACTIONS(243), 1,
      sym__identifier,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(51), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [1241] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(47), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1262] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(253), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(58), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1283] = 5,
    ACTIONS(255), 1,
      sym__identifier,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(260), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(58), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1304] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(249), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(49), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1325] = 5,
    ACTIONS(231), 1,
      sym__identifier,
    ACTIONS(263), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(85), 2,
      sym__short_note,
      sym__long_note,
    STATE(50), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1346] = 3,
    STATE(73), 1,
      sym_value,
    STATE(69), 2,
      sym__boolean,
      sym__null,
    ACTIONS(265), 6,
      sym_string,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_nil,
  [1362] = 3,
    STATE(144), 1,
      sym_value,
    STATE(69), 2,
      sym__boolean,
      sym__null,
    ACTIONS(265), 6,
      sym_string,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_nil,
  [1378] = 5,
    ACTIONS(267), 1,
      anon_sym_LT,
    ACTIONS(269), 1,
      anon_sym_GT,
    ACTIONS(271), 1,
      anon_sym_DASH,
    ACTIONS(273), 1,
      anon_sym_LT_GT,
    STATE(139), 4,
      sym_inline_one_to_many,
      sym_inline_many_to_one,
      sym_inline_one_to_one,
      sym_inline_many_to_many,
  [1397] = 6,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(275), 1,
      sym_string,
    ACTIONS(277), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(88), 1,
      sym_multiline_string,
    STATE(90), 1,
      sym_note_text,
    ACTIONS(65), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1418] = 3,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(86), 1,
      sym__column_reference,
    STATE(28), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1432] = 3,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(86), 1,
      sym__column_reference,
    STATE(41), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1446] = 3,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(86), 1,
      sym__column_reference,
    STATE(166), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1460] = 3,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(86), 1,
      sym__column_reference,
    STATE(173), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1474] = 2,
    ACTIONS(281), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(283), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1485] = 4,
    ACTIONS(285), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      sym_note,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(11), 2,
      sym__short_note,
      sym__long_note,
  [1500] = 4,
    ACTIONS(289), 1,
      anon_sym_RBRACE,
    ACTIONS(291), 1,
      anon_sym_LBRACK,
    STATE(89), 1,
      sym_column_settings,
    ACTIONS(287), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1515] = 6,
    ACTIONS(293), 1,
      anon_sym_LBRACE,
    ACTIONS(295), 1,
      anon_sym_DOT,
    ACTIONS(297), 1,
      anon_sym_as,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    STATE(106), 1,
      sym__table_alias,
    STATE(175), 1,
      sym_table_settings,
  [1534] = 2,
    ACTIONS(301), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(303), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1545] = 5,
    ACTIONS(297), 1,
      anon_sym_as,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 1,
      anon_sym_LBRACE,
    STATE(111), 1,
      sym__table_alias,
    STATE(167), 1,
      sym_table_settings,
  [1561] = 3,
    ACTIONS(309), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 2,
      sym__identifier,
      sym_string,
    STATE(76), 2,
      sym_variant,
      aux_sym_enum_repeat1,
  [1573] = 3,
    ACTIONS(311), 1,
      anon_sym_RBRACE,
    ACTIONS(307), 2,
      sym__identifier,
      sym_string,
    STATE(82), 2,
      sym_variant,
      aux_sym_enum_repeat1,
  [1585] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(313), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(185), 1,
      sym_note_text,
  [1601] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(315), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(186), 1,
      sym_note_text,
  [1617] = 3,
    ACTIONS(319), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      sym_variant_notes,
    ACTIONS(317), 3,
      sym__identifier,
      sym_string,
      anon_sym_RBRACE,
  [1629] = 3,
    STATE(147), 1,
      sym_note,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(11), 2,
      sym__short_note,
      sym__long_note,
  [1641] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(321), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(152), 1,
      sym_note_text,
  [1657] = 3,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    ACTIONS(323), 2,
      sym__identifier,
      sym_string,
    STATE(82), 2,
      sym_variant,
      aux_sym_enum_repeat1,
  [1669] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(328), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(148), 1,
      sym_note_text,
  [1685] = 2,
    ACTIONS(332), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(330), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1695] = 2,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1704] = 4,
    ACTIONS(334), 1,
      anon_sym_LT,
    ACTIONS(336), 1,
      anon_sym_GT,
    ACTIONS(338), 1,
      anon_sym_DASH,
    ACTIONS(340), 1,
      anon_sym_LT_GT,
  [1717] = 2,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(342), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1726] = 2,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1735] = 2,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    ACTIONS(346), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1744] = 2,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1753] = 2,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1762] = 2,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1771] = 2,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1780] = 2,
    ACTIONS(352), 1,
      anon_sym_RBRACE,
    ACTIONS(350), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1789] = 2,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    ACTIONS(354), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1798] = 2,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1807] = 2,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1816] = 4,
    ACTIONS(358), 1,
      anon_sym_COLON,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(102), 1,
      aux_sym_table_settings_repeat1,
  [1829] = 3,
    ACTIONS(364), 1,
      sym__identifier,
    ACTIONS(366), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      aux_sym_table_group_repeat1,
  [1839] = 3,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(104), 1,
      aux_sym_table_settings_repeat1,
  [1849] = 3,
    ACTIONS(364), 1,
      sym__identifier,
    ACTIONS(370), 1,
      anon_sym_RBRACE,
    STATE(113), 1,
      aux_sym_table_group_repeat1,
  [1859] = 3,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(372), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_table_settings_repeat1,
  [1869] = 3,
    ACTIONS(374), 1,
      sym__identifier,
    ACTIONS(376), 1,
      anon_sym_COLON,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
  [1879] = 3,
    ACTIONS(360), 1,
      anon_sym_COMMA,
    ACTIONS(380), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_table_settings_repeat1,
  [1889] = 3,
    ACTIONS(382), 1,
      sym__identifier,
    ACTIONS(384), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      sym_key_value,
  [1899] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(386), 1,
      anon_sym_LBRACE,
    STATE(163), 1,
      sym_table_settings,
  [1909] = 3,
    ACTIONS(388), 1,
      anon_sym_COMMA,
    ACTIONS(391), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_column_settings_repeat1,
  [1919] = 3,
    ACTIONS(393), 1,
      sym__identifier,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(397), 1,
      anon_sym_LBRACE,
  [1929] = 3,
    ACTIONS(399), 1,
      anon_sym_COMMA,
    ACTIONS(402), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_variant_notes_repeat1,
  [1939] = 1,
    ACTIONS(404), 3,
      sym__identifier,
      sym_string,
      anon_sym_RBRACE,
  [1945] = 3,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    ACTIONS(406), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_table_settings,
  [1955] = 1,
    ACTIONS(408), 3,
      sym__identifier,
      sym_string,
      anon_sym_RBRACE,
  [1961] = 3,
    ACTIONS(364), 1,
      sym__identifier,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_table_group_repeat1,
  [1971] = 3,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(414), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      aux_sym_column_settings_repeat1,
  [1981] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(418), 1,
      anon_sym_RBRACK,
    STATE(109), 1,
      aux_sym_variant_notes_repeat1,
  [1991] = 3,
    ACTIONS(420), 1,
      sym__identifier,
    ACTIONS(423), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_table_group_repeat1,
  [2001] = 3,
    ACTIONS(364), 1,
      sym__identifier,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(116), 1,
      aux_sym_table_group_repeat1,
  [2011] = 1,
    ACTIONS(427), 3,
      sym__identifier,
      sym_string,
      anon_sym_RBRACE,
  [2017] = 3,
    ACTIONS(429), 1,
      sym__identifier,
    ACTIONS(431), 1,
      anon_sym_COLON,
    ACTIONS(433), 1,
      anon_sym_LBRACE,
  [2027] = 3,
    ACTIONS(412), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RBRACK,
    STATE(114), 1,
      aux_sym_column_settings_repeat1,
  [2037] = 3,
    ACTIONS(437), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_RBRACK,
    STATE(121), 1,
      aux_sym_table_settings_repeat1,
  [2047] = 1,
    ACTIONS(442), 3,
      sym__identifier,
      sym_string,
      anon_sym_RBRACE,
  [2053] = 3,
    ACTIONS(416), 1,
      anon_sym_COMMA,
    ACTIONS(444), 1,
      anon_sym_RBRACK,
    STATE(115), 1,
      aux_sym_variant_notes_repeat1,
  [2063] = 2,
    ACTIONS(358), 1,
      anon_sym_COLON,
    ACTIONS(446), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2071] = 2,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(18), 1,
      sym__column_reference,
  [2078] = 2,
    ACTIONS(448), 1,
      sym__identifier,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
  [2085] = 2,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(19), 1,
      sym__column_reference,
  [2092] = 2,
    ACTIONS(452), 1,
      sym__identifier,
    STATE(130), 1,
      sym_key_value,
  [2099] = 2,
    ACTIONS(454), 1,
      anon_sym_COLON,
    ACTIONS(456), 1,
      anon_sym_LBRACE,
  [2106] = 1,
    ACTIONS(440), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2111] = 1,
    ACTIONS(458), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2116] = 1,
    ACTIONS(460), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2121] = 2,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(17), 1,
      sym__column_reference,
  [2128] = 1,
    ACTIONS(462), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2133] = 1,
    ACTIONS(464), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2138] = 1,
    ACTIONS(466), 2,
      sym__identifier,
      anon_sym_RBRACE,
  [2143] = 1,
    ACTIONS(468), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2148] = 1,
    ACTIONS(391), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2153] = 1,
    ACTIONS(470), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2158] = 2,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(131), 1,
      sym__column_reference,
  [2165] = 2,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(132), 1,
      sym__column_reference,
  [2172] = 2,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(134), 1,
      sym__column_reference,
  [2179] = 2,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(135), 1,
      sym__column_reference,
  [2186] = 1,
    ACTIONS(472), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2191] = 1,
    ACTIONS(474), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2196] = 2,
    ACTIONS(279), 1,
      sym__identifier,
    STATE(20), 1,
      sym__column_reference,
  [2203] = 1,
    ACTIONS(402), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2208] = 1,
    ACTIONS(476), 1,
      anon_sym_RBRACE,
  [2212] = 1,
    ACTIONS(478), 1,
      anon_sym_LF,
  [2216] = 1,
    ACTIONS(480), 1,
      anon_sym_STAR_SLASH,
  [2220] = 1,
    ACTIONS(482), 1,
      anon_sym_LF,
  [2224] = 1,
    ACTIONS(484), 1,
      anon_sym_RBRACE,
  [2228] = 1,
    ACTIONS(486), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [2232] = 1,
    ACTIONS(488), 1,
      anon_sym_LF,
  [2236] = 1,
    ACTIONS(490), 1,
      anon_sym_LBRACE,
  [2240] = 1,
    ACTIONS(492), 1,
      sym__identifier,
  [2244] = 1,
    ACTIONS(494), 1,
      sym__identifier,
  [2248] = 1,
    ACTIONS(496), 1,
      aux_sym_multiline_string_token1,
  [2252] = 1,
    ACTIONS(498), 1,
      aux_sym_multiline_string_token1,
  [2256] = 1,
    ACTIONS(500), 1,
      sym__identifier,
  [2260] = 1,
    ACTIONS(502), 1,
      anon_sym_LBRACE,
  [2264] = 1,
    ACTIONS(504), 1,
      anon_sym_LBRACE,
  [2268] = 1,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
  [2272] = 1,
    ACTIONS(508), 1,
      anon_sym_COLON,
  [2276] = 1,
    ACTIONS(510), 1,
      anon_sym_COLON,
  [2280] = 1,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
  [2284] = 1,
    ACTIONS(406), 1,
      anon_sym_LBRACE,
  [2288] = 1,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
  [2292] = 1,
    ACTIONS(358), 1,
      anon_sym_COLON,
  [2296] = 1,
    ACTIONS(516), 1,
      sym__identifier,
  [2300] = 1,
    ACTIONS(518), 1,
      sym__identifier,
  [2304] = 1,
    ACTIONS(520), 1,
      anon_sym_LBRACE,
  [2308] = 1,
    ACTIONS(522), 1,
      anon_sym_RBRACE,
  [2312] = 1,
    ACTIONS(524), 1,
      anon_sym_DOT,
  [2316] = 1,
    ACTIONS(386), 1,
      anon_sym_LBRACE,
  [2320] = 1,
    ACTIONS(526), 1,
      anon_sym_LBRACE,
  [2324] = 1,
    ACTIONS(528), 1,
      anon_sym_LBRACE,
  [2328] = 1,
    ACTIONS(530), 1,
      sym__identifier,
  [2332] = 1,
    ACTIONS(532), 1,
      sym__identifier,
  [2336] = 1,
    ACTIONS(534), 1,
      anon_sym_LF,
  [2340] = 1,
    ACTIONS(536), 1,
      anon_sym_LBRACE,
  [2344] = 1,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
  [2348] = 1,
    ACTIONS(540), 1,
      anon_sym_LBRACE,
  [2352] = 1,
    ACTIONS(542), 1,
      anon_sym_LBRACE,
  [2356] = 1,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
  [2360] = 1,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
  [2364] = 1,
    ACTIONS(548), 1,
      anon_sym_LF,
  [2368] = 1,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
  [2372] = 1,
    ACTIONS(552), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [2376] = 1,
    ACTIONS(554), 1,
      aux_sym_multiline_string_token1,
  [2380] = 1,
    ACTIONS(556), 1,
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
  [SMALL_STATE(9)] = 249,
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
  [SMALL_STATE(36)] = 832,
  [SMALL_STATE(37)] = 852,
  [SMALL_STATE(38)] = 872,
  [SMALL_STATE(39)] = 892,
  [SMALL_STATE(40)] = 912,
  [SMALL_STATE(41)] = 932,
  [SMALL_STATE(42)] = 952,
  [SMALL_STATE(43)] = 972,
  [SMALL_STATE(44)] = 992,
  [SMALL_STATE(45)] = 1010,
  [SMALL_STATE(46)] = 1031,
  [SMALL_STATE(47)] = 1052,
  [SMALL_STATE(48)] = 1073,
  [SMALL_STATE(49)] = 1094,
  [SMALL_STATE(50)] = 1115,
  [SMALL_STATE(51)] = 1136,
  [SMALL_STATE(52)] = 1157,
  [SMALL_STATE(53)] = 1178,
  [SMALL_STATE(54)] = 1199,
  [SMALL_STATE(55)] = 1220,
  [SMALL_STATE(56)] = 1241,
  [SMALL_STATE(57)] = 1262,
  [SMALL_STATE(58)] = 1283,
  [SMALL_STATE(59)] = 1304,
  [SMALL_STATE(60)] = 1325,
  [SMALL_STATE(61)] = 1346,
  [SMALL_STATE(62)] = 1362,
  [SMALL_STATE(63)] = 1378,
  [SMALL_STATE(64)] = 1397,
  [SMALL_STATE(65)] = 1418,
  [SMALL_STATE(66)] = 1432,
  [SMALL_STATE(67)] = 1446,
  [SMALL_STATE(68)] = 1460,
  [SMALL_STATE(69)] = 1474,
  [SMALL_STATE(70)] = 1485,
  [SMALL_STATE(71)] = 1500,
  [SMALL_STATE(72)] = 1515,
  [SMALL_STATE(73)] = 1534,
  [SMALL_STATE(74)] = 1545,
  [SMALL_STATE(75)] = 1561,
  [SMALL_STATE(76)] = 1573,
  [SMALL_STATE(77)] = 1585,
  [SMALL_STATE(78)] = 1601,
  [SMALL_STATE(79)] = 1617,
  [SMALL_STATE(80)] = 1629,
  [SMALL_STATE(81)] = 1641,
  [SMALL_STATE(82)] = 1657,
  [SMALL_STATE(83)] = 1669,
  [SMALL_STATE(84)] = 1685,
  [SMALL_STATE(85)] = 1695,
  [SMALL_STATE(86)] = 1704,
  [SMALL_STATE(87)] = 1717,
  [SMALL_STATE(88)] = 1726,
  [SMALL_STATE(89)] = 1735,
  [SMALL_STATE(90)] = 1744,
  [SMALL_STATE(91)] = 1753,
  [SMALL_STATE(92)] = 1762,
  [SMALL_STATE(93)] = 1771,
  [SMALL_STATE(94)] = 1780,
  [SMALL_STATE(95)] = 1789,
  [SMALL_STATE(96)] = 1798,
  [SMALL_STATE(97)] = 1807,
  [SMALL_STATE(98)] = 1816,
  [SMALL_STATE(99)] = 1829,
  [SMALL_STATE(100)] = 1839,
  [SMALL_STATE(101)] = 1849,
  [SMALL_STATE(102)] = 1859,
  [SMALL_STATE(103)] = 1869,
  [SMALL_STATE(104)] = 1879,
  [SMALL_STATE(105)] = 1889,
  [SMALL_STATE(106)] = 1899,
  [SMALL_STATE(107)] = 1909,
  [SMALL_STATE(108)] = 1919,
  [SMALL_STATE(109)] = 1929,
  [SMALL_STATE(110)] = 1939,
  [SMALL_STATE(111)] = 1945,
  [SMALL_STATE(112)] = 1955,
  [SMALL_STATE(113)] = 1961,
  [SMALL_STATE(114)] = 1971,
  [SMALL_STATE(115)] = 1981,
  [SMALL_STATE(116)] = 1991,
  [SMALL_STATE(117)] = 2001,
  [SMALL_STATE(118)] = 2011,
  [SMALL_STATE(119)] = 2017,
  [SMALL_STATE(120)] = 2027,
  [SMALL_STATE(121)] = 2037,
  [SMALL_STATE(122)] = 2047,
  [SMALL_STATE(123)] = 2053,
  [SMALL_STATE(124)] = 2063,
  [SMALL_STATE(125)] = 2071,
  [SMALL_STATE(126)] = 2078,
  [SMALL_STATE(127)] = 2085,
  [SMALL_STATE(128)] = 2092,
  [SMALL_STATE(129)] = 2099,
  [SMALL_STATE(130)] = 2106,
  [SMALL_STATE(131)] = 2111,
  [SMALL_STATE(132)] = 2116,
  [SMALL_STATE(133)] = 2121,
  [SMALL_STATE(134)] = 2128,
  [SMALL_STATE(135)] = 2133,
  [SMALL_STATE(136)] = 2138,
  [SMALL_STATE(137)] = 2143,
  [SMALL_STATE(138)] = 2148,
  [SMALL_STATE(139)] = 2153,
  [SMALL_STATE(140)] = 2158,
  [SMALL_STATE(141)] = 2165,
  [SMALL_STATE(142)] = 2172,
  [SMALL_STATE(143)] = 2179,
  [SMALL_STATE(144)] = 2186,
  [SMALL_STATE(145)] = 2191,
  [SMALL_STATE(146)] = 2196,
  [SMALL_STATE(147)] = 2203,
  [SMALL_STATE(148)] = 2208,
  [SMALL_STATE(149)] = 2212,
  [SMALL_STATE(150)] = 2216,
  [SMALL_STATE(151)] = 2220,
  [SMALL_STATE(152)] = 2224,
  [SMALL_STATE(153)] = 2228,
  [SMALL_STATE(154)] = 2232,
  [SMALL_STATE(155)] = 2236,
  [SMALL_STATE(156)] = 2240,
  [SMALL_STATE(157)] = 2244,
  [SMALL_STATE(158)] = 2248,
  [SMALL_STATE(159)] = 2252,
  [SMALL_STATE(160)] = 2256,
  [SMALL_STATE(161)] = 2260,
  [SMALL_STATE(162)] = 2264,
  [SMALL_STATE(163)] = 2268,
  [SMALL_STATE(164)] = 2272,
  [SMALL_STATE(165)] = 2276,
  [SMALL_STATE(166)] = 2280,
  [SMALL_STATE(167)] = 2284,
  [SMALL_STATE(168)] = 2288,
  [SMALL_STATE(169)] = 2292,
  [SMALL_STATE(170)] = 2296,
  [SMALL_STATE(171)] = 2300,
  [SMALL_STATE(172)] = 2304,
  [SMALL_STATE(173)] = 2308,
  [SMALL_STATE(174)] = 2312,
  [SMALL_STATE(175)] = 2316,
  [SMALL_STATE(176)] = 2320,
  [SMALL_STATE(177)] = 2324,
  [SMALL_STATE(178)] = 2328,
  [SMALL_STATE(179)] = 2332,
  [SMALL_STATE(180)] = 2336,
  [SMALL_STATE(181)] = 2340,
  [SMALL_STATE(182)] = 2344,
  [SMALL_STATE(183)] = 2348,
  [SMALL_STATE(184)] = 2352,
  [SMALL_STATE(185)] = 2356,
  [SMALL_STATE(186)] = 2360,
  [SMALL_STATE(187)] = 2364,
  [SMALL_STATE(188)] = 2368,
  [SMALL_STATE(189)] = 2372,
  [SMALL_STATE(190)] = 2376,
  [SMALL_STATE(191)] = 2380,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(39),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(151),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(156),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(160),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(119),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(157),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(126),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(108),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 3, .production_id = 11),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 3, .production_id = 11),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 5, .production_id = 16),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 5, .production_id = 16),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_text, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, .production_id = 8),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, .production_id = 8),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 5, .production_id = 8),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 5, .production_id = 8),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_to_many, 3, .production_id = 12),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_to_many, 3, .production_id = 12),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_to_one, 3, .production_id = 12),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_to_one, 3, .production_id = 12),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_to_one, 3, .production_id = 12),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_to_one, 3, .production_id = 12),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_to_many, 3, .production_id = 12),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_to_many, 3, .production_id = 12),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 7, .production_id = 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 7, .production_id = 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 6),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 6),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, .production_id = 14),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 6, .production_id = 14),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, .production_id = 3),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 6, .production_id = 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 4, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 4, .production_id = 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 7, .production_id = 14),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 7, .production_id = 14),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 5, .production_id = 5),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 5, .production_id = 5),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5, .production_id = 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 7),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 7),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 5, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 5, .production_id = 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, .production_id = 6),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5, .production_id = 6),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 5, .production_id = 7),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 5, .production_id = 7),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 8, .production_id = 14),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 8, .production_id = 14),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 5),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 5),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 9, .production_id = 14),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 9, .production_id = 14),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(169),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2),
  [228] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(103),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [255] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(44),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(103),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, .production_id = 9),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 9),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, .production_id = 13),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 13),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(79),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 2),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 9),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 9),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2), SHIFT_REPEAT(12),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_notes_repeat1, 2), SHIFT_REPEAT(80),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_notes_repeat1, 2),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 4),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2), SHIFT_REPEAT(136),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2), SHIFT_REPEAT(128),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2, .production_id = 10),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_many, 2),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_one, 2),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_one, 2),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_many, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 1, .production_id = 1),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_setting, 1, .production_id = 15),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_reference, 3),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_setting, 3),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_alias, 2, .production_id = 4),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 3, .production_id = 10),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 2),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [514] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 4),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 4, .production_id = 10),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
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
