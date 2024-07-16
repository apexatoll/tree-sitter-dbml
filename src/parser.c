#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 171
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 104
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
  sym_variant_notes = 76,
  sym_reference = 77,
  sym__short_reference = 78,
  sym__long_reference = 79,
  sym__relationship = 80,
  sym_one_to_many = 81,
  sym_inline_one_to_many = 82,
  sym_many_to_one = 83,
  sym_inline_many_to_one = 84,
  sym_one_to_one = 85,
  sym_inline_one_to_one = 86,
  sym_many_to_many = 87,
  sym_inline_many_to_many = 88,
  sym__column_reference = 89,
  sym_table_group = 90,
  sym_comment = 91,
  sym__multiline_comment = 92,
  sym_note = 93,
  sym_note_text = 94,
  sym__short_note = 95,
  sym__long_note = 96,
  aux_sym_document_repeat1 = 97,
  aux_sym_project_repeat1 = 98,
  aux_sym_table_repeat1 = 99,
  aux_sym_table_settings_repeat1 = 100,
  aux_sym_column_settings_repeat1 = 101,
  aux_sym_enum_repeat1 = 102,
  aux_sym_variant_notes_repeat1 = 103,
  alias_sym_column_name = 104,
  alias_sym_enum_name = 105,
  alias_sym_from_column = 106,
  alias_sym_key = 107,
  alias_sym_keyword = 108,
  alias_sym_note_name = 109,
  alias_sym_null_setting = 110,
  alias_sym_project_name = 111,
  alias_sym_reference_name = 112,
  alias_sym_schema_name = 113,
  alias_sym_table_alias = 114,
  alias_sym_table_group_name = 115,
  alias_sym_table_name = 116,
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
  [aux_sym_variant_notes_repeat1] = "variant_notes_repeat1",
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
  [aux_sym_variant_notes_repeat1] = aux_sym_variant_notes_repeat1,
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
  [aux_sym_variant_notes_repeat1] = {
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
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 63,
  [69] = 69,
  [70] = 66,
  [71] = 71,
  [72] = 12,
  [73] = 14,
  [74] = 10,
  [75] = 15,
  [76] = 13,
  [77] = 16,
  [78] = 8,
  [79] = 79,
  [80] = 7,
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
  [104] = 95,
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
  [164] = 158,
  [165] = 150,
  [166] = 130,
  [167] = 148,
  [168] = 140,
  [169] = 149,
  [170] = 159,
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
      if (lookahead == '[') ADVANCE(164);
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
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 5},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 6},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 2},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 6},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 139},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 139},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 6},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 2},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 139},
  [170] = {.lex_state = 2},
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
    [sym_document] = STATE(137),
    [sym__definition] = STATE(2),
    [sym_project] = STATE(2),
    [sym_table] = STATE(2),
    [sym_enum] = STATE(2),
    [sym_reference] = STATE(2),
    [sym__short_reference] = STATE(25),
    [sym__long_reference] = STATE(25),
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
    STATE(24), 1,
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
    STATE(25), 2,
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
    STATE(24), 1,
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
    STATE(13), 2,
      sym__short_note,
      sym__long_note,
    STATE(25), 2,
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
    STATE(7), 1,
      sym__multiline_string,
    STATE(12), 1,
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
    STATE(13), 2,
      sym__short_note,
      sym__long_note,
    ACTIONS(79), 5,
      anon_sym_primarykey,
      anon_sym_pk,
      anon_sym_notnull,
      anon_sym_unique,
      anon_sym_increment,
    STATE(98), 5,
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
  [306] = 7,
    ACTIONS(75), 1,
      anon_sym_null,
    ACTIONS(81), 1,
      anon_sym_default,
    ACTIONS(83), 1,
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
    STATE(125), 5,
      sym__unary_setting,
      sym__binary_setting,
      sym_default_setting,
      sym__inline_reference,
      sym_note,
  [338] = 2,
    ACTIONS(93), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(91), 15,
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
    STATE(57), 1,
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
    STATE(76), 2,
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
    STATE(76), 2,
      sym__short_note,
      sym__long_note,
    STATE(39), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [932] = 5,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(76), 2,
      sym__short_note,
      sym__long_note,
    STATE(39), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [953] = 5,
    ACTIONS(215), 1,
      sym__identifier,
    ACTIONS(218), 1,
      anon_sym_RBRACE,
    ACTIONS(220), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(76), 2,
      sym__short_note,
      sym__long_note,
    STATE(42), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [974] = 5,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(76), 2,
      sym__short_note,
      sym__long_note,
    STATE(47), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [995] = 5,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(76), 2,
      sym__short_note,
      sym__long_note,
    STATE(41), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1016] = 5,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(76), 2,
      sym__short_note,
      sym__long_note,
    STATE(48), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1037] = 5,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(76), 2,
      sym__short_note,
      sym__long_note,
    STATE(40), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1058] = 5,
    ACTIONS(223), 1,
      sym__identifier,
    ACTIONS(231), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(76), 2,
      sym__short_note,
      sym__long_note,
    STATE(42), 4,
      sym_key_value,
      sym__project_row,
      sym_note,
      aux_sym_project_repeat1,
  [1079] = 5,
    ACTIONS(207), 1,
      sym__identifier,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(76), 2,
      sym__short_note,
      sym__long_note,
    STATE(39), 4,
      sym__table_row,
      sym_column,
      sym_note,
      aux_sym_table_repeat1,
  [1100] = 3,
    STATE(58), 1,
      sym_value,
    STATE(60), 2,
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
    STATE(127), 1,
      sym_value,
    STATE(60), 2,
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
    STATE(72), 1,
      sym_note_text,
    STATE(80), 1,
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
    STATE(108), 4,
      sym_inline_one_to_many,
      sym_inline_many_to_one,
      sym_inline_one_to_one,
      sym_inline_many_to_many,
  [1172] = 3,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(83), 1,
      sym__column_reference,
    STATE(36), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1186] = 3,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(83), 1,
      sym__column_reference,
    STATE(154), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1200] = 3,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(83), 1,
      sym__column_reference,
    STATE(162), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1214] = 3,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(83), 1,
      sym__column_reference,
    STATE(35), 5,
      sym__relationship,
      sym_one_to_many,
      sym_many_to_one,
      sym_one_to_one,
      sym_many_to_many,
  [1228] = 4,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    ACTIONS(253), 1,
      anon_sym_LBRACK,
    STATE(81), 1,
      sym_column_settings,
    ACTIONS(249), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1243] = 2,
    ACTIONS(255), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(257), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1254] = 4,
    ACTIONS(259), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      sym_note,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(13), 2,
      sym__short_note,
      sym__long_note,
  [1269] = 2,
    ACTIONS(261), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
    ACTIONS(263), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1280] = 5,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
    ACTIONS(267), 1,
      anon_sym_as,
    ACTIONS(269), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym__table_alias,
    STATE(141), 1,
      sym_table_settings,
  [1296] = 3,
    ACTIONS(274), 1,
      anon_sym_RBRACE,
    ACTIONS(271), 2,
      sym__identifier,
      sym__string,
    STATE(62), 2,
      sym_variant,
      aux_sym_enum_repeat1,
  [1308] = 5,
    ACTIONS(61), 1,
      sym__string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(276), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym__multiline_string,
    STATE(164), 1,
      sym_note_text,
  [1324] = 3,
    STATE(124), 1,
      sym_note,
    ACTIONS(19), 2,
      anon_sym_note,
      anon_sym_Note,
    STATE(13), 2,
      sym__short_note,
      sym__long_note,
  [1336] = 2,
    ACTIONS(280), 2,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
    ACTIONS(278), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1346] = 5,
    ACTIONS(61), 1,
      sym__string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(282), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym__multiline_string,
    STATE(165), 1,
      sym_note_text,
  [1362] = 3,
    ACTIONS(286), 1,
      anon_sym_RBRACE,
    ACTIONS(284), 2,
      sym__identifier,
      sym__string,
    STATE(71), 2,
      sym_variant,
      aux_sym_enum_repeat1,
  [1374] = 5,
    ACTIONS(61), 1,
      sym__string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(288), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym__multiline_string,
    STATE(158), 1,
      sym_note_text,
  [1390] = 3,
    ACTIONS(292), 1,
      anon_sym_LBRACK,
    STATE(99), 1,
      sym_variant_notes,
    ACTIONS(290), 3,
      sym__identifier,
      sym__string,
      anon_sym_RBRACE,
  [1402] = 5,
    ACTIONS(61), 1,
      sym__string,
    ACTIONS(63), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(294), 1,
      anon_sym_RBRACE,
    STATE(7), 1,
      sym__multiline_string,
    STATE(150), 1,
      sym_note_text,
  [1418] = 3,
    ACTIONS(296), 1,
      anon_sym_RBRACE,
    ACTIONS(284), 2,
      sym__identifier,
      sym__string,
    STATE(62), 2,
      sym_variant,
      aux_sym_enum_repeat1,
  [1430] = 2,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1439] = 2,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    ACTIONS(101), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1448] = 2,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1457] = 2,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    ACTIONS(105), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1466] = 2,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1475] = 2,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    ACTIONS(109), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1484] = 2,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(73), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1493] = 4,
    ACTIONS(298), 1,
      anon_sym_COLON,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    STATE(97), 1,
      aux_sym_table_settings_repeat1,
  [1506] = 2,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    ACTIONS(69), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1515] = 2,
    ACTIONS(306), 1,
      anon_sym_RBRACE,
    ACTIONS(304), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1524] = 2,
    ACTIONS(310), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1533] = 4,
    ACTIONS(312), 1,
      anon_sym_LT,
    ACTIONS(314), 1,
      anon_sym_GT,
    ACTIONS(316), 1,
      anon_sym_DASH,
    ACTIONS(318), 1,
      anon_sym_LT_GT,
  [1546] = 2,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(320), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1555] = 2,
    ACTIONS(326), 1,
      anon_sym_RBRACE,
    ACTIONS(324), 3,
      sym__identifier,
      anon_sym_note,
      anon_sym_Note,
  [1564] = 3,
    ACTIONS(328), 1,
      anon_sym_COMMA,
    ACTIONS(331), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_column_settings_repeat1,
  [1574] = 2,
    ACTIONS(298), 1,
      anon_sym_COLON,
    ACTIONS(333), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1582] = 3,
    ACTIONS(335), 1,
      anon_sym_COMMA,
    ACTIONS(338), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_variant_notes_repeat1,
  [1592] = 3,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_table_settings_repeat1,
  [1602] = 1,
    ACTIONS(342), 3,
      sym__identifier,
      sym__string,
      anon_sym_RBRACE,
  [1608] = 3,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(346), 1,
      anon_sym_RBRACK,
    STATE(86), 1,
      aux_sym_column_settings_repeat1,
  [1618] = 3,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(348), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_table_settings_repeat1,
  [1628] = 3,
    ACTIONS(350), 1,
      sym__identifier,
    ACTIONS(352), 1,
      anon_sym_COLON,
    ACTIONS(354), 1,
      anon_sym_LBRACE,
  [1638] = 3,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(358), 1,
      anon_sym_RBRACK,
    STATE(88), 1,
      aux_sym_variant_notes_repeat1,
  [1648] = 3,
    ACTIONS(360), 1,
      sym__identifier,
    ACTIONS(362), 1,
      anon_sym_COLON,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
  [1658] = 1,
    ACTIONS(366), 3,
      sym__identifier,
      sym__string,
      anon_sym_RBRACE,
  [1664] = 3,
    ACTIONS(300), 1,
      anon_sym_COMMA,
    ACTIONS(368), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_table_settings_repeat1,
  [1674] = 3,
    ACTIONS(344), 1,
      anon_sym_COMMA,
    ACTIONS(370), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      aux_sym_column_settings_repeat1,
  [1684] = 1,
    ACTIONS(372), 3,
      sym__identifier,
      sym__string,
      anon_sym_RBRACE,
  [1690] = 3,
    ACTIONS(356), 1,
      anon_sym_COMMA,
    ACTIONS(374), 1,
      anon_sym_RBRACK,
    STATE(94), 1,
      aux_sym_variant_notes_repeat1,
  [1700] = 1,
    ACTIONS(376), 3,
      sym__identifier,
      sym__string,
      anon_sym_RBRACE,
  [1706] = 3,
    ACTIONS(269), 1,
      anon_sym_LBRACK,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
    STATE(155), 1,
      sym_table_settings,
  [1716] = 3,
    ACTIONS(380), 1,
      sym__identifier,
    ACTIONS(382), 1,
      anon_sym_RBRACK,
    STATE(92), 1,
      sym_key_value,
  [1726] = 3,
    ACTIONS(384), 1,
      sym__identifier,
    ACTIONS(386), 1,
      anon_sym_COLON,
    ACTIONS(388), 1,
      anon_sym_LBRACE,
  [1736] = 3,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(393), 1,
      anon_sym_RBRACK,
    STATE(105), 1,
      aux_sym_table_settings_repeat1,
  [1746] = 2,
    ACTIONS(395), 1,
      anon_sym_COLON,
    ACTIONS(397), 1,
      anon_sym_LBRACE,
  [1753] = 1,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1758] = 1,
    ACTIONS(401), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1763] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(18), 1,
      sym__column_reference,
  [1770] = 1,
    ACTIONS(403), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1775] = 1,
    ACTIONS(405), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1780] = 1,
    ACTIONS(407), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1785] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(20), 1,
      sym__column_reference,
  [1792] = 1,
    ACTIONS(409), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1797] = 2,
    ACTIONS(411), 1,
      sym__identifier,
    ACTIONS(413), 1,
      anon_sym_LBRACE,
  [1804] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(19), 1,
      sym__column_reference,
  [1811] = 1,
    ACTIONS(393), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1816] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(107), 1,
      sym__column_reference,
  [1823] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(114), 1,
      sym__column_reference,
  [1830] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(17), 1,
      sym__column_reference,
  [1837] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(111), 1,
      sym__column_reference,
  [1844] = 1,
    ACTIONS(415), 2,
      anon_sym_LBRACE,
      anon_sym_LBRACK,
  [1849] = 2,
    ACTIONS(247), 1,
      sym__identifier,
    STATE(110), 1,
      sym__column_reference,
  [1856] = 1,
    ACTIONS(338), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1861] = 1,
    ACTIONS(331), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1866] = 2,
    ACTIONS(417), 1,
      sym__identifier,
    STATE(117), 1,
      sym_key_value,
  [1873] = 1,
    ACTIONS(419), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1878] = 1,
    ACTIONS(421), 1,
      sym__identifier,
  [1882] = 1,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
  [1886] = 1,
    ACTIONS(425), 1,
      anon_sym_LF,
  [1890] = 1,
    ACTIONS(427), 1,
      anon_sym_LBRACE,
  [1894] = 1,
    ACTIONS(429), 1,
      anon_sym_LBRACE,
  [1898] = 1,
    ACTIONS(431), 1,
      sym__identifier,
  [1902] = 1,
    ACTIONS(433), 1,
      anon_sym_COLON,
  [1906] = 1,
    ACTIONS(435), 1,
      anon_sym_COLON,
  [1910] = 1,
    ACTIONS(437), 1,
      anon_sym_LF,
  [1914] = 1,
    ACTIONS(439), 1,
      ts_builtin_sym_end,
  [1918] = 1,
    ACTIONS(441), 1,
      sym__identifier,
  [1922] = 1,
    ACTIONS(443), 1,
      sym__identifier,
  [1926] = 1,
    ACTIONS(445), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [1930] = 1,
    ACTIONS(378), 1,
      anon_sym_LBRACE,
  [1934] = 1,
    ACTIONS(447), 1,
      anon_sym_LBRACE,
  [1938] = 1,
    ACTIONS(449), 1,
      anon_sym_LBRACE,
  [1942] = 1,
    ACTIONS(451), 1,
      anon_sym_RBRACE,
  [1946] = 1,
    ACTIONS(453), 1,
      anon_sym_LBRACE,
  [1950] = 1,
    ACTIONS(455), 1,
      anon_sym_LBRACE,
  [1954] = 1,
    ACTIONS(457), 1,
      aux_sym__multiline_string_token1,
  [1958] = 1,
    ACTIONS(459), 1,
      anon_sym_LBRACE,
  [1962] = 1,
    ACTIONS(461), 1,
      aux_sym__multiline_string_token1,
  [1966] = 1,
    ACTIONS(463), 1,
      anon_sym_RBRACE,
  [1970] = 1,
    ACTIONS(465), 1,
      anon_sym_STAR_SLASH,
  [1974] = 1,
    ACTIONS(467), 1,
      sym__identifier,
  [1978] = 1,
    ACTIONS(469), 1,
      sym__identifier,
  [1982] = 1,
    ACTIONS(471), 1,
      anon_sym_RBRACE,
  [1986] = 1,
    ACTIONS(473), 1,
      anon_sym_LBRACE,
  [1990] = 1,
    ACTIONS(475), 1,
      anon_sym_LBRACE,
  [1994] = 1,
    ACTIONS(298), 1,
      anon_sym_COLON,
  [1998] = 1,
    ACTIONS(477), 1,
      anon_sym_RBRACE,
  [2002] = 1,
    ACTIONS(479), 1,
      anon_sym_LF,
  [2006] = 1,
    ACTIONS(481), 1,
      anon_sym_LF,
  [2010] = 1,
    ACTIONS(483), 1,
      anon_sym_RBRACE,
  [2014] = 1,
    ACTIONS(485), 1,
      anon_sym_RBRACE,
  [2018] = 1,
    ACTIONS(487), 1,
      anon_sym_DOT,
  [2022] = 1,
    ACTIONS(489), 1,
      anon_sym_RBRACE,
  [2026] = 1,
    ACTIONS(491), 1,
      anon_sym_RBRACE,
  [2030] = 1,
    ACTIONS(493), 1,
      anon_sym_LF,
  [2034] = 1,
    ACTIONS(495), 1,
      anon_sym_LBRACE,
  [2038] = 1,
    ACTIONS(497), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [2042] = 1,
    ACTIONS(499), 1,
      aux_sym__multiline_string_token1,
  [2046] = 1,
    ACTIONS(501), 1,
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
  [SMALL_STATE(12)] = 338,
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
  [SMALL_STATE(58)] = 1243,
  [SMALL_STATE(59)] = 1254,
  [SMALL_STATE(60)] = 1269,
  [SMALL_STATE(61)] = 1280,
  [SMALL_STATE(62)] = 1296,
  [SMALL_STATE(63)] = 1308,
  [SMALL_STATE(64)] = 1324,
  [SMALL_STATE(65)] = 1336,
  [SMALL_STATE(66)] = 1346,
  [SMALL_STATE(67)] = 1362,
  [SMALL_STATE(68)] = 1374,
  [SMALL_STATE(69)] = 1390,
  [SMALL_STATE(70)] = 1402,
  [SMALL_STATE(71)] = 1418,
  [SMALL_STATE(72)] = 1430,
  [SMALL_STATE(73)] = 1439,
  [SMALL_STATE(74)] = 1448,
  [SMALL_STATE(75)] = 1457,
  [SMALL_STATE(76)] = 1466,
  [SMALL_STATE(77)] = 1475,
  [SMALL_STATE(78)] = 1484,
  [SMALL_STATE(79)] = 1493,
  [SMALL_STATE(80)] = 1506,
  [SMALL_STATE(81)] = 1515,
  [SMALL_STATE(82)] = 1524,
  [SMALL_STATE(83)] = 1533,
  [SMALL_STATE(84)] = 1546,
  [SMALL_STATE(85)] = 1555,
  [SMALL_STATE(86)] = 1564,
  [SMALL_STATE(87)] = 1574,
  [SMALL_STATE(88)] = 1582,
  [SMALL_STATE(89)] = 1592,
  [SMALL_STATE(90)] = 1602,
  [SMALL_STATE(91)] = 1608,
  [SMALL_STATE(92)] = 1618,
  [SMALL_STATE(93)] = 1628,
  [SMALL_STATE(94)] = 1638,
  [SMALL_STATE(95)] = 1648,
  [SMALL_STATE(96)] = 1658,
  [SMALL_STATE(97)] = 1664,
  [SMALL_STATE(98)] = 1674,
  [SMALL_STATE(99)] = 1684,
  [SMALL_STATE(100)] = 1690,
  [SMALL_STATE(101)] = 1700,
  [SMALL_STATE(102)] = 1706,
  [SMALL_STATE(103)] = 1716,
  [SMALL_STATE(104)] = 1726,
  [SMALL_STATE(105)] = 1736,
  [SMALL_STATE(106)] = 1746,
  [SMALL_STATE(107)] = 1753,
  [SMALL_STATE(108)] = 1758,
  [SMALL_STATE(109)] = 1763,
  [SMALL_STATE(110)] = 1770,
  [SMALL_STATE(111)] = 1775,
  [SMALL_STATE(112)] = 1780,
  [SMALL_STATE(113)] = 1785,
  [SMALL_STATE(114)] = 1792,
  [SMALL_STATE(115)] = 1797,
  [SMALL_STATE(116)] = 1804,
  [SMALL_STATE(117)] = 1811,
  [SMALL_STATE(118)] = 1816,
  [SMALL_STATE(119)] = 1823,
  [SMALL_STATE(120)] = 1830,
  [SMALL_STATE(121)] = 1837,
  [SMALL_STATE(122)] = 1844,
  [SMALL_STATE(123)] = 1849,
  [SMALL_STATE(124)] = 1856,
  [SMALL_STATE(125)] = 1861,
  [SMALL_STATE(126)] = 1866,
  [SMALL_STATE(127)] = 1873,
  [SMALL_STATE(128)] = 1878,
  [SMALL_STATE(129)] = 1882,
  [SMALL_STATE(130)] = 1886,
  [SMALL_STATE(131)] = 1890,
  [SMALL_STATE(132)] = 1894,
  [SMALL_STATE(133)] = 1898,
  [SMALL_STATE(134)] = 1902,
  [SMALL_STATE(135)] = 1906,
  [SMALL_STATE(136)] = 1910,
  [SMALL_STATE(137)] = 1914,
  [SMALL_STATE(138)] = 1918,
  [SMALL_STATE(139)] = 1922,
  [SMALL_STATE(140)] = 1926,
  [SMALL_STATE(141)] = 1930,
  [SMALL_STATE(142)] = 1934,
  [SMALL_STATE(143)] = 1938,
  [SMALL_STATE(144)] = 1942,
  [SMALL_STATE(145)] = 1946,
  [SMALL_STATE(146)] = 1950,
  [SMALL_STATE(147)] = 1954,
  [SMALL_STATE(148)] = 1958,
  [SMALL_STATE(149)] = 1962,
  [SMALL_STATE(150)] = 1966,
  [SMALL_STATE(151)] = 1970,
  [SMALL_STATE(152)] = 1974,
  [SMALL_STATE(153)] = 1978,
  [SMALL_STATE(154)] = 1982,
  [SMALL_STATE(155)] = 1986,
  [SMALL_STATE(156)] = 1990,
  [SMALL_STATE(157)] = 1994,
  [SMALL_STATE(158)] = 1998,
  [SMALL_STATE(159)] = 2002,
  [SMALL_STATE(160)] = 2006,
  [SMALL_STATE(161)] = 2010,
  [SMALL_STATE(162)] = 2014,
  [SMALL_STATE(163)] = 2018,
  [SMALL_STATE(164)] = 2022,
  [SMALL_STATE(165)] = 2026,
  [SMALL_STATE(166)] = 2030,
  [SMALL_STATE(167)] = 2034,
  [SMALL_STATE(168)] = 2038,
  [SMALL_STATE(169)] = 2042,
  [SMALL_STATE(170)] = 2046,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(152),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(133),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(138),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(115),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(136),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(104),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 3, .production_id = 10),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 3, .production_id = 10),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__column_reference, 5, .production_id = 14),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__column_reference, 5, .production_id = 14),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_text, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string, 5),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, .production_id = 7),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, .production_id = 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 5, .production_id = 7),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 5, .production_id = 7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_to_many, 3, .production_id = 11),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_to_many, 3, .production_id = 11),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_to_many, 3, .production_id = 11),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_to_many, 3, .production_id = 11),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_many_to_one, 3, .production_id = 11),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_many_to_one, 3, .production_id = 11),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_one_to_one, 3, .production_id = 11),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_one_to_one, 3, .production_id = 11),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 6),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 6),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 5, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 5, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 5, .production_id = 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 5, .production_id = 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 6, .production_id = 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 6, .production_id = 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 5),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 5),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 5, .production_id = 4),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 5, .production_id = 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, .production_id = 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 7, .production_id = 2),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 7, .production_id = 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 4, .production_id = 4),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 4, .production_id = 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, .production_id = 5),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 5, .production_id = 5),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(38),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(95),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(157),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_project_repeat1, 2),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_project_repeat1, 2), SHIFT_REPEAT(95),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 2, .production_id = 8),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 2, .production_id = 8),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 3, .production_id = 12),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3, .production_id = 12),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2), SHIFT_REPEAT(69),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column, 3, .production_id = 8),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column, 3, .production_id = 8),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 3),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 3),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 4),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 4),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_column_settings, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_settings, 2),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2), SHIFT_REPEAT(11),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_settings_repeat1, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2, .production_id = 9),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variant_notes_repeat1, 2), SHIFT_REPEAT(64),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variant_notes_repeat1, 2),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 4),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variant_notes, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2), SHIFT_REPEAT(126),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_settings_repeat1, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_many, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__inline_reference, 3),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_many, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_one_to_one, 2),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unary_setting, 1, .production_id = 13),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_many_to_one, 2),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__table_alias, 2, .production_id = 3),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_setting, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 4, .production_id = 9),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 4),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [439] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 3, .production_id = 9),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_settings, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
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
