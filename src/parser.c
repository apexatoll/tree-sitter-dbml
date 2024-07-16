#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 161
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 102
#define ALIAS_COUNT 13
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 15

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
  anon_sym_as = 28,
  anon_sym_LBRACK = 29,
  anon_sym_COMMA = 30,
  anon_sym_RBRACK = 31,
  anon_sym_primarykey = 32,
  anon_sym_pk = 33,
  anon_sym_notnull = 34,
  anon_sym_unique = 35,
  anon_sym_increment = 36,
  anon_sym_default = 37,
  anon_sym_ref = 38,
  anon_sym_enum = 39,
  anon_sym_Enum = 40,
  anon_sym_Ref = 41,
  anon_sym_LT = 42,
  anon_sym_GT = 43,
  anon_sym_DASH = 44,
  anon_sym_LT_GT = 45,
  anon_sym_DOT = 46,
  anon_sym_tablegroup = 47,
  anon_sym_TableGroup = 48,
  sym__inline_comment = 49,
  anon_sym_SLASH_STAR = 50,
  anon_sym_STAR_SLASH = 51,
  anon_sym_note = 52,
  anon_sym_Note = 53,
  sym_document = 54,
  sym__multiline_string = 55,
  sym__boolean = 56,
  sym__null = 57,
  sym_type = 58,
  sym_key_value = 59,
  sym_value = 60,
  sym__definition = 61,
  sym_project = 62,
  sym__project_row = 63,
  sym_table = 64,
  sym__table_alias = 65,
  sym_table_settings = 66,
  sym__table_row = 67,
  sym_column = 68,
  sym_column_settings = 69,
  sym__unary_setting = 70,
  sym__binary_setting = 71,
  sym_default_setting = 72,
  sym__inline_reference = 73,
  sym_enum = 74,
  sym_variant = 75,
  sym_reference = 76,
  sym__short_reference = 77,
  sym__long_reference = 78,
  sym__relationship = 79,
  sym_one_to_many = 80,
  sym_inline_one_to_many = 81,
  sym_many_to_one = 82,
  sym_inline_many_to_one = 83,
  sym_one_to_one = 84,
  sym_inline_one_to_one = 85,
  sym_many_to_many = 86,
  sym_inline_many_to_many = 87,
  sym__column_reference = 88,
  sym_table_group = 89,
  sym_comment = 90,
  sym__multiline_comment = 91,
  sym_note = 92,
  sym_note_text = 93,
  sym__short_note = 94,
  sym__long_note = 95,
  aux_sym_document_repeat1 = 96,
  aux_sym_project_repeat1 = 97,
  aux_sym_table_repeat1 = 98,
  aux_sym_table_settings_repeat1 = 99,
  aux_sym_column_settings_repeat1 = 100,
  aux_sym_enum_repeat1 = 101,
  alias_sym_column_name = 102,
  alias_sym_enum_name = 103,
  alias_sym_from_column = 104,
  alias_sym_key = 105,
  alias_sym_keyword = 106,
  alias_sym_note_name = 107,
  alias_sym_null_setting = 108,
  alias_sym_project_name = 109,
  alias_sym_reference_name = 110,
  alias_sym_schema_name = 111,
  alias_sym_table_alias = 112,
  alias_sym_table_group_name = 113,
  alias_sym_table_name = 114,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "_identifier",
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
  [aux_sym_table_settings_repeat1] = "table_settings_repeat1",
  [aux_sym_column_settings_repeat1] = "column_settings_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
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
  [aux_sym_table_settings_repeat1] = aux_sym_table_settings_repeat1,
  [aux_sym_column_settings_repeat1] = aux_sym_column_settings_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
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
    [1] = alias_sym_project_name,
  },
  [2] = {
    [1] = alias_sym_table_name,
  },
  [3] = {
    [1] = alias_sym_table_alias,
  },
  [4] = {
    [1] = alias_sym_reference_name,
  },
  [5] = {
    [1] = alias_sym_enum_name,
  },
  [6] = {
    [1] = alias_sym_table_group_name,
  },
  [7] = {
    [1] = alias_sym_note_name,
  },
  [8] = {
    [0] = alias_sym_column_name,
  },
  [9] = {
    [1] = alias_sym_keyword,
  },
  [10] = {
    [0] = alias_sym_table_name,
    [2] = alias_sym_column_name,
  },
  [11] = {
    [0] = alias_sym_from_column,
  },
  [12] = {
    [0] = alias_sym_key,
  },
  [13] = {
    [0] = alias_sym_null_setting,
  },
  [14] = {
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
  [51] = 6,
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
  [64] = 62,
  [65] = 65,
  [66] = 63,
  [67] = 67,
  [68] = 68,
  [69] = 16,
  [70] = 15,
  [71] = 8,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 7,
  [78] = 78,
  [79] = 14,
  [80] = 11,
  [81] = 13,
  [82] = 10,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 86,
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
  [154] = 120,
  [155] = 136,
  [156] = 124,
  [157] = 119,
  [158] = 118,
  [159] = 127,
  [160] = 153,
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
      if (lookahead == ',') ADVANCE(165);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '.') ADVANCE(181);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == '<') ADVANCE(177);
      if (lookahead == '>') ADVANCE(178);
      if (lookahead == 'E') ADVANCE(77);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(100);
      if (lookahead == 'R') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == ']') ADVANCE(166);
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
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '}') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(184);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(138);
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
      if (lookahead == ',') ADVANCE(165);
      if (lookahead == 'N') ADVANCE(131);
      if (lookahead == '[') ADVANCE(164);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == 'n') ADVANCE(132);
      if (lookahead == '}') ADVANCE(160);
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
      if (lookahead == ':') ADVANCE(156);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '{') ADVANCE(159);
      if (lookahead == '}') ADVANCE(160);
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
      if (lookahead == '\'') ADVANCE(137);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(185);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(186);
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
      if (lookahead == 't') ADVANCE(150);
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
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(149);
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
      if (lookahead == 'f') ADVANCE(176);
      END_STATE();
    case 46:
      if (lookahead == 'f') ADVANCE(173);
      END_STATE();
    case 47:
      if (lookahead == 'f') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(152);
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
      if (lookahead == 'k') ADVANCE(168);
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 59:
      if (lookahead == 'k') ADVANCE(38);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(145);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(146);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(169);
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
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(174);
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
      if (lookahead == 'n') ADVANCE(147);
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
      if (lookahead == 'p') ADVANCE(154);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(183);
      END_STATE();
    case 93:
      if (lookahead == 'p') ADVANCE(182);
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
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(155);
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
      if (lookahead == 's') ADVANCE(163);
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
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(157);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(171);
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
      if (lookahead == 'y') ADVANCE(167);
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
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '"') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_nil);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_bool);
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_date);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_datetime);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_timestamp);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_varchar);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(101);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_primarykey);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_pk);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_notnull);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_unique);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_increment);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_default);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '>') ADVANCE(180);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__inline_comment);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
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
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 5},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 2},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 139},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 6},
  [138] = {.lex_state = 139},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 6},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 2},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 139},
  [160] = {.lex_state = 2},
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
    [sym_document] = STATE(121),
    [sym__definition] = STATE(2),
    [sym_project] = STATE(2),
    [sym_table] = STATE(2),
    [sym_enum] = STATE(2),
    [sym_reference] = STATE(2),
    [sym__short_reference] = STATE(27),
    [sym__long_reference] = STATE(27),
    [sym_table_group] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__multiline_comment] = STATE(30),
    [sym_note] = STATE(2),
    [sym__short_note] = STATE(16),
    [sym__long_note] = STATE(16),
    [aux_sym_document_repeat1] = STATE(2),
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
    ACTIONS(15), 1,
      sym__inline_comment,
    ACTIONS(17), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
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
    STATE(16), 2,
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
      aux_sym_document_repeat1,
  [56] = 13,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      sym__inline_comment,
    ACTIONS(43), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym__multiline_comment,
    ACTIONS(25), 2,
      anon_sym_project,
      anon_sym_Project,
    ACTIONS(28), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(31), 2,
      anon_sym_ref,
      anon_sym_Ref,
    ACTIONS(34), 2,
      anon_sym_enum,
      anon_sym_Enum,
    ACTIONS(37), 2,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
    ACTIONS(46), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(16), 2,
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
    STATE(8), 1,
      sym__multiline_string,
    STATE(15), 1,
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
  [226] = 2,
    ACTIONS(73), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(71), 16,
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
    STATE(16), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(79), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
    STATE(96), 5,
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
    ACTIONS(75), 1,
      anon_sym_null,
    ACTIONS(81), 1,
      anon_sym_default,
    ACTIONS(83), 1,
      anon_sym_ref,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(16), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(93), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
    STATE(101), 5,
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
  [812] = 2,
    ACTIONS(185), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(183), 13,
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
  [832] = 2,
    ACTIONS(189), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(187), 13,
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
  [852] = 2,
    ACTIONS(193), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(191), 13,
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
  [872] = 3,
    STATE(58), 1,
      sym_type,
    ACTIONS(195), 3,
      anon_sym_bool,
      anon_sym_date,
      anon_sym_int,
    ACTIONS(197), 7,
      anon_sym_boolean,
      anon_sym_datetime,
      anon_sym_integer,
      anon_sym_string,
      anon_sym_text,
      anon_sym_timestamp,
      anon_sym_varchar,
  [890] = 5,
    ACTIONS(199), 1,
      sym__identifier,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(204), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(69), 2,
      sym__short_note,
      sym__long_note,
    STATE(39), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [911] = 5,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(69), 2,
      sym__short_note,
      sym__long_note,
    STATE(39), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [932] = 5,
    ACTIONS(213), 1,
      sym__identifier,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    ACTIONS(218), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(69), 2,
      sym__short_note,
      sym__long_note,
    STATE(41), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [953] = 5,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(69), 2,
      sym__short_note,
      sym__long_note,
    STATE(39), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [974] = 5,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(209), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(69), 2,
      sym__short_note,
      sym__long_note,
    STATE(42), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [995] = 5,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(69), 2,
      sym__short_note,
      sym__long_note,
    STATE(41), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [1016] = 5,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(69), 2,
      sym__short_note,
      sym__long_note,
    STATE(47), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1037] = 5,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(69), 2,
      sym__short_note,
      sym__long_note,
    STATE(44), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [1058] = 5,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(69), 2,
      sym__short_note,
      sym__long_note,
    STATE(39), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1079] = 5,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(69), 2,
      sym__short_note,
      sym__long_note,
    STATE(40), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1100] = 3,
    STATE(57), 1,
      sym_value,
    STATE(59), 2,
      sym__boolean,
      sym__null,
    ACTIONS(233), 6,
      sym__string,
      sym__number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_nil,
  [1116] = 3,
    STATE(111), 1,
      sym_value,
    STATE(59), 2,
      sym__boolean,
      sym__null,
    ACTIONS(233), 6,
      sym__string,
      sym__number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_null,
      anon_sym_nil,
  [1132] = 6,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(235), 1,
      sym__string,
    ACTIONS(237), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(70), 1,
      sym_note_text,
    STATE(71), 1,
      sym__multiline_string,
    ACTIONS(65), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1153] = 5,
    ACTIONS(239), 1,
      anon_sym_LT,
    ACTIONS(241), 1,
      anon_sym_GT,
    ACTIONS(243), 1,
      anon_sym_DASH,
    ACTIONS(245), 1,
      anon_sym_LT_GT,
    STATE(102), 4,
      sym_inline_one_to_many,
      sym_inline_many_to_one,
      sym_inline_one_to_one,
      sym_inline_many_to_many,
  [1172] = 3,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(72), 1,
      sym__column_reference,
    STATE(150), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1186] = 3,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(72), 1,
      sym__column_reference,
    STATE(26), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1200] = 3,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(72), 1,
      sym__column_reference,
    STATE(145), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1214] = 3,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(72), 1,
      sym__column_reference,
    STATE(35), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1228] = 2,
    ACTIONS(249), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(251), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1239] = 4,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    ACTIONS(257), 1,
      anon_sym_LBRACK,
    STATE(78), 1,
      sym_column_settings,
    ACTIONS(253), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1254] = 2,
    ACTIONS(259), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(261), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1265] = 3,
    ACTIONS(265), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 2,
      sym__identifier,
      sym__string,
    STATE(61), 2,
      sym_variant,
      aux_sym_enum_repeat1,
  [1277] = 3,
    ACTIONS(267), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 2,
      sym__identifier,
      sym__string,
    STATE(67), 2,
      sym_variant,
      aux_sym_enum_repeat1,
  [1289] = 5,
    ACTIONS(61), 1,
      sym__string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(269), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym__multiline_string,
    STATE(155), 1,
      sym_note_text,
  [1305] = 5,
    ACTIONS(61), 1,
      sym__string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(271), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym__multiline_string,
    STATE(154), 1,
      sym_note_text,
  [1321] = 5,
    ACTIONS(61), 1,
      sym__string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(273), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym__multiline_string,
    STATE(136), 1,
      sym_note_text,
  [1337] = 2,
    ACTIONS(277), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(275), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1347] = 5,
    ACTIONS(61), 1,
      sym__string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(279), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym__multiline_string,
    STATE(120), 1,
      sym_note_text,
  [1363] = 3,
    ACTIONS(284), 1,
      anon_sym_RBRACE,
    ACTIONS(281), 2,
      sym__identifier,
      sym__string,
    STATE(67), 2,
      sym_variant,
      aux_sym_enum_repeat1,
  [1375] = 5,
    ACTIONS(286), 1,
      anon_sym_LBRACE,
    ACTIONS(288), 1,
      anon_sym_as,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym__table_alias,
    STATE(141), 1,
      sym_table_settings,
  [1391] = 2,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1400] = 2,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1409] = 2,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1418] = 4,
    ACTIONS(292), 1,
      anon_sym_LT,
    ACTIONS(294), 1,
      anon_sym_GT,
    ACTIONS(296), 1,
      anon_sym_DASH,
    ACTIONS(298), 1,
      anon_sym_LT_GT,
  [1431] = 4,
    ACTIONS(300), 1,
      anon_sym_COLON,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(304), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_table_settings_repeat1,
  [1444] = 2,
    ACTIONS(308), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1453] = 2,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(310), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1462] = 2,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(314), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1471] = 2,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1480] = 2,
    ACTIONS(320), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1489] = 2,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1498] = 2,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    ACTIONS(91), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1507] = 2,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1516] = 2,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1525] = 3,
    ACTIONS(322), 1,
      anon_sym_COMMA,
    ACTIONS(325), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_column_settings_repeat1,
  [1535] = 3,
    ACTIONS(290), 1,
      anon_sym_LBRACK,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_table_settings,
  [1545] = 3,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(329), 1,
      anon_sym_RBRACK,
    STATE(93), 1,
      aux_sym_table_settings_repeat1,
  [1555] = 3,
    ACTIONS(331), 1,
      sym__identifier,
    ACTIONS(333), 1,
      anon_sym_COLON,
    ACTIONS(335), 1,
      anon_sym_LBRACE,
  [1565] = 3,
    ACTIONS(337), 1,
      sym__identifier,
    ACTIONS(339), 1,
      anon_sym_COLON,
    ACTIONS(341), 1,
      anon_sym_LBRACE,
  [1575] = 3,
    ACTIONS(343), 1,
      sym__identifier,
    ACTIONS(345), 1,
      anon_sym_COLON,
    ACTIONS(347), 1,
      anon_sym_LBRACE,
  [1585] = 3,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
    STATE(83), 1,
      aux_sym_column_settings_repeat1,
  [1595] = 3,
    ACTIONS(353), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_table_settings_repeat1,
  [1605] = 3,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_table_settings_repeat1,
  [1615] = 2,
    ACTIONS(300), 1,
      anon_sym_COLON,
    ACTIONS(360), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1623] = 3,
    ACTIONS(302), 1,
      anon_sym_COMMA,
    ACTIONS(362), 1,
      anon_sym_RBRACK,
    STATE(90), 1,
      aux_sym_table_settings_repeat1,
  [1633] = 1,
    ACTIONS(364), 3,
      sym__identifier,
      sym__string,
      anon_sym_RBRACE,
  [1639] = 3,
    ACTIONS(366), 1,
      sym__identifier,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(85), 1,
      sym_key_value,
  [1649] = 3,
    ACTIONS(349), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_column_settings_repeat1,
  [1659] = 1,
    ACTIONS(372), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1664] = 1,
    ACTIONS(374), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1669] = 1,
    ACTIONS(376), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1674] = 1,
    ACTIONS(378), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1679] = 1,
    ACTIONS(325), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1684] = 1,
    ACTIONS(380), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1689] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(98), 1,
      sym__column_reference,
  [1696] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(99), 1,
      sym__column_reference,
  [1703] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(100), 1,
      sym__column_reference,
  [1710] = 2,
    ACTIONS(382), 1,
      anon_sym_COLON,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
  [1717] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(19), 1,
      sym__column_reference,
  [1724] = 1,
    ACTIONS(356), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1729] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(97), 1,
      sym__column_reference,
  [1736] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(18), 1,
      sym__column_reference,
  [1743] = 1,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1748] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(20), 1,
      sym__column_reference,
  [1755] = 2,
    ACTIONS(388), 1,
      sym__identifier,
    STATE(108), 1,
      sym_key_value,
  [1762] = 2,
    ACTIONS(390), 1,
      sym__identifier,
    ACTIONS(392), 1,
      anon_sym_LBRACE,
  [1769] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(17), 1,
      sym__column_reference,
  [1776] = 1,
    ACTIONS(394), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1781] = 1,
    ACTIONS(396), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [1786] = 1,
    ACTIONS(398), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1790] = 1,
    ACTIONS(400), 1,
      anon_sym_LBRACE,
  [1794] = 1,
    ACTIONS(402), 1,
      anon_sym_RBRACE,
  [1798] = 1,
    ACTIONS(404), 1,
      ts_builtin_sym_end,
  [1802] = 1,
    ACTIONS(406), 1,
      anon_sym_COLON,
  [1806] = 1,
    ACTIONS(408), 1,
      anon_sym_LF,
  [1810] = 1,
    ACTIONS(410), 1,
      anon_sym_LF,
  [1814] = 1,
    ACTIONS(412), 1,
      sym__identifier,
  [1818] = 1,
    ACTIONS(414), 1,
      sym__identifier,
  [1822] = 1,
    ACTIONS(416), 1,
      aux_sym__multiline_string_token1,
  [1826] = 1,
    ACTIONS(418), 1,
      anon_sym_LBRACE,
  [1830] = 1,
    ACTIONS(420), 1,
      anon_sym_LBRACE,
  [1834] = 1,
    ACTIONS(422), 1,
      anon_sym_LBRACE,
  [1838] = 1,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
  [1842] = 1,
    ACTIONS(426), 1,
      anon_sym_LBRACE,
  [1846] = 1,
    ACTIONS(428), 1,
      anon_sym_LBRACE,
  [1850] = 1,
    ACTIONS(300), 1,
      anon_sym_COLON,
  [1854] = 1,
    ACTIONS(430), 1,
      anon_sym_RBRACE,
  [1858] = 1,
    ACTIONS(432), 1,
      anon_sym_RBRACE,
  [1862] = 1,
    ACTIONS(434), 1,
      sym__identifier,
  [1866] = 1,
    ACTIONS(436), 1,
      aux_sym__multiline_string_token1,
  [1870] = 1,
    ACTIONS(438), 1,
      anon_sym_COLON,
  [1874] = 1,
    ACTIONS(440), 1,
      sym__identifier,
  [1878] = 1,
    ACTIONS(327), 1,
      anon_sym_LBRACE,
  [1882] = 1,
    ACTIONS(442), 1,
      anon_sym_STAR_SLASH,
  [1886] = 1,
    ACTIONS(444), 1,
      sym__identifier,
  [1890] = 1,
    ACTIONS(446), 1,
      anon_sym_DOT,
  [1894] = 1,
    ACTIONS(448), 1,
      anon_sym_RBRACE,
  [1898] = 1,
    ACTIONS(450), 1,
      anon_sym_LBRACE,
  [1902] = 1,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
  [1906] = 1,
    ACTIONS(454), 1,
      anon_sym_RBRACE,
  [1910] = 1,
    ACTIONS(456), 1,
      sym__identifier,
  [1914] = 1,
    ACTIONS(458), 1,
      anon_sym_RBRACE,
  [1918] = 1,
    ACTIONS(460), 1,
      anon_sym_LF,
  [1922] = 1,
    ACTIONS(462), 1,
      anon_sym_LBRACE,
  [1926] = 1,
    ACTIONS(464), 1,
      anon_sym_LF,
  [1930] = 1,
    ACTIONS(466), 1,
      anon_sym_RBRACE,
  [1934] = 1,
    ACTIONS(468), 1,
      anon_sym_RBRACE,
  [1938] = 1,
    ACTIONS(470), 1,
      anon_sym_LF,
  [1942] = 1,
    ACTIONS(472), 1,
      anon_sym_LBRACE,
  [1946] = 1,
    ACTIONS(474), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1950] = 1,
    ACTIONS(476), 1,
      aux_sym__multiline_string_token1,
  [1954] = 1,
    ACTIONS(478), 1,
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
  [SMALL_STATE(39)] = 890,
  [SMALL_STATE(40)] = 911,
  [SMALL_STATE(41)] = 932,
  [SMALL_STATE(42)] = 953,
  [SMALL_STATE(43)] = 974,
  [SMALL_STATE(44)] = 995,
  [SMALL_STATE(45)] = 1016,
  [SMALL_STATE(46)] = 1037,
  [SMALL_STATE(47)] = 1058,
  [SMALL_STATE(48)] = 1079,
  [SMALL_STATE(49)] = 1100,
  [SMALL_STATE(50)] = 1116,
  [SMALL_STATE(51)] = 1132,
  [SMALL_STATE(52)] = 1153,
  [SMALL_STATE(53)] = 1172,
  [SMALL_STATE(54)] = 1186,
  [SMALL_STATE(55)] = 1200,
  [SMALL_STATE(56)] = 1214,
  [SMALL_STATE(57)] = 1228,
  [SMALL_STATE(58)] = 1239,
  [SMALL_STATE(59)] = 1254,
  [SMALL_STATE(60)] = 1265,
  [SMALL_STATE(61)] = 1277,
  [SMALL_STATE(62)] = 1289,
  [SMALL_STATE(63)] = 1305,
  [SMALL_STATE(64)] = 1321,
  [SMALL_STATE(65)] = 1337,
  [SMALL_STATE(66)] = 1347,
  [SMALL_STATE(67)] = 1363,
  [SMALL_STATE(68)] = 1375,
  [SMALL_STATE(69)] = 1391,
  [SMALL_STATE(70)] = 1400,
  [SMALL_STATE(71)] = 1409,
  [SMALL_STATE(72)] = 1418,
  [SMALL_STATE(73)] = 1431,
  [SMALL_STATE(74)] = 1444,
  [SMALL_STATE(75)] = 1453,
  [SMALL_STATE(76)] = 1462,
  [SMALL_STATE(77)] = 1471,
  [SMALL_STATE(78)] = 1480,
  [SMALL_STATE(79)] = 1489,
  [SMALL_STATE(80)] = 1498,
  [SMALL_STATE(81)] = 1507,
  [SMALL_STATE(82)] = 1516,
  [SMALL_STATE(83)] = 1525,
  [SMALL_STATE(84)] = 1535,
  [SMALL_STATE(85)] = 1545,
  [SMALL_STATE(86)] = 1555,
  [SMALL_STATE(87)] = 1565,
  [SMALL_STATE(88)] = 1575,
  [SMALL_STATE(89)] = 1585,
  [SMALL_STATE(90)] = 1595,
  [SMALL_STATE(91)] = 1605,
  [SMALL_STATE(92)] = 1615,
  [SMALL_STATE(93)] = 1623,
  [SMALL_STATE(94)] = 1633,
  [SMALL_STATE(95)] = 1639,
  [SMALL_STATE(96)] = 1649,
  [SMALL_STATE(97)] = 1659,
  [SMALL_STATE(98)] = 1664,
  [SMALL_STATE(99)] = 1669,
  [SMALL_STATE(100)] = 1674,
  [SMALL_STATE(101)] = 1679,
  [SMALL_STATE(102)] = 1684,
  [SMALL_STATE(103)] = 1689,
  [SMALL_STATE(104)] = 1696,
  [SMALL_STATE(105)] = 1703,
  [SMALL_STATE(106)] = 1710,
  [SMALL_STATE(107)] = 1717,
  [SMALL_STATE(108)] = 1724,
  [SMALL_STATE(109)] = 1729,
  [SMALL_STATE(110)] = 1736,
  [SMALL_STATE(111)] = 1743,
  [SMALL_STATE(112)] = 1748,
  [SMALL_STATE(113)] = 1755,
  [SMALL_STATE(114)] = 1762,
  [SMALL_STATE(115)] = 1769,
  [SMALL_STATE(116)] = 1776,
  [SMALL_STATE(117)] = 1781,
  [SMALL_STATE(118)] = 1786,
  [SMALL_STATE(119)] = 1790,
  [SMALL_STATE(120)] = 1794,
  [SMALL_STATE(121)] = 1798,
  [SMALL_STATE(122)] = 1802,
  [SMALL_STATE(123)] = 1806,
  [SMALL_STATE(124)] = 1810,
  [SMALL_STATE(125)] = 1814,
  [SMALL_STATE(126)] = 1818,
  [SMALL_STATE(127)] = 1822,
  [SMALL_STATE(128)] = 1826,
  [SMALL_STATE(129)] = 1830,
  [SMALL_STATE(130)] = 1834,
  [SMALL_STATE(131)] = 1838,
  [SMALL_STATE(132)] = 1842,
  [SMALL_STATE(133)] = 1846,
  [SMALL_STATE(134)] = 1850,
  [SMALL_STATE(135)] = 1854,
  [SMALL_STATE(136)] = 1858,
  [SMALL_STATE(137)] = 1862,
  [SMALL_STATE(138)] = 1866,
  [SMALL_STATE(139)] = 1870,
  [SMALL_STATE(140)] = 1874,
  [SMALL_STATE(141)] = 1878,
  [SMALL_STATE(142)] = 1882,
  [SMALL_STATE(143)] = 1886,
  [SMALL_STATE(144)] = 1890,
  [SMALL_STATE(145)] = 1894,
  [SMALL_STATE(146)] = 1898,
  [SMALL_STATE(147)] = 1902,
  [SMALL_STATE(148)] = 1906,
  [SMALL_STATE(149)] = 1910,
  [SMALL_STATE(150)] = 1914,
  [SMALL_STATE(151)] = 1918,
  [SMALL_STATE(152)] = 1922,
  [SMALL_STATE(153)] = 1926,
  [SMALL_STATE(154)] = 1930,
  [SMALL_STATE(155)] = 1934,
  [SMALL_STATE(156)] = 1938,
  [SMALL_STATE(157)] = 1942,
  [SMALL_STATE(158)] = 1946,
  [SMALL_STATE(159)] = 1950,
  [SMALL_STATE(160)] = 1954,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(137),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(143),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(88),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(114),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(123),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(87),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 3, .production_id = 10),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 3, .production_id = 10),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 5, .production_id = 14),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 5, .production_id = 14),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string, 5),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string, 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_text, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 5, .production_id = 7),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 5, .production_id = 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, .production_id = 7),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, .production_id = 7),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_to_one, 3, .production_id = 11),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_to_one, 3, .production_id = 11),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_to_many, 3, .production_id = 11),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_to_many, 3, .production_id = 11),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_to_many, 3, .production_id = 11),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_to_many, 3, .production_id = 11),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_to_one, 3, .production_id = 11),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_to_one, 3, .production_id = 11),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, .production_id = 1),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 5),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, .production_id = 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5, .production_id = 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 6),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 6),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 4, .production_id = 4),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 4, .production_id = 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 5, .production_id = 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 5, .production_id = 4),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 7, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 7, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 5, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 5, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, .production_id = 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5, .production_id = 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, .production_id = 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 6, .production_id = 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(38),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(86),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(134),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(86),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, .production_id = 12),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 12),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, .production_id = 8),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 8),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [281] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(94),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [292] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 2),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 8),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 8),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2), SHIFT_REPEAT(12),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2), SHIFT_REPEAT(113),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2, .production_id = 9),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_many, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_many, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_one, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_one, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_reference, 3),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_setting, 3),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_setting, 1, .production_id = 13),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_alias, 2, .production_id = 3),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [404] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 2),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 4),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 4, .production_id = 9),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 3, .production_id = 9),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
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
