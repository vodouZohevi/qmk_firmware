#pragma once

// #define RGBLIGHT_ANIMATIONS    // Underglow animations. 
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGB_DI_PIN B2
#define RGBLED_NUM 40
#define RGBLIGHT_LIMIT_VAL	255
#define RGBLIGHT_HUE_STEP 10    // How much each press of rgb_hue changes hue
#define RGBLIGHT_SAT_STEP 17 // How much each press of rgb_sat changes sat
#define RGBLIGHT_VAL_STEP 17   // How much each press of rgb_val changes val

#ifdef AUDIO_ENABLE
    #define STARTUP_SONG SONG(PLANCK_SOUND)
    // #define STARTUP_SONG SONG(NO_SOUND)
#endif

/*
 * MIDI options
 */

/* Prevent use of disabled MIDI features in the keymap */
//#define MIDI_ENABLE_STRICT 1

/* enable basic MIDI features:
   - MIDI notes can be sent when in Music mode is on
*/

#define MIDI_BASIC

/* enable advanced MIDI features:
   - MIDI notes can be added to the keymap
   - Octave shift and transpose
   - Virtual sustain, portamento, and modulation wheel
   - etc.
*/
//#define MIDI_ADVANCED

/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */
//#define MIDI_TONE_KEYCODE_OCTAVES 2

// Most tactile encoders have detents every 4 stages
#define ENCODER_RESOLUTION 4

