/*
 * Localized Keys for Italian
 *
 * This file was generated from data with the following license:
 *
 * UNICODE, INC. LICENSE AGREEMENT - DATA FILES AND SOFTWARE
 *
 * See Terms of Use <https://www.unicode.org/copyright.html>
 * for definitions of Unicode Inc.’s Data Files and Software.
 *
 * NOTICE TO USER: Carefully read the following legal agreement.
 * BY DOWNLOADING, INSTALLING, COPYING OR OTHERWISE USING UNICODE INC.'S
 * DATA FILES ("DATA FILES"), AND/OR SOFTWARE ("SOFTWARE"),
 * YOU UNEQUIVOCALLY ACCEPT, AND AGREE TO BE BOUND BY, ALL OF THE
 * TERMS AND CONDITIONS OF THIS AGREEMENT.
 * IF YOU DO NOT AGREE, DO NOT DOWNLOAD, INSTALL, COPY, DISTRIBUTE OR USE
 * THE DATA FILES OR SOFTWARE.
 *
 * COPYRIGHT AND PERMISSION NOTICE
 *
 * Copyright © 1991-2023 Unicode, Inc. All rights reserved.
 * Distributed under the Terms of Use in https://www.unicode.org/copyright.html.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of the Unicode data files and any associated documentation
 * (the "Data Files") or Unicode software and any associated documentation
 * (the "Software") to deal in the Data Files or Software
 * without restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, and/or sell copies of
 * the Data Files or Software, and to permit persons to whom the Data Files
 * or Software are furnished to do so, provided that either
 * (a) this copyright and permission notice appear with all copies
 * of the Data Files or Software, or
 * (b) this copyright and permission notice appear in associated
 * Documentation.
 *
 * THE DATA FILES AND SOFTWARE ARE PROVIDED "AS IS", WITHOUT WARRANTY OF
 * ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT OF THIRD PARTY RIGHTS.
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER OR HOLDERS INCLUDED IN THIS
 * NOTICE BE LIABLE FOR ANY CLAIM, OR ANY SPECIAL INDIRECT OR CONSEQUENTIAL
 * DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THE DATA FILES OR SOFTWARE.
 *
 * Except as contained in this notice, the name of a copyright holder
 * shall not be used in advertising or otherwise to promote the sale,
 * use or other dealings in these Data Files or Software without prior
 * written authorization of the copyright holder.
 */

#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>

#define IT_ESCAPE_CHARACTER                                                    \
  (LC(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))

#define IT_FILE_SEPARATOR                                                      \
  (LC(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))

#define IT_GROUP_SEPARATOR                                                     \
  (LC(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))

#define IT_SPACE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SPACEBAR))

/* ! */
#define IT_EXCLAMATION                                                         \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)))
#define IT_EXCL (IT_EXCLAMATION)

/* " */
#define IT_DOUBLE_QUOTES                                                       \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))
#define IT_DQT (IT_DOUBLE_QUOTES)

/* # */
#define IT_HASH                                                                \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)))
#define IT_POUND (IT_HASH)

/* $ */
#define IT_DOLLAR                                                              \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))
#define IT_DLLR (IT_DOLLAR)

/* % */
#define IT_PERCENT                                                             \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
#define IT_PRCNT (IT_PERCENT)

/* & */
#define IT_AMPERSAND                                                           \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))
#define IT_AMPS (IT_AMPERSAND)

/* ' */
#define IT_SINGLE_QUOTE                                                        \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE))
#define IT_SQT (IT_SINGLE_QUOTE)
#define IT_APOSTROPHE (IT_SINGLE_QUOTE)
#define IT_APOS (IT_SINGLE_QUOTE)

/* ( */
#define IT_LEFT_PARENTHESIS                                                    \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))
#define IT_LPAR (IT_LEFT_PARENTHESIS)

/* ) */
#define IT_RIGHT_PARENTHESIS                                                   \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define IT_RPAR (IT_RIGHT_PARENTHESIS)

/* * */
#define IT_ASTERISK                                                            \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))
#define IT_ASTRK (IT_ASTERISK)
#define IT_STAR (IT_ASTERISK)

/* + */
#define IT_PLUS                                                                \
  (ZMK_HID_USAGE(HID_USAGE_KEY,                                                \
                 HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))

/* , */
#define IT_COMMA                                                               \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN))

/* - */
#define IT_MINUS                                                               \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))

/* . */
#define IT_PERIOD                                                              \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN))
#define IT_DOT (IT_PERIOD)

/* / */
#define IT_SLASH                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))
#define IT_FSLH (IT_SLASH)

/* 0 */
#define IT_N0                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS))

/* 1 */
#define IT_N1                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION))

/* 2 */
#define IT_N2 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT))

/* 3 */
#define IT_N3 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH))

/* 4 */
#define IT_N4                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR))

/* 5 */
#define IT_N5                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT))

/* 6 */
#define IT_N6 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET))

/* 7 */
#define IT_N7                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND))

/* 8 */
#define IT_N8                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK))

/* 9 */
#define IT_N9                                                                  \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS))

/* : */
#define IT_COLON                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))

/* ; */
#define IT_SEMICOLON                                                           \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))
#define IT_SEMI (IT_SEMICOLON)

/* < */
#define IT_LESS_THAN                                                           \
  (ZMK_HID_USAGE(HID_USAGE_KEY,                                                \
                 HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE))
#define IT_LT (IT_LESS_THAN)

/* = */
#define IT_EQUAL                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))

/* > */
#define IT_GREATER_THAN                                                        \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_NON_US_BACKSLASH_AND_PIPE)))
#define IT_GT (IT_GREATER_THAN)

/* ? */
#define IT_QUESTION                                                            \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define IT_QMARK (IT_QUESTION)

/* @ */
#define IT_AT_SIGN                                                             \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON)))
#define IT_AT (IT_AT_SIGN)

/* ~ */
#define IT_TILDE                                                               \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))
#define IT_TIL (IT_TILDE)

#define IT_BACKTICK                                                            \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))
#define IT_BKT (IT_BACKTICK)

/* [ */
#define IT_LEFT_BRACKET                                                        \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))
#define IT_LBKT (IT_LEFT_BRACKET)

/* \ */
#define IT_BACKSLASH                                                           \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE))
#define IT_BSLH (IT_BACKSLASH)

/* ] */
#define IT_RIGHT_BRACKET                                                       \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))
#define IT_RBKT (IT_RIGHT_BRACKET)

/* ^ */
#define IT_CARET                                                               \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))

/* _ */
#define IT_UNDERSCORE                                                          \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK)))
#define IT_UNDER (IT_UNDERSCORE)

/* a */
#define IT_A (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A))

/* b */
#define IT_B (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_B))

/* c */
#define IT_C (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C))

/* d */
#define IT_D (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_D))

/* e */
#define IT_E (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E))

/* f */
#define IT_F (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_F))

/* g */
#define IT_G (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_G))

/* h */
#define IT_H (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H))

/* i */
#define IT_I (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I))

/* j */
#define IT_J (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J))

/* k */
#define IT_K (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K))

/* l */
#define IT_L (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L))

/* m */
#define IT_M (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M))

/* n */
#define IT_N (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N))

/* o */
#define IT_O (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O))

/* p */
#define IT_P (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P))

/* q */
#define IT_Q (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q))

/* r */
#define IT_R (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R))

/* s */
#define IT_S (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S))

/* t */
#define IT_T (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_T))

/* u */
#define IT_U (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U))

/* v */
#define IT_V (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_V))

/* w */
#define IT_W (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W))

/* x */
#define IT_X (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X))

/* y */
#define IT_Y (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y))

/* z */
#define IT_Z (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z))

/* { */
#define IT_LEFT_BRACE                                                          \
  (LS(RA(ZMK_HID_USAGE(HID_USAGE_KEY,                                          \
                       HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))))
#define IT_LBRC (IT_LEFT_BRACE)

/* | */
#define IT_PIPE                                                                \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))

/* } */
#define IT_RIGHT_BRACE                                                         \
  (LS(RA(ZMK_HID_USAGE(                                                        \
      HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE))))
#define IT_RBRC (IT_RIGHT_BRACE)

/* £ */
#define IT_POUND_SIGN                                                          \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))

/* § */
#define IT_SECTION                                                             \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE)))
#define IT_SECT (IT_SECTION)

/* ° */
#define IT_DEGREE                                                              \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)))
#define IT_DEG (IT_DEGREE)

/* à */
#define IT_A_GRAVE                                                             \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE))

/* ç */
#define IT_C_CEDILLA                                                           \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON)))

/* è */
#define IT_E_GRAVE                                                             \
  (ZMK_HID_USAGE(HID_USAGE_KEY,                                                \
                 HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))

/* é */
#define IT_E_ACUTE                                                             \
  (LS(ZMK_HID_USAGE(HID_USAGE_KEY,                                             \
                    HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))

/* ì */
#define IT_I_GRAVE                                                             \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS))

/* ò */
#define IT_O_GRAVE                                                             \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON))

/* ù */
#define IT_U_GRAVE                                                             \
  (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_BACKSLASH_AND_PIPE))

/* € */
#define IT_EURO                                                                \
  (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))
