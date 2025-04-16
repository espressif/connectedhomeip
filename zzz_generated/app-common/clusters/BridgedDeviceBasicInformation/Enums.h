/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP
#pragma once

#include <clusters/shared/Enums.h>
#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace BridgedDeviceBasicInformation {

// Enum for ColorEnum
enum class ColorEnum : uint8_t
{
    kBlack   = 0x00,
    kNavy    = 0x01,
    kGreen   = 0x02,
    kTeal    = 0x03,
    kMaroon  = 0x04,
    kPurple  = 0x05,
    kOlive   = 0x06,
    kGray    = 0x07,
    kBlue    = 0x08,
    kLime    = 0x09,
    kAqua    = 0x0A,
    kRed     = 0x0B,
    kFuchsia = 0x0C,
    kYellow  = 0x0D,
    kWhite   = 0x0E,
    kNickel  = 0x0F,
    kChrome  = 0x10,
    kBrass   = 0x11,
    kCopper  = 0x12,
    kSilver  = 0x13,
    kGold    = 0x14,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 21,
};

// Enum for ProductFinishEnum
enum class ProductFinishEnum : uint8_t
{
    kOther    = 0x00,
    kMatte    = 0x01,
    kSatin    = 0x02,
    kPolished = 0x03,
    kRugged   = 0x04,
    kFabric   = 0x05,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 6,
};

// Bitmap for Feature
enum class Feature : uint32_t
{
    kBridgedICDSupport = 0x100000,
};
} // namespace BridgedDeviceBasicInformation
} // namespace Clusters
} // namespace app
} // namespace chip
