// Copyright 2017 The CRC32C Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file. See the AUTHORS file for names of contributors.

// ARM-specific code

#ifndef CRC32C_CRC32C_ARM_H_
#define CRC32C_CRC32C_ARM_H_

#include <cstddef>
#include <cstdint>

#include "crc32c/crc32c_config.h"

#if HAVE_ARM64_CRC32C

#if defined(_MSC_VER)
// MSVC ARM64: arm64_neon.h includes both NEON and ACLE intrinsics
#include <intrin.h>
#include <arm64_neon.h>
#else
// GCC/Clang: separate headers
#include <arm_acle.h>
#include <arm_neon.h>
#endif

namespace crc32c {

uint32_t ExtendArm64(uint32_t crc, const uint8_t* data, size_t count);

}  // namespace crc32c

#endif  // HAVE_ARM64_CRC32C

#endif  // CRC32C_CRC32C_ARM_H_
