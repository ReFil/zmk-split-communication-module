/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <zephyr/kernel.h>

#define ZMK_SPLIT_EXTRA_COMMUNICATION_MAX_LEN 16

enum data_tag {
    // RGB state
    DATA_TAG_RGB_STATE,
    // Backlight state
    DATA_TAG_BACKLIGHT_STATE,
    // HID indicators state
    DATA_TAG_HID_INDICATORS_STATE,
    // Keymap state
    DATA_TAG_KEYMAP_STATE,
    // Start of custom tags
    DATA_TAG_CUSTOM_START,
};

struct zmk_split_extra_communication_data {
    enum data_tag data_tag;
    uint8_t data_size;
    uint8_t data[ZMK_SPLIT_EXTRA_COMMUNICATION_MAX_LEN];
} __packed;