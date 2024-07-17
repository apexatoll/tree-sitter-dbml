#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 210
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 14
#define TOKEN_COUNT 55
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 19

enum {
  sym__identifier = 1,
  sym_string = 2,
  sym_expression = 3,
  sym_number = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  anon_sym_null = 7,
  anon_sym_nil = 8,
  sym__comment = 9,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 10,
  aux_sym_multiline_string_token1 = 11,
  anon_sym_LF = 12,
  anon_sym_SLASH_STAR = 13,
  anon_sym_STAR_SLASH = 14,
  anon_sym_bool = 15,
  anon_sym_boolean = 16,
  anon_sym_date = 17,
  anon_sym_datetime = 18,
  anon_sym_int = 19,
  anon_sym_integer = 20,
  anon_sym_string = 21,
  anon_sym_text = 22,
  anon_sym_timestamp = 23,
  anon_sym_varchar = 24,
  anon_sym_COLON = 25,
  anon_sym_project = 26,
  anon_sym_Project = 27,
  anon_sym_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_table = 30,
  anon_sym_Table = 31,
  anon_sym_DOT = 32,
  anon_sym_as = 33,
  anon_sym_LBRACK = 34,
  anon_sym_COMMA = 35,
  anon_sym_RBRACK = 36,
  anon_sym_primarykey = 37,
  anon_sym_pk = 38,
  anon_sym_notnull = 39,
  anon_sym_unique = 40,
  anon_sym_increment = 41,
  anon_sym_default = 42,
  anon_sym_ref = 43,
  anon_sym_enum = 44,
  anon_sym_Enum = 45,
  anon_sym_Ref = 46,
  anon_sym_LT = 47,
  anon_sym_GT = 48,
  anon_sym_DASH = 49,
  anon_sym_LT_GT = 50,
  anon_sym_tablegroup = 51,
  anon_sym_TableGroup = 52,
  anon_sym_note = 53,
  anon_sym_Note = 54,
  sym_schema = 55,
  sym_boolean = 56,
  sym_null = 57,
  sym_multiline_string = 58,
  sym__multiline_comment = 59,
  sym_type = 60,
  sym_key_value = 61,
  sym_value = 62,
  sym__definition = 63,
  sym_project = 64,
  sym__project_row = 65,
  sym_table = 66,
  sym__table_alias = 67,
  sym_table_settings = 68,
  sym__table_row = 69,
  sym_column = 70,
  sym_column_settings = 71,
  sym__unary_setting = 72,
  sym__binary_setting = 73,
  sym_default_setting = 74,
  sym__inline_reference = 75,
  sym_enum = 76,
  sym__enum_row = 77,
  sym_variant = 78,
  sym_variant_notes = 79,
  sym_reference = 80,
  sym__short_reference = 81,
  sym__long_reference = 82,
  sym__relationship = 83,
  sym_one_to_many = 84,
  sym_inline_one_to_many = 85,
  sym_many_to_one = 86,
  sym_inline_many_to_one = 87,
  sym_one_to_one = 88,
  sym_inline_one_to_one = 89,
  sym_many_to_many = 90,
  sym_inline_many_to_many = 91,
  sym__column_reference = 92,
  sym_table_group = 93,
  sym__table_group_row = 94,
  sym_comment = 95,
  sym_note = 96,
  sym_note_text = 97,
  sym__short_note = 98,
  sym__long_note = 99,
  aux_sym_schema_repeat1 = 100,
  aux_sym_multiline_string_repeat1 = 101,
  aux_sym_project_repeat1 = 102,
  aux_sym_table_repeat1 = 103,
  aux_sym_table_settings_repeat1 = 104,
  aux_sym_column_settings_repeat1 = 105,
  aux_sym_enum_repeat1 = 106,
  aux_sym_variant_notes_repeat1 = 107,
  aux_sym_table_group_repeat1 = 108,
  alias_sym_column_name = 109,
  alias_sym_enum_name = 110,
  alias_sym_from_column = 111,
  alias_sym_identifier = 112,
  alias_sym_key = 113,
  alias_sym_keyword = 114,
  alias_sym_note_name = 115,
  alias_sym_null_setting = 116,
  alias_sym_project_name = 117,
  alias_sym_reference_name = 118,
  alias_sym_schema_name = 119,
  alias_sym_table_alias = 120,
  alias_sym_table_group_name = 121,
  alias_sym_table_name = 122,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
  [sym_string] = "string",
  [sym_expression] = "expression",
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
  [alias_sym_identifier] = "identifier",
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
  [sym_expression] = sym_expression,
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
  [alias_sym_identifier] = alias_sym_identifier,
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
  [sym_expression] = {
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
  [alias_sym_identifier] = {
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
    [0] = alias_sym_identifier,
  },
  [15] = {
    [0] = alias_sym_key,
  },
  [16] = {
    [1] = alias_sym_schema_name,
    [3] = alias_sym_table_name,
  },
  [17] = {
    [0] = alias_sym_null_setting,
  },
  [18] = {
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
  [65] = 6,
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
  [88] = 7,
  [89] = 89,
  [90] = 30,
  [91] = 34,
  [92] = 29,
  [93] = 93,
  [94] = 94,
  [95] = 10,
  [96] = 96,
  [97] = 15,
  [98] = 98,
  [99] = 12,
  [100] = 9,
  [101] = 14,
  [102] = 102,
  [103] = 17,
  [104] = 13,
  [105] = 105,
  [106] = 16,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 29,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 30,
  [116] = 107,
  [117] = 109,
  [118] = 118,
  [119] = 34,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 126,
  [128] = 128,
  [129] = 128,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 125,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 125,
  [144] = 144,
  [145] = 138,
  [146] = 135,
  [147] = 147,
  [148] = 138,
  [149] = 144,
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
  [163] = 161,
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
  [198] = 198,
  [199] = 198,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 183,
  [205] = 195,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 184,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(143);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == ',') ADVANCE(244);
      if (lookahead == '-') ADVANCE(258);
      if (lookahead == '.') ADVANCE(241);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(234);
      if (lookahead == '<') ADVANCE(256);
      if (lookahead == '>') ADVANCE(257);
      if (lookahead == 'E') ADVANCE(85);
      if (lookahead == 'N') ADVANCE(97);
      if (lookahead == 'P') ADVANCE(113);
      if (lookahead == 'R') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(47);
      if (lookahead == 's') ADVANCE(127);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(87);
      if (lookahead == 'v') ADVANCE(18);
      if (lookahead == '{') ADVANCE(237);
      if (lookahead == '}') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(201);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(210);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(9);
      if (lookahead == ',') ADVANCE(244);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == 'N') ADVANCE(95);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == 'n') ADVANCE(102);
      if (lookahead == '}') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(234);
      if (lookahead == '[') ADVANCE(243);
      if (lookahead == ']') ADVANCE(245);
      if (lookahead == '{') ADVANCE(237);
      if (lookahead == '}') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\'') ADVANCE(10);
      if (lookahead == '`') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'n') ADVANCE(60);
      if (lookahead == 't') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(211);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(212);
      END_STATE();
    case 13:
      if (lookahead == '`') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(174);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(29);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead == 'i') ADVANCE(81);
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == 't') ADVANCE(43);
      if (lookahead == 'v') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(77);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(116);
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(195);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead == 'i') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(255);
      END_STATE();
    case 53:
      if (lookahead == 'f') ADVANCE(252);
      END_STATE();
    case 54:
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(226);
      END_STATE();
    case 56:
      if (lookahead == 'g') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(106);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(68);
      if (lookahead == 'o') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(73);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(162);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(89);
      END_STATE();
    case 62:
      if (lookahead == 'i') ADVANCE(82);
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 63:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 64:
      if (lookahead == 'j') ADVANCE(44);
      END_STATE();
    case 65:
      if (lookahead == 'j') ADVANCE(51);
      END_STATE();
    case 66:
      if (lookahead == 'k') ADVANCE(247);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 67:
      if (lookahead == 'k') ADVANCE(45);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(215);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(248);
      END_STATE();
    case 72:
      if (lookahead == 'l') ADVANCE(119);
      END_STATE();
    case 73:
      if (lookahead == 'l') ADVANCE(70);
      END_STATE();
    case 74:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 75:
      if (lookahead == 'l') ADVANCE(123);
      END_STATE();
    case 76:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 77:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 78:
      if (lookahead == 'm') ADVANCE(254);
      END_STATE();
    case 79:
      if (lookahead == 'm') ADVANCE(253);
      END_STATE();
    case 80:
      if (lookahead == 'm') ADVANCE(103);
      END_STATE();
    case 81:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 82:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 83:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == 'm') ADVANCE(42);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(216);
      END_STATE();
    case 89:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(180);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 92:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 95:
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 97:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 98:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 99:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(134);
      END_STATE();
    case 101:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 102:
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 103:
      if (lookahead == 'p') ADVANCE(230);
      END_STATE();
    case 104:
      if (lookahead == 'p') ADVANCE(261);
      END_STATE();
    case 105:
      if (lookahead == 'p') ADVANCE(260);
      END_STATE();
    case 106:
      if (lookahead == 'q') ADVANCE(137);
      END_STATE();
    case 107:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 108:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 109:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 110:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 112:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 113:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 114:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 115:
      if (lookahead == 'r') ADVANCE(100);
      END_STATE();
    case 116:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 117:
      if (lookahead == 's') ADVANCE(242);
      END_STATE();
    case 118:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 119:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(228);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 123:
      if (lookahead == 't') ADVANCE(251);
      END_STATE();
    case 124:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 126:
      if (lookahead == 't') ADVANCE(173);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 128:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 131:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 132:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 133:
      if (lookahead == 'u') ADVANCE(79);
      END_STATE();
    case 134:
      if (lookahead == 'u') ADVANCE(105);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 139:
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 140:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 141:
      if (lookahead == 'y') ADVANCE(246);
      END_STATE();
    case 142:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(176);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(218);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(221);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(196);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(175);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(227);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'g') ADVANCE(155);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'h') ADVANCE(146);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(198);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(178);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(163);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(172);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'm') ADVANCE(152);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(217);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'n') ADVANCE(156);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'o') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(225);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(184);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(154);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(148);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(223);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(229);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(149);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(153);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'x') ADVANCE(181);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(8);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_expression);
      if (lookahead == '`') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_null);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__comment);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      if (lookahead == '\'') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(10);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\'') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\'') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '\'') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '*') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead == '/') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(209);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 't') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_datetime);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_integer);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_string);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_timestamp);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_varchar);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(anon_sym_varchar);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(115);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(114);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(259);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_note);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_Note);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_Note);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
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
  [62] = {.lex_state = 27},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 5},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 207},
  [126] = {.lex_state = 204},
  [127] = {.lex_state = 204},
  [128] = {.lex_state = 207},
  [129] = {.lex_state = 204},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 204},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 207},
  [138] = {.lex_state = 207},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 207},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 207},
  [146] = {.lex_state = 204},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 207},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 207},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 204},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 6},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 6},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 2},
  [200] = {.lex_state = 6},
  [201] = {.lex_state = 6},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 6},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_expression] = ACTIONS(1),
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
    [sym_schema] = STATE(197),
    [sym__multiline_comment] = STATE(29),
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(36),
    [sym__long_reference] = STATE(36),
    [sym_table_group] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_note] = STATE(3),
    [sym__short_note] = STATE(13),
    [sym__long_note] = STATE(13),
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
    STATE(29), 1,
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
    STATE(13), 2,
      sym__short_note,
      sym__long_note,
    STATE(36), 2,
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
    STATE(29), 1,
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
    STATE(13), 2,
      sym__short_note,
      sym__long_note,
    STATE(36), 2,
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
    STATE(142), 5,
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
  [307] = 7,
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
    ACTIONS(89), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
    STATE(171), 5,
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
  [1035] = 8,
    ACTIONS(227), 1,
      sym__identifier,
    ACTIONS(230), 1,
      sym__comment,
    ACTIONS(233), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(238), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(46), 5,
      sym_key_value,
      sym__project_row,
      sym_comment,
      sym_note,
      aux_sym_project_repeat1,
  [1066] = 8,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym__comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(249), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(54), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1097] = 8,
    ACTIONS(251), 1,
      sym__identifier,
    ACTIONS(254), 1,
      sym__comment,
    ACTIONS(257), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(262), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(48), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1128] = 8,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym__comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(249), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(59), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1159] = 8,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym__comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(249), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(51), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1190] = 8,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym__comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(249), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(48), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1221] = 8,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym__comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(249), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(57), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1252] = 8,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym__comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(247), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(249), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(48), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1283] = 8,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym__comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(249), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(48), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1314] = 8,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym__comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(249), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(60), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1345] = 8,
    ACTIONS(243), 1,
      sym__comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      sym__identifier,
    ACTIONS(277), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(249), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(58), 5,
      sym_key_value,
      sym__project_row,
      sym_comment,
      sym_note,
      aux_sym_project_repeat1,
  [1376] = 8,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym__comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(249), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(48), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1407] = 8,
    ACTIONS(243), 1,
      sym__comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(275), 1,
      sym__identifier,
    ACTIONS(281), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(249), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(46), 5,
      sym_key_value,
      sym__project_row,
      sym_comment,
      sym_note,
      aux_sym_project_repeat1,
  [1438] = 8,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym__comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(249), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(48), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1469] = 8,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym__comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(249), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(48), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1500] = 8,
    ACTIONS(241), 1,
      sym__identifier,
    ACTIONS(243), 1,
      sym__comment,
    ACTIONS(245), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(283), 1,
      anon_sym_RBRACE,
    STATE(92), 1,
      sym__multiline_comment,
    ACTIONS(249), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(104), 2,
      sym__short_note,
      sym__long_note,
    STATE(53), 5,
      sym__table_row,
      sym_column,
      sym_comment,
      sym_note,
      aux_sym_table_repeat1,
  [1531] = 3,
    ACTIONS(285), 1,
      sym__identifier,
    STATE(78), 1,
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
      sym__identifier,
    STATE(165), 1,
      sym_value,
    ACTIONS(293), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym_null,
      anon_sym_nil,
    STATE(75), 2,
      sym_boolean,
      sym_null,
    ACTIONS(291), 3,
      sym_string,
      sym_expression,
      sym_number,
  [1574] = 6,
    ACTIONS(289), 1,
      sym__identifier,
    STATE(72), 1,
      sym_value,
    ACTIONS(293), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(295), 2,
      anon_sym_null,
      anon_sym_nil,
    STATE(75), 2,
      sym_boolean,
      sym_null,
    ACTIONS(291), 3,
      sym_string,
      sym_expression,
      sym_number,
  [1598] = 6,
    ACTIONS(297), 1,
      sym_string,
    ACTIONS(299), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(88), 1,
      sym_multiline_string,
    STATE(106), 1,
      sym_note_text,
    ACTIONS(59), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(65), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1621] = 6,
    ACTIONS(304), 1,
      sym__comment,
    ACTIONS(307), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    ACTIONS(301), 2,
      sym__identifier,
      sym_string,
    STATE(66), 4,
      sym__enum_row,
      sym_variant,
      sym_comment,
      aux_sym_enum_repeat1,
  [1644] = 6,
    ACTIONS(314), 1,
      sym__comment,
    ACTIONS(316), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    ACTIONS(312), 2,
      sym__identifier,
      sym_string,
    STATE(66), 4,
      sym__enum_row,
      sym_variant,
      sym_comment,
      aux_sym_enum_repeat1,
  [1667] = 6,
    ACTIONS(314), 1,
      sym__comment,
    ACTIONS(316), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    ACTIONS(312), 2,
      sym__identifier,
      sym_string,
    STATE(67), 4,
      sym__enum_row,
      sym_variant,
      sym_comment,
      aux_sym_enum_repeat1,
  [1690] = 5,
    ACTIONS(322), 1,
      anon_sym_LT,
    ACTIONS(324), 1,
      anon_sym_GT,
    ACTIONS(326), 1,
      anon_sym_DASH,
    ACTIONS(328), 1,
      anon_sym_LT_GT,
    STATE(170), 4,
      sym_inline_one_to_many,
      sym_inline_many_to_one,
      sym_inline_one_to_one,
      sym_inline_many_to_many,
  [1709] = 6,
    ACTIONS(314), 1,
      sym__comment,
    ACTIONS(316), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(330), 1,
      sym__identifier,
    ACTIONS(332), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    STATE(80), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [1730] = 6,
    ACTIONS(314), 1,
      sym__comment,
    ACTIONS(316), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(330), 1,
      sym__identifier,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    STATE(79), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [1751] = 2,
    ACTIONS(336), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(338), 5,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1764] = 2,
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
  [1777] = 2,
    ACTIONS(344), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(346), 5,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1790] = 2,
    ACTIONS(348), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(350), 5,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1803] = 2,
    ACTIONS(352), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(354), 5,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1816] = 6,
    ACTIONS(314), 1,
      sym__comment,
    ACTIONS(316), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(330), 1,
      sym__identifier,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    STATE(70), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [1837] = 4,
    ACTIONS(362), 1,
      anon_sym_LBRACK,
    STATE(96), 1,
      sym_column_settings,
    ACTIONS(358), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(360), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [1854] = 6,
    ACTIONS(314), 1,
      sym__comment,
    ACTIONS(316), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(330), 1,
      sym__identifier,
    ACTIONS(364), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    STATE(80), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [1875] = 6,
    ACTIONS(366), 1,
      sym__identifier,
    ACTIONS(369), 1,
      sym__comment,
    ACTIONS(372), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(375), 1,
      anon_sym_RBRACE,
    STATE(111), 1,
      sym__multiline_comment,
    STATE(80), 3,
      sym__table_group_row,
      sym_comment,
      aux_sym_table_group_repeat1,
  [1896] = 4,
    ACTIONS(362), 1,
      anon_sym_LBRACK,
    STATE(89), 1,
      sym_column_settings,
    ACTIONS(377), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(379), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [1913] = 3,
    ACTIONS(381), 1,
      sym__identifier,
    STATE(122), 1,
      sym__column_reference,
    STATE(42), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1927] = 3,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    STATE(114), 1,
      sym_variant_notes,
    ACTIONS(383), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [1941] = 3,
    ACTIONS(381), 1,
      sym__identifier,
    STATE(122), 1,
      sym__column_reference,
    STATE(194), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1955] = 3,
    ACTIONS(381), 1,
      sym__identifier,
    STATE(122), 1,
      sym__column_reference,
    STATE(33), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1969] = 3,
    ACTIONS(381), 1,
      sym__identifier,
    STATE(122), 1,
      sym__column_reference,
    STATE(202), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1983] = 2,
    ACTIONS(387), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(389), 4,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
  [1995] = 2,
    ACTIONS(67), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(69), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2006] = 2,
    ACTIONS(391), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(393), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2017] = 2,
    ACTIONS(163), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(165), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2028] = 2,
    ACTIONS(179), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(181), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2039] = 2,
    ACTIONS(159), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(161), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2050] = 4,
    ACTIONS(395), 1,
      anon_sym_RBRACK,
    STATE(140), 1,
      sym_note,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(13), 2,
      sym__short_note,
      sym__long_note,
  [2065] = 2,
    ACTIONS(397), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(399), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2076] = 2,
    ACTIONS(85), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(87), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2087] = 2,
    ACTIONS(401), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(403), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2098] = 2,
    ACTIONS(103), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(105), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2109] = 6,
    ACTIONS(405), 1,
      anon_sym_LBRACE,
    ACTIONS(407), 1,
      anon_sym_DOT,
    ACTIONS(409), 1,
      anon_sym_as,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    STATE(131), 1,
      sym__table_alias,
    STATE(188), 1,
      sym_table_settings,
  [2128] = 2,
    ACTIONS(91), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(93), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2139] = 2,
    ACTIONS(81), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(83), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2150] = 2,
    ACTIONS(99), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(101), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2161] = 2,
    ACTIONS(413), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(415), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2172] = 2,
    ACTIONS(111), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(113), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2183] = 2,
    ACTIONS(95), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(97), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2194] = 2,
    ACTIONS(417), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(419), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2205] = 2,
    ACTIONS(107), 3,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
    ACTIONS(109), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [2216] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(421), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(195), 1,
      sym_note_text,
  [2232] = 1,
    ACTIONS(423), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2240] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(425), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(204), 1,
      sym_note_text,
  [2256] = 1,
    ACTIONS(427), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2264] = 1,
    ACTIONS(159), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2272] = 1,
    ACTIONS(429), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2280] = 3,
    STATE(162), 1,
      sym_note,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(13), 2,
      sym__short_note,
      sym__long_note,
  [2292] = 1,
    ACTIONS(431), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2300] = 1,
    ACTIONS(163), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2308] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(433), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(205), 1,
      sym_note_text,
  [2324] = 5,
    ACTIONS(61), 1,
      sym_string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(435), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym_multiline_string,
    STATE(183), 1,
      sym_note_text,
  [2340] = 5,
    ACTIONS(409), 1,
      anon_sym_as,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    ACTIONS(437), 1,
      anon_sym_LBRACE,
    STATE(139), 1,
      sym__table_alias,
    STATE(192), 1,
      sym_table_settings,
  [2356] = 1,
    ACTIONS(179), 5,
      sym__identifier,
      sym_string,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2364] = 1,
    ACTIONS(439), 4,
      sym__identifier,
      sym__comment,
      anon_sym_SLASH_STAR,
      anon_sym_RBRACE,
  [2371] = 4,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(445), 1,
      anon_sym_RBRACK,
    STATE(136), 1,
      aux_sym_table_settings_repeat1,
  [2384] = 4,
    ACTIONS(447), 1,
      anon_sym_LT,
    ACTIONS(449), 1,
      anon_sym_GT,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(453), 1,
      anon_sym_LT_GT,
  [2397] = 3,
    ACTIONS(455), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      aux_sym_table_settings_repeat1,
  [2407] = 3,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(463), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_variant_notes_repeat1,
  [2417] = 3,
    ACTIONS(465), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(467), 1,
      anon_sym_STAR_SLASH,
    STATE(128), 1,
      aux_sym_multiline_string_repeat1,
  [2427] = 3,
    ACTIONS(469), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(471), 1,
      aux_sym_multiline_string_token1,
    STATE(135), 1,
      aux_sym_multiline_string_repeat1,
  [2437] = 3,
    ACTIONS(471), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(473), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(146), 1,
      aux_sym_multiline_string_repeat1,
  [2447] = 3,
    ACTIONS(475), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(478), 1,
      anon_sym_STAR_SLASH,
    STATE(128), 1,
      aux_sym_multiline_string_repeat1,
  [2457] = 3,
    ACTIONS(478), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(480), 1,
      aux_sym_multiline_string_token1,
    STATE(129), 1,
      aux_sym_multiline_string_repeat1,
  [2467] = 3,
    ACTIONS(483), 1,
      sym__identifier,
    ACTIONS(485), 1,
      anon_sym_RBRACK,
    STATE(141), 1,
      sym_key_value,
  [2477] = 3,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
    STATE(203), 1,
      sym_table_settings,
  [2487] = 2,
    ACTIONS(441), 1,
      anon_sym_COLON,
    ACTIONS(489), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2495] = 3,
    ACTIONS(491), 1,
      anon_sym_COMMA,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      aux_sym_column_settings_repeat1,
  [2505] = 3,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      aux_sym_table_settings_repeat1,
  [2515] = 3,
    ACTIONS(471), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(498), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(129), 1,
      aux_sym_multiline_string_repeat1,
  [2525] = 3,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
    STATE(123), 1,
      aux_sym_table_settings_repeat1,
  [2535] = 3,
    ACTIONS(465), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(502), 1,
      anon_sym_STAR_SLASH,
    STATE(128), 1,
      aux_sym_multiline_string_repeat1,
  [2545] = 3,
    ACTIONS(465), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(504), 1,
      anon_sym_STAR_SLASH,
    STATE(125), 1,
      aux_sym_multiline_string_repeat1,
  [2555] = 3,
    ACTIONS(411), 1,
      anon_sym_LBRACK,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
    STATE(180), 1,
      sym_table_settings,
  [2565] = 3,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
    STATE(147), 1,
      aux_sym_variant_notes_repeat1,
  [2575] = 3,
    ACTIONS(443), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym_table_settings_repeat1,
  [2585] = 3,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
    STATE(150), 1,
      aux_sym_column_settings_repeat1,
  [2595] = 3,
    ACTIONS(465), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(518), 1,
      anon_sym_STAR_SLASH,
    STATE(128), 1,
      aux_sym_multiline_string_repeat1,
  [2605] = 3,
    ACTIONS(520), 1,
      sym__identifier,
    ACTIONS(522), 1,
      anon_sym_COLON,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
  [2615] = 3,
    ACTIONS(465), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(526), 1,
      anon_sym_STAR_SLASH,
    STATE(143), 1,
      aux_sym_multiline_string_repeat1,
  [2625] = 3,
    ACTIONS(471), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(528), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(129), 1,
      aux_sym_multiline_string_repeat1,
  [2635] = 3,
    ACTIONS(508), 1,
      anon_sym_COMMA,
    ACTIONS(530), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_variant_notes_repeat1,
  [2645] = 3,
    ACTIONS(465), 1,
      aux_sym_multiline_string_token1,
    ACTIONS(532), 1,
      anon_sym_STAR_SLASH,
    STATE(137), 1,
      aux_sym_multiline_string_repeat1,
  [2655] = 3,
    ACTIONS(534), 1,
      sym__identifier,
    ACTIONS(536), 1,
      anon_sym_COLON,
    ACTIONS(538), 1,
      anon_sym_LBRACE,
  [2665] = 3,
    ACTIONS(514), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RBRACK,
    STATE(133), 1,
      aux_sym_column_settings_repeat1,
  [2675] = 3,
    ACTIONS(542), 1,
      sym__identifier,
    ACTIONS(544), 1,
      anon_sym_COLON,
    ACTIONS(546), 1,
      anon_sym_LBRACE,
  [2685] = 2,
    ACTIONS(548), 1,
      anon_sym_COLON,
    ACTIONS(550), 1,
      anon_sym_LBRACE,
  [2692] = 1,
    ACTIONS(552), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2697] = 1,
    ACTIONS(554), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [2702] = 2,
    ACTIONS(556), 1,
      sym__identifier,
    ACTIONS(558), 1,
      anon_sym_LBRACE,
  [2709] = 2,
    ACTIONS(381), 1,
      sym__identifier,
    STATE(18), 1,
      sym__column_reference,
  [2716] = 2,
    ACTIONS(381), 1,
      sym__identifier,
    STATE(19), 1,
      sym__column_reference,
  [2723] = 2,
    ACTIONS(381), 1,
      sym__identifier,
    STATE(20), 1,
      sym__column_reference,
  [2730] = 2,
    ACTIONS(381), 1,
      sym__identifier,
    STATE(21), 1,
      sym__column_reference,
  [2737] = 2,
    ACTIONS(560), 1,
      sym__identifier,
    STATE(174), 1,
      sym_key_value,
  [2744] = 1,
    ACTIONS(478), 2,
      aux_sym_multiline_string_token1,
      anon_sym_STAR_SLASH,
  [2749] = 1,
    ACTIONS(463), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2754] = 1,
    ACTIONS(478), 2,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
      aux_sym_multiline_string_token1,
  [2759] = 1,
    ACTIONS(562), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2764] = 1,
    ACTIONS(564), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2769] = 2,
    ACTIONS(381), 1,
      sym__identifier,
    STATE(175), 1,
      sym__column_reference,
  [2776] = 2,
    ACTIONS(381), 1,
      sym__identifier,
    STATE(153), 1,
      sym__column_reference,
  [2783] = 2,
    ACTIONS(381), 1,
      sym__identifier,
    STATE(172), 1,
      sym__column_reference,
  [2790] = 2,
    ACTIONS(381), 1,
      sym__identifier,
    STATE(173), 1,
      sym__column_reference,
  [2797] = 1,
    ACTIONS(566), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2802] = 1,
    ACTIONS(494), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2807] = 1,
    ACTIONS(568), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2812] = 1,
    ACTIONS(570), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2817] = 1,
    ACTIONS(458), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2822] = 1,
    ACTIONS(572), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2827] = 1,
    ACTIONS(574), 1,
      anon_sym_LBRACE,
  [2831] = 1,
    ACTIONS(576), 1,
      anon_sym_DOT,
  [2835] = 1,
    ACTIONS(578), 1,
      anon_sym_LBRACE,
  [2839] = 1,
    ACTIONS(580), 1,
      sym__identifier,
  [2843] = 1,
    ACTIONS(582), 1,
      anon_sym_LBRACE,
  [2847] = 1,
    ACTIONS(584), 1,
      anon_sym_LBRACE,
  [2851] = 1,
    ACTIONS(586), 1,
      anon_sym_LBRACE,
  [2855] = 1,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
  [2859] = 1,
    ACTIONS(590), 1,
      anon_sym_LBRACE,
  [2863] = 1,
    ACTIONS(592), 1,
      anon_sym_COLON,
  [2867] = 1,
    ACTIONS(594), 1,
      sym__identifier,
  [2871] = 1,
    ACTIONS(596), 1,
      sym__identifier,
  [2875] = 1,
    ACTIONS(487), 1,
      anon_sym_LBRACE,
  [2879] = 1,
    ACTIONS(598), 1,
      anon_sym_LBRACE,
  [2883] = 1,
    ACTIONS(600), 1,
      anon_sym_LBRACE,
  [2887] = 1,
    ACTIONS(602), 1,
      sym__identifier,
  [2891] = 1,
    ACTIONS(506), 1,
      anon_sym_LBRACE,
  [2895] = 1,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
  [2899] = 1,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
  [2903] = 1,
    ACTIONS(608), 1,
      anon_sym_RBRACE,
  [2907] = 1,
    ACTIONS(610), 1,
      anon_sym_COLON,
  [2911] = 1,
    ACTIONS(612), 1,
      ts_builtin_sym_end,
  [2915] = 1,
    ACTIONS(614), 1,
      anon_sym_LF,
  [2919] = 1,
    ACTIONS(616), 1,
      anon_sym_LF,
  [2923] = 1,
    ACTIONS(618), 1,
      sym__identifier,
  [2927] = 1,
    ACTIONS(620), 1,
      sym__identifier,
  [2931] = 1,
    ACTIONS(622), 1,
      anon_sym_RBRACE,
  [2935] = 1,
    ACTIONS(624), 1,
      anon_sym_LBRACE,
  [2939] = 1,
    ACTIONS(626), 1,
      anon_sym_RBRACE,
  [2943] = 1,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
  [2947] = 1,
    ACTIONS(630), 1,
      anon_sym_LBRACE,
  [2951] = 1,
    ACTIONS(632), 1,
      sym__identifier,
  [2955] = 1,
    ACTIONS(441), 1,
      anon_sym_COLON,
  [2959] = 1,
    ACTIONS(634), 1,
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
  [SMALL_STATE(9)] = 261,
  [SMALL_STATE(10)] = 284,
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
  [SMALL_STATE(64)] = 1574,
  [SMALL_STATE(65)] = 1598,
  [SMALL_STATE(66)] = 1621,
  [SMALL_STATE(67)] = 1644,
  [SMALL_STATE(68)] = 1667,
  [SMALL_STATE(69)] = 1690,
  [SMALL_STATE(70)] = 1709,
  [SMALL_STATE(71)] = 1730,
  [SMALL_STATE(72)] = 1751,
  [SMALL_STATE(73)] = 1764,
  [SMALL_STATE(74)] = 1777,
  [SMALL_STATE(75)] = 1790,
  [SMALL_STATE(76)] = 1803,
  [SMALL_STATE(77)] = 1816,
  [SMALL_STATE(78)] = 1837,
  [SMALL_STATE(79)] = 1854,
  [SMALL_STATE(80)] = 1875,
  [SMALL_STATE(81)] = 1896,
  [SMALL_STATE(82)] = 1913,
  [SMALL_STATE(83)] = 1927,
  [SMALL_STATE(84)] = 1941,
  [SMALL_STATE(85)] = 1955,
  [SMALL_STATE(86)] = 1969,
  [SMALL_STATE(87)] = 1983,
  [SMALL_STATE(88)] = 1995,
  [SMALL_STATE(89)] = 2006,
  [SMALL_STATE(90)] = 2017,
  [SMALL_STATE(91)] = 2028,
  [SMALL_STATE(92)] = 2039,
  [SMALL_STATE(93)] = 2050,
  [SMALL_STATE(94)] = 2065,
  [SMALL_STATE(95)] = 2076,
  [SMALL_STATE(96)] = 2087,
  [SMALL_STATE(97)] = 2098,
  [SMALL_STATE(98)] = 2109,
  [SMALL_STATE(99)] = 2128,
  [SMALL_STATE(100)] = 2139,
  [SMALL_STATE(101)] = 2150,
  [SMALL_STATE(102)] = 2161,
  [SMALL_STATE(103)] = 2172,
  [SMALL_STATE(104)] = 2183,
  [SMALL_STATE(105)] = 2194,
  [SMALL_STATE(106)] = 2205,
  [SMALL_STATE(107)] = 2216,
  [SMALL_STATE(108)] = 2232,
  [SMALL_STATE(109)] = 2240,
  [SMALL_STATE(110)] = 2256,
  [SMALL_STATE(111)] = 2264,
  [SMALL_STATE(112)] = 2272,
  [SMALL_STATE(113)] = 2280,
  [SMALL_STATE(114)] = 2292,
  [SMALL_STATE(115)] = 2300,
  [SMALL_STATE(116)] = 2308,
  [SMALL_STATE(117)] = 2324,
  [SMALL_STATE(118)] = 2340,
  [SMALL_STATE(119)] = 2356,
  [SMALL_STATE(120)] = 2364,
  [SMALL_STATE(121)] = 2371,
  [SMALL_STATE(122)] = 2384,
  [SMALL_STATE(123)] = 2397,
  [SMALL_STATE(124)] = 2407,
  [SMALL_STATE(125)] = 2417,
  [SMALL_STATE(126)] = 2427,
  [SMALL_STATE(127)] = 2437,
  [SMALL_STATE(128)] = 2447,
  [SMALL_STATE(129)] = 2457,
  [SMALL_STATE(130)] = 2467,
  [SMALL_STATE(131)] = 2477,
  [SMALL_STATE(132)] = 2487,
  [SMALL_STATE(133)] = 2495,
  [SMALL_STATE(134)] = 2505,
  [SMALL_STATE(135)] = 2515,
  [SMALL_STATE(136)] = 2525,
  [SMALL_STATE(137)] = 2535,
  [SMALL_STATE(138)] = 2545,
  [SMALL_STATE(139)] = 2555,
  [SMALL_STATE(140)] = 2565,
  [SMALL_STATE(141)] = 2575,
  [SMALL_STATE(142)] = 2585,
  [SMALL_STATE(143)] = 2595,
  [SMALL_STATE(144)] = 2605,
  [SMALL_STATE(145)] = 2615,
  [SMALL_STATE(146)] = 2625,
  [SMALL_STATE(147)] = 2635,
  [SMALL_STATE(148)] = 2645,
  [SMALL_STATE(149)] = 2655,
  [SMALL_STATE(150)] = 2665,
  [SMALL_STATE(151)] = 2675,
  [SMALL_STATE(152)] = 2685,
  [SMALL_STATE(153)] = 2692,
  [SMALL_STATE(154)] = 2697,
  [SMALL_STATE(155)] = 2702,
  [SMALL_STATE(156)] = 2709,
  [SMALL_STATE(157)] = 2716,
  [SMALL_STATE(158)] = 2723,
  [SMALL_STATE(159)] = 2730,
  [SMALL_STATE(160)] = 2737,
  [SMALL_STATE(161)] = 2744,
  [SMALL_STATE(162)] = 2749,
  [SMALL_STATE(163)] = 2754,
  [SMALL_STATE(164)] = 2759,
  [SMALL_STATE(165)] = 2764,
  [SMALL_STATE(166)] = 2769,
  [SMALL_STATE(167)] = 2776,
  [SMALL_STATE(168)] = 2783,
  [SMALL_STATE(169)] = 2790,
  [SMALL_STATE(170)] = 2797,
  [SMALL_STATE(171)] = 2802,
  [SMALL_STATE(172)] = 2807,
  [SMALL_STATE(173)] = 2812,
  [SMALL_STATE(174)] = 2817,
  [SMALL_STATE(175)] = 2822,
  [SMALL_STATE(176)] = 2827,
  [SMALL_STATE(177)] = 2831,
  [SMALL_STATE(178)] = 2835,
  [SMALL_STATE(179)] = 2839,
  [SMALL_STATE(180)] = 2843,
  [SMALL_STATE(181)] = 2847,
  [SMALL_STATE(182)] = 2851,
  [SMALL_STATE(183)] = 2855,
  [SMALL_STATE(184)] = 2859,
  [SMALL_STATE(185)] = 2863,
  [SMALL_STATE(186)] = 2867,
  [SMALL_STATE(187)] = 2871,
  [SMALL_STATE(188)] = 2875,
  [SMALL_STATE(189)] = 2879,
  [SMALL_STATE(190)] = 2883,
  [SMALL_STATE(191)] = 2887,
  [SMALL_STATE(192)] = 2891,
  [SMALL_STATE(193)] = 2895,
  [SMALL_STATE(194)] = 2899,
  [SMALL_STATE(195)] = 2903,
  [SMALL_STATE(196)] = 2907,
  [SMALL_STATE(197)] = 2911,
  [SMALL_STATE(198)] = 2915,
  [SMALL_STATE(199)] = 2919,
  [SMALL_STATE(200)] = 2923,
  [SMALL_STATE(201)] = 2927,
  [SMALL_STATE(202)] = 2931,
  [SMALL_STATE(203)] = 2935,
  [SMALL_STATE(204)] = 2939,
  [SMALL_STATE(205)] = 2943,
  [SMALL_STATE(206)] = 2947,
  [SMALL_STATE(207)] = 2951,
  [SMALL_STATE(208)] = 2955,
  [SMALL_STATE(209)] = 2959,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(29),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(145),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(179),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(191),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(151),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(200),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(155),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_schema_repeat1, 2), SHIFT_REPEAT(144),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_schema, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 3, .production_id = 12),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 3, .production_id = 12),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 5, .production_id = 18),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 5, .production_id = 18),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_text, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_string, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiline_string, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, .production_id = 8),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, .production_id = 8),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 5, .production_id = 8),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 5, .production_id = 8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 3),
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
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 7, .production_id = 16),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 7, .production_id = 16),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 8, .production_id = 16),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 8, .production_id = 16),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 6),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 6),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, .production_id = 16),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 6, .production_id = 16),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 5, .production_id = 7),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 5, .production_id = 7),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, .production_id = 6),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5, .production_id = 6),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 3),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, .production_id = 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4, .production_id = 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 9, .production_id = 16),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 9, .production_id = 16),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 4, .production_id = 5),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 4, .production_id = 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 6, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 5, .production_id = 5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 5, .production_id = 5),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 7, .production_id = 3),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 7, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, .production_id = 3),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5, .production_id = 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 7),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 7),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 5, .production_id = 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 5, .production_id = 2),
  [227] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(208),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(92),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(138),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(149),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [251] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(62),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(92),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(138),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(149),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [301] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(83),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(111),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(148),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, .production_id = 15),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 15),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_null, 1),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1, .production_id = 14),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, .production_id = 14),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, .production_id = 10),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 10),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2), SHIFT_REPEAT(120),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2), SHIFT_REPEAT(111),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2), SHIFT_REPEAT(148),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_group_repeat1, 2),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, .production_id = 9),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 9),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 9),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 9),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 2),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 10),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 10),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 4),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_group_row, 1, .production_id = 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [455] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2), SHIFT_REPEAT(160),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_notes_repeat1, 2), SHIFT_REPEAT(113),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_notes_repeat1, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(198),
  [478] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2),
  [480] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_multiline_string_repeat1, 2), SHIFT_REPEAT(199),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2, .production_id = 11),
  [491] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2), SHIFT_REPEAT(11),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [498] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [532] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_one, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_alias, 2, .production_id = 4),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_setting, 1, .production_id = 17),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_setting, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_reference, 3),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_one, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_many, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_many, 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 4, .production_id = 11),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 3),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 3, .production_id = 11),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 4),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [612] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 2),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
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
