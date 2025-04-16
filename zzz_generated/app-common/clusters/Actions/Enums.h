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
namespace Actions {

// Enum for ActionErrorEnum
enum class ActionErrorEnum : uint8_t
{
    kUnknown     = 0x00,
    kInterrupted = 0x01,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 2,
};

// Enum for ActionStateEnum
enum class ActionStateEnum : uint8_t
{
    kInactive = 0x00,
    kActive   = 0x01,
    kPaused   = 0x02,
    kDisabled = 0x03,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 4,
};

// Enum for ActionTypeEnum
enum class ActionTypeEnum : uint8_t
{
    kOther        = 0x00,
    kScene        = 0x01,
    kSequence     = 0x02,
    kAutomation   = 0x03,
    kException    = 0x04,
    kNotification = 0x05,
    kAlarm        = 0x06,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 7,
};

// Enum for EndpointListTypeEnum
enum class EndpointListTypeEnum : uint8_t
{
    kOther = 0x00,
    kRoom  = 0x01,
    kZone  = 0x02,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 3,
};

// Bitmap for CommandBits
enum class CommandBits : uint16_t
{
    kInstantAction               = 0x1,
    kInstantActionWithTransition = 0x2,
    kStartAction                 = 0x4,
    kStartActionWithDuration     = 0x8,
    kStopAction                  = 0x10,
    kPauseAction                 = 0x20,
    kPauseActionWithDuration     = 0x40,
    kResumeAction                = 0x80,
    kEnableAction                = 0x100,
    kEnableActionWithDuration    = 0x200,
    kDisableAction               = 0x400,
    kDisableActionWithDuration   = 0x800,
};
} // namespace Actions
} // namespace Clusters
} // namespace app
} // namespace chip
