/**
 * @file    reelboard_nrf5x.c
 * @brief   board ID for the reel board
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2018 Phytec Messtechnik GmbH
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "virtual_fs.h"
#include "target_config.h"

const char *board_id = "OSHW";

// Override default behavior
//
// URL_NAME and DRIVE_NAME must be 11 characters excluding
// the null terminated character
// Note - 4 byte alignemnt required as workaround for ARMCC compiler bug with weak references
__attribute__((aligned(4)))
const vfs_filename_t daplink_url_name =       "PRODINFOHTM";
__attribute__((aligned(4)))
const vfs_filename_t daplink_drive_name =     "reel-board ";
__attribute__((aligned(4)))
const char *const daplink_target_url = "http://www.phytec.eu";

void prerun_board_config(void)
{
	extern target_cfg_t target_device_nrf52840;
	target_device = target_device_nrf52840;
}
