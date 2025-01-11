#pragma once

#include <zephyr/bluetooth/uuid.h>

/* 
  Define an alternative BT Split Service UUID   [last byte: 0x2c]
  Main BT Split Service UUID retained unchanged [last byte: 0x2a]
*/
#define ZMK_BT_SPLIT_COMM_UUID(num) BT_UUID_128_ENCODE(num, 0x0096, 0x7107, 0xc967, 0xc5cfb1c2482b)

#define ZMK_SPLIT_BT_COMM_SERVICE_UUID ZMK_BT_SPLIT_COMM_UUID(0x00000000)
#define ZMK_SPLIT_BT_COMM_CHAR_OUTPUT_STATE_UUID ZMK_BT_SPLIT_COMM_UUID(0x00000001)