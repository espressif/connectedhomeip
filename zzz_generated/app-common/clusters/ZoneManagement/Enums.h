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
namespace ZoneManagement {

// Enum for StatusCodeEnum
enum class StatusCodeEnum : uint8_t
{
    kZoneNotFound = 0x02,
    kZoneInUse    = 0x03,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 0,
};

// Enum for ZoneEventStoppedReasonEnum
enum class ZoneEventStoppedReasonEnum : uint8_t
{
    kActionStopped = 0x00,
    kTimeout       = 0x01,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 2,
};

// Enum for ZoneEventTriggeredReasonEnum
enum class ZoneEventTriggeredReasonEnum : uint8_t
{
    kMotion = 0x00,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 1,
};

// Enum for ZoneSourceEnum
enum class ZoneSourceEnum : uint8_t
{
    kMfg  = 0x00,
    kUser = 0x01,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 2,
};

// Enum for ZoneTypeEnum
enum class ZoneTypeEnum : uint8_t
{
    kTwoDCARTZone = 0x00,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 1,
};

// Enum for ZoneUseEnum
enum class ZoneUseEnum : uint8_t
{
    kMotion  = 0x00,
    kPrivacy = 0x01,
    kFocus   = 0x02,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 3,
};

// Bitmap for Feature
enum class Feature : uint32_t
{
    kTwoDimensionalCartesianZone = 0x1,
    kPerZoneSensitivity          = 0x2,
};
} // namespace ZoneManagement
} // namespace Clusters
} // namespace app
} // namespace chip
