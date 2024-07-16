#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 41
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 5
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

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
  sym__inline_comment = 15,
  anon_sym_note = 16,
  anon_sym_Note = 17,
  sym_document = 18,
  sym__definition = 19,
  sym_project = 20,
  sym_table = 21,
  sym_enum = 22,
  sym_reference = 23,
  sym__short_reference = 24,
  sym__long_reference = 25,
  sym_table_group = 26,
  sym_comment = 27,
  sym_note = 28,
  sym__short_note = 29,
  sym__long_note = 30,
  aux_sym_document_repeat1 = 31,
  alias_sym_enum_name = 32,
  alias_sym_note_name = 33,
  alias_sym_project_name = 34,
  alias_sym_table_group_name = 35,
  alias_sym_table_name = 36,
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
  [sym__inline_comment] = "_inline_comment",
  [anon_sym_note] = "note",
  [anon_sym_Note] = "Note",
  [sym_document] = "document",
  [sym__definition] = "_definition",
  [sym_project] = "project",
  [sym_table] = "table",
  [sym_enum] = "enum",
  [sym_reference] = "reference",
  [sym__short_reference] = "_short_reference",
  [sym__long_reference] = "_long_reference",
  [sym_table_group] = "table_group",
  [sym_comment] = "comment",
  [sym_note] = "note",
  [sym__short_note] = "_short_note",
  [sym__long_note] = "_long_note",
  [aux_sym_document_repeat1] = "document_repeat1",
  [alias_sym_enum_name] = "enum_name",
  [alias_sym_note_name] = "note_name",
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
  [sym__inline_comment] = sym__inline_comment,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_Note] = anon_sym_Note,
  [sym_document] = sym_document,
  [sym__definition] = sym__definition,
  [sym_project] = sym_project,
  [sym_table] = sym_table,
  [sym_enum] = sym_enum,
  [sym_reference] = sym_reference,
  [sym__short_reference] = sym__short_reference,
  [sym__long_reference] = sym__long_reference,
  [sym_table_group] = sym_table_group,
  [sym_comment] = sym_comment,
  [sym_note] = sym_note,
  [sym__short_note] = sym__short_note,
  [sym__long_note] = sym__long_note,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [alias_sym_enum_name] = alias_sym_enum_name,
  [alias_sym_note_name] = alias_sym_note_name,
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
  [sym__inline_comment] = {
    .visible = false,
    .named = true,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
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
  [alias_sym_enum_name] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_note_name] = {
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
  [5] = {
    [1] = alias_sym_note_name,
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
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == 'E') ADVANCE(26);
      if (lookahead == 'N') ADVANCE(28);
      if (lookahead == 'P') ADVANCE(36);
      if (lookahead == 'R') ADVANCE(10);
      if (lookahead == 'T') ADVANCE(4);
      if (lookahead == 'e') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 'p') ADVANCE(39);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '}') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(60);
      if (lookahead == '{') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(58);
      END_STATE();
    case 20:
      if (lookahead == 'j') ADVANCE(13);
      END_STATE();
    case 21:
      if (lookahead == 'j') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(37);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__inline_comment);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Note);
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
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
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
    [sym__inline_comment] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_Note] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(29),
    [sym__definition] = STATE(2),
    [sym_project] = STATE(2),
    [sym_table] = STATE(2),
    [sym_enum] = STATE(2),
    [sym_reference] = STATE(2),
    [sym__short_reference] = STATE(8),
    [sym__long_reference] = STATE(8),
    [sym_table_group] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_note] = STATE(2),
    [sym__short_note] = STATE(9),
    [sym__long_note] = STATE(9),
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
    [sym__inline_comment] = ACTIONS(15),
    [anon_sym_note] = ACTIONS(17),
    [anon_sym_Note] = ACTIONS(17),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(8),
    [sym__long_reference] = STATE(8),
    [sym_table_group] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_note] = STATE(3),
    [sym__short_note] = STATE(9),
    [sym__long_note] = STATE(9),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
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
    [sym__inline_comment] = ACTIONS(15),
    [anon_sym_note] = ACTIONS(17),
    [anon_sym_Note] = ACTIONS(17),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(8),
    [sym__long_reference] = STATE(8),
    [sym_table_group] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_note] = STATE(3),
    [sym__short_note] = STATE(9),
    [sym__long_note] = STATE(9),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_project] = ACTIONS(23),
    [anon_sym_Project] = ACTIONS(23),
    [anon_sym_table] = ACTIONS(26),
    [anon_sym_Table] = ACTIONS(26),
    [anon_sym_enum] = ACTIONS(29),
    [anon_sym_Enum] = ACTIONS(29),
    [anon_sym_ref] = ACTIONS(32),
    [anon_sym_Ref] = ACTIONS(32),
    [anon_sym_tablegroup] = ACTIONS(35),
    [anon_sym_TableGroup] = ACTIONS(35),
    [sym__inline_comment] = ACTIONS(38),
    [anon_sym_note] = ACTIONS(41),
    [anon_sym_Note] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(46), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(44), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [19] = 2,
    ACTIONS(50), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(48), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [38] = 2,
    ACTIONS(54), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(52), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [57] = 2,
    ACTIONS(58), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(56), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [76] = 2,
    ACTIONS(62), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(60), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [95] = 2,
    ACTIONS(66), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(64), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [114] = 2,
    ACTIONS(70), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(68), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [133] = 2,
    ACTIONS(74), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(72), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [152] = 2,
    ACTIONS(78), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(76), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [171] = 2,
    ACTIONS(82), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(80), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [190] = 2,
    ACTIONS(86), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(84), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [209] = 2,
    ACTIONS(90), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(88), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [228] = 2,
    ACTIONS(94), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(92), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [247] = 2,
    ACTIONS(98), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(96), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [266] = 2,
    ACTIONS(102), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(100), 12,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [285] = 3,
    ACTIONS(104), 1,
      sym__identifier,
    ACTIONS(106), 1,
      anon_sym_LBRACE,
    ACTIONS(108), 1,
      anon_sym_COLON,
  [295] = 3,
    ACTIONS(110), 1,
      sym__identifier,
    ACTIONS(112), 1,
      anon_sym_LBRACE,
    ACTIONS(114), 1,
      anon_sym_COLON,
  [305] = 2,
    ACTIONS(116), 1,
      sym__identifier,
    ACTIONS(118), 1,
      anon_sym_LBRACE,
  [312] = 2,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_COLON,
  [319] = 1,
    ACTIONS(124), 1,
      anon_sym_LBRACE,
  [323] = 1,
    ACTIONS(126), 1,
      anon_sym_RBRACE,
  [327] = 1,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
  [331] = 1,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
  [335] = 1,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
  [339] = 1,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
  [343] = 1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
  [347] = 1,
    ACTIONS(138), 1,
      sym__identifier,
  [351] = 1,
    ACTIONS(140), 1,
      sym__identifier,
  [355] = 1,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
  [359] = 1,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
  [363] = 1,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
  [367] = 1,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
  [371] = 1,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
  [375] = 1,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
  [379] = 1,
    ACTIONS(154), 1,
      sym__identifier,
  [383] = 1,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
  [387] = 1,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 19,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 57,
  [SMALL_STATE(8)] = 76,
  [SMALL_STATE(9)] = 95,
  [SMALL_STATE(10)] = 114,
  [SMALL_STATE(11)] = 133,
  [SMALL_STATE(12)] = 152,
  [SMALL_STATE(13)] = 171,
  [SMALL_STATE(14)] = 190,
  [SMALL_STATE(15)] = 209,
  [SMALL_STATE(16)] = 228,
  [SMALL_STATE(17)] = 247,
  [SMALL_STATE(18)] = 266,
  [SMALL_STATE(19)] = 285,
  [SMALL_STATE(20)] = 295,
  [SMALL_STATE(21)] = 305,
  [SMALL_STATE(22)] = 312,
  [SMALL_STATE(23)] = 319,
  [SMALL_STATE(24)] = 323,
  [SMALL_STATE(25)] = 327,
  [SMALL_STATE(26)] = 331,
  [SMALL_STATE(27)] = 335,
  [SMALL_STATE(28)] = 339,
  [SMALL_STATE(29)] = 343,
  [SMALL_STATE(30)] = 347,
  [SMALL_STATE(31)] = 351,
  [SMALL_STATE(32)] = 355,
  [SMALL_STATE(33)] = 359,
  [SMALL_STATE(34)] = 363,
  [SMALL_STATE(35)] = 367,
  [SMALL_STATE(36)] = 371,
  [SMALL_STATE(37)] = 375,
  [SMALL_STATE(38)] = 379,
  [SMALL_STATE(39)] = 383,
  [SMALL_STATE(40)] = 387,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(31),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(19),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(21),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [136] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
