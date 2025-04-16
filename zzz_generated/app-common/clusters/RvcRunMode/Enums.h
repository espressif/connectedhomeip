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
namespace RvcRunMode {

// Enum for ModeTag
enum class ModeTag : uint16_t
{
    kAuto      = 0x00,
    kQuick     = 0x01,
    kQuiet     = 0x02,
    kLowNoise  = 0x03,
    kLowEnergy = 0x04,
    kVacation  = 0x05,
    kMin       = 0x06,
    kMax       = 0x07,
    kNight     = 0x08,
    kDay       = 0x09,
    kIdle      = 0x4000,
    kCleaning  = 0x4001,
    kMapping   = 0x4002,
    // kUnknownEnumValue intentionally not defined. This enum never goes
    // through DataModel::Decode, likely because it is a part of a derived
    // cluster. As a result having kUnknownEnumValue in this enum is error
    // prone, and was removed. See
    // src/app/common/templates/config-data.yaml.
};

// Enum for StatusCode
enum class StatusCode : uint8_t
{
    kStuck                 = 0x41,
    kDustBinMissing        = 0x42,
    kDustBinFull           = 0x43,
    kWaterTankEmpty        = 0x44,
    kWaterTankMissing      = 0x45,
    kWaterTankLidOpen      = 0x46,
    kMopCleaningPadMissing = 0x47,
    kBatteryLow            = 0x48,
    // kUnknownEnumValue intentionally not defined. This enum never goes
    // through DataModel::Decode, likely because it is a part of a derived
    // cluster. As a result having kUnknownEnumValue in this enum is error
    // prone, and was removed. See
    // src/app/common/templates/config-data.yaml.
};

// Bitmap for Feature
enum class Feature : uint32_t
{
    kDirectModeChange = 0x10000,
};
} // namespace RvcRunMode
} // namespace Clusters
} // namespace app
} // namespace chip
