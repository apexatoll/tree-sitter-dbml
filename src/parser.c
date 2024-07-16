#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 3
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  sym__identifier = 1,
  anon_sym_project = 2,
  anon_sym_Project = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_table = 6,
  anon_sym_Table = 7,
  anon_sym_enum = 8,
  anon_sym_Enum = 9,
  anon_sym_ref = 10,
  anon_sym_Ref = 11,
  anon_sym_COLON = 12,
  sym_document = 13,
  sym__definition = 14,
  sym_project = 15,
  sym_table = 16,
  sym_enum = 17,
  sym_reference = 18,
  sym__short_reference = 19,
  sym__long_reference = 20,
  aux_sym_document_repeat1 = 21,
  alias_sym_enum_name = 22,
  alias_sym_project_name = 23,
  alias_sym_table_name = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "reference_name",
  [anon_sym_project] = "project",
  [anon_sym_Project] = "Project",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_table] = "table",
  [anon_sym_Table] = "Table",
  [anon_sym_enum] = "enum",
  [anon_sym_Enum] = "Enum",
  [anon_sym_ref] = "ref",
  [anon_sym_Ref] = "Ref",
  [anon_sym_COLON] = ":",
  [sym_document] = "document",
  [sym__definition] = "_definition",
  [sym_project] = "project",
  [sym_table] = "table",
  [sym_enum] = "enum",
  [sym_reference] = "reference",
  [sym__short_reference] = "_short_reference",
  [sym__long_reference] = "_long_reference",
  [aux_sym_document_repeat1] = "document_repeat1",
  [alias_sym_enum_name] = "enum_name",
  [alias_sym_project_name] = "project_name",
  [alias_sym_table_name] = "table_name",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__identifier] = sym__identifier,
  [anon_sym_project] = anon_sym_project,
  [anon_sym_Project] = anon_sym_Project,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_table] = anon_sym_table,
  [anon_sym_Table] = anon_sym_Table,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_Enum] = anon_sym_Enum,
  [anon_sym_ref] = anon_sym_ref,
  [anon_sym_Ref] = anon_sym_Ref,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_document] = sym_document,
  [sym__definition] = sym__definition,
  [sym_project] = sym_project,
  [sym_table] = sym_table,
  [sym_enum] = sym_enum,
  [sym_reference] = sym_reference,
  [sym__short_reference] = sym__short_reference,
  [sym__long_reference] = sym__long_reference,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [alias_sym_enum_name] = alias_sym_enum_name,
  [alias_sym_project_name] = alias_sym_project_name,
  [alias_sym_table_name] = alias_sym_table_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__identifier] = {
    .visible = true,
    .named = true,
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
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_document] = {
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
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
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
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_enum_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_project_name] = {
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
    [1] = alias_sym_enum_name,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(32);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(26);
      if (lookahead == 'R') ADVANCE(8);
      if (lookahead == 'T') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '}') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'b') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(19);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 16:
      if (lookahead == 'j') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 'j') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 26:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_table);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_Table);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COLON);
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
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_project] = ACTIONS(1),
    [anon_sym_Project] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_table] = ACTIONS(1),
    [anon_sym_Table] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_Enum] = ACTIONS(1),
    [anon_sym_ref] = ACTIONS(1),
    [anon_sym_Ref] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(14),
    [sym__definition] = STATE(2),
    [sym_project] = STATE(2),
    [sym_table] = STATE(2),
    [sym_enum] = STATE(2),
    [sym_reference] = STATE(2),
    [sym__short_reference] = STATE(8),
    [sym__long_reference] = STATE(8),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_project] = ACTIONS(5),
    [anon_sym_Project] = ACTIONS(5),
    [anon_sym_table] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(9),
    [anon_sym_Enum] = ACTIONS(9),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_Ref] = ACTIONS(11),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(8),
    [sym__long_reference] = STATE(8),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [anon_sym_project] = ACTIONS(5),
    [anon_sym_Project] = ACTIONS(5),
    [anon_sym_table] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(9),
    [anon_sym_Enum] = ACTIONS(9),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_Ref] = ACTIONS(11),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(8),
    [sym__long_reference] = STATE(8),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_project] = ACTIONS(17),
    [anon_sym_Project] = ACTIONS(17),
    [anon_sym_table] = ACTIONS(20),
    [anon_sym_Table] = ACTIONS(20),
    [anon_sym_enum] = ACTIONS(23),
    [anon_sym_Enum] = ACTIONS(23),
    [anon_sym_ref] = ACTIONS(26),
    [anon_sym_Ref] = ACTIONS(26),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(29), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_table,
      anon_sym_Table,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
  [12] = 1,
    ACTIONS(31), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_table,
      anon_sym_Table,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
  [24] = 1,
    ACTIONS(33), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_table,
      anon_sym_Table,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
  [36] = 1,
    ACTIONS(35), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_table,
      anon_sym_Table,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
  [48] = 1,
    ACTIONS(37), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_table,
      anon_sym_Table,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
  [60] = 1,
    ACTIONS(39), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_table,
      anon_sym_Table,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
  [72] = 1,
    ACTIONS(41), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_table,
      anon_sym_Table,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
  [84] = 1,
    ACTIONS(43), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_table,
      anon_sym_Table,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
  [96] = 3,
    ACTIONS(45), 1,
      sym__identifier,
    ACTIONS(47), 1,
      anon_sym_LBRACE,
    ACTIONS(49), 1,
      anon_sym_COLON,
  [106] = 2,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    ACTIONS(53), 1,
      anon_sym_COLON,
  [113] = 1,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
  [117] = 1,
    ACTIONS(57), 1,
      sym__identifier,
  [121] = 1,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
  [125] = 1,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
  [129] = 1,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
  [133] = 1,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
  [137] = 1,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
  [141] = 1,
    ACTIONS(69), 1,
      anon_sym_LBRACE,
  [145] = 1,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
  [149] = 1,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
  [153] = 1,
    ACTIONS(75), 1,
      sym__identifier,
  [157] = 1,
    ACTIONS(77), 1,
      sym__identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 12,
  [SMALL_STATE(6)] = 24,
  [SMALL_STATE(7)] = 36,
  [SMALL_STATE(8)] = 48,
  [SMALL_STATE(9)] = 60,
  [SMALL_STATE(10)] = 72,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 96,
  [SMALL_STATE(13)] = 106,
  [SMALL_STATE(14)] = 113,
  [SMALL_STATE(15)] = 117,
  [SMALL_STATE(16)] = 121,
  [SMALL_STATE(17)] = 125,
  [SMALL_STATE(18)] = 129,
  [SMALL_STATE(19)] = 133,
  [SMALL_STATE(20)] = 137,
  [SMALL_STATE(21)] = 141,
  [SMALL_STATE(22)] = 145,
  [SMALL_STATE(23)] = 149,
  [SMALL_STATE(24)] = 153,
  [SMALL_STATE(25)] = 157,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(25),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, .production_id = 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [55] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
