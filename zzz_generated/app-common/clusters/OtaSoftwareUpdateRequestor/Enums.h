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
namespace OtaSoftwareUpdateRequestor {

// Enum for AnnouncementReasonEnum
enum class AnnouncementReasonEnum : uint8_t
{
    kSimpleAnnouncement    = 0x00,
    kUpdateAvailable       = 0x01,
    kUrgentUpdateAvailable = 0x02,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 3,
};

// Enum for ChangeReasonEnum
enum class ChangeReasonEnum : uint8_t
{
    kUnknown         = 0x00,
    kSuccess         = 0x01,
    kFailure         = 0x02,
    kTimeOut         = 0x03,
    kDelayByProvider = 0x04,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 5,
};

// Enum for UpdateStateEnum
enum class UpdateStateEnum : uint8_t
{
    kUnknown              = 0x00,
    kIdle                 = 0x01,
    kQuerying             = 0x02,
    kDelayedOnQuery       = 0x03,
    kDownloading          = 0x04,
    kApplying             = 0x05,
    kDelayedOnApply       = 0x06,
    kRollingBack          = 0x07,
    kDelayedOnUserConsent = 0x08,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 9,
};
} // namespace OtaSoftwareUpdateRequestor
} // namespace Clusters
} // namespace app
} // namespace chip
