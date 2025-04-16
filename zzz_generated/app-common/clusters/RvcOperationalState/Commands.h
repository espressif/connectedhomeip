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

#include <clusters/RvcOperationalState/ClusterId.h>
#include <clusters/RvcOperationalState/CommandIds.h>
#include <clusters/RvcOperationalState/Enums.h>
#include <clusters/RvcOperationalState/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace RvcOperationalState {
namespace Commands {
// Forward-declarations so we can reference these later.

namespace Pause {
struct Type;
struct DecodableType;
} // namespace Pause

namespace Resume {
struct Type;
struct DecodableType;
} // namespace Resume

namespace OperationalCommandResponse {
struct Type;
struct DecodableType;
} // namespace OperationalCommandResponse

namespace GoHome {
struct Type;
struct DecodableType;
} // namespace GoHome

} // namespace Commands

namespace Commands {
namespace Pause {
enum class Fields : uint8_t
{
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::Pause::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::RvcOperationalState::Id; }

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::RvcOperationalState::Commands::OperationalCommandResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::Pause::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::RvcOperationalState::Id; }

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace Pause
namespace Resume {
enum class Fields : uint8_t
{
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::Resume::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::RvcOperationalState::Id; }

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::RvcOperationalState::Commands::OperationalCommandResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::Resume::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::RvcOperationalState::Id; }

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace Resume
namespace OperationalCommandResponse {
enum class Fields : uint8_t
{
    kCommandResponseState = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::OperationalCommandResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::RvcOperationalState::Id; }

    Structs::ErrorStateStruct::Type commandResponseState;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::OperationalCommandResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::RvcOperationalState::Id; }

    Structs::ErrorStateStruct::DecodableType commandResponseState;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace OperationalCommandResponse
namespace GoHome {
enum class Fields : uint8_t
{
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::GoHome::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::RvcOperationalState::Id; }

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::RvcOperationalState::Commands::OperationalCommandResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::GoHome::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::RvcOperationalState::Id; }

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace GoHome
} // namespace Commands
} // namespace RvcOperationalState
} // namespace Clusters
} // namespace app
} // namespace chip
