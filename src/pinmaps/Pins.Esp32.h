// -------------------------------------------------------------------------------------------------
// pinmap for ESP32
#pragma once

#if defined(ESP32)
  // ESP32-C3 (e.g. XIAO ESP32-C3): valid GPIO = 2..10, 20, 21
  // GPIO6=SDA, GPIO7=SCL (I2C display), GPIO20/21=USB — avoid these for buttons
  // Override any of these in Config.h with e.g. #define B_PIN1 3
  #ifdef CONFIG_IDF_TARGET_ESP32C3
    #ifndef B_PIN0
    #define B_PIN0            D10  // Shift
    #endif
    #ifndef B_PIN1
    #define B_PIN1             D1  // N
    #endif
    #ifndef B_PIN2
    #define B_PIN2             D2  // S
    #endif
    #ifndef B_PIN3
    #define B_PIN3             D0  // E
    #endif
    #ifndef B_PIN4
    #define B_PIN4             D3  // W
    #endif
    #ifndef B_PIN5
    #define B_PIN5             D8  // F
    #endif
    #ifndef B_PIN6
    #define B_PIN6             D7  // f
    #endif
  #elif KEYPAD_JOYSTICK_ANALOG == JS1
    #ifndef B_PIN0
    #define B_PIN0             25  // Shift
    #endif
    #ifndef B_PIN1
    #define B_PIN1             33  // N
    #endif
    #ifndef B_PIN2
    #define B_PIN2             33  // S
    #endif
    #ifndef B_PIN3
    #define B_PIN3             32  // E
    #endif
    #ifndef B_PIN4
    #define B_PIN4             32  // W
    #endif
    #ifndef B_PIN5
    #define B_PIN5             34  // F
    #endif
    #ifndef B_PIN6
    #define B_PIN6             35  // f
    #endif
  #else
    #ifndef B_PIN0
    #define B_PIN0             33  // Shift
    #endif
    #ifndef B_PIN1
    #define B_PIN1             25  // N
    #endif
    #ifndef B_PIN2
    #define B_PIN2             32  // S
    #endif
    #ifndef B_PIN3
    #define B_PIN3             36  // E
    #endif
    #ifndef B_PIN4
    #define B_PIN4             34  // W
    #endif
    #ifndef B_PIN5
    #define B_PIN5             39  // F
    #endif
    #ifndef B_PIN6
    #define B_PIN6             35  // f
    #endif
  #endif

  #define ST4_W_PIN            23  // ST4 (OnStep) RA- West,  send data to OnStep
  #define ST4_S_PIN            14  // ST4 (OnStep) DE- South, clock input to ISR
  #define ST4_N_PIN            27  // ST4 (OnStep) DE+ North, recv data from OnStep
  #define ST4_E_PIN            26  // ST4 (OnStep) RA+ East,  always 12.5 Hz square wave on this pin

  #if ST4_AUX_INTERFACE == ON
    #define ST4_AUX_W_PIN      19  // ST4 (Aux) RA- West
    #define ST4_AUX_S_PIN      18  // ST4 (Aux) DE- South
    #define ST4_AUX_N_PIN      17  // ST4 (Aux) DE+ North
    #define ST4_AUX_E_PIN      5   // ST4 (Aux) RA+ East
  #endif

  #ifndef UTILITY_LIGHT_PIN
    #define UTILITY_LIGHT_PIN  13  // GPIO13 used as PWM output to drive utility lamp LED
  #endif

  #ifndef DISPLAY_RESET_PIN
    #define DISPLAY_RESET_PIN    16  // GPIO16 used to reset some displays, i.e. the SSD1309
  #endif
#endif
