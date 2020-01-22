#ifndef REV2_H
#define REV2_H

#include "dactyl_manuform.h"

//void promicro_bootloader_jmp(bool program);
#include "quantum.h"


#ifdef USE_I2C
#include <stddef.h>
#ifdef __AVR__
	#include <avr/io.h>
	#include <avr/interrupt.h>
#endif
#endif

//void promicro_bootloader_jmp(bool program);

#ifndef FLIP_HALF
#define LAYOUT( \
	L00, L01, L02, L03, L04, L05,                     R00, R01, R02, R03, R04, R05, \
	L10, L11, L12, L13, L14, L15,                     R10, R11, R12, R13, R14, R15, \
	L20, L21, L22, L23, L24, L25,                     R20, R21, R22, R23, R24, R25,\
	L30, L31, L32, L33, L34, L35,                     R30, R31, R32, R33, R34, R35,\
	L40, L41, L42, L43, L44, L45,                     R40, R41, R42, R43, R44, R45,\
	     L51, L52,                                         R51, R52,      \
                       L53,                           R53,                 \
                                 L64, L63, R61, R60,                          \
                                 L62, L61, R63, R62                           \
	) \
	{ \
		{ L00, L01, L02, L03, L04, L05 }, \
		{ L10, L11, L12, L13, L14, L15 }, \
		{ L20, L21, L22, L23, L24, L25 }, \
		{ L30, L31, L32, L33, L34, L35 }, \
		{ L40, L41, L42, L43, L44, L45 }, \
		{ KC_NO, KC_NO, L51, L52, L53, KC_NO }, \
		{ KC_NO, KC_NO, L61, L62, L63, L64 }, \
		{ R05, R04, R03, R02, R01, R00 },    \
		{ R15, R14, R13, R12, R11, R10 },    \
		{ R25, R24, R23, R22, R21, R20 },    \
		{ R35, R34, R33, R32, R31, R30 },    \
		{ R45, R44, R43, R42, R41, R40 },    \
		{ KC_NO, KC_NO, R52, R51, R53, KC_NO },  \
		{ KC_NO, KC_NO, R60, R61, R62, R63 }  \
	}
#else
#define LAYOUT( \
	L00, L01, L02, L03, L04,                     R00, R01, R02, R03, R04, \
	L10, L11, L12, L13, L14,                     R10, R11, R12, R13, R14, \
	L20, L21, L22, L23, L24,                     R20, R21, R22, R23, R24, \
	     L31, L32,                                         R32, R33,      \
                       L33, L34,                     R30, R31,                \
                                 L44, L43, R41, R40,                          \
                                 L42, L41, R43, R42                           \
	) \
	{ \
		{ R04, R03, R02, R01, R00 },    \
		{ R14, R13, R12, R11, R10 },    \
		{ R24, R23, R22, R21, R20 },    \
		{ KC_NO, R33, R32, R31, R30 },  \
		{ KC_NO, R43, R42, R41, R40 },  \
\
		{ L00, L01, L02, L03, L04 }, \
		{ L10, L11, L12, L13, L14 }, \
		{ L20, L21, L22, L23, L24 }, \
		{ KC_NO, L31, L32, L33, L34 }, \
		{ KC_NO, L41, L42, L43, L44  }  \
\
	}
#endif

#endif
