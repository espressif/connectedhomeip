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

#include <app/data-model/DecodableList.h>
#include <app/data-model/List.h>
#include <app/data-model/Nullable.h>
#include <app/util/basic-types.h>
#include <lib/core/Optional.h>
#include <lib/core/TLV.h>
#include <lib/support/BitMask.h>

#include <clusters/shared/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace CommodityTariff {
namespace Structs {
namespace PeakPeriodStruct {
enum class Fields : uint8_t
{
    kSeverity   = 0,
    kPeakPeriod = 1,
};

struct Type
{
public:
    PeakPeriodSeverityEnum severity = static_cast<PeakPeriodSeverityEnum>(0);
    uint16_t peakPeriod             = static_cast<uint16_t>(0);

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace PeakPeriodStruct
namespace AuxiliaryLoadSwitchSettingsStruct {
enum class Fields : uint8_t
{
    kNumber        = 0,
    kRequiredState = 1,
};

struct Type
{
public:
    uint8_t number                         = static_cast<uint8_t>(0);
    AuxiliaryLoadSettingEnum requiredState = static_cast<AuxiliaryLoadSettingEnum>(0);

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace AuxiliaryLoadSwitchSettingsStruct
namespace TariffPriceStruct {
enum class Fields : uint8_t
{
    kPriceType  = 0,
    kPrice      = 1,
    kPriceLevel = 2,
};

struct Type
{
public:
    Globals::TariffPriceTypeEnum priceType = static_cast<Globals::TariffPriceTypeEnum>(0);
    Optional<int64_t> price;
    Optional<int16_t> priceLevel;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace TariffPriceStruct
namespace TariffComponentStruct {
enum class Fields : uint8_t
{
    kTariffComponentID = 0,
    kPrice             = 1,
    kFriendlyCredit    = 2,
    kAuxiliaryLoad     = 3,
    kPeakPeriod        = 4,
    kPowerThreshold    = 5,
    kThreshold         = 6,
    kLabel             = 7,
    kPredicted         = 8,
};

struct Type
{
public:
    uint32_t tariffComponentID = static_cast<uint32_t>(0);
    Optional<DataModel::Nullable<Structs::TariffPriceStruct::Type>> price;
    Optional<bool> friendlyCredit;
    Optional<Structs::AuxiliaryLoadSwitchSettingsStruct::Type> auxiliaryLoad;
    Optional<Structs::PeakPeriodStruct::Type> peakPeriod;
    Optional<Globals::Structs::PowerThresholdStruct::Type> powerThreshold;
    DataModel::Nullable<uint32_t> threshold;
    Optional<DataModel::Nullable<chip::CharSpan>> label;
    Optional<bool> predicted;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace TariffComponentStruct
namespace CalendarPeriodStruct {
enum class Fields : uint8_t
{
    kStartDate     = 0,
    kDayPatternIDs = 1,
};

struct Type
{
public:
    DataModel::Nullable<uint32_t> startDate;
    DataModel::List<const uint32_t> dayPatternIDs;

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

struct DecodableType
{
public:
    DataModel::Nullable<uint32_t> startDate;
    DataModel::DecodableList<uint32_t> dayPatternIDs;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;
};

} // namespace CalendarPeriodStruct
namespace DayEntryStruct {
enum class Fields : uint8_t
{
    kDayEntryID          = 0,
    kStartTime           = 1,
    kDuration            = 2,
    kRandomizationOffset = 3,
    kRandomizationType   = 4,
};

struct Type
{
public:
    uint32_t dayEntryID = static_cast<uint32_t>(0);
    uint16_t startTime  = static_cast<uint16_t>(0);
    Optional<uint16_t> duration;
    Optional<int16_t> randomizationOffset;
    Optional<DayEntryRandomizationTypeEnum> randomizationType;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace DayEntryStruct
namespace DayPatternStruct {
enum class Fields : uint8_t
{
    kDayPatternID = 0,
    kDaysOfWeek   = 1,
    kDayEntryIDs  = 2,
};

struct Type
{
public:
    uint32_t dayPatternID                               = static_cast<uint32_t>(0);
    chip::BitMask<DayPatternDayOfWeekBitmap> daysOfWeek = static_cast<chip::BitMask<DayPatternDayOfWeekBitmap>>(0);
    DataModel::List<const uint32_t> dayEntryIDs;

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

struct DecodableType
{
public:
    uint32_t dayPatternID                               = static_cast<uint32_t>(0);
    chip::BitMask<DayPatternDayOfWeekBitmap> daysOfWeek = static_cast<chip::BitMask<DayPatternDayOfWeekBitmap>>(0);
    DataModel::DecodableList<uint32_t> dayEntryIDs;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;
};

} // namespace DayPatternStruct
namespace DayStruct {
enum class Fields : uint8_t
{
    kDate        = 0,
    kDayType     = 1,
    kDayEntryIDs = 2,
};

struct Type
{
public:
    uint32_t date       = static_cast<uint32_t>(0);
    DayTypeEnum dayType = static_cast<DayTypeEnum>(0);
    DataModel::List<const uint32_t> dayEntryIDs;

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

struct DecodableType
{
public:
    uint32_t date       = static_cast<uint32_t>(0);
    DayTypeEnum dayType = static_cast<DayTypeEnum>(0);
    DataModel::DecodableList<uint32_t> dayEntryIDs;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;
};

} // namespace DayStruct
namespace TariffInformationStruct {
enum class Fields : uint8_t
{
    kTariffLabel  = 0,
    kProviderName = 1,
    kCurrency     = 2,
    kBlockMode    = 3,
};

struct Type
{
public:
    DataModel::Nullable<chip::CharSpan> tariffLabel;
    DataModel::Nullable<chip::CharSpan> providerName;
    Optional<DataModel::Nullable<Globals::Structs::CurrencyStruct::Type>> currency;
    DataModel::Nullable<BlockModeEnum> blockMode;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace TariffInformationStruct
namespace TariffPeriodStruct {
enum class Fields : uint8_t
{
    kLabel              = 0,
    kDayEntryIDs        = 1,
    kTariffComponentIDs = 2,
};

struct Type
{
public:
    DataModel::Nullable<chip::CharSpan> label;
    DataModel::List<const uint32_t> dayEntryIDs;
    DataModel::List<const uint32_t> tariffComponentIDs;

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

struct DecodableType
{
public:
    DataModel::Nullable<chip::CharSpan> label;
    DataModel::DecodableList<uint32_t> dayEntryIDs;
    DataModel::DecodableList<uint32_t> tariffComponentIDs;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;
};

} // namespace TariffPeriodStruct
} // namespace Structs
} // namespace CommodityTariff
} // namespace Clusters
} // namespace app
} // namespace chip
