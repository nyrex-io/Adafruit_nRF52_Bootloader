#ifndef _WONDERBOARD_H
#define _WONDERBOARD_H

#define _PINNUM(port, pin)    ((port)*32 + (pin))

#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER       1
#define LED_PRIMARY_PIN   _PINNUM(0, 100) //P1.00
#define LED_STATE_ON      1

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER    1  // none connected at all
#define BUTTON_1          _PINNUM(0, 18)  // unusable: RESET
/*#define BUTTON_2          _PINNUM(0, 19)  // no connection*/
#define BUTTON_PULL       NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER  "NYREX"
#define BLEDIS_MODEL         "Wonderboard"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID           0x239A
#define USB_DESC_UF2_PID       0x00B3
#define USB_DESC_CDC_ONLY_PID  0x00B3

#define UF2_PRODUCT_NAME  "Wonderboard"
#define UF2_VOLUME_LABEL  "WONDERBOARD"
#define UF2_BOARD_ID      "nRF52840-wonderboard"
#define UF2_INDEX_URL     "https://nyrex.io"

#endif 
