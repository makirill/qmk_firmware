#pragma once

#define TAPPING_TERM 175

#ifdef RGB_MATRIX_ENABLE
    #undef RGB_DISABLE_AFTER_TIMEOUT
    #define RGB_DISABLE_AFTER_TIMEOUT 900000     // 15 minutes (15 * 60 * 1000ms)
    // Effects
    //#define RGB_MATRIX_FRAMEBUFFER_EFFECTS  // Heatmap, Rain

    #undef RGB_MATRIX_DEFAULT_MODE
    #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
#endif // RGB_MATRIX_ENABLE