module.exports = grammar({
  name: "dbml",

  rules: {
    schema: $ => repeat($._definition),

    _identifier: _ => /[A-Za-z][A-Za-z0-9_-]+/,

    string: _ => /(".*"|'.*')/,

    expression: _ => /`.*`/,

    number: _ => /[0-9]+/,

    boolean: _ => choice("true", "false"),

    null: _ => choice("null", "nil"),

    _comment: _ => /\/\/.*\n/,

    multiline_string: _ => seq(
      "'''",
      repeat(seq(/.*/, "\n")),
      "'''",
    ),

    _multiline_comment: _ => seq(
      "/*",
      repeat(seq(/.*/, "\n")),
      "*/",
    ),

    type: _ => choice(
      "bool",
      "boolean",
      "date",
      "datetime",
      "int",
      "integer",
      "string",
      "text",
      "timestamp",
      "varchar",
    ),

    key_value: $ => seq(
      alias($._identifier, $.key),
      ":",
      $.value,
    ),

    value: $ => choice(
      $.boolean,
      $.number,
      $.null,
      $.string,
      $.expression,
      alias($._identifier, $.identifier),
    ),

    _definition: $ => choice(
      $.project,
      $.table,
      $.enum,
      $.reference,
      $.table_group,
      $.comment,
      $.note,
    ),

    project: $ => seq(
      choice("project", "Project"),
      alias($._identifier, $.project_name),
      "{",
      repeat($._project_row),
      "}"
    ),

    _project_row: $ => choice(
      $.key_value,
      $.note,
      $.comment,
    ),

    table: $ => seq(
      choice("table", "Table"),
      optional(
        seq(
          alias($._identifier, $.schema_name),
          "."
        )
      ),
      alias($._identifier, $.table_name),
      optional($._table_alias),
      optional($.table_settings),
      "{",
      repeat($._table_row),
      "}"
    ),

    _table_alias: $ => seq(
      "as",
      alias($._identifier, $.table_alias)
    ),

    table_settings: $ => seq(
      "[",
      list(
        choice(
          alias($._identifier, $.keyword),
          $.key_value
        )
      ),
      "]"
    ),

    _table_row: $ => choice(
      $.column,
      $.indexes,
      $.note,
      $.comment,
    ),

    column: $ => seq(
      alias($._identifier, $.column_name),
      choice(
        $.type,
        alias($._identifier, $.type)
      ),
      optional($.column_settings),
    ),

    column_settings: $ => seq(
      "[",
      list(
        choice(
          $._unary_column_setting,
          $._binary_column_setting,
          $.note
        )
      ),
      "]",
    ),

    _unary_column_setting: $ => choice(
      alias(
        choice("primary key", "pk"),
        $.primary_key_setting
      ),
      alias("null", $.null_setting),
      alias("not null", $.not_null_setting),
      alias("unique", $.unique_setting),
      alias("increment", $.increment_setting),
    ),

    _binary_column_setting: $ => choice(
      $.default_setting,
      $._inline_reference,
    ),

    default_setting: $ => seq(
      "default",
      ":",
      $.value
    ),

    _inline_reference: $ => seq(
      "ref",
      ":",
      choice(
        $.inline_one_to_many,
        $.inline_many_to_one,
        $.inline_one_to_one,
        $.inline_many_to_many,
      )
    ),

    indexes: $ => seq(
      choice("indexes", "Indexes"),
      "{",
      repeat($._index_row),
      "}",
    ),

    _index_row: $ => choice(
      $.index,
      $.composite_index,
      $.comment,
    ),

    index: $ => seq(
      alias($._identifier, $.column_name),
      optional($.index_settings)
    ),

    composite_index: $ => seq(
      "(",
      list1(
        choice(
          $.expression,
          alias($._identifier, $.column_name),
        )
      ),
      ")",
      optional($.index_settings),
    ),

    index_settings: $ => seq(
      "[",
      list(
        choice(
          $._unary_index_setting,
          $._binary_index_setting,
          $.note,
        )
      ),
      "]",
    ),

    _unary_index_setting: $ => choice(
      alias(
        choice("primary key", "pk"),
        $.primary_key_setting
      ),
      alias("unique", $.unique_setting),
    ),

    _binary_index_setting: $ => choice(
      $.index_name_setting,
      $.index_type_setting,
    ),

    index_name_setting: $ => seq(
      "name",
      ":",
      $.value,
    ),

    index_type_setting: $ => seq(
      "type",
      ":",
      $.value,
    ),

    enum: $ => seq(
      choice("enum", "Enum"),
      alias($._identifier, $.enum_name),
      "{",
      repeat($._enum_row),
      "}"
    ),

    _enum_row: $ => choice(
      $.variant,
      $.comment,
    ),

    variant: $ => seq(
      choice($._identifier, $.string),
      optional($.variant_notes),
    ),

    variant_notes: $ => seq(
      "[",
      list($.note),
      "]"
    ),

    reference: $ => choice(
      $._short_reference,
      $._long_reference,
    ),

    _short_reference: $ => seq(
      choice("ref", "Ref"),
      optional(alias($._identifier, $.reference_name)),
      ":",
      $._relationship
    ),

    _long_reference: $ => seq(
      choice("ref", "Ref"),
      optional(alias($._identifier, $.reference_name)),
      "{",
      $._relationship,
      "}",
    ),

    _relationship: $ => choice(
      $.one_to_many,
      $.many_to_one,
      $.one_to_one,
      $.many_to_many,
    ),

    one_to_many: $ => seq(
      alias($._column_reference, $.from_column),
      "<",
      alias($._column_reference, $.to_column),
    ),

    inline_one_to_many: $ => seq(
      "<",
      alias($._column_reference, $.to_column),
    ),

    many_to_one: $ => seq(
      alias($._column_reference, $.from_column),
      ">",
      alias($._column_reference, $.to_column),
    ),

    inline_many_to_one: $ => seq(
      ">",
      alias($._column_reference, $.to_column),
    ),

    one_to_one: $ => seq(
      alias($._column_reference, $.from_column),
      "-",
      alias($._column_reference, $.to_column),
    ),

    inline_one_to_one: $ => seq(
      "-",
      alias($._column_reference, $.to_column),
    ),

    many_to_many: $ => seq(
      alias($._column_reference, $.from_column),
      "<>",
      alias($._column_reference, $.to_column),
    ),

    inline_many_to_many: $ => seq(
      "<>",
      alias($._column_reference, $.to_column),
    ),

    _column_reference: $ => seq(
      optional(
        seq(
          alias($._identifier, $.schema_name),
          "."
        )
      ),
      alias($._identifier, $.table_name),
      ".",
      alias($._identifier, $.column_name)
    ),

    table_group: $ => seq(
      choice("tablegroup", "TableGroup"),
      optional(alias($._identifier, $.table_group_name)),
      "{",
      repeat($._table_group_row),
      "}",
    ),

    _table_group_row: $ => choice(
      alias($._identifier, $.table_name),
      $.comment,
    ),

    comment: $ => choice(
      $._comment,
      $._multiline_comment,
    ),

    note: $ => choice(
      $._short_note,
      $._long_note,
    ),

    note_text: $ => choice(
      $.string,
      $.multiline_string,
    ),

    _short_note: $ => seq(
      choice("note", "Note"),
      ":",
      optional($.note_text),
    ),

    _long_note: $ => seq(
      choice("note", "Note"),
      optional(alias($._identifier, $.note_name)),
      "{",
      optional($.note_text),
      "}",
    )
  }
})

function list(...rules) {
  return optional(list1(...rules))
}

function list1(...rules) {
  rules = choice(...rules)

  return seq(rules, repeat(seq(",", rules)))
}
