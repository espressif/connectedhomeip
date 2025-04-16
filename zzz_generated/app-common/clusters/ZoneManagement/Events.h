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

#include <app/EventLoggingTypes.h>
#include <app/data-model/DecodableList.h>
#include <app/data-model/List.h>
#include <app/data-model/Nullable.h>
#include <lib/core/DataModelTypes.h>
#include <lib/core/TLV.h>
#include <lib/support/BitMask.h>

#include <clusters/shared/Enums.h>
#include <clusters/shared/Structs.h>

#include <clusters/ZoneManagement/ClusterId.h>
#include <clusters/ZoneManagement/Enums.h>
#include <clusters/ZoneManagement/EventIds.h>
#include <clusters/ZoneManagement/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace ZoneManagement {
namespace Events {
namespace ZoneTriggered {
static constexpr PriorityLevel kPriorityLevel = PriorityLevel::Info;

enum class Fields : uint8_t
{
    kZones  = 0,
    kReason = 1,
};

struct Type
{
public:
    static constexpr PriorityLevel GetPriorityLevel() { return kPriorityLevel; }
    static constexpr EventId GetEventId() { return Events::ZoneTriggered::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }
    static constexpr bool kIsFabricScoped = false;

    DataModel::List<const uint16_t> zones;
    ZoneEventTriggeredReasonEnum reason = static_cast<ZoneEventTriggeredReasonEnum>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

struct DecodableType
{
public:
    static constexpr PriorityLevel GetPriorityLevel() { return kPriorityLevel; }
    static constexpr EventId GetEventId() { return Events::ZoneTriggered::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }

    DataModel::DecodableList<uint16_t> zones;
    ZoneEventTriggeredReasonEnum reason = static_cast<ZoneEventTriggeredReasonEnum>(0);

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
} // namespace ZoneTriggered
namespace ZoneStopped {
static constexpr PriorityLevel kPriorityLevel = PriorityLevel::Info;

enum class Fields : uint8_t
{
    kZones  = 0,
    kReason = 1,
};

struct Type
{
public:
    static constexpr PriorityLevel GetPriorityLevel() { return kPriorityLevel; }
    static constexpr EventId GetEventId() { return Events::ZoneStopped::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }
    static constexpr bool kIsFabricScoped = false;

    DataModel::List<const uint16_t> zones;
    ZoneEventStoppedReasonEnum reason = static_cast<ZoneEventStoppedReasonEnum>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

struct DecodableType
{
public:
    static constexpr PriorityLevel GetPriorityLevel() { return kPriorityLevel; }
    static constexpr EventId GetEventId() { return Events::ZoneStopped::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }

    DataModel::DecodableList<uint16_t> zones;
    ZoneEventStoppedReasonEnum reason = static_cast<ZoneEventStoppedReasonEnum>(0);

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
} // namespace ZoneStopped
} // namespace Events
} // namespace ZoneManagement
} // namespace Clusters
} // namespace app
} // namespace chip
