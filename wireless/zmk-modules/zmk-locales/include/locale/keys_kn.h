/*
 * Localized Keys for Kannada
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

#define KN_SPACE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SPACEBAR))

/* ( */
#define KN_LEFT_PARENTHESIS (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))
#define KN_LPAR (KN_LEFT_PARENTHESIS)

/* ) */
#define KN_RIGHT_PARENTHESIS (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))
#define KN_RPAR (KN_RIGHT_PARENTHESIS)

/* , */
#define KN_COMMA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN))

/* - */
#define KN_MINUS (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE))

/* . */
#define KN_PERIOD (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN))
#define KN_DOT (KN_PERIOD)

/* 0 */
#define KN_N0 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS))

/* 1 */
#define KN_N1 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION))

/* 2 */
#define KN_N2 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT))

/* 3 */
#define KN_N3 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH))

/* 4 */
#define KN_N4 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR))

/* 5 */
#define KN_N5 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT))

/* 6 */
#define KN_N6 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET))

/* 7 */
#define KN_N7 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND))

/* 8 */
#define KN_N8 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK))

/* 9 */
#define KN_N9 (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS))

/* | */
#define KN_PIPE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_PERIOD_AND_GREATER_THAN)))

/* ಂ */
#define KN_KANNADA_ANUSVARA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_X))

/* ಃ */
#define KN_KANNADA_VISARGA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_MINUS_AND_UNDERSCORE)))

/* ಅ */
#define KN_KANNADA_A (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_D)))

/* ಆ */
#define KN_KANNADA_AA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E)))

/* ಇ */
#define KN_KANNADA_I (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_F)))

/* ಈ */
#define KN_KANNADA_II (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R)))

/* ಉ */
#define KN_KANNADA_U (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_G)))

/* ಊ */
#define KN_KANNADA_UU (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_T)))

/* ಋ */
#define KN_KANNADA_VOCALIC_R (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))

/* ಌ */
#define KN_KANNADA_VOCALIC_L (RA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_F))))

/* ಎ */
#define KN_KANNADA_E (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z)))

/* ಏ */
#define KN_KANNADA_EE (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S)))

/* ಐ */
#define KN_KANNADA_AI (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W)))

/* ಒ */
#define KN_KANNADA_O (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE)))

/* ಓ */
#define KN_KANNADA_OO (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A)))

/* ಔ */
#define KN_KANNADA_AU (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q)))

/* ಕ */
#define KN_KANNADA_KA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K))

/* ಖ */
#define KN_KANNADA_KHA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_K)))

/* ಗ */
#define KN_KANNADA_GA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I))

/* ಘ */
#define KN_KANNADA_GHA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_I)))

/* ಙ */
#define KN_KANNADA_NGA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U)))

/* ಚ */
#define KN_KANNADA_CA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON))

/* ಛ */
#define KN_KANNADA_CHA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SEMICOLON_AND_COLON)))

/* ಜ */
#define KN_KANNADA_JA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P))

/* ಝ */
#define KN_KANNADA_JHA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_P)))

/* ಞ */
#define KN_KANNADA_NYA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_RIGHT_BRACKET_AND_RIGHT_BRACE)))

/* ಟ */
#define KN_KANNADA_TTA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE))

/* ಠ */
#define KN_KANNADA_TTHA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_APOSTROPHE_AND_QUOTE)))

/* ಡ */
#define KN_KANNADA_DDA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE))

/* ಢ */
#define KN_KANNADA_DDHA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_LEFT_BRACKET_AND_LEFT_BRACE)))

/* ಣ */
#define KN_KANNADA_NNA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C)))

/* ತ */
#define KN_KANNADA_TA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L))

/* ಥ */
#define KN_KANNADA_THA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_L)))

/* ದ */
#define KN_KANNADA_DA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O))

/* ಧ */
#define KN_KANNADA_DHA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_O)))

/* ನ */
#define KN_KANNADA_NA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_V))

/* ಪ */
#define KN_KANNADA_PA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H))

/* ಫ */
#define KN_KANNADA_PHA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H)))

/* ಬ */
#define KN_KANNADA_BA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y))

/* ಭ */
#define KN_KANNADA_BHA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Y)))

/* ಮ */
#define KN_KANNADA_MA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_C))

/* ಯ */
#define KN_KANNADA_YA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_SLASH_AND_QUESTION_MARK))

/* ರ */
#define KN_KANNADA_RA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J))

/* ಱ */
#define KN_KANNADA_RRA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_J)))

/* ಲ */
#define KN_KANNADA_LA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N))

/* ಳ */
#define KN_KANNADA_LLA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_N)))

/* ವ */
#define KN_KANNADA_VA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_B))

/* ಶ */
#define KN_KANNADA_SHA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M)))

/* ಷ */
#define KN_KANNADA_SSA (LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_COMMA_AND_LESS_THAN)))

/* ಸ */
#define KN_KANNADA_SA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_M))

/* ಹ */
#define KN_KANNADA_HA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_U))

/* ಾ */
#define KN_KANNADA_VOWEL_AA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_E))

/* ಿ */
#define KN_KANNADA_VOWEL_I (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_F))

/* ೀ */
#define KN_KANNADA_VOWEL_II (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R))

/* ು */
#define KN_KANNADA_VOWEL_U (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_G))

/* ೂ */
#define KN_KANNADA_VOWEL_UU (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_T))

/* ೃ */
#define KN_KANNADA_VOWEL_VOCALIC_R (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS))

/* ೄ */
#define KN_KANNADA_VOWEL_VOCALIC_RR (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS)))

/* ೆ */
#define KN_KANNADA_VOWEL_E (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Z))

/* ೇ */
#define KN_KANNADA_VOWEL_EE (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S))

/* ೈ */
#define KN_KANNADA_VOWEL_AI (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W))

/* ೊ */
#define KN_KANNADA_VOWEL_O (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_GRAVE_ACCENT_AND_TILDE))

/* ೋ */
#define KN_KANNADA_VOWEL_OO (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_A))

/* ೌ */
#define KN_KANNADA_VOWEL_AU (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_Q))

/* ್ */
#define KN_KANNADA_VIRAMA (ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_D))

/* ೕ */
#define KN_KANNADA_LENGTH_MARK (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_S)))

/* ೖ */
#define KN_KANNADA_AI_LENGTH_MARK (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_W)))

/* ೞ */
#define KN_KANNADA_FA (RA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_H))))

/* ೠ */
#define KN_KANNADA_VOCALIC_RR (RA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_EQUAL_AND_PLUS))))

/* ೡ */
#define KN_KANNADA_VOCALIC_LL (RA(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_R))))

/* ೦ */
#define KN_KANNADA_ZERO (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_0_AND_RIGHT_PARENTHESIS)))

/* ೧ */
#define KN_KANNADA_ONE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION)))

/* ೨ */
#define KN_KANNADA_TWO (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT)))

/* ೩ */
#define KN_KANNADA_THREE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_3_AND_HASH)))

/* ೪ */
#define KN_KANNADA_FOUR (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR)))

/* ೫ */
#define KN_KANNADA_FIVE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_5_AND_PERCENT)))

/* ೬ */
#define KN_KANNADA_SIX (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_6_AND_CARET)))

/* ೭ */
#define KN_KANNADA_SEVEN (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_7_AND_AMPERSAND)))

/* ೮ */
#define KN_KANNADA_EIGHT (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_8_AND_ASTERISK)))

/* ೯ */
#define KN_KANNADA_NINE (RA(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_9_AND_LEFT_PARENTHESIS)))

#define KN_ZERO_WIDTH_NON_JOINER (LC(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_2_AND_AT))))

#define KN_ZERO_WIDTH_JOINER (LC(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_1_AND_EXCLAMATION))))

/* ₹ */
#define KN_INDIAN_RUPEE (LC(LS(ZMK_HID_USAGE(HID_USAGE_KEY, HID_USAGE_KEY_KEYBOARD_4_AND_DOLLAR))))
