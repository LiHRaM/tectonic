/* tectonic/constants.h: symbolic constants from the WEB code
   Copyright 2017 the Tectonic Project
   Licensed under the MIT License.
*/

#ifndef TECTONIC_CONSTANTS_H
#define TECTONIC_CONSTANTS_H

#define BATCH_MODE 0
#define NONSTOP_MODE 1
#define SCROLL_MODE 2
#define ERROR_STOP_MODE 3
#define UNSPECIFIED_MODE 4

#define DISPLAY_STYLE 0
#define TEXT_STYLE 2
#define SCRIPT_STYLE 4

#define LEFT_TO_RIGHT 0
#define RIGHT_TO_LEFT 1

#define HLIST_NODE 0
#define VLIST_NODE 1
#define WRITE_NODE 1
#define CLOSE_NODE 2
#define DELTA_NODE 2
#define RULE_NODE 2
#define INS_NODE 3
#define SPECIAL_NODE 3
#define LANGUAGE_NODE 4
#define MARK_NODE 4
#define ADJUST_NODE 5
#define LIGATURE_NODE 6
#define DISC_NODE 7
#define WHATSIT_NODE 8
#define MATH_NODE 9
#define GLUE_NODE 10
#define KERN_NODE 11
#define PENALTY_NODE 12
#define UNSET_NODE 13
#define EDGE_NODE 14
#define STYLE_NODE 14
#define CHOICE_NODE 15
#define MARGIN_KERN_NODE 40
#define NATIVE_WORD_NODE 40
#define NATIVE_WORD_NODE_AT 41
#define GLYPH_NODE 42
#define PIC_NODE 43
#define PDF_NODE 44

#define IF_NODE_SIZE 2
#define PASSIVE_NODE_SIZE 2
#define POINTER_NODE_SIZE 2
#define SMALL_NODE_SIZE 2
#define SPAN_NODE_SIZE 2
#define WRITE_NODE_SIZE 2
#define ACTIVE_NODE_SIZE_NORMAL 3
#define EDGE_NODE_SIZE 3
#define MARGIN_KERN_NODE_SIZE 3
#define MEDIUM_NODE_SIZE 3
#define MOVEMENT_NODE_SIZE 3
#define OPEN_NODE_SIZE 3
#define STYLE_NODE_SIZE 3
#define WORD_NODE_SIZE 3
#define EXPR_NODE_SIZE 4
#define GLUE_SPEC_SIZE 4
#define MARK_CLASS_NODE_SIZE 4
#define PAGE_INS_NODE_SIZE 4
#define ACTIVE_NODE_SIZE_EXTENDED 5
#define GLYPH_NODE_SIZE 5
#define INS_NODE_SIZE 5
#define RULE_NODE_SIZE 5
#define ALIGN_STACK_NODE_SIZE 6
#define NATIVE_NODE_SIZE 6
#define DELTA_NODE_SIZE 7
#define BOX_NODE_SIZE 8
#define PIC_NODE_SIZE 9
#define INDEX_NODE_SIZE 33

#define NOAD_SIZE 4
#define ACCENT_NOAD_SIZE 5
#define RADICAL_NOAD_SIZE 5
#define FRACTION_NOAD_SIZE 6

#define ORD_NOAD 16
#define OP_NOAD 17
#define BIN_NOAD 18
#define REL_NOAD 19
#define OPEN_NOAD 20
#define PUNCT_NOAD 22
#define INNER_NOAD 23
#define RADICAL_NOAD 24
#define FRACTION_NOAD 25
#define ACCENT_NOAD 28
#define VCENTER_NOAD 29
#define LEFT_NOAD 30
#define RIGHT_NOAD 31

/* args to TOP_BOT_MARK */
#define TOP_MARK_CODE 0
#define FIRST_MARK_CODE 1
#define BOT_MARK_CODE 2
#define SPLIT_FIRST_MARK_CODE 3
#define SPLIT_BOT_MARK_CODE 4

#define LINE_SKIP_CODE 0
#define BASELINE_SKIP_CODE 1
#define PAR_SKIP_CODE 2
#define ABOVE_DISPLAY_SKIP_CODE 3
#define BELOW_DISPLAY_SKIP_CODE 4
#define ABOVE_DISPLAY_SHORT_SKIP_CODE 5
#define BELOW_DISPLAY_SHORT_SKIP_CODE 6
#define LEFT_SKIP_CODE 7
#define RIGHT_SKIP_CODE 8
#define TOP_SKIP_CODE 9
#define SPLIT_TOP_SKIP_CODE 10
#define TAB_SKIP_CODE 11
#define SPACE_SKIP_CODE 12
#define XSPACE_SKIP_CODE 13
#define PAR_FILL_SKIP_CODE 14
#define XETEX_LINEBREAK_SKIP_CODE 15
#define THIN_MU_SKIP_CODE 16
#define MED_MU_SKIP_CODE 17
#define THICK_MU_SKIP_CODE 18

#define ABOVE_CODE 0
#define DELIMITED_CODE 3

#define BEFORE 0
#define AFTER 1
#define L_CODE 4
#define R_CODE 8

#define EXPR_NONE 0
#define EXPR_ADD 1
#define EXPR_SUB 2
#define EXPR_MULT 3
#define EXPR_DIV 4
#define EXPR_SCALE 5

#define SIMPLE_GROUP 1
#define HBOX_GROUP 2
#define ADJUSTED_HBOX_GROUP 3
#define VBOX_GROUP 4
#define VTOP_GROUP 5
#define ALIGN_GROUP 6
#define NO_ALIGN_GROUP 7
#define OUTPUT_GROUP 8
#define MATH_GROUP 9
#define DISC_GROUP 10
#define INSERT_GROUP 11
#define VCENTER_GROUP 12
#define MATH_CHOICE_GROUP 13
#define SEMI_SIMPLE_GROUP 14
#define MATH_SHIFT_GROUP 15
#define MATH_LEFT_GROUP 16

#define SUP_CMD 0
#define SUB_CMD 1

#define FIL 1
#define FILL 2
#define FILLL 3

#define VERY_LOOSE_FIT 0
#define LOOSE_FIT 1
#define DECENT_FIT 2
#define TIGHT_FIT 3

#define LIG_TAG 1
#define LIST_TAG 2
#define EXT_TAG 3

/* scanner_status values: */
#define NORMAL 0
#define SKIPPING 1
#define DEFINING 2
#define MATCHING 3
#define ALIGNING 4
#define ABSORBING 5

#define A_LEADERS 100
#define C_LEADERS 101
#define X_LEADERS 102

/* commands */
#define RELAX 0
#define TAB_MARK 4
#define CAR_RET 5
#define PAR_END 13
#define STOP 14
#define DELIM_NUM 15
#define CHAR_NUM 16
#define MATH_CHAR_NUM 17
#define MARK 18
#define XRAY 19
#define MAKE_BOX 20
#define HMOVE 21
#define VMOVE 22
#define UN_HBOX 23
#define UN_VBOX 24
#define REMOVE_ITEM 25
#define HSKIP 26
#define VSKIP 27
#define MSKIP 28
#define KERN 29
#define MKERN 30
#define LEADER_SHIP 31
#define HALIGN 32
#define VALIGN 33
#define NO_ALIGN 34
#define VRULE 35
#define HRULE 36
#define INSERT 37
#define VADJUST 38
#define IGNORE_SPACES 39
#define AFTER_ASSIGNMENT 40
#define AFTER_GROUP 41
#define BREAK_PENALTY 42
#define START_PAR 43
#define ITAL_CORR 44
#define ACCENT 45
#define MATH_ACCENT 46
#define DISCRETIONARY 47
#define EQ_NO 48
#define LEFT_RIGHT 49
#define MATH_COMP 50
#define LIMIT_SWITCH 51
#define ABOVE 52
#define MATH_STYLE 53
#define MATH_CHOICE 54
#define NON_SCRIPT 55
#define VCENTER 56
#define CASE_SHIFT 57
#define MESSAGE 58
#define EXTENSION 59
#define IN_STREAM 60
#define BEGIN_GROUP 61
#define END_GROUP 62
#define OMIT 63
#define EX_SPACE 64
#define NO_BOUNDARY 65
#define RADICAL 66
#define END_CS_NAME 67
#define LAST_ITEM 71
#define MAX_NON_PREFIXED_COMMAND 71
#define TOKS_REGISTER 72
#define ASSIGN_TOKS 73
#define ASSIGN_INT 74
#define ASSIGN_DIMEN 75
#define ASSIGN_GLUE 76
#define ASSIGN_MU_GLUE 77
#define ASSIGN_FONT_DIMEN 78
#define ASSIGN_FONT_INT 79
#define SET_AUX 80
#define SET_PREV_GRAF 81
#define SET_PAGE_DIMEN 82
#define SET_PAGE_INT 83
#define SET_BOX_DIMEN 84
#define SET_SHAPE 85
#define DEF_CODE 86
#define XETEX_DEF_CODE 87
#define DEF_FAMILY 88
#define SET_FONT 89
#define DEF_FONT 90
#define MAX_INTERNAL 91
#define REGISTER 91
#define ADVANCE 92
#define MULTIPLY 93
#define DIVIDE 94
#define PREFIX 95
#define LET 96
#define SHORTHAND_DEF 97
#define READ_TO_CS 98
#define DEF 99
#define SET_BOX 100
#define HYPH_DATA 101
#define SET_INTERACTION 102
#define EXPAND_AFTER 104
#define NO_EXPAND 105
#define INPUT 106
#define IF_TEST 107
#define FI_OR_ELSE 108
#define CS_NAME 109
#define CONVERT 110
#define THE 111
#define TOP_BOT_MARK 112

/* args to ASSIGN_TOKS */
#define OUTPUT_ROUTINE_LOC 2252772
#define EVERY_PAR_LOC 2252773
#define EVERY_MATH_LOC 2252774
#define EVERY_DISPLAY_LOC 2252775
#define EVERY_HBOX_LOC 2252776
#define EVERY_VBOX_LOC 2252777
#define EVERY_JOB_LOC 2252778
#define EVERY_CR_LOC 2252779
#define ERR_HELP_LOC 2252780
#define EVERY_EOF_LOC 2252781
#define XETEX_INTER_CHAR_LOC 2252782

/* args to SET_SHAPE */
#define PAR_SHAPE_LOC 2252771
#define INTER_LINE_PENALTIES_LOC 2253039
#define CLUB_PENALTIES_LOC 2253040
#define WIDOW_PENALTIES_LOC 2253041
#define DISPLAY_WIDOW_PENALTIES_LOC 2253042

/* args to SET_BOX_DIMEN */
#define WIDTH_OFFSET 1
#define DEPTH_OFFSET 2
#define HEIGHT_OFFSET 3

/* args to LAST_ITEM -- heavily overloaded by (X)eTeX for extensions */
#define INT_VAL 0
#define DIMEN_VAL 1
#define GLUE_VAL 2
#define LAST_NODE_TYPE_CODE 3
#define INPUT_LINE_NO_CODE 4
#define BADNESS_CODE 5
#define ETEX_VERSION_CODE 6
#define CURRENT_GROUP_LEVEL_CODE 7
#define CURRENT_GROUP_TYPE_CODE 8
#define CURRENT_IF_LEVEL_CODE 9
#define CURRENT_IF_TYPE_CODE 10
#define CURRENT_IF_BRANCH_CODE 11
#define GLUE_STRETCH_ORDER_CODE 12
#define GLUE_SHRINK_ORDER_CODE 13
#define XETEX_VERSION_CODE 14
#define XETEX_COUNT_GLYPHS_CODE 15
#define XETEX_COUNT_VARIATIONS_CODE 16
#define XETEX_VARIATION_CODE 17
#define XETEX_FIND_VARIATION_BY_NAME_CODE 18
#define XETEX_VARIATION_MIN_CODE 19
#define XETEX_VARIATION_MAX_CODE 20
#define XETEX_VARIATION_DEFAULT_CODE 21
#define XETEX_COUNT_FEATURES_CODE 22
#define XETEX_FEATURE_CODE_CODE 23
#define XETEX_FIND_FEATURE_BY_NAME_CODE 24
#define XETEX_IS_EXCLUSIVE_FEATURE_CODE 25
#define XETEX_COUNT_SELECTORS_CODE 26
#define XETEX_SELECTOR_CODE_CODE 27
#define XETEX_FIND_SELECTOR_BY_NAME_CODE 28
#define XETEX_IS_DEFAULT_SELECTOR_CODE 29
#define XETEX_OT_COUNT_SCRIPTS_CODE 30
#define XETEX_OT_COUNT_LANGUAGES_CODE 31
#define XETEX_OT_COUNT_FEATURES_CODE 32
#define XETEX_OT_SCRIPT_CODE 33
#define XETEX_OT_LANGUAGE_CODE 34
#define XETEX_OT_FEATURE_CODE 35
#define XETEX_MAP_CHAR_TO_GLYPH_CODE 36
#define XETEX_GLYPH_INDEX_CODE 37
#define XETEX_FONT_TYPE_CODE 38
#define XETEX_FIRST_CHAR_CODE 39
#define XETEX_LAST_CHAR_CODE 40
#define PDF_LAST_X_POS_CODE 41
#define PDF_LAST_Y_POS_CODE 42
#define PDF_SHELL_ESCAPE_CODE 45
#define XETEX_PDF_PAGE_COUNT_CODE 46
#define XETEX_GLYPH_BOUNDS_CODE 47
#define FONT_CHAR_WD_CODE 48
#define FONT_CHAR_HT_CODE 49
#define FONT_CHAR_DP_CODE 50
#define FONT_CHAR_IC_CODE 51
#define PAR_SHAPE_LENGTH_CODE 52
#define PAR_SHAPE_INDENT_CODE 53
#define PAR_SHAPE_DIMEN_CODE 54
#define GLUE_STRETCH_CODE 55
#define GLUE_SHRINK_CODE 56
#define MU_TO_GLUE_CODE 57
#define GLUE_TO_MU_CODE 58
#define ETEX_EXPR 59

/* args to CONVERT -- also heavily overloaded */
#define NUMBER_CODE 0
#define ROMAN_NUMERAL_CODE 1
#define STRING_CODE 2
#define MEANING_CODE 3
#define FONT_NAME_CODE 4
#define ETEX_REVISION_CODE 5
#define XETEX_REVISION_CODE 6
#define XETEX_VARIATION_NAME_CODE 7
#define XETEX_GLYPH_NAME_CODE 10
#define LEFT_MARGIN_KERN_CODE 11
#define RIGHT_MARGIN_KERN_CODE 12
#define XETEX_UCHAR_CODE 13
#define XETEX_UCHARCAT_CODE 14
#define JOB_NAME_CODE 15
#define PDF_STRCMP_CODE 43
#define PDF_MDFIVE_SUM_CODE 44

/* args to IF_TEST */
#define IF_CHAR_CODE 0
#define IF_CODE 1
#define IF_CAT_CODE 1
#define IF_INT_CODE 2
#define IF_DIM_CODE 3
#define IF_ODD_CODE 4
#define IF_VMODE_CODE 5
#define IF_HMODE_CODE 6
#define IF_MMODE_CODE 7
#define IF_INNER_CODE 8
#define IF_VOID_CODE 9
#define IF_HBOX_CODE 10
#define IF_VBOX_CODE 11
#define IFX_CODE 12
#define IF_EOF_CODE 13
#define IF_TRUE_CODE 14
#define IF_FALSE_CODE 15
#define IF_CASE_CODE 16
#define IF_DEF_CODE 17
#define IF_CS_CODE 18
#define IF_FONT_CHAR_CODE 19
#define IF_IN_CSNAME_CODE 20
#define IF_PRIMITIVE_CODE 21


#define XETEX_INPUT_MODE_AUTO 0
#define XETEX_VERSION 0
#define BOTTOM_LEVEL 0
#define EMPTY 0
#define ESCAPE 0
#define EXACTLY 0
#define FONT_BASE 0
#define INSERTING 0
#define LEVEL_ZERO 0
#define NON_ADDRESS 0
#define NONE_SEEN 0
#define PARAMETER 0
#define RESTORE_OLD_VALUE 0
#define TEXT_SIZE 0
#define TOKEN_LIST 0
#define UNDEFINED_PRIMITIVE 0
#define UNHYPHENATED 0
#define ACTIVE_BASE 1
#define ADDITIONAL 1
#define COPY_CODE 1
#define EXPLICIT 1
#define FIXED_ACC 1
#define HYPHENATED 1
#define INSERTS_ONLY 1
#define JUST_OPEN 1
#define LEFT_BRACE 1
#define LEVEL_ONE 1
#define LIMITS 1
#define MATH_CHAR 1
#define MID_LINE 1
#define PRIM_BASE 1
#define RESTORE_ZERO 1
#define REVERSED 1
#define SLANT_CODE 1
#define SPLIT_UP 1
#define STRETCHING 1
#define U_TEMPLATE 1
#define VMODE 1
#define Y_HERE 1
#define ACC_KERN 2
#define BEGIN_M_CODE 2
#define BOTTOM_ACC 2
#define BOX_THERE 2
#define CLOSED 2
#define DLIST 2
#define ETEX_VERSION 2
#define FI_CODE 2
#define INSERT_TOKEN 2
#define LAST_BOX_CODE 2
#define NO_LIMITS 2
#define RIGHT_BRACE 2
#define SHRINKING 2
#define SPACE_CODE 2
#define SUB_BOX 2
#define V_TEMPLATE 2
#define Z_HERE 2
#define BACKED_UP 3
#define DISPLAYOPERATORMINHEIGHT 3
#define ELSE_CODE 3
#define END_M_CODE 3
#define LEVEL_BOUNDARY 3
#define MATH_SHIFT 3
#define MU_VAL 3
#define SPACE_ADJUSTMENT 3
#define SUB_MLIST 3
#define VSPLIT_CODE 3
#define YZ_OK 3
#define BACKED_UP_CHAR 4
#define IDENT_VAL 4
#define MATH_TEXT_CHAR 4
#define OR_CODE 4
#define RESTORE_SA 4
#define SKIP_CODE 4
#define SPACE_SHRINK_CODE 4
#define VTOP_CODE 4
#define Y_OK 4
#define INSERTED 5
#define OUT_PARAM 5
#define TOK_VAL 5
#define X_HEIGHT_CODE 5
#define Z_OK 5
#define ACCENTBASEHEIGHT 6
#define BEGIN_L_CODE 6
#define D_FIXED 6
#define INTER_CHAR_VAL 6
#define MAC_PARAM 6
#define MACRO 6
#define PDFTEX_FIRST_EXTENSION_CODE 6
#define QUAD_CODE 6
#define Y_SEEN 6
#define CHAR_SUB_DEF_CODE 7
#define END_L_CODE 7
#define EXTRA_SPACE_CODE 7
#define ID_BYTE 7
#define MARK_VAL 7
#define OUTPUT_TEXT 7
#define SUP_MARK 7
#define VAR_FAM_CLASS 7
#define EVERY_PAR_TEXT 8
#define ENDV 9
#define EVERY_MATH_TEXT 9
#define IGNORE 9
#define SUBSCRIPTTOPMAX 9
#define EVERY_DISPLAY_TEXT 10
#define NATIVE_GLYPH_INFO_SIZE 10
#define SPACER 10
#define EVERY_HBOX_TEXT 11
#define LETTER 11
#define EVERY_VBOX_TEXT 12
#define OTHER_CHAR 12
#define Z_SEEN 12
#define ACTIVE_CHAR 13
#define CARRIAGE_RETURN 13
#define EVERY_JOB_TEXT 13
#define SUPERSCRIPTBOTTOMMIN 13
#define TOTAL_MATHEX_PARAMS 13
#define COMMENT 14
#define EVERY_CR_TEXT 14
#define HI_MEM_STAT_USAGE 15
#define INVALID_CHAR 15
#define MARK_TEXT 15
#define MAX_CHAR_CODE 15
#define SUBSUPERSCRIPTGAPMIN 15
#define EVERY_EOF_TEXT 16
#define SUPERSCRIPTBOTTOMMAXWITHSUBSCRIPT 16
#define INTER_CHAR_TEXT 17
#define SKIP_BLANKS 17
#define WRITE_TEXT 18
#define TOTAL_MATHSY_PARAMS 22
#define STACKGAPMIN 26
#define STACKDISPLAYSTYLEGAPMIN 27
#define UNLESS_CODE 32
#define NEW_LINE 33
#define VRULE 35
#define FRACTIONNUMERATORGAPMIN 36
#define FRACTIONNUMDISPLAYSTYLEGAPMIN 37
#define XETEX_FIRST_CHAR_CODE 39
#define FRACTIONDENOMINATORGAPMIN 39
#define FRACTIONDENOMDISPLAYSTYLEGAPMIN 40
#define GLYPH_CODE 43
#define XETEX_DIM 47
#define RADICALVERTICALGAP 49
#define RADICALDISPLAYSTYLEVERTICALGAP 50
#define RADICALRULETHICKNESS 51
#define LASTMATHCONSTANT 55
#define ETEX_GLUE 57
#define ETEX_MU 58
#define CHAR_GIVEN 68
#define MIN_INTERNAL 68
#define MATH_GIVEN 69
#define XETEX_MATH_GIVEN 70
#define COND_MATH_GLUE 98
#define MU_GLUE 99
#define MAX_COMMAND 102
#define UNDEFINED_CS 103
#define HMODE 104
#define CALL 113
#define LONG_CALL 114
#define OUTER_CALL 115
#define END_TEMPLATE 117
#define DONT_EXPAND 118
#define GLUE_REF 119
#define SHAPE_REF 120
#define BOX_REF 121
#define DATA 122
#define DIMEN_VAL_LIMIT 128
#define SET1 128
#define SET_RULE 132
#define PUT_RULE 137
#define BOP 139
#define EOP 140
#define PUSH 141
#define POP 142
#define RIGHT1 143
#define DOWN1 157
#define MMODE 207
#define FNT1 235
#define XXX1 239
#define XXX4 242
#define FNT_DEF1 243
#define PRE 247
#define POST 248
#define POST_POST 249
#define DEFINE_NATIVE_FONT 252
#define SET_GLYPHS 253
#define SET_TEXT_AND_GLYPHS 254
#define BIGGEST_LANG 255
#define MU_VAL_LIMIT 256
#define NUMBER_MATH_FAMILIES 256
#define SCRIPT_SIZE 256
#define TOO_BIG_LANG 256
#define BOX_VAL_LIMIT 320
#define TOK_VAL_LIMIT 384
#define PRIM_PRIME 431
#define PRIM_SIZE 500
#define MAX_HLIST_STACK 512
#define SCRIPT_SCRIPT_SIZE 512
#define HYPH_PRIME 607
#define HYPHENATABLE_LENGTH_LIMIT 4095
#define CHAR_CLASS_LIMIT 4096
#define HASH_PRIME 8501
#define MAX_FONT_MAX 9000
#define EJECT_PENALTY 10000
#define INF_BAD 10000
#define INF_PENALTY 10000
#define HASH_SIZE 15000
#define DEFAULT_RULE 26214
#define BIGGEST_CHAR 65535
#define NUMBER_CHARS 65536
#define TOO_BIG_CHAR 65536
#define NO_EXPAND_FLAG 65537
#define SPAN_CODE 65537
#define CR_CODE 65538
#define CR_CR_CODE 65539
#define FORMAT_EXTENSION 66141
#define BIGGEST_USV 1114111
#define NUMBER_USVS 1114112
#define TOO_BIG_USV 1114112
#define SINGLE_BASE 1114113
#define ACTIVE_MATH_CHAR 2097151
#define LEFT_BRACE_TOKEN 2097152
#define MAX_CHAR_VAL 2097152
#define NULL_CS 2228225
#define HASH_BASE 2228226
#define FROZEN_CONTROL_SEQUENCE 2243226
#define FROZEN_PROTECTION 2243226
#define FROZEN_CR 2243227
#define FROZEN_END_GROUP 2243228
#define FROZEN_RIGHT 2243229
#define FROZEN_FI 2243230
#define FROZEN_END_TEMPLATE 2243231
#define FROZEN_ENDV 2243232
#define FROZEN_RELAX 2243233
#define END_WRITE 2243234
#define FROZEN_DONT_EXPAND 2243235
#define FROZEN_SPECIAL 2243236
#define FROZEN_PRIMITIVE 2243237
#define FROZEN_NULL_FONT 2243238
#define FONT_ID_BASE 2243238
#define UNDEFINED_CONTROL_SEQUENCE 2252239
#define GLUE_BASE 2252240
#define SKIP_BASE 2252259
#define MU_SKIP_BASE 2252515
#define LOCAL_BASE 2252771
#define TOKS_BASE 2252783
#define ETEX_PEN_BASE 2253039
#define BOX_BASE 2253043
#define ETEX_PENS 2253043
#define CUR_FONT_LOC 2253299
#define MATH_FONT_BASE 2253300
#define CAT_CODE_BASE 2254068
#define LC_CODE_BASE 3368180
#define LEFT_BRACE_LIMIT 4194304
#define RIGHT_BRACE_TOKEN 4194304
#define UC_CODE_BASE 4482292
#define SF_CODE_BASE 5596404
#define MATH_SHIFT_TOKEN 6291456
#define RIGHT_BRACE_LIMIT 6291456
#define MATH_CODE_BASE 6710516
#define CHAR_SUB_CODE_BASE 7824628
#define TAB_TOKEN 8388608
#define INT_BASE 8938740
#define ETEX_STATE_BASE 8938811
#define COUNT_BASE 8938824
#define DEL_CODE_BASE 8939080
#define DIMEN_BASE 10053192
#define SCALED_BASE 10053215
#define EQTB_SIZE 10053470
#define OUT_PARAM_TOKEN 10485760
#define SPACE_TOKEN 20971552
#define A_TOKEN 23068737
#define OTHER_TOKEN 25165824
#define HEX_TOKEN 25165858
#define OCTAL_TOKEN 25165863
#define CONTINENTAL_POINT_TOKEN 25165868
#define POINT_TOKEN 25165870
#define ZERO_TOKEN 25165872
#define OTHER_A_TOKEN 25165889
#define ALPHA_TOKEN 25165920
#define MATCH_TOKEN 27262976
#define END_MATCH_TOKEN 29360128
#define PROTECTED_TOKEN 29360129
#define CS_TOKEN_FLAG 33554431

#endif /* not TECTONIC_CONSTANTS_H */
