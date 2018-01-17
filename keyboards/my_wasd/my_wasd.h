/* Copyright 2017 Dustin Boston
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef MY_WASD_H
#define MY_WASD_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
    k00,      k01, k02, k03, k04,   k05, k06, k07, k08,   k09, k0a, k0b, k0c,   k0d, k0e, k0f, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c,   k1d,     k1e, k1f, k1g, \
    k20,    k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c,   k2d,  k2e, k2f, k2g, \
    k30,       k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,  k3c,                    \
    k40,          k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a,   k4b,           k4c,      \
    k50, k51,  k52,                k53,                  k54, k55, k56, k57,    k58, k59, k5a  \
) { \
/*            0      1      2      3      4      5      6      7      8      9      A      B      C      D      E      F      G    */  \
/* 0 */     { k00,   KC_NO, k01,   k02,   k03,   k04,   KC_NO, k05,   k06,   k07,   k08,   k09,   k0a,   k0b,   k0c,   k0d,   k0e,   k0f   }, \
/* 1 */     { k10,   k11,   k12,   k13,   k14,   k15,   k16,   k17,   k18,   k19,   k1a,   k1b,   k1c,   k1d,   KC_NO, k1e,   k1f,   k1g   }, \
/* 2 */     { k20,   k21,   k22,   k23,   k24,   k25,   k26,   k27,   k28,   k29,   k2a,   k2b,   k2c,   k2d,   KC_NO, k2e,   k2f,   k2g   }, \
/* 3 */     { k30,   k31,   k32,   k33,   k34,   k35,   k36,   k37,   k38,   k39,   k3a,   k3b,   KC_NO, k3c,   KC_NO, KC_NO, KC_NO, KC_NO }, \
/* 4 */     { k40,   k41,   k42,   k43,   k44,   k45,   k46,   k47,   k48,   k49,   k4a,   KC_NO, KC_NO, k4b,   KC_NO, KC_NO, k4c,   KC_NO }, \
/* 5 */     { k50,   k51,   k52,   KC_NO, KC_NO, k53,   KC_NO, KC_NO, KC_NO, k54,   k55,   KC_NO, KC_NO, k56,   k57,   k58,   k59,   k5a   }  \
}

#endif
