#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 8

enum {
  anon_sym_DOLLARMODULE = 1,
  anon_sym_SEMI = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_EQ = 5,
  sym_str_br_l = 6,
  sym_str_br_r = 7,
  sym_fun_br_l = 8,
  sym_fun_br_r = 9,
  sym_q_symbol = 10,
  sym_e_var = 11,
  sym_s_var = 12,
  sym_t_var = 13,
  sym_id = 14,
  sym_comment = 15,
  sym_source_file = 16,
  sym_module = 17,
  sym_function = 18,
  sym_sentence = 19,
  sym__pattern_obj = 20,
  sym__pattern_obj_br = 21,
  sym__rewrite_obj = 22,
  sym__rewrite_obj_br = 23,
  sym__rewrite_obj_fn = 24,
  sym__symbol = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_function_repeat1 = 27,
  aux_sym_sentence_repeat1 = 28,
  aux_sym_sentence_repeat2 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOLLARMODULE] = "$MODULE",
  [anon_sym_SEMI] = ";",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [sym_str_br_l] = "str_br_l",
  [sym_str_br_r] = "str_br_r",
  [sym_fun_br_l] = "fun_br_l",
  [sym_fun_br_r] = "fun_br_r",
  [sym_q_symbol] = "q_symbol",
  [sym_e_var] = "e_var",
  [sym_s_var] = "s_var",
  [sym_t_var] = "t_var",
  [sym_id] = "id",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_module] = "module",
  [sym_function] = "function",
  [sym_sentence] = "sentence",
  [sym__pattern_obj] = "_pattern_obj",
  [sym__pattern_obj_br] = "_pattern_obj_br",
  [sym__rewrite_obj] = "_rewrite_obj",
  [sym__rewrite_obj_br] = "_rewrite_obj_br",
  [sym__rewrite_obj_fn] = "_rewrite_obj_fn",
  [sym__symbol] = "_symbol",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_sentence_repeat1] = "sentence_repeat1",
  [aux_sym_sentence_repeat2] = "sentence_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOLLARMODULE] = anon_sym_DOLLARMODULE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_str_br_l] = sym_str_br_l,
  [sym_str_br_r] = sym_str_br_r,
  [sym_fun_br_l] = sym_fun_br_l,
  [sym_fun_br_r] = sym_fun_br_r,
  [sym_q_symbol] = sym_q_symbol,
  [sym_e_var] = sym_e_var,
  [sym_s_var] = sym_s_var,
  [sym_t_var] = sym_t_var,
  [sym_id] = sym_id,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_module] = sym_module,
  [sym_function] = sym_function,
  [sym_sentence] = sym_sentence,
  [sym__pattern_obj] = sym__pattern_obj,
  [sym__pattern_obj_br] = sym__pattern_obj_br,
  [sym__rewrite_obj] = sym__rewrite_obj,
  [sym__rewrite_obj_br] = sym__rewrite_obj_br,
  [sym__rewrite_obj_fn] = sym__rewrite_obj_fn,
  [sym__symbol] = sym__symbol,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_sentence_repeat1] = aux_sym_sentence_repeat1,
  [aux_sym_sentence_repeat2] = aux_sym_sentence_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOLLARMODULE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_str_br_l] = {
    .visible = true,
    .named = true,
  },
  [sym_str_br_r] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_br_l] = {
    .visible = true,
    .named = true,
  },
  [sym_fun_br_r] = {
    .visible = true,
    .named = true,
  },
  [sym_q_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_e_var] = {
    .visible = true,
    .named = true,
  },
  [sym_s_var] = {
    .visible = true,
    .named = true,
  },
  [sym_t_var] = {
    .visible = true,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_sentence] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern_obj] = {
    .visible = false,
    .named = true,
  },
  [sym__pattern_obj_br] = {
    .visible = false,
    .named = true,
  },
  [sym__rewrite_obj] = {
    .visible = false,
    .named = true,
  },
  [sym__rewrite_obj_br] = {
    .visible = false,
    .named = true,
  },
  [sym__rewrite_obj_fn] = {
    .visible = false,
    .named = true,
  },
  [sym__symbol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sentence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sentence_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_function = 1,
  field_module = 2,
  field_name = 3,
  field_pattern = 4,
  field_rewrite = 5,
  field_sentence = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_function] = "function",
  [field_module] = "module",
  [field_name] = "name",
  [field_pattern] = "pattern",
  [field_rewrite] = "rewrite",
  [field_sentence] = "sentence",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 1},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_module, 0},
  [1] =
    {field_function, 1},
    {field_module, 0},
  [3] =
    {field_name, 1},
  [4] =
    {field_name, 0},
    {field_sentence, 2},
  [6] =
    {field_rewrite, 1},
  [7] =
    {field_pattern, 0},
  [8] =
    {field_pattern, 0},
    {field_rewrite, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '$') ADVANCE(11);
      if (lookahead == '\'') ADVANCE(1);
      if (lookahead == '(') ADVANCE(23);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ';') ADVANCE(19);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == '{') ADVANCE(20);
      if (lookahead == '}') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\f') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'L') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'M') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'U') ADVANCE(10);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DOLLARMODULE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_str_br_l);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_str_br_r);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_fun_br_l);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_fun_br_r);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_q_symbol);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_e_var);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_e_var);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_s_var);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_s_var);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_t_var);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_t_var);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_id);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(36);
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
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOLLARMODULE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_str_br_l] = ACTIONS(1),
    [sym_str_br_r] = ACTIONS(1),
    [sym_fun_br_l] = ACTIONS(1),
    [sym_fun_br_r] = ACTIONS(1),
    [sym_q_symbol] = ACTIONS(1),
    [sym_e_var] = ACTIONS(1),
    [sym_s_var] = ACTIONS(1),
    [sym_t_var] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym_module] = STATE(28),
    [anon_sym_DOLLARMODULE] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__rewrite_obj] = STATE(2),
    [sym__rewrite_obj_br] = STATE(2),
    [sym__rewrite_obj_fn] = STATE(2),
    [sym__symbol] = STATE(2),
    [aux_sym_sentence_repeat2] = STATE(2),
    [anon_sym_SEMI] = ACTIONS(7),
    [sym_str_br_l] = ACTIONS(9),
    [sym_str_br_r] = ACTIONS(7),
    [sym_fun_br_l] = ACTIONS(12),
    [sym_fun_br_r] = ACTIONS(7),
    [sym_q_symbol] = ACTIONS(15),
    [sym_e_var] = ACTIONS(15),
    [sym_s_var] = ACTIONS(15),
    [sym_t_var] = ACTIONS(15),
    [sym_id] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    ACTIONS(20), 1,
      anon_sym_EQ,
    ACTIONS(22), 1,
      sym_str_br_l,
    STATE(4), 2,
      sym_sentence,
      aux_sym_function_repeat1,
    STATE(16), 4,
      sym__pattern_obj,
      sym__pattern_obj_br,
      sym__symbol,
      aux_sym_sentence_repeat1,
    ACTIONS(24), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [30] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    ACTIONS(28), 1,
      anon_sym_EQ,
    ACTIONS(31), 1,
      sym_str_br_l,
    STATE(4), 2,
      sym_sentence,
      aux_sym_function_repeat1,
    STATE(16), 4,
      sym__pattern_obj,
      sym__pattern_obj_br,
      sym__symbol,
      aux_sym_sentence_repeat1,
    ACTIONS(34), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [60] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(39), 1,
      sym_str_br_l,
    ACTIONS(41), 1,
      sym_fun_br_l,
    ACTIONS(43), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
    STATE(2), 5,
      sym__rewrite_obj,
      sym__rewrite_obj_br,
      sym__rewrite_obj_fn,
      sym__symbol,
      aux_sym_sentence_repeat2,
  [87] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_str_br_l,
    ACTIONS(41), 1,
      sym_fun_br_l,
    ACTIONS(45), 1,
      anon_sym_SEMI,
    ACTIONS(47), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
    STATE(10), 5,
      sym__rewrite_obj,
      sym__rewrite_obj_br,
      sym__rewrite_obj_fn,
      sym__symbol,
      aux_sym_sentence_repeat2,
  [114] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_str_br_l,
    ACTIONS(41), 1,
      sym_fun_br_l,
    ACTIONS(49), 1,
      sym_fun_br_r,
    ACTIONS(43), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
    STATE(2), 5,
      sym__rewrite_obj,
      sym__rewrite_obj_br,
      sym__rewrite_obj_fn,
      sym__symbol,
      aux_sym_sentence_repeat2,
  [141] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(20), 1,
      anon_sym_EQ,
    ACTIONS(22), 1,
      sym_str_br_l,
    STATE(3), 2,
      sym_sentence,
      aux_sym_function_repeat1,
    STATE(16), 4,
      sym__pattern_obj,
      sym__pattern_obj_br,
      sym__symbol,
      aux_sym_sentence_repeat1,
    ACTIONS(24), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [168] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_str_br_l,
    ACTIONS(41), 1,
      sym_fun_br_l,
    ACTIONS(51), 1,
      anon_sym_SEMI,
    ACTIONS(53), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
    STATE(5), 5,
      sym__rewrite_obj,
      sym__rewrite_obj_br,
      sym__rewrite_obj_fn,
      sym__symbol,
      aux_sym_sentence_repeat2,
  [195] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_str_br_l,
    ACTIONS(41), 1,
      sym_fun_br_l,
    ACTIONS(55), 1,
      anon_sym_SEMI,
    ACTIONS(43), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
    STATE(2), 5,
      sym__rewrite_obj,
      sym__rewrite_obj_br,
      sym__rewrite_obj_fn,
      sym__symbol,
      aux_sym_sentence_repeat2,
  [222] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_str_br_l,
    ACTIONS(41), 1,
      sym_fun_br_l,
    ACTIONS(57), 1,
      sym_str_br_r,
    ACTIONS(59), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
    STATE(13), 5,
      sym__rewrite_obj,
      sym__rewrite_obj_br,
      sym__rewrite_obj_fn,
      sym__symbol,
      aux_sym_sentence_repeat2,
  [249] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_str_br_l,
    ACTIONS(41), 1,
      sym_fun_br_l,
    ACTIONS(61), 1,
      sym_fun_br_r,
    ACTIONS(63), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
    STATE(7), 5,
      sym__rewrite_obj,
      sym__rewrite_obj_br,
      sym__rewrite_obj_fn,
      sym__symbol,
      aux_sym_sentence_repeat2,
  [276] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_str_br_l,
    ACTIONS(41), 1,
      sym_fun_br_l,
    ACTIONS(65), 1,
      sym_str_br_r,
    ACTIONS(43), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
    STATE(2), 5,
      sym__rewrite_obj,
      sym__rewrite_obj_br,
      sym__rewrite_obj_fn,
      sym__symbol,
      aux_sym_sentence_repeat2,
  [303] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_str_br_l,
    ACTIONS(67), 2,
      anon_sym_EQ,
      sym_str_br_r,
    STATE(14), 4,
      sym__pattern_obj,
      sym__pattern_obj_br,
      sym__symbol,
      aux_sym_sentence_repeat1,
    ACTIONS(72), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [327] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      sym_str_br_l,
    ACTIONS(75), 1,
      sym_str_br_r,
    STATE(17), 4,
      sym__pattern_obj,
      sym__pattern_obj_br,
      sym__symbol,
      aux_sym_sentence_repeat1,
    ACTIONS(77), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [350] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      sym_str_br_l,
    ACTIONS(79), 1,
      anon_sym_EQ,
    STATE(14), 4,
      sym__pattern_obj,
      sym__pattern_obj_br,
      sym__symbol,
      aux_sym_sentence_repeat1,
    ACTIONS(81), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [373] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      sym_str_br_l,
    ACTIONS(83), 1,
      sym_str_br_r,
    STATE(14), 4,
      sym__pattern_obj,
      sym__pattern_obj_br,
      sym__symbol,
      aux_sym_sentence_repeat1,
    ACTIONS(81), 5,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 10,
      anon_sym_SEMI,
      sym_str_br_l,
      sym_str_br_r,
      sym_fun_br_l,
      sym_fun_br_r,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [412] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 10,
      anon_sym_SEMI,
      sym_str_br_l,
      sym_str_br_r,
      sym_fun_br_l,
      sym_fun_br_r,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 10,
      anon_sym_SEMI,
      sym_str_br_l,
      sym_str_br_r,
      sym_fun_br_l,
      sym_fun_br_r,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 10,
      anon_sym_SEMI,
      sym_str_br_l,
      sym_str_br_r,
      sym_fun_br_l,
      sym_fun_br_r,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 8,
      anon_sym_EQ,
      sym_str_br_l,
      sym_str_br_r,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 8,
      anon_sym_EQ,
      sym_str_br_l,
      sym_str_br_r,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [488] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 8,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_str_br_l,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [502] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 8,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_str_br_l,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [516] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 8,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_str_br_l,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [530] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 8,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_str_br_l,
      sym_q_symbol,
      sym_e_var,
      sym_s_var,
      sym_t_var,
      sym_id,
  [544] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym_id,
    STATE(30), 2,
      sym_function,
      aux_sym_source_file_repeat1,
  [558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      sym_id,
    STATE(29), 2,
      sym_function,
      aux_sym_source_file_repeat1,
  [572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_id,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(29), 2,
      sym_function,
      aux_sym_source_file_repeat1,
  [586] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(12), 1,
      sym__symbol,
    ACTIONS(116), 2,
      sym_q_symbol,
      sym_id,
  [597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      sym_id,
  [605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      sym_id,
  [613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 1,
      anon_sym_LBRACE,
  [620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_id,
  [627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 1,
      anon_sym_SEMI,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 168,
  [SMALL_STATE(10)] = 195,
  [SMALL_STATE(11)] = 222,
  [SMALL_STATE(12)] = 249,
  [SMALL_STATE(13)] = 276,
  [SMALL_STATE(14)] = 303,
  [SMALL_STATE(15)] = 327,
  [SMALL_STATE(16)] = 350,
  [SMALL_STATE(17)] = 373,
  [SMALL_STATE(18)] = 396,
  [SMALL_STATE(19)] = 412,
  [SMALL_STATE(20)] = 428,
  [SMALL_STATE(21)] = 444,
  [SMALL_STATE(22)] = 460,
  [SMALL_STATE(23)] = 474,
  [SMALL_STATE(24)] = 488,
  [SMALL_STATE(25)] = 502,
  [SMALL_STATE(26)] = 516,
  [SMALL_STATE(27)] = 530,
  [SMALL_STATE(28)] = 544,
  [SMALL_STATE(29)] = 558,
  [SMALL_STATE(30)] = 572,
  [SMALL_STATE(31)] = 586,
  [SMALL_STATE(32)] = 597,
  [SMALL_STATE(33)] = 605,
  [SMALL_STATE(34)] = 613,
  [SMALL_STATE(35)] = 620,
  [SMALL_STATE(36)] = 627,
  [SMALL_STATE(37)] = 634,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sentence_repeat2, 2),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat2, 2), SHIFT_REPEAT(11),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat2, 2), SHIFT_REPEAT(31),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat2, 2), SHIFT_REPEAT(2),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(9),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(15),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2), SHIFT_REPEAT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2), SHIFT_REPEAT(15),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sentence_repeat1, 2), SHIFT_REPEAT(14),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rewrite_obj_fn, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rewrite_obj_fn, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rewrite_obj_br, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__rewrite_obj_br, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern_obj_br, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern_obj_br, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence, 3, .production_id = 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence, 3, .production_id = 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sentence, 4, .production_id = 7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, .production_id = 4),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3, .production_id = 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [126] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_refal(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif