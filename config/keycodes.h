/**
 * This file includes custom keycodes for the italian input language setting.
 * For any customization use the qmk version as reference:
 * https://github.com/qmk/qmk_firmware/tree/master/quantum/keymap_extras
 */

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ \ │   │   │   │   │   │   │   │   │   │   │ ' │ ì │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ è │ + │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ ò │ à │ ù │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │   │   │   │   │   │   │   │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define IT_BSLH GRAVE  // backslash
#define IT_SQUOT MINUS // '
#define IT_IGRV EQUAL  // ì
// Row 2
#define IT_EGRV LBKT // è
#define IT_PLUS RBKT // +
// Row 3
#define IT_OGRV SEMI        // ò
#define IT_AGRV APOS        // à
#define IT_UGRV NON_US_HASH // ù
// Row 4
#define IT_LESS NON_US_BSLH // <
#define IT_MINUS SLASH      // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ | │ ! │ " │ £ │ $ │ % │ & │ / │ ( │ ) │ = │ ? │ ^ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ é │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ ç │ ° │ § │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define IT_PIPE LS(GRAVE)  // |
#define IT_EXCL LS(N1)     // !
#define IT_DQUOT LS(N2)    // "
#define IT_PND LS(N3)      // £
#define IT_USD LS(N4)      // $
#define IT_PERC LS(N5)     // %
#define IT_AND LS(N6)      // &
#define IT_FSLH LS(N7)     // /
#define IT_LPAR LS(N8)     // (
#define IT_RPAR LS(N9)     // )
#define IT_EQL LS(N0)      // =
#define IT_QUES LS(MINUS)  // ?
#define IT_CARET LS(EQUAL) // ^
// Row 2
#define IT_EACU LS(LBKT) // é
#define IT_AST LS(RBKT)  // *
// Row 3
#define IT_CCED LS(SEMI)        // ç
#define IT_DEG LS(APOS)         // °
#define IT_SECT LS(NON_US_HASH) // §
// Row 4
#define IT_GREAT LS(NON_US_BSLH) // >
#define IT_UNDER LS(SLASH)       // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │ € │   │   │   │   │   │   │   │ [ │ ] │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │ @ │ # │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 2
#define IT_EUR RA(E)     // €
#define IT_LBKT RA(LBKT) // [
#define IT_RBKT RA(RBKT) // ]
// Row 3
#define IT_AT RA(SEMI)   // @
#define IT_HASH RA(APOS) // #

/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │   │   │   │   │   │   │   │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ { │ } │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 2
#define IT_LBRC LS(RA(LBKT)) // {
#define IT_RBRC LS(RA(RBKT)) // }

/**
 * Personalized symbols.
 *
 * These symbols are not part of the default italian input.
 * I use a custom windows keymap to input them.
 */
#define IT_BKTK RA(MINUS)  // `
#define IT_TILDE RA(EQUAL) // ~
#define IT_CEGR RA(LS(E))  // È
//

/**
 * Windows related alt codes table symbols
 */
#define WIN_AT &kp KP_N0 &kp KP_N6 &kp KP_N4              // Alt+64 (@)
#define WIN_HASH &kp KP_N0 &kp KP_N3 &kp KP_N5            // Alt+35 (#)
#define WIN_TILDE &kp KP_N0 &kp KP_N1 &kp KP_N2 &kp KP_N6 // Alt+126 (~)
#define WIN_BKTK &kp KP_N0 &kp KP_N9 &kp KP_N6            // Alt+96 (`)

#define WIN_LBKT &kp KP_N0 &kp KP_N9 &kp KP_N1 // Alt+91 ([)
#define WIN_RBKT &kp KP_N0 &kp KP_N9 &kp KP_N3 // Alt+93 (])

#define WIN_LBRC &kp NP_N0 &kp KP_N1 &kp KP_N2 &kp KP_N3 // Alt+123 ({)
#define WIN_RBRC &kp NP_N0 &kp KP_N1 &kp KP_N2 &kp KP_N5 // Alt+125 (})
