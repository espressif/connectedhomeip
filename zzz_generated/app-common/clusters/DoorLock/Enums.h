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
namespace DoorLock {

// Enum for AlarmCodeEnum
enum class AlarmCodeEnum : uint8_t
{
    kLockJammed              = 0x00,
    kLockFactoryReset        = 0x01,
    kLockRadioPowerCycled    = 0x03,
    kWrongCodeEntryLimit     = 0x04,
    kFrontEsceutcheonRemoved = 0x05,
    kDoorForcedOpen          = 0x06,
    kDoorAjar                = 0x07,
    kForcedUser              = 0x08,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 2,
};

// Enum for CredentialRuleEnum
enum class CredentialRuleEnum : uint8_t
{
    kSingle = 0x00,
    kDual   = 0x01,
    kTri    = 0x02,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 3,
};

// Enum for CredentialTypeEnum
enum class CredentialTypeEnum : uint8_t
{
    kProgrammingPIN               = 0x00,
    kPin                          = 0x01,
    kRfid                         = 0x02,
    kFingerprint                  = 0x03,
    kFingerVein                   = 0x04,
    kFace                         = 0x05,
    kAliroCredentialIssuerKey     = 0x06,
    kAliroEvictableEndpointKey    = 0x07,
    kAliroNonEvictableEndpointKey = 0x08,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 9,
};

// Enum for DataOperationTypeEnum
enum class DataOperationTypeEnum : uint8_t
{
    kAdd    = 0x00,
    kClear  = 0x01,
    kModify = 0x02,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 3,
};

// Enum for DlLockState
enum class DlLockState : uint8_t
{
    kNotFullyLocked = 0x00,
    kLocked         = 0x01,
    kUnlocked       = 0x02,
    kUnlatched      = 0x03,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 4,
};

// Enum for DlLockType
enum class DlLockType : uint8_t
{
    kDeadBolt           = 0x00,
    kMagnetic           = 0x01,
    kOther              = 0x02,
    kMortise            = 0x03,
    kRim                = 0x04,
    kLatchBolt          = 0x05,
    kCylindricalLock    = 0x06,
    kTubularLock        = 0x07,
    kInterconnectedLock = 0x08,
    kDeadLatch          = 0x09,
    kDoorFurniture      = 0x0A,
    kEurocylinder       = 0x0B,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 12,
};

// Enum for DlStatus
enum class DlStatus : uint8_t
{
    kSuccess           = 0x00,
    kFailure           = 0x01,
    kDuplicate         = 0x02,
    kOccupied          = 0x03,
    kInvalidField      = 0x85,
    kResourceExhausted = 0x89,
    kNotFound          = 0x8B,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 4,
};

// Enum for DoorLockOperationEventCode
enum class DoorLockOperationEventCode : uint8_t
{
    kUnknownOrMfgSpecific  = 0x00,
    kLock                  = 0x01,
    kUnlock                = 0x02,
    kLockInvalidPinOrId    = 0x03,
    kLockInvalidSchedule   = 0x04,
    kUnlockInvalidPinOrId  = 0x05,
    kUnlockInvalidSchedule = 0x06,
    kOneTouchLock          = 0x07,
    kKeyLock               = 0x08,
    kKeyUnlock             = 0x09,
    kAutoLock              = 0x0A,
    kScheduleLock          = 0x0B,
    kScheduleUnlock        = 0x0C,
    kManualLock            = 0x0D,
    kManualUnlock          = 0x0E,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 15,
};

// Enum for DoorLockProgrammingEventCode
enum class DoorLockProgrammingEventCode : uint8_t
{
    kUnknownOrMfgSpecific = 0x00,
    kMasterCodeChanged    = 0x01,
    kPinAdded             = 0x02,
    kPinDeleted           = 0x03,
    kPinChanged           = 0x04,
    kIdAdded              = 0x05,
    kIdDeleted            = 0x06,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 7,
};

// Enum for DoorLockSetPinOrIdStatus
enum class DoorLockSetPinOrIdStatus : uint8_t
{
    kSuccess            = 0x00,
    kGeneralFailure     = 0x01,
    kMemoryFull         = 0x02,
    kDuplicateCodeError = 0x03,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 4,
};

// Enum for DoorLockUserStatus
enum class DoorLockUserStatus : uint8_t
{
    kAvailable        = 0x00,
    kOccupiedEnabled  = 0x01,
    kOccupiedDisabled = 0x03,
    kNotSupported     = 0xFF,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 2,
};

// Enum for DoorLockUserType
enum class DoorLockUserType : uint8_t
{
    kUnrestricted        = 0x00,
    kYearDayScheduleUser = 0x01,
    kWeekDayScheduleUser = 0x02,
    kMasterUser          = 0x03,
    kNonAccessUser       = 0x04,
    kNotSupported        = 0xFF,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 5,
};

// Enum for DoorStateEnum
enum class DoorStateEnum : uint8_t
{
    kDoorOpen             = 0x00,
    kDoorClosed           = 0x01,
    kDoorJammed           = 0x02,
    kDoorForcedOpen       = 0x03,
    kDoorUnspecifiedError = 0x04,
    kDoorAjar             = 0x05,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 6,
};

// Enum for LockDataTypeEnum
enum class LockDataTypeEnum : uint8_t
{
    kUnspecified                  = 0x00,
    kProgrammingCode              = 0x01,
    kUserIndex                    = 0x02,
    kWeekDaySchedule              = 0x03,
    kYearDaySchedule              = 0x04,
    kHolidaySchedule              = 0x05,
    kPin                          = 0x06,
    kRfid                         = 0x07,
    kFingerprint                  = 0x08,
    kFingerVein                   = 0x09,
    kFace                         = 0x0A,
    kAliroCredentialIssuerKey     = 0x0B,
    kAliroEvictableEndpointKey    = 0x0C,
    kAliroNonEvictableEndpointKey = 0x0D,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 14,
};

// Enum for LockOperationTypeEnum
enum class LockOperationTypeEnum : uint8_t
{
    kLock               = 0x00,
    kUnlock             = 0x01,
    kNonAccessUserEvent = 0x02,
    kForcedUserEvent    = 0x03,
    kUnlatch            = 0x04,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 5,
};

// Enum for OperatingModeEnum
enum class OperatingModeEnum : uint8_t
{
    kNormal             = 0x00,
    kVacation           = 0x01,
    kPrivacy            = 0x02,
    kNoRemoteLockUnlock = 0x03,
    kPassage            = 0x04,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 5,
};

// Enum for OperationErrorEnum
enum class OperationErrorEnum : uint8_t
{
    kUnspecified         = 0x00,
    kInvalidCredential   = 0x01,
    kDisabledUserDenied  = 0x02,
    kRestricted          = 0x03,
    kInsufficientBattery = 0x04,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 5,
};

// Enum for OperationSourceEnum
enum class OperationSourceEnum : uint8_t
{
    kUnspecified       = 0x00,
    kManual            = 0x01,
    kProprietaryRemote = 0x02,
    kKeypad            = 0x03,
    kAuto              = 0x04,
    kButton            = 0x05,
    kSchedule          = 0x06,
    kRemote            = 0x07,
    kRfid              = 0x08,
    kBiometric         = 0x09,
    kAliro             = 0x0A,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 11,
};

// Enum for UserStatusEnum
enum class UserStatusEnum : uint8_t
{
    kAvailable        = 0x00,
    kOccupiedEnabled  = 0x01,
    kOccupiedDisabled = 0x03,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 2,
};

// Enum for UserTypeEnum
enum class UserTypeEnum : uint8_t
{
    kUnrestrictedUser       = 0x00,
    kYearDayScheduleUser    = 0x01,
    kWeekDayScheduleUser    = 0x02,
    kProgrammingUser        = 0x03,
    kNonAccessUser          = 0x04,
    kForcedUser             = 0x05,
    kDisposableUser         = 0x06,
    kExpiringUser           = 0x07,
    kScheduleRestrictedUser = 0x08,
    kRemoteOnlyUser         = 0x09,
    // All received enum values that are not listed above will be mapped
    // to kUnknownEnumValue. This is a helper enum value that should only
    // be used by code to process how it handles receiving and unknown
    // enum value. This specific should never be transmitted.
    kUnknownEnumValue = 10,
};

// Bitmap for DaysMaskMap
enum class DaysMaskMap : uint8_t
{
    kSunday    = 0x1,
    kMonday    = 0x2,
    kTuesday   = 0x4,
    kWednesday = 0x8,
    kThursday  = 0x10,
    kFriday    = 0x20,
    kSaturday  = 0x40,
};

// Bitmap for DlCredentialRuleMask
enum class DlCredentialRuleMask : uint8_t
{
    kSingle = 0x1,
    kDual   = 0x2,
    kTri    = 0x4,
};

// Bitmap for DlCredentialRulesSupport
enum class DlCredentialRulesSupport : uint8_t
{
    kSingle = 0x1,
    kDual   = 0x2,
    kTri    = 0x4,
};

// Bitmap for DlDefaultConfigurationRegister
enum class DlDefaultConfigurationRegister : uint16_t
{
    kEnableLocalProgrammingEnabled         = 0x1,
    kKeypadInterfaceDefaultAccessEnabled   = 0x2,
    kRemoteInterfaceDefaultAccessIsEnabled = 0x4,
    kSoundEnabled                          = 0x20,
    kAutoRelockTimeSet                     = 0x40,
    kLEDSettingsSet                        = 0x80,
};

// Bitmap for DlKeypadOperationEventMask
enum class DlKeypadOperationEventMask : uint16_t
{
    kUnknown               = 0x1,
    kLock                  = 0x2,
    kUnlock                = 0x4,
    kLockInvalidPIN        = 0x8,
    kLockInvalidSchedule   = 0x10,
    kUnlockInvalidCode     = 0x20,
    kUnlockInvalidSchedule = 0x40,
    kNonAccessUserOpEvent  = 0x80,
};

// Bitmap for DlKeypadProgrammingEventMask
enum class DlKeypadProgrammingEventMask : uint16_t
{
    kUnknown               = 0x1,
    kProgrammingPINChanged = 0x2,
    kPINAdded              = 0x4,
    kPINCleared            = 0x8,
    kPINChanged            = 0x10,
};

// Bitmap for DlLocalProgrammingFeatures
enum class DlLocalProgrammingFeatures : uint8_t
{
    kAddUsersCredentialsSchedulesLocally    = 0x1,
    kModifyUsersCredentialsSchedulesLocally = 0x2,
    kClearUsersCredentialsSchedulesLocally  = 0x4,
    kAdjustLockSettingsLocally              = 0x8,
};

// Bitmap for DlManualOperationEventMask
enum class DlManualOperationEventMask : uint16_t
{
    kUnknown         = 0x1,
    kThumbturnLock   = 0x2,
    kThumbturnUnlock = 0x4,
    kOneTouchLock    = 0x8,
    kKeyLock         = 0x10,
    kKeyUnlock       = 0x20,
    kAutoLock        = 0x40,
    kScheduleLock    = 0x80,
    kScheduleUnlock  = 0x100,
    kManualLock      = 0x200,
    kManualUnlock    = 0x400,
};

// Bitmap for DlRFIDOperationEventMask
enum class DlRFIDOperationEventMask : uint16_t
{
    kUnknown               = 0x1,
    kLock                  = 0x2,
    kUnlock                = 0x4,
    kLockInvalidRFID       = 0x8,
    kLockInvalidSchedule   = 0x10,
    kUnlockInvalidRFID     = 0x20,
    kUnlockInvalidSchedule = 0x40,
};

// Bitmap for DlRFIDProgrammingEventMask
enum class DlRFIDProgrammingEventMask : uint16_t
{
    kUnknown         = 0x1,
    kRFIDCodeAdded   = 0x20,
    kRFIDCodeCleared = 0x40,
};

// Bitmap for DlRemoteOperationEventMask
enum class DlRemoteOperationEventMask : uint16_t
{
    kUnknown               = 0x1,
    kLock                  = 0x2,
    kUnlock                = 0x4,
    kLockInvalidCode       = 0x8,
    kLockInvalidSchedule   = 0x10,
    kUnlockInvalidCode     = 0x20,
    kUnlockInvalidSchedule = 0x40,
};

// Bitmap for DlRemoteProgrammingEventMask
enum class DlRemoteProgrammingEventMask : uint16_t
{
    kUnknown               = 0x1,
    kProgrammingPINChanged = 0x2,
    kPINAdded              = 0x4,
    kPINCleared            = 0x8,
    kPINChanged            = 0x10,
    kRFIDCodeAdded         = 0x20,
    kRFIDCodeCleared       = 0x40,
};

// Bitmap for DlSupportedOperatingModes
enum class DlSupportedOperatingModes : uint16_t
{
    kNormal             = 0x1,
    kVacation           = 0x2,
    kPrivacy            = 0x4,
    kNoRemoteLockUnlock = 0x8,
    kPassage            = 0x10,
};

// Bitmap for DoorLockDayOfWeek
enum class DoorLockDayOfWeek : uint8_t
{
    kSunday    = 0x1,
    kMonday    = 0x2,
    kTuesday   = 0x4,
    kWednesday = 0x8,
    kThursday  = 0x10,
    kFriday    = 0x20,
    kSaturday  = 0x40,
};

// Bitmap for Feature
enum class Feature : uint32_t
{
    kPinCredential               = 0x1,
    kRfidCredential              = 0x2,
    kFingerCredentials           = 0x4,
    kLogging                     = 0x8,
    kWeekDayAccessSchedules      = 0x10,
    kDoorPositionSensor          = 0x20,
    kFaceCredentials             = 0x40,
    kCredentialsOverTheAirAccess = 0x80,
    kUser                        = 0x100,
    kNotification                = 0x200,
    kYearDayAccessSchedules      = 0x400,
    kHolidaySchedules            = 0x800,
    kUnbolt                      = 0x1000,
    kAliroProvisioning           = 0x2000,
    kAliroBLEUWB                 = 0x4000,
};
} // namespace DoorLock
} // namespace Clusters
} // namespace app
} // namespace chip
