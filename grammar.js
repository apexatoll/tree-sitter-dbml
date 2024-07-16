module.exports = grammar({
  name: "dbml",

  rules: {
    document: $ => repeat($._definition),

    _identifier: $ => /\w+/,

    _definition: $ => choice(
      $.project,
      // $.table,
      // $.enum,
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

    // table: $ => seq(

    // ),

    // enum: $ => seq(

    // ),

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
