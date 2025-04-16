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

#include <clusters/LaundryWasherMode/ClusterId.h>
#include <clusters/LaundryWasherMode/CommandIds.h>
#include <clusters/LaundryWasherMode/Enums.h>
#include <clusters/LaundryWasherMode/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace LaundryWasherMode {
namespace Commands {
// Forward-declarations so we can reference these later.

namespace ChangeToMode {
struct Type;
struct DecodableType;
} // namespace ChangeToMode

namespace ChangeToModeResponse {
struct Type;
struct DecodableType;
} // namespace ChangeToModeResponse

} // namespace Commands

namespace Commands {
namespace ChangeToMode {
enum class Fields : uint8_t
{
    kNewMode = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ChangeToMode::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::LaundryWasherMode::Id; }

    uint8_t newMode = static_cast<uint8_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::LaundryWasherMode::Commands::ChangeToModeResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ChangeToMode::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::LaundryWasherMode::Id; }

    uint8_t newMode = static_cast<uint8_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ChangeToMode
namespace ChangeToModeResponse {
enum class Fields : uint8_t
{
    kStatus     = 0,
    kStatusText = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ChangeToModeResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::LaundryWasherMode::Id; }

    uint8_t status = static_cast<uint8_t>(0);
    Optional<chip::CharSpan> statusText;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ChangeToModeResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::LaundryWasherMode::Id; }

    uint8_t status = static_cast<uint8_t>(0);
    Optional<chip::CharSpan> statusText;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ChangeToModeResponse
} // namespace Commands
} // namespace LaundryWasherMode
} // namespace Clusters
} // namespace app
} // namespace chip
