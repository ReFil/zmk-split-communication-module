/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#pragma once

#include <zephyr/kernel.h>
#include <zmk/event_manager.h>
#include <zmk/split_extra_communication/service.h>

struct zmk_split_extra_communication_event {
    struct zmk_split_extra_communication_data data_xfer;
};

ZMK_EVENT_DECLARE(zmk_split_extra_communication_event);