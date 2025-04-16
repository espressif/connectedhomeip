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
#include <app/data-model/NullObject.h>
#include <app/data-model/Nullable.h>
#include <lib/core/DataModelTypes.h>
#include <lib/core/Optional.h>
#include <lib/core/TLV.h>
#include <lib/support/BitMask.h>

#include <clusters/shared/Enums.h>
#include <clusters/shared/Structs.h>

#include <clusters/EnergyEvse/ClusterId.h>
#include <clusters/EnergyEvse/CommandIds.h>
#include <clusters/EnergyEvse/Enums.h>
#include <clusters/EnergyEvse/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace EnergyEvse {
namespace Commands {
// Forward-declarations so we can reference these later.

namespace GetTargetsResponse {
struct Type;
struct DecodableType;
} // namespace GetTargetsResponse

namespace Disable {
struct Type;
struct DecodableType;
} // namespace Disable

namespace EnableCharging {
struct Type;
struct DecodableType;
} // namespace EnableCharging

namespace EnableDischarging {
struct Type;
struct DecodableType;
} // namespace EnableDischarging

namespace StartDiagnostics {
struct Type;
struct DecodableType;
} // namespace StartDiagnostics

namespace SetTargets {
struct Type;
struct DecodableType;
} // namespace SetTargets

namespace GetTargets {
struct Type;
struct DecodableType;
} // namespace GetTargets

namespace ClearTargets {
struct Type;
struct DecodableType;
} // namespace ClearTargets

} // namespace Commands

namespace Commands {
namespace GetTargetsResponse {
enum class Fields : uint8_t
{
    kChargingTargetSchedules = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::GetTargetsResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    DataModel::List<const Structs::ChargingTargetScheduleStruct::Type> chargingTargetSchedules;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::GetTargetsResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    DataModel::DecodableList<Structs::ChargingTargetScheduleStruct::DecodableType> chargingTargetSchedules;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace GetTargetsResponse
namespace Disable {
enum class Fields : uint8_t
{
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::Disable::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return true; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::Disable::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace Disable
namespace EnableCharging {
enum class Fields : uint8_t
{
    kChargingEnabledUntil = 0,
    kMinimumChargeCurrent = 1,
    kMaximumChargeCurrent = 2,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::EnableCharging::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    DataModel::Nullable<uint32_t> chargingEnabledUntil;
    int64_t minimumChargeCurrent = static_cast<int64_t>(0);
    int64_t maximumChargeCurrent = static_cast<int64_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return true; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::EnableCharging::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    DataModel::Nullable<uint32_t> chargingEnabledUntil;
    int64_t minimumChargeCurrent = static_cast<int64_t>(0);
    int64_t maximumChargeCurrent = static_cast<int64_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace EnableCharging
namespace EnableDischarging {
enum class Fields : uint8_t
{
    kDischargingEnabledUntil = 0,
    kMaximumDischargeCurrent = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::EnableDischarging::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    DataModel::Nullable<uint32_t> dischargingEnabledUntil;
    int64_t maximumDischargeCurrent = static_cast<int64_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return true; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::EnableDischarging::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    DataModel::Nullable<uint32_t> dischargingEnabledUntil;
    int64_t maximumDischargeCurrent = static_cast<int64_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace EnableDischarging
namespace StartDiagnostics {
enum class Fields : uint8_t
{
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::StartDiagnostics::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return true; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::StartDiagnostics::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace StartDiagnostics
namespace SetTargets {
enum class Fields : uint8_t
{
    kChargingTargetSchedules = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::SetTargets::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    DataModel::List<const Structs::ChargingTargetScheduleStruct::Type> chargingTargetSchedules;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return true; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::SetTargets::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    DataModel::DecodableList<Structs::ChargingTargetScheduleStruct::DecodableType> chargingTargetSchedules;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace SetTargets
namespace GetTargets {
enum class Fields : uint8_t
{
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::GetTargets::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::EnergyEvse::Commands::GetTargetsResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return true; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::GetTargets::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace GetTargets
namespace ClearTargets {
enum class Fields : uint8_t
{
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ClearTargets::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return true; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ClearTargets::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::EnergyEvse::Id; }

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ClearTargets
} // namespace Commands
} // namespace EnergyEvse
} // namespace Clusters
} // namespace app
} // namespace chip
