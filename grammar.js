module.exports = grammar({
  name: "dbml",

  rules: {
    document: $ => optional(/\w+/)
  }
})
