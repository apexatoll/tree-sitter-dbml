module.exports = grammar({
  name: "dbml",

  rules: {
    document: $ => repeat($._definition),

    _definition: $ => choice(
      // $.project,
      // $.table,
      // $.enum,
      // $.reference,
      // $.table_group,
      // $.comment,
      // $.note,
    ),

    // project: $ => seq(

    // ),

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
