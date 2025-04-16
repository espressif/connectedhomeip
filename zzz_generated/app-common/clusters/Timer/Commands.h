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

#include <clusters/Timer/ClusterId.h>
#include <clusters/Timer/CommandIds.h>
#include <clusters/Timer/Enums.h>
#include <clusters/Timer/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace Timer {
namespace Commands {
// Forward-declarations so we can reference these later.

namespace SetTimer {
struct Type;
struct DecodableType;
} // namespace SetTimer

namespace ResetTimer {
struct Type;
struct DecodableType;
} // namespace ResetTimer

namespace AddTime {
struct Type;
struct DecodableType;
} // namespace AddTime

namespace ReduceTime {
struct Type;
struct DecodableType;
} // namespace ReduceTime

} // namespace Commands

namespace Commands {
namespace SetTimer {
enum class Fields : uint8_t
{
    kNewTime = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::SetTimer::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Timer::Id; }

    uint32_t newTime = static_cast<uint32_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::SetTimer::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Timer::Id; }

    uint32_t newTime = static_cast<uint32_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace SetTimer
namespace ResetTimer {
enum class Fields : uint8_t
{
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ResetTimer::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Timer::Id; }

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ResetTimer::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Timer::Id; }

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ResetTimer
namespace AddTime {
enum class Fields : uint8_t
{
    kAdditionalTime = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::AddTime::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Timer::Id; }

    uint32_t additionalTime = static_cast<uint32_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::AddTime::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Timer::Id; }

    uint32_t additionalTime = static_cast<uint32_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace AddTime
namespace ReduceTime {
enum class Fields : uint8_t
{
    kTimeReduction = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ReduceTime::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Timer::Id; }

    uint32_t timeReduction = static_cast<uint32_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ReduceTime::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Timer::Id; }

    uint32_t timeReduction = static_cast<uint32_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ReduceTime
} // namespace Commands
} // namespace Timer
} // namespace Clusters
} // namespace app
} // namespace chip
