#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 5
#define TOKEN_COUNT 24
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
  anon_sym_SLASH_STAR = 20,
  anon_sym_STAR_SLASH = 21,
  anon_sym_note = 22,
  anon_sym_Note = 23,
  sym_document = 24,
  sym__multiline_string = 25,
  sym__definition = 26,
  sym_project = 27,
  sym_table = 28,
  sym_enum = 29,
  sym_reference = 30,
  sym__short_reference = 31,
  sym__long_reference = 32,
  sym_table_group = 33,
  sym_comment = 34,
  sym__multiline_comment = 35,
  sym_note = 36,
  sym_note_text = 37,
  sym__short_note = 38,
  sym__long_note = 39,
  aux_sym_document_repeat1 = 40,
  alias_sym_enum_name = 41,
  alias_sym_note_name = 42,
  alias_sym_project_name = 43,
  alias_sym_table_group_name = 44,
  alias_sym_table_name = 45,
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
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
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
  [sym__multiline_comment] = "_multiline_comment",
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
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
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
  [sym__multiline_comment] = sym__multiline_comment,
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
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
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
  [sym__multiline_comment] = {
    .visible = false,
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
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == 'E') ADVANCE(31);
      if (lookahead == 'N') ADVANCE(33);
      if (lookahead == 'P') ADVANCE(41);
      if (lookahead == 'R') ADVANCE(15);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(56);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(74);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(75);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(70);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 'j') ADVANCE(18);
      END_STATE();
    case 26:
      if (lookahead == 'j') ADVANCE(22);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(67);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(71);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__string);
      if (lookahead == '"') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE_SQUOTE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym__multiline_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_project);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Project);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_table);
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Table);
      if (lookahead == 'G') ADVANCE(42);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_Enum);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_ref);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_Ref);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_tablegroup);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_TableGroup);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__inline_comment);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 77:
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
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 58},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 58},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 8},
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
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_Note] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(51),
    [sym__definition] = STATE(2),
    [sym_project] = STATE(2),
    [sym_table] = STATE(2),
    [sym_enum] = STATE(2),
    [sym_reference] = STATE(2),
    [sym__short_reference] = STATE(13),
    [sym__long_reference] = STATE(13),
    [sym_table_group] = STATE(2),
    [sym_comment] = STATE(2),
    [sym__multiline_comment] = STATE(7),
    [sym_note] = STATE(2),
    [sym__short_note] = STATE(14),
    [sym__long_note] = STATE(14),
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
    [anon_sym_SLASH_STAR] = ACTIONS(17),
    [anon_sym_note] = ACTIONS(19),
    [anon_sym_Note] = ACTIONS(19),
  },
  [2] = {
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(13),
    [sym__long_reference] = STATE(13),
    [sym_table_group] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__multiline_comment] = STATE(7),
    [sym_note] = STATE(3),
    [sym__short_note] = STATE(14),
    [sym__long_note] = STATE(14),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
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
    [anon_sym_SLASH_STAR] = ACTIONS(17),
    [anon_sym_note] = ACTIONS(19),
    [anon_sym_Note] = ACTIONS(19),
  },
  [3] = {
    [sym__definition] = STATE(3),
    [sym_project] = STATE(3),
    [sym_table] = STATE(3),
    [sym_enum] = STATE(3),
    [sym_reference] = STATE(3),
    [sym__short_reference] = STATE(13),
    [sym__long_reference] = STATE(13),
    [sym_table_group] = STATE(3),
    [sym_comment] = STATE(3),
    [sym__multiline_comment] = STATE(7),
    [sym_note] = STATE(3),
    [sym__short_note] = STATE(14),
    [sym__long_note] = STATE(14),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_project] = ACTIONS(25),
    [anon_sym_Project] = ACTIONS(25),
    [anon_sym_table] = ACTIONS(28),
    [anon_sym_Table] = ACTIONS(28),
    [anon_sym_enum] = ACTIONS(31),
    [anon_sym_Enum] = ACTIONS(31),
    [anon_sym_ref] = ACTIONS(34),
    [anon_sym_Ref] = ACTIONS(34),
    [anon_sym_tablegroup] = ACTIONS(37),
    [anon_sym_TableGroup] = ACTIONS(37),
    [sym__inline_comment] = ACTIONS(40),
    [anon_sym_SLASH_STAR] = ACTIONS(43),
    [anon_sym_note] = ACTIONS(46),
    [anon_sym_Note] = ACTIONS(46),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    STATE(6), 1,
      sym__multiline_string,
    STATE(22), 1,
      sym_note_text,
    ACTIONS(55), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(49), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [32] = 2,
    ACTIONS(59), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(57), 14,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [53] = 2,
    ACTIONS(63), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(61), 14,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [74] = 2,
    ACTIONS(67), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(65), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [94] = 2,
    ACTIONS(71), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(69), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [114] = 2,
    ACTIONS(75), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(73), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [134] = 2,
    ACTIONS(79), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(77), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [154] = 2,
    ACTIONS(83), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(81), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [174] = 2,
    ACTIONS(87), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(85), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [194] = 2,
    ACTIONS(91), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(89), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [214] = 2,
    ACTIONS(95), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(93), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [234] = 2,
    ACTIONS(99), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(97), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [254] = 2,
    ACTIONS(103), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(101), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [274] = 2,
    ACTIONS(107), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(105), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [294] = 2,
    ACTIONS(111), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(109), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [314] = 2,
    ACTIONS(115), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(113), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [334] = 2,
    ACTIONS(119), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(117), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [354] = 2,
    ACTIONS(123), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(121), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [374] = 2,
    ACTIONS(127), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(125), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [394] = 2,
    ACTIONS(131), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(129), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [414] = 2,
    ACTIONS(135), 2,
      anon_sym_table,
      anon_sym_Table,
    ACTIONS(133), 13,
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
      anon_sym_SLASH_STAR,
      anon_sym_note,
      anon_sym_Note,
  [434] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__multiline_string,
    STATE(40), 1,
      sym_note_text,
  [450] = 5,
    ACTIONS(51), 1,
      sym__string,
    ACTIONS(53), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym__multiline_string,
    STATE(49), 1,
      sym_note_text,
  [466] = 3,
    ACTIONS(141), 1,
      sym__identifier,
    ACTIONS(143), 1,
      anon_sym_LBRACE,
    ACTIONS(145), 1,
      anon_sym_COLON,
  [476] = 3,
    ACTIONS(147), 1,
      sym__identifier,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    ACTIONS(151), 1,
      anon_sym_COLON,
  [486] = 2,
    ACTIONS(153), 1,
      sym__identifier,
    ACTIONS(155), 1,
      anon_sym_LBRACE,
  [493] = 2,
    ACTIONS(157), 1,
      anon_sym_LBRACE,
    ACTIONS(159), 1,
      anon_sym_COLON,
  [500] = 1,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
  [504] = 1,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
  [508] = 1,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
  [512] = 1,
    ACTIONS(167), 1,
      anon_sym_RBRACE,
  [516] = 1,
    ACTIONS(169), 1,
      anon_sym_LF,
  [520] = 1,
    ACTIONS(171), 1,
      sym__identifier,
  [524] = 1,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
  [528] = 1,
    ACTIONS(175), 1,
      anon_sym_LF,
  [532] = 1,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
  [536] = 1,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
  [540] = 1,
    ACTIONS(181), 1,
      anon_sym_LBRACE,
  [544] = 1,
    ACTIONS(183), 1,
      aux_sym__multiline_string_token1,
  [548] = 1,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
  [552] = 1,
    ACTIONS(187), 1,
      anon_sym_LBRACE,
  [556] = 1,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
  [560] = 1,
    ACTIONS(191), 1,
      anon_sym_LBRACE,
  [564] = 1,
    ACTIONS(193), 1,
      anon_sym_STAR_SLASH,
  [568] = 1,
    ACTIONS(195), 1,
      anon_sym_LBRACE,
  [572] = 1,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
  [576] = 1,
    ACTIONS(199), 1,
      aux_sym__multiline_string_token1,
  [580] = 1,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
  [584] = 1,
    ACTIONS(203), 1,
      anon_sym_LF,
  [588] = 1,
    ACTIONS(205), 1,
      sym__identifier,
  [592] = 1,
    ACTIONS(207), 1,
      anon_sym_SQUOTE_SQUOTE_SQUOTE,
  [596] = 1,
    ACTIONS(209), 1,
      anon_sym_LF,
  [600] = 1,
    ACTIONS(211), 1,
      sym__identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 32,
  [SMALL_STATE(6)] = 53,
  [SMALL_STATE(7)] = 74,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 114,
  [SMALL_STATE(10)] = 134,
  [SMALL_STATE(11)] = 154,
  [SMALL_STATE(12)] = 174,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 234,
  [SMALL_STATE(16)] = 254,
  [SMALL_STATE(17)] = 274,
  [SMALL_STATE(18)] = 294,
  [SMALL_STATE(19)] = 314,
  [SMALL_STATE(20)] = 334,
  [SMALL_STATE(21)] = 354,
  [SMALL_STATE(22)] = 374,
  [SMALL_STATE(23)] = 394,
  [SMALL_STATE(24)] = 414,
  [SMALL_STATE(25)] = 434,
  [SMALL_STATE(26)] = 450,
  [SMALL_STATE(27)] = 466,
  [SMALL_STATE(28)] = 476,
  [SMALL_STATE(29)] = 486,
  [SMALL_STATE(30)] = 493,
  [SMALL_STATE(31)] = 500,
  [SMALL_STATE(32)] = 504,
  [SMALL_STATE(33)] = 508,
  [SMALL_STATE(34)] = 512,
  [SMALL_STATE(35)] = 516,
  [SMALL_STATE(36)] = 520,
  [SMALL_STATE(37)] = 524,
  [SMALL_STATE(38)] = 528,
  [SMALL_STATE(39)] = 532,
  [SMALL_STATE(40)] = 536,
  [SMALL_STATE(41)] = 540,
  [SMALL_STATE(42)] = 544,
  [SMALL_STATE(43)] = 548,
  [SMALL_STATE(44)] = 552,
  [SMALL_STATE(45)] = 556,
  [SMALL_STATE(46)] = 560,
  [SMALL_STATE(47)] = 564,
  [SMALL_STATE(48)] = 568,
  [SMALL_STATE(49)] = 572,
  [SMALL_STATE(50)] = 576,
  [SMALL_STATE(51)] = 580,
  [SMALL_STATE(52)] = 584,
  [SMALL_STATE(53)] = 588,
  [SMALL_STATE(54)] = 592,
  [SMALL_STATE(55)] = 596,
  [SMALL_STATE(56)] = 600,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(56),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(53),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(29),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(52),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_string, 5),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_string, 5),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_text, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_text, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, .production_id = 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 4, .production_id = 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 4, .production_id = 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table_group, 4, .production_id = 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_reference, 4),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_reference, 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__multiline_comment, 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__multiline_comment, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_reference, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_reference, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 4, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 4, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 4, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 4, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__short_note, 3),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__short_note, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__long_note, 5, .production_id = 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__long_note, 5, .production_id = 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [201] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
