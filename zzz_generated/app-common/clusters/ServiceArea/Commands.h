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

#include <clusters/ServiceArea/ClusterId.h>
#include <clusters/ServiceArea/CommandIds.h>
#include <clusters/ServiceArea/Enums.h>
#include <clusters/ServiceArea/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace ServiceArea {
namespace Commands {
// Forward-declarations so we can reference these later.

namespace SelectAreas {
struct Type;
struct DecodableType;
} // namespace SelectAreas

namespace SelectAreasResponse {
struct Type;
struct DecodableType;
} // namespace SelectAreasResponse

namespace SkipArea {
struct Type;
struct DecodableType;
} // namespace SkipArea

namespace SkipAreaResponse {
struct Type;
struct DecodableType;
} // namespace SkipAreaResponse

} // namespace Commands

namespace Commands {
namespace SelectAreas {
enum class Fields : uint8_t
{
    kNewAreas = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::SelectAreas::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ServiceArea::Id; }

    DataModel::List<const uint32_t> newAreas;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::ServiceArea::Commands::SelectAreasResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::SelectAreas::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ServiceArea::Id; }

    DataModel::DecodableList<uint32_t> newAreas;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace SelectAreas
namespace SelectAreasResponse {
enum class Fields : uint8_t
{
    kStatus     = 0,
    kStatusText = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::SelectAreasResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ServiceArea::Id; }

    SelectAreasStatus status = static_cast<SelectAreasStatus>(0);
    chip::CharSpan statusText;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::SelectAreasResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ServiceArea::Id; }

    SelectAreasStatus status = static_cast<SelectAreasStatus>(0);
    chip::CharSpan statusText;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace SelectAreasResponse
namespace SkipArea {
enum class Fields : uint8_t
{
    kSkippedArea = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::SkipArea::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ServiceArea::Id; }

    uint32_t skippedArea = static_cast<uint32_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::ServiceArea::Commands::SkipAreaResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::SkipArea::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ServiceArea::Id; }

    uint32_t skippedArea = static_cast<uint32_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace SkipArea
namespace SkipAreaResponse {
enum class Fields : uint8_t
{
    kStatus     = 0,
    kStatusText = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::SkipAreaResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ServiceArea::Id; }

    SkipAreaStatus status = static_cast<SkipAreaStatus>(0);
    chip::CharSpan statusText;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::SkipAreaResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ServiceArea::Id; }

    SkipAreaStatus status = static_cast<SkipAreaStatus>(0);
    chip::CharSpan statusText;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace SkipAreaResponse
} // namespace Commands
} // namespace ServiceArea
} // namespace Clusters
} // namespace app
} // namespace chip
