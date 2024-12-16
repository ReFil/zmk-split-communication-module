/*
 * Copyright (c) 2024 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <zmk/split_extra_communication/service.h>


int zmk_split_extra_communication_send_data(enum data_tag, uint8_t data_size, uint8_t *data);