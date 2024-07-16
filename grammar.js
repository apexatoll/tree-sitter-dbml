module.exports = grammar({
  name: "dbml",

  rules: {
    document: $ => repeat($._definition),

    _identifier: $ => /\w+/,

    _definition: $ => choice(
      $.project,
      $.table,
      $.enum,
      $.reference,
      $.table_group,
      // $.comment,
      // $.note,
    ),

    project: $ => seq(
      choice("project", "Project"),
      alias($._identifier, $.project_name),
      "{",
      // $.project_row,
      "}"
    ),

    table: $ => seq(
      choice("table", "Table"),
      alias($._identifier, $.table_name),
      "{",
      // repeat($.table_row),
      "}"
    ),

    enum: $ => seq(
      choice("enum", "Enum"),
      alias($._identifier, $.enum_name),
      "{",
      // repeat($.enum_row),
      "}"
    ),

    reference: $ => choice(
      $._short_reference,
      $._long_reference,
    ),

    _short_reference: $ => seq(
      choice("ref", "Ref"),
      optional(alias($._identifier, $.reference_name)),
      ":",
      // $.relationship
    ),

    _long_reference: $ => seq(
      choice("ref", "Ref"),
      optional(alias($._identifier, $.reference_name)),
      "{",
      // $.relationship,
      "}",
    ),

    // relationship: $ => seq(

    // ),

    table_group: $ => seq(
      choice("tablegroup", "TableGroup"),
      optional(alias($._identifier, $.table_group_name)),
      "{",
      // repeat($.table_group_row),
      "}",
    ),

    // comment: $ => seq(

    // ),

    // note: $ => seq(

    // ),
  }
})
