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
namespace KeypadInput {

// Enum for CECKeyCodeEnum
enum class CECKeyCodeEnum : uint8_t
{
    kSelect                    = 0x00,
    kUp                        = 0x01,
    kDown                      = 0x02,
    kLeft                      = 0x03,
    kRight                     = 0x04,
    kRightUp                   = 0x05,
    kRightDown                 = 0x06,
    kLeftUp                    = 0x07,
    kLeftDown                  = 0x08,
    kRootMenu                  = 0x09,
    kSetupMenu                 = 0x0A,
    kContentsMenu              = 0x0B,
    kFavoriteMenu              = 0x0C,
    kExit                      = 0x0D,
    kMediaTopMenu              = 0x10,
    kMediaContextSensitiveMenu = 0x11,
    kNumberEntryMode           = 0x1D,
    kNumber11                  = 0x1E,
    kNumber12                  = 0x1F,
    kNumber0OrNumber10         = 0x20,
    kNumbers1                  = 0x21,
    kNumbers2                  = 0x22,
    kNumbers3                  = 0x23,
    kNumbers4                  = 0x24,
    kNumbers5                  = 0x25,
    kNumbers6                  = 0x26,
    kNumbers7                  = 0x27,
    kNumbers8                  = 0x28,
    kNumbers9                  = 0x29,
    kDot                       = 0x2A,
    kEnter                     = 0x2B,
    kClear                     = 0x2C,
    kNextFavorite              = 0x2F,
    kChannelUp                 = 0x30,
    kChannelDown               = 0x31,
    kPreviousChannel           = 0x32,
    kSoundSelect               = 0x33,
    kInputSelect               = 0x34,
    kDisplayInformation        = 0x35,
    kHelp                      = 0x36,
    kPageUp                    = 0x37,
    kPageDown                  = 0x38,
    kPower                     = 0x40,
    kVolumeUp                  = 0x41,
    kVolumeDown                = 0x42,
    kMute                      = 0x43,
    kPlay                      = 0x44,
    kStop                      = 0x45,
    kPause                     = 0x46,
    kRecord                    = 0x47,
    kRewind                    = 0x48,
    kFastForward               = 0x49,
    kEject                     = 0x4A,
    kForward                   = 0x4B,
    kBackward                  = 0x4C,
    kStopRecord                = 0x4D,
    kPauseRecord               = 0x4E,
    kReserved                  = 0x4F,
    kAngle                     = 0x50,
    kSubPicture                = 0x51,
    kVideoOnDemand             = 0x52,
    kElectronicProgramGuide    = 0x53,
    kTimerProgramming          = 0x54,
    kInitialConfiguration      = 0x55,
    kSelectBroadcastType       = 0x56,
    kSelectSoundPresentation   = 0x57,
    kPlayFunction              = 0x60,
    kPausePlayFunction         = 0x61,
    kRecordFunction            = 0x62,
    kPauseRecordFunction       = 0x63,
    kStopFunction              = 0x64,
    kMuteFunction              = 0x65,
    kRestoreVolumeFunction     = 0x66,
    kTuneFunction              = 0x67,
    kSelectMediaFunction       = 0x68,
    kSelectAvInputFunction     = 0x69,
    kSelectAudioInputFunction  = 0x6A,
    kPowerToggleFunction       = 0x6B,
    kPowerOffFunction          = 0x6C,
    kPowerOnFunction           = 0x6D,
    kF1Blue                    = 0x71,
    kF2Red                     = 0x72,
    kF3Green                   = 0x73,
    kF4Yellow                  = 0x74,
    kF5                        = 0x75,
    kData                      = 0x76,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 14,
};

// Enum for StatusEnum
enum class StatusEnum : uint8_t
{
    kSuccess                  = 0x00,
    kUnsupportedKey           = 0x01,
    kInvalidKeyInCurrentState = 0x02,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 3,
};

// Bitmap for Feature
enum class Feature : uint32_t
{
    kNavigationKeyCodes = 0x1,
    kLocationKeys       = 0x2,
    kNumberKeys         = 0x4,
};
} // namespace KeypadInput
} // namespace Clusters
} // namespace app
} // namespace chip
