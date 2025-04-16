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
namespace IcdManagement {

// Enum for ClientTypeEnum
enum class ClientTypeEnum : uint8_t
{
    kPermanent = 0x00,
    kEphemeral = 0x01,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 2,
};

// Enum for OperatingModeEnum
enum class OperatingModeEnum : uint8_t
{
    kSit = 0x00,
    kLit = 0x01,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 2,
};

// Bitmap for Feature
enum class Feature : uint32_t
{
    kCheckInProtocolSupport = 0x1,
    kUserActiveModeTrigger  = 0x2,
    kLongIdleTimeSupport    = 0x4,
    kDynamicSitLitSupport   = 0x8,
};

// Bitmap for UserActiveModeTriggerBitmap
enum class UserActiveModeTriggerBitmap : uint32_t
{
    kPowerCycle               = 0x1,
    kSettingsMenu             = 0x2,
    kCustomInstruction        = 0x4,
    kDeviceManual             = 0x8,
    kActuateSensor            = 0x10,
    kActuateSensorSeconds     = 0x20,
    kActuateSensorTimes       = 0x40,
    kActuateSensorLightsBlink = 0x80,
    kResetButton              = 0x100,
    kResetButtonLightsBlink   = 0x200,
    kResetButtonSeconds       = 0x400,
    kResetButtonTimes         = 0x800,
    kSetupButton              = 0x1000,
    kSetupButtonSeconds       = 0x2000,
    kSetupButtonLightsBlink   = 0x4000,
    kSetupButtonTimes         = 0x8000,
    kAppDefinedButton         = 0x10000,
};
} // namespace IcdManagement
} // namespace Clusters
} // namespace app
} // namespace chip
