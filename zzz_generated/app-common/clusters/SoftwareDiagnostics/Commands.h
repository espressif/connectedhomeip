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

#include <clusters/SoftwareDiagnostics/ClusterId.h>
#include <clusters/SoftwareDiagnostics/CommandIds.h>
#include <clusters/SoftwareDiagnostics/Enums.h>
#include <clusters/SoftwareDiagnostics/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace SoftwareDiagnostics {
namespace Commands {
// Forward-declarations so we can reference these later.

namespace ResetWatermarks {
struct Type;
struct DecodableType;
} // namespace ResetWatermarks

} // namespace Commands

namespace Commands {
namespace ResetWatermarks {
enum class Fields : uint8_t
{
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ResetWatermarks::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::SoftwareDiagnostics::Id; }

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ResetWatermarks::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::SoftwareDiagnostics::Id; }

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ResetWatermarks
} // namespace Commands
} // namespace SoftwareDiagnostics
} // namespace Clusters
} // namespace app
} // namespace chip
