module.exports = grammar({
  name: "dbml",

  rules: {
    document: $ => repeat($._definition),

    _identifier: $ => /\w+/,

    _definition: $ => choice(
      $.project,
      $.table,
      $.enum,
      // $.reference,
      // $.table_group,
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

    // reference: $ => seq(

    // ),

    // table_group: $ => seq(

    // ),

    // comment: $ => seq(

    // ),

    // note: $ => seq(

    // ),
  }
})
