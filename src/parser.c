#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 5
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  sym_note_text = 16,
  anon_sym_note = 17,
  anon_sym_Note = 18,
  sym_document = 19,
  sym__definition = 20,
  sym_project = 21,
  sym_table = 22,
  sym_enum = 23,
  sym_reference = 24,
  sym__short_reference = 25,
  sym__long_reference = 26,
  sym_table_group = 27,
  sym_comment = 28,
  sym_note = 29,
  sym__short_note = 30,
  sym__long_note = 31,
  aux_sym_document_repeat1 = 32,
  alias_sym_enum_name = 33,
  alias_sym_note_name = 34,
  alias_sym_project_name = 35,
  alias_sym_table_group_name = 36,
  alias_sym_table_name = 37,
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
  [sym_note_text] = "note_text",
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
  [sym_note_text] = sym_note_text,
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
  [sym_note_text] = {
    .visible = true,
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
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(49);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == 'E') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(29);
      if (lookahead == 'P') ADVANCE(37);
      if (lookahead == 'R') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(17);
      if (lookahead == 't') ADVANCE(6);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 21:
      if (lookahead == 'j') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'j') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(39);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(38);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__inline_comment);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_note_text);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 67:
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
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 4},
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
    [sym_note_text] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_Note] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(41),
    [sym__definition] = STATE(2),
    [sym_project] = STATE(2),
    [sym_table] = STATE(2),
    [sym_enum] = STATE(2),
    [sym_reference] = STATE(2),
    [sym__short_reference] = STATE(9),
    [sym__long_reference] = STATE(9),
    [sym_table_group] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_note] = STATE(2),
    [sym__short_note] = STATE(10),
    [sym__long_note] = STATE(10),
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
    [sym__short_reference] = STATE(9),
    [sym__long_reference] = STATE(9),
    [sym_table_group] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_note] = STATE(3),
    [sym__short_note] = STATE(10),
    [sym__long_note] = STATE(10),
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
    [sym__short_reference] = STATE(9),
    [sym__long_reference] = STATE(9),
    [sym_table_group] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_note] = STATE(3),
    [sym__short_note] = STATE(10),
    [sym__long_note] = STATE(10),
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
  [0] = 3,
    ACTIONS(48), 1,
      sym_note_text,
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
  [22] = 2,
    ACTIONS(52), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(50), 12,
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
  [41] = 2,
    ACTIONS(56), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(54), 12,
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
  [60] = 2,
    ACTIONS(60), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(58), 12,
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
  [79] = 2,
    ACTIONS(64), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(62), 12,
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
  [98] = 2,
    ACTIONS(68), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(66), 12,
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
  [117] = 2,
    ACTIONS(72), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(70), 12,
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
  [136] = 2,
    ACTIONS(76), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(74), 12,
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
  [155] = 2,
    ACTIONS(80), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(78), 12,
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
  [174] = 2,
    ACTIONS(84), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(82), 12,
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
  [193] = 2,
    ACTIONS(88), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(86), 12,
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
  [212] = 2,
    ACTIONS(92), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(90), 12,
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
  [231] = 2,
    ACTIONS(96), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(94), 12,
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
  [250] = 2,
    ACTIONS(100), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(98), 12,
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
  [269] = 2,
    ACTIONS(104), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(102), 12,
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
  [288] = 2,
    ACTIONS(108), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(106), 12,
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
  [307] = 2,
    ACTIONS(112), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(110), 12,
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
  [326] = 2,
    ACTIONS(116), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(114), 12,
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
  [345] = 3,
    ACTIONS(118), 1,
      sym__identifier,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    ACTIONS(122), 1,
      anon_sym_COLON,
  [355] = 3,
    ACTIONS(124), 1,
      sym__identifier,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      anon_sym_COLON,
  [365] = 2,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    ACTIONS(132), 1,
      sym_note_text,
  [372] = 2,
    ACTIONS(134), 1,
      anon_sym_RBRACE,
    ACTIONS(136), 1,
      sym_note_text,
  [379] = 2,
    ACTIONS(138), 1,
      sym__identifier,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
  [386] = 2,
    ACTIONS(142), 1,
      anon_sym_LBRACE,
    ACTIONS(144), 1,
      anon_sym_COLON,
  [393] = 1,
    ACTIONS(146), 1,
      anon_sym_RBRACE,
  [397] = 1,
    ACTIONS(148), 1,
      anon_sym_RBRACE,
  [401] = 1,
    ACTIONS(150), 1,
      sym__identifier,
  [405] = 1,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
  [409] = 1,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
  [413] = 1,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
  [417] = 1,
    ACTIONS(158), 1,
      anon_sym_LBRACE,
  [421] = 1,
    ACTIONS(160), 1,
      anon_sym_RBRACE,
  [425] = 1,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
  [429] = 1,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
  [433] = 1,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
  [437] = 1,
    ACTIONS(168), 1,
      anon_sym_LBRACE,
  [441] = 1,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
  [445] = 1,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
  [449] = 1,
    ACTIONS(174), 1,
      anon_sym_RBRACE,
  [453] = 1,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
  [457] = 1,
    ACTIONS(178), 1,
      sym__identifier,
  [461] = 1,
    ACTIONS(180), 1,
      sym__identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 22,
  [SMALL_STATE(6)] = 41,
  [SMALL_STATE(7)] = 60,
  [SMALL_STATE(8)] = 79,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 117,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 155,
  [SMALL_STATE(13)] = 174,
  [SMALL_STATE(14)] = 193,
  [SMALL_STATE(15)] = 212,
  [SMALL_STATE(16)] = 231,
  [SMALL_STATE(17)] = 250,
  [SMALL_STATE(18)] = 269,
  [SMALL_STATE(19)] = 288,
  [SMALL_STATE(20)] = 307,
  [SMALL_STATE(21)] = 326,
  [SMALL_STATE(22)] = 345,
  [SMALL_STATE(23)] = 355,
  [SMALL_STATE(24)] = 365,
  [SMALL_STATE(25)] = 372,
  [SMALL_STATE(26)] = 379,
  [SMALL_STATE(27)] = 386,
  [SMALL_STATE(28)] = 393,
  [SMALL_STATE(29)] = 397,
  [SMALL_STATE(30)] = 401,
  [SMALL_STATE(31)] = 405,
  [SMALL_STATE(32)] = 409,
  [SMALL_STATE(33)] = 413,
  [SMALL_STATE(34)] = 417,
  [SMALL_STATE(35)] = 421,
  [SMALL_STATE(36)] = 425,
  [SMALL_STATE(37)] = 429,
  [SMALL_STATE(38)] = 433,
  [SMALL_STATE(39)] = 437,
  [SMALL_STATE(40)] = 441,
  [SMALL_STATE(41)] = 445,
  [SMALL_STATE(42)] = 449,
  [SMALL_STATE(43)] = 453,
  [SMALL_STATE(44)] = 457,
  [SMALL_STATE(45)] = 461,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(30),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(45),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(44),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(22),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(23),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 3),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 3),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 5, .production_id = 5),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 5, .production_id = 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [172] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
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
