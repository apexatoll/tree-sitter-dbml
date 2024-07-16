#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 32
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 4
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

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
  anon_sym_tablegroup = 13,
  anon_sym_TableGroup = 14,
  sym_document = 15,
  sym__definition = 16,
  sym_project = 17,
  sym_table = 18,
  sym_enum = 19,
  sym_reference = 20,
  sym__short_reference = 21,
  sym__long_reference = 22,
  sym_table_group = 23,
  aux_sym_document_repeat1 = 24,
  alias_sym_enum_name = 25,
  alias_sym_project_name = 26,
  alias_sym_table_group_name = 27,
  alias_sym_table_name = 28,
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
  [anon_sym_tablegroup] = "tablegroup",
  [anon_sym_TableGroup] = "TableGroup",
  [sym_document] = "document",
  [sym__definition] = "_definition",
  [sym_project] = "project",
  [sym_table] = "table",
  [sym_enum] = "enum",
  [sym_reference] = "reference",
  [sym__short_reference] = "_short_reference",
  [sym__long_reference] = "_long_reference",
  [sym_table_group] = "table_group",
  [aux_sym_document_repeat1] = "document_repeat1",
  [alias_sym_enum_name] = "enum_name",
  [alias_sym_project_name] = "project_name",
  [alias_sym_table_group_name] = "table_group_name",
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
  [anon_sym_tablegroup] = anon_sym_tablegroup,
  [anon_sym_TableGroup] = anon_sym_TableGroup,
  [sym_document] = sym_document,
  [sym__definition] = sym__definition,
  [sym_project] = sym_project,
  [sym_table] = sym_table,
  [sym_enum] = sym_enum,
  [sym_reference] = sym_reference,
  [sym__short_reference] = sym__short_reference,
  [sym__long_reference] = sym__long_reference,
  [sym_table_group] = sym_table_group,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [alias_sym_enum_name] = alias_sym_enum_name,
  [alias_sym_project_name] = alias_sym_project_name,
  [alias_sym_table_group_name] = alias_sym_table_group_name,
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
  [anon_sym_tablegroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TableGroup] = {
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
  [sym_table_group] = {
    .visible = true,
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
    [1] = alias_sym_enum_name,
  },
  [4] = {
    [1] = alias_sym_table_group_name,
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
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == 'P') ADVANCE(30);
      if (lookahead == 'R') ADVANCE(8);
      if (lookahead == 'T') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(12);
      if (lookahead == 't') ADVANCE(3);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(52);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
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
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(51);
      END_STATE();
    case 15:
      if (lookahead == 'f') ADVANCE(50);
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
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 38:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(32);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(31);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_TableGroup);
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
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
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
    [anon_sym_tablegroup] = ACTIONS(1),
    [anon_sym_TableGroup] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(23),
    [sym__definition] = STATE(2),
    [sym_project] = STATE(2),
    [sym_table] = STATE(2),
    [sym_enum] = STATE(2),
    [sym_reference] = STATE(2),
    [sym__short_reference] = STATE(7),
    [sym__long_reference] = STATE(7),
    [sym_table_group] = STATE(2),
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
    [anon_sym_tablegroup] = ACTIONS(13),
    [anon_sym_TableGroup] = ACTIONS(13),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(7),
    [sym__long_reference] = STATE(7),
    [sym_table_group] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_project] = ACTIONS(5),
    [anon_sym_Project] = ACTIONS(5),
    [anon_sym_table] = ACTIONS(7),
    [anon_sym_Table] = ACTIONS(7),
    [anon_sym_enum] = ACTIONS(9),
    [anon_sym_Enum] = ACTIONS(9),
    [anon_sym_ref] = ACTIONS(11),
    [anon_sym_Ref] = ACTIONS(11),
    [anon_sym_tablegroup] = ACTIONS(13),
    [anon_sym_TableGroup] = ACTIONS(13),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(7),
    [sym__long_reference] = STATE(7),
    [sym_table_group] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_project] = ACTIONS(19),
    [anon_sym_Project] = ACTIONS(19),
    [anon_sym_table] = ACTIONS(22),
    [anon_sym_Table] = ACTIONS(22),
    [anon_sym_enum] = ACTIONS(25),
    [anon_sym_Enum] = ACTIONS(25),
    [anon_sym_ref] = ACTIONS(28),
    [anon_sym_Ref] = ACTIONS(28),
    [anon_sym_tablegroup] = ACTIONS(31),
    [anon_sym_TableGroup] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(36), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(34), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
  [16] = 2,
    ACTIONS(40), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(38), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
  [32] = 2,
    ACTIONS(44), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(42), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
  [48] = 2,
    ACTIONS(48), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(46), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
  [64] = 2,
    ACTIONS(52), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(50), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
  [80] = 2,
    ACTIONS(56), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(54), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
  [96] = 2,
    ACTIONS(60), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(58), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
  [112] = 2,
    ACTIONS(64), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(62), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
  [128] = 2,
    ACTIONS(68), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
  [144] = 2,
    ACTIONS(72), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(70), 9,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
  [160] = 3,
    ACTIONS(74), 1,
      sym__identifier,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    ACTIONS(78), 1,
      anon_sym_COLON,
  [170] = 2,
    ACTIONS(80), 1,
      sym__identifier,
    ACTIONS(82), 1,
      anon_sym_LBRACE,
  [177] = 2,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    ACTIONS(86), 1,
      anon_sym_COLON,
  [184] = 1,
    ACTIONS(88), 1,
      anon_sym_LBRACE,
  [188] = 1,
    ACTIONS(90), 1,
      sym__identifier,
  [192] = 1,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
  [196] = 1,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
  [200] = 1,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
  [204] = 1,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
  [208] = 1,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
  [212] = 1,
    ACTIONS(102), 1,
      sym__identifier,
  [216] = 1,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
  [220] = 1,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
  [224] = 1,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
  [228] = 1,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
  [232] = 1,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
  [236] = 1,
    ACTIONS(114), 1,
      sym__identifier,
  [240] = 1,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 16,
  [SMALL_STATE(6)] = 32,
  [SMALL_STATE(7)] = 48,
  [SMALL_STATE(8)] = 64,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 96,
  [SMALL_STATE(11)] = 112,
  [SMALL_STATE(12)] = 128,
  [SMALL_STATE(13)] = 144,
  [SMALL_STATE(14)] = 160,
  [SMALL_STATE(15)] = 170,
  [SMALL_STATE(16)] = 177,
  [SMALL_STATE(17)] = 184,
  [SMALL_STATE(18)] = 188,
  [SMALL_STATE(19)] = 192,
  [SMALL_STATE(20)] = 196,
  [SMALL_STATE(21)] = 200,
  [SMALL_STATE(22)] = 204,
  [SMALL_STATE(23)] = 208,
  [SMALL_STATE(24)] = 212,
  [SMALL_STATE(25)] = 216,
  [SMALL_STATE(26)] = 220,
  [SMALL_STATE(27)] = 224,
  [SMALL_STATE(28)] = 228,
  [SMALL_STATE(29)] = 232,
  [SMALL_STATE(30)] = 236,
  [SMALL_STATE(31)] = 240,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(18),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(24),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 3),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 3),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [100] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
