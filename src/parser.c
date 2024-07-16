#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 5
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  sym__identifier = 1,
  sym__string = 2,
  anon_sym_SQUOTE_SQUOTE_SQUOTE = 3,
  anon_sym_LF = 4,
  aux_sym__multiline_string_token1 = 5,
  anon_sym_project = 6,
  anon_sym_Project = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_table = 10,
  anon_sym_Table = 11,
  anon_sym_enum = 12,
  anon_sym_Enum = 13,
  anon_sym_ref = 14,
  anon_sym_Ref = 15,
  anon_sym_COLON = 16,
  anon_sym_tablegroup = 17,
  anon_sym_TableGroup = 18,
  sym__inline_comment = 19,
  anon_sym_note = 20,
  anon_sym_Note = 21,
  sym_document = 22,
  sym__multiline_string = 23,
  sym__definition = 24,
  sym_project = 25,
  sym_table = 26,
  sym_enum = 27,
  sym_reference = 28,
  sym__short_reference = 29,
  sym__long_reference = 30,
  sym_table_group = 31,
  sym_comment = 32,
  sym_note = 33,
  sym_note_text = 34,
  sym__short_note = 35,
  sym__long_note = 36,
  aux_sym_document_repeat1 = 37,
  alias_sym_enum_name = 38,
  alias_sym_note_name = 39,
  alias_sym_project_name = 40,
  alias_sym_table_group_name = 41,
  alias_sym_table_name = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__identifier] = "reference_name",
  [sym__string] = "_string",
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = "'''",
  [anon_sym_LF] = "\n",
  [aux_sym__multiline_string_token1] = "_multiline_string_token1",
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
  [sym__multiline_string] = "_multiline_string",
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
  [sym_note_text] = "note_text",
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
  [sym__string] = sym__string,
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym__multiline_string_token1] = aux_sym__multiline_string_token1,
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
  [sym__multiline_string] = sym__multiline_string,
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
  [sym_note_text] = sym_note_text,
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
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__multiline_string_token1] = {
    .visible = false,
    .named = false,
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
  [sym__multiline_string] = {
    .visible = false,
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
  [sym_note_text] = {
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
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == 'E') ADVANCE(30);
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(40);
      if (lookahead == 'R') ADVANCE(14);
      if (lookahead == 'T') ADVANCE(8);
      if (lookahead == 'e') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'p') ADVANCE(43);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '}') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(72);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(55);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '{') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == 'j') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'j') ADVANCE(21);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(70);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '"') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(41);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__inline_comment);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 74:
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
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 57},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 7},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__string] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE_SQUOTE] = ACTIONS(1),
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
    [sym_document] = STATE(47),
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(12),
    [sym__long_reference] = STATE(12),
    [sym_table_group] = STATE(3),
    [sym_comment] = STATE(3),
    [sym_note] = STATE(3),
    [sym__short_note] = STATE(13),
    [sym__long_note] = STATE(13),
    [aux_sym_document_repeat1] = STATE(3),
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
    [sym__definition] = STATE(2),
    [sym_project] = STATE(2),
    [sym_table] = STATE(2),
    [sym_enum] = STATE(2),
    [sym_reference] = STATE(2),
    [sym__short_reference] = STATE(12),
    [sym__long_reference] = STATE(12),
    [sym_table_group] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_note] = STATE(2),
    [sym__short_note] = STATE(13),
    [sym__long_note] = STATE(13),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_project] = ACTIONS(21),
    [anon_sym_Project] = ACTIONS(21),
    [anon_sym_table] = ACTIONS(24),
    [anon_sym_Table] = ACTIONS(24),
    [anon_sym_enum] = ACTIONS(27),
    [anon_sym_Enum] = ACTIONS(27),
    [anon_sym_ref] = ACTIONS(30),
    [anon_sym_Ref] = ACTIONS(30),
    [anon_sym_tablegroup] = ACTIONS(33),
    [anon_sym_TableGroup] = ACTIONS(33),
    [sym__inline_comment] = ACTIONS(36),
    [anon_sym_note] = ACTIONS(39),
    [anon_sym_Note] = ACTIONS(39),
  },
  [3] = {
    [sym__definition] = STATE(2),
    [sym_project] = STATE(2),
    [sym_table] = STATE(2),
    [sym_enum] = STATE(2),
    [sym_reference] = STATE(2),
    [sym__short_reference] = STATE(12),
    [sym__long_reference] = STATE(12),
    [sym_table_group] = STATE(2),
    [sym_comment] = STATE(2),
    [sym_note] = STATE(2),
    [sym__short_note] = STATE(13),
    [sym__long_note] = STATE(13),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(42),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(46), 1,
      sym__string,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(6), 1,
      sym__multiline_string,
    STATE(21), 1,
      sym_note_text,
    ACTIONS(50), 2,
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
  [31] = 2,
    ACTIONS(54), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(52), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [51] = 2,
    ACTIONS(58), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(56), 13,
      ts_builtin_sym_end,
      anon_sym_project,
      anon_sym_Project,
      anon_sym_RBRACE,
      anon_sym_enum,
      anon_sym_Enum,
      anon_sym_ref,
      anon_sym_Ref,
      anon_sym_tablegroup,
      anon_sym_TableGroup,
      sym__inline_comment,
      anon_sym_note,
      anon_sym_Note,
  [71] = 2,
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
  [90] = 2,
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
  [109] = 2,
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
  [128] = 2,
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
  [147] = 2,
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
  [166] = 2,
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
  [185] = 2,
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
  [204] = 2,
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
  [223] = 2,
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
  [242] = 2,
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
  [261] = 2,
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
  [280] = 2,
    ACTIONS(106), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(104), 12,
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
  [299] = 2,
    ACTIONS(110), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(108), 12,
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
  [318] = 2,
    ACTIONS(114), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(112), 12,
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
  [337] = 2,
    ACTIONS(118), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(116), 12,
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
  [356] = 2,
    ACTIONS(122), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(120), 12,
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
  [375] = 2,
    ACTIONS(126), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(124), 12,
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
  [394] = 5,
    ACTIONS(46), 1,
      sym__string,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__multiline_string,
    STATE(37), 1,
      sym_note_text,
  [410] = 5,
    ACTIONS(46), 1,
      sym__string,
    ACTIONS(48), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(130), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__multiline_string,
    STATE(45), 1,
      sym_note_text,
  [426] = 3,
    ACTIONS(132), 1,
      sym__identifier,
    ACTIONS(134), 1,
      anon_sym_LBRACE,
    ACTIONS(136), 1,
      anon_sym_COLON,
  [436] = 3,
    ACTIONS(138), 1,
      sym__identifier,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
    ACTIONS(142), 1,
      anon_sym_COLON,
  [446] = 2,
    ACTIONS(144), 1,
      sym__identifier,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
  [453] = 2,
    ACTIONS(148), 1,
      anon_sym_LBRACE,
    ACTIONS(150), 1,
      anon_sym_COLON,
  [460] = 1,
    ACTIONS(152), 1,
      anon_sym_LBRACE,
  [464] = 1,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
  [468] = 1,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
  [472] = 1,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
  [476] = 1,
    ACTIONS(160), 1,
      sym__identifier,
  [480] = 1,
    ACTIONS(162), 1,
      anon_sym_LF,
  [484] = 1,
    ACTIONS(164), 1,
      anon_sym_RBRACE,
  [488] = 1,
    ACTIONS(166), 1,
      anon_sym_RBRACE,
  [492] = 1,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
  [496] = 1,
    ACTIONS(170), 1,
      anon_sym_LBRACE,
  [500] = 1,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
  [504] = 1,
    ACTIONS(174), 1,
      anon_sym_LBRACE,
  [508] = 1,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
  [512] = 1,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
  [516] = 1,
    ACTIONS(180), 1,
      anon_sym_LBRACE,
  [520] = 1,
    ACTIONS(182), 1,
      anon_sym_RBRACE,
  [524] = 1,
    ACTIONS(184), 1,
      aux_sym__multiline_string_token1,
  [528] = 1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
  [532] = 1,
    ACTIONS(188), 1,
      sym__identifier,
  [536] = 1,
    ACTIONS(190), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [540] = 1,
    ACTIONS(192), 1,
      anon_sym_LF,
  [544] = 1,
    ACTIONS(194), 1,
      sym__identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 31,
  [SMALL_STATE(6)] = 51,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 90,
  [SMALL_STATE(9)] = 109,
  [SMALL_STATE(10)] = 128,
  [SMALL_STATE(11)] = 147,
  [SMALL_STATE(12)] = 166,
  [SMALL_STATE(13)] = 185,
  [SMALL_STATE(14)] = 204,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 261,
  [SMALL_STATE(18)] = 280,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 318,
  [SMALL_STATE(21)] = 337,
  [SMALL_STATE(22)] = 356,
  [SMALL_STATE(23)] = 375,
  [SMALL_STATE(24)] = 394,
  [SMALL_STATE(25)] = 410,
  [SMALL_STATE(26)] = 426,
  [SMALL_STATE(27)] = 436,
  [SMALL_STATE(28)] = 446,
  [SMALL_STATE(29)] = 453,
  [SMALL_STATE(30)] = 460,
  [SMALL_STATE(31)] = 464,
  [SMALL_STATE(32)] = 468,
  [SMALL_STATE(33)] = 472,
  [SMALL_STATE(34)] = 476,
  [SMALL_STATE(35)] = 480,
  [SMALL_STATE(36)] = 484,
  [SMALL_STATE(37)] = 488,
  [SMALL_STATE(38)] = 492,
  [SMALL_STATE(39)] = 496,
  [SMALL_STATE(40)] = 500,
  [SMALL_STATE(41)] = 504,
  [SMALL_STATE(42)] = 508,
  [SMALL_STATE(43)] = 512,
  [SMALL_STATE(44)] = 516,
  [SMALL_STATE(45)] = 520,
  [SMALL_STATE(46)] = 524,
  [SMALL_STATE(47)] = 528,
  [SMALL_STATE(48)] = 532,
  [SMALL_STATE(49)] = 536,
  [SMALL_STATE(50)] = 540,
  [SMALL_STATE(51)] = 544,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(34),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(51),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(48),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(26),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(9),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string, 5),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string, 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_text, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 5, .production_id = 5),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 5, .production_id = 5),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [186] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
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
