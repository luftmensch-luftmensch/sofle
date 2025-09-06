// clang-format off
/*
 * helpers.h
 *
 * Convenience macros simplifying ZMK's keymap configuration.
 */
#pragma once

#define ZMK_HELPER_STRINGIFY(x) #x

// Preprocessor mechanism to overload macros, cf. https://stackoverflow.com/a/27051616/6114651
#define VARGS_(_10, _9, _8, _7, _6, _5, _4, _3, _2, _1, N, ...) N
#define VARGS(...) VARGS_(__VA_ARGS__, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0)
#define CONCAT_(a, b) a##b
#define CONCAT(a, b) CONCAT_(a, b)


// Handy rgb related definition
#define U_RGB_OFF   &rgb_ug RGB_OFF
#define U_RGB_ON    &rgb_ug RGB_ON
#define U_RGB_TOG   &rgb_ug RGB_TOG
#define U_RGB_EFF   &rgb_ug RGB_EFF
#define U_RGB_EFR   &rgb_ug RGB_EFR
#define U_RGB_SPI   &rgb_ug RGB_SPI
#define U_RGB_SPD   &rgb_ug RGB_SPD
#define U_RGB_BRD   &rgb_ug RGB_BRD
#define U_RGB_BRI   &rgb_ug RGB_BRI

/* ZMK_BEHAVIOR */

#define ZMK_BEHAVIOR_CORE_adaptive_key      compatible = "zmk,behavior-adaptive-key";      #binding-cells         = <0>
#define ZMK_BEHAVIOR_CORE_auto_layer        compatible = "zmk,behavior-auto-layer";        #binding-cells         = <1>
#define ZMK_BEHAVIOR_CORE_caps_word         compatible = "zmk,behavior-caps-word";         #binding-cells         = <0>
#define ZMK_BEHAVIOR_CORE_dynamic_macro     compatible = "zmk,behavior-dynamic-macro";     #binding-cells         = <1>
#define ZMK_BEHAVIOR_CORE_hold_tap          compatible = "zmk,behavior-hold-tap";          #binding-cells         = <2>
#define ZMK_BEHAVIOR_CORE_key_repeat        compatible = "zmk,behavior-key-repeat";        #binding-cells         = <0>
#define ZMK_BEHAVIOR_CORE_macro             compatible = "zmk,behavior-macro";             #binding-cells         = <0>
#define ZMK_BEHAVIOR_CORE_macro_one_param   compatible = "zmk,behavior-macro-one-param";   #binding-cells         = <1>
#define ZMK_BEHAVIOR_CORE_macro_two_param   compatible = "zmk,behavior-macro-two-param";   #binding-cells         = <2>
#define ZMK_BEHAVIOR_CORE_mod_morph         compatible = "zmk,behavior-mod-morph";         #binding-cells         = <0>
#define ZMK_BEHAVIOR_CORE_sticky_key        compatible = "zmk,behavior-sticky-key";        #binding-cells         = <1>
#define ZMK_BEHAVIOR_CORE_tap_dance         compatible = "zmk,behavior-tap-dance";         #binding-cells         = <0>
#define ZMK_BEHAVIOR_CORE_tri_state         compatible = "zmk,behavior-tri-state";         #binding-cells         = <0>
#define ZMK_BEHAVIOR_CORE_rotator_encoder   compatible = "zmk,behavior-sensor-rotate";     #sensor-binding-cells  = <0>

#define ZMK_BEHAVIOR(name, type, ...) \
    / { \
        behaviors { \
            name: name { \
                ZMK_BEHAVIOR_CORE_ ## type; \
                __VA_ARGS__ \
            }; \
        }; \
    };

#define ZMK_ADAPTIVE_KEY(name, ...) ZMK_BEHAVIOR(name, adaptive_key, __VA_ARGS__)
#define ZMK_AUTO_LAYER(name, ...) ZMK_BEHAVIOR(name, auto_layer, __VA_ARGS__)
#define ZMK_CAPS_WORD(name, ...) ZMK_BEHAVIOR(name, caps_word, __VA_ARGS__)
#define ZMK_HOLD_TAP(name, ...) ZMK_BEHAVIOR(name, hold_tap, __VA_ARGS__)
#define ZMK_KEY_REPEAT(name, ...) ZMK_BEHAVIOR(name, key_repeat, __VA_ARGS__)
#if ZMK_HELPERS_KEEP_NATIVE != 1
    #undef ZMK_MACRO
    #define ZMK_MACRO(name, ...) ZMK_BEHAVIOR(name, macro, __VA_ARGS__)
#endif
#define ZMK_MACRO_ONE_PARAM(name, ...) ZMK_BEHAVIOR(name, macro_one_param, __VA_ARGS__)
#define ZMK_MACRO_TWO_PARAM(name, ...) ZMK_BEHAVIOR(name, macro_two_param, __VA_ARGS__)
#define ZMK_MOD_MORPH(name, ...) ZMK_BEHAVIOR(name, mod_morph, __VA_ARGS__)
#define ZMK_STICKY_KEY(name, ...) ZMK_BEHAVIOR(name, sticky_key, __VA_ARGS__)
#define ZMK_TAP_DANCE(name, ...) ZMK_BEHAVIOR(name, tap_dance, __VA_ARGS__)
#define ZMK_TRI_STATE(name, ...) ZMK_BEHAVIOR(name, tri_state, __VA_ARGS__)
#define ZMK_ROTATOR_ENCODER(name, ...) ZMK_BEHAVIOR(name, rotator_encoder, __VA_ARGS__)

// #define BT_PROFILE(ID)                                          \
//   bt_profile_##ID: bt_profile_##ID {                            \
//     compatible = "zmk,behavior-macro";                          \
//     #binding-cells = <0>;                                       \
//     bindings = <&out OUT_BLE>, <&bt BT_SEL ID>;                 \
//   };

/* ZMK_LAYER */
#define ZMK_LAYER(...) CONCAT(ZMK_LAYER_, VARGS(__VA_ARGS__))(__VA_ARGS__)
#define ZMK_LAYER_2(_name, layout) \
    / { \
        keymap { \
            compatible = "zmk,keymap"; \
            layer_ ## _name { \
                display-name = ZMK_HELPER_STRINGIFY(_name); \
                bindings = <layout>; \
            }; \
        }; \
    };
#define ZMK_LAYER_3(_name, layout, sensors) \
    / { \
        keymap { \
            compatible = "zmk,keymap"; \
            layer_ ## _name { \
                display-name = ZMK_HELPER_STRINGIFY(_name); \
                bindings = <layout>; \
                sensor-bindings = <sensors>; \
            }; \
        }; \
    };

/* ZMK_COMBOS */
#define ALL 0xff
#if !defined COMBO_TERM
    #define COMBO_TERM 30
#endif

#define ZMK_COMBO(...) CONCAT(ZMK_COMBO_, VARGS(__VA_ARGS__))(__VA_ARGS__)
#define ZMK_COMBO_3(name, combo_bindings, keypos) \
    ZMK_COMBO_4(name, combo_bindings, keypos, ALL)
#define ZMK_COMBO_4(name, combo_bindings, keypos, combo_layers) \
    ZMK_COMBO_5(name, combo_bindings, keypos, combo_layers, COMBO_TERM)
#define ZMK_COMBO_5(name, combo_bindings, keypos, combo_layers, combo_timeout) \
    ZMK_COMBO_6(name, combo_bindings, keypos, combo_layers, combo_timeout, 0)
#define ZMK_COMBO_6(name, combo_bindings, keypos, combo_layers, combo_timeout, combo_idle) \
    ZMK_COMBO_7(name, combo_bindings, keypos, combo_layers, combo_timeout, combo_idle, )
#define ZMK_COMBO_7(name, combo_bindings, keypos, combo_layers, combo_timeout, combo_idle, combo_vaargs) \
    / { \
        combos { \
            compatible = "zmk,combos"; \
            combo_ ## name { \
                timeout-ms = <combo_timeout>; \
                bindings = <combo_bindings>; \
                key-positions = <keypos>; \
                layers = <combo_layers>; \
                require-prior-idle-ms = <combo_idle>; \
                combo_vaargs \
            }; \
        }; \
    };

/* ZMK_LEADER_SEQUENCE */
#define ZMK_LEADER_SEQUENCE(...) CONCAT(ZMK_LEADER_SEQUENCE_, VARGS(__VA_ARGS__))(__VA_ARGS__)
#define ZMK_LEADER_SEQUENCE_3(name, leader_bindings, sequence) \
    / { \
        leader_sequences { \
            compatible = "zmk,leader-sequences"; \
            leader_sequence_ ## name { \
                bindings = <leader_bindings>; \
                key-positions = <sequence>; \
            }; \
        }; \
    };
#define ZMK_LEADER_SEQUENCE_4(name, leader_bindings, sequence, leader_layers) \
    ZMK_LEADER_SEQUENCE_5(name, leader_bindings, sequence, leader_layers, )
#define ZMK_LEADER_SEQUENCE_5(name, leader_bindings, sequence, leader_layers, leader_vaargs) \
    / { \
        leader_sequences { \
            compatible = "zmk,leader-sequences"; \
            leader_sequence_ ## name { \
                bindings = <leader_bindings>; \
                key-positions = <sequence>; \
                layers = <leader_layers>; \
                leader_vaargs \
            }; \
        }; \
    };

/* ZMK_CONDITIONAL_LAYER */
#define ZMK_CONDITIONAL_LAYER(name, if_layers, then_layer) \
    / { \
        conditional_layers { \
            compatible = "zmk,conditional-layers"; \
            tri_layer_ ## name { \
                if-layers = <if_layers>; \
                then-layer = <then_layer>; \
            }; \
        }; \
    };
