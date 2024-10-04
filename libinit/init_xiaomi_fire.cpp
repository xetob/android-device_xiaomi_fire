/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>
#include <libinit_utils.h>
#include <unistd.h>

#include "vendor_init.h"

static const variant_info_t heat_info = {
    .hwc_value = "",
    .sku_value = "heat",

    .brand = "Redmi",
    .device = "heat",
    .marketname = "Redmi 12",
    .model = "23053RN02Y",
    .build_fingerprint = "Redmi/heat_global/heat:14/UP1A.231005.007/V816.0.1.0.UMXMIXM:user/release-keys"
};

static const variant_info_t fire_info = {
    .hwc_value = "",
    .sku_value = "fire",

    .brand = "Redmi",
    .device = "fire",
    .marketname = "Redmi 12",
    .model = "23053RN02A",
    .build_fingerprint = "Redmi/fire_global/fire:14/UP1A.231005.007/V816.0.1.0.UMXMIXM:user/release-keys"
};

static const variant_info_t fire_la_info = {
    .hwc_value = "",
    .sku_value = "fire_la",

    .brand = "Redmi",
    .device = "fire",
    .marketname = "Redmi 12",
    .model = "23053RN02L",
    .build_fingerprint = "Redmi/fire_global/fire:14/UP1A.231005.007/V816.0.1.0.UMXMIXM:user/release-keys"
};

static const variant_info_t fire_in_info = {
    .hwc_value = "",
    .sku_value = "fire_in",

    .brand = "Redmi",
    .device = "fire",
    .marketname = "Redmi 12",
    .model = "23053RN02I",
    .build_fingerprint = "Redmi/fire_global/fire:14/UP1A.231005.007/V816.0.1.0.UMXMIXM:user/release-keys"
};

static const std::vector<variant_info_t> variants = {
    heat_info,
    fire_info,
    fire_la_info,
    fire_in_info,
};

void vendor_load_properties() {
    if (access("/system/bin/recovery", F_OK) != 0) {
        search_variant(variants);
    }
}
