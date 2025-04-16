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

#include <clusters/CameraAvSettingsUserLevelManagement/ClusterId.h>
#include <clusters/CameraAvSettingsUserLevelManagement/CommandIds.h>
#include <clusters/CameraAvSettingsUserLevelManagement/Enums.h>
#include <clusters/CameraAvSettingsUserLevelManagement/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace CameraAvSettingsUserLevelManagement {
namespace Commands {
// Forward-declarations so we can reference these later.

namespace MPTZSetPosition {
struct Type;
struct DecodableType;
} // namespace MPTZSetPosition

namespace MPTZRelativeMove {
struct Type;
struct DecodableType;
} // namespace MPTZRelativeMove

namespace MPTZMoveToPreset {
struct Type;
struct DecodableType;
} // namespace MPTZMoveToPreset

namespace MPTZSavePreset {
struct Type;
struct DecodableType;
} // namespace MPTZSavePreset

namespace MPTZRemovePreset {
struct Type;
struct DecodableType;
} // namespace MPTZRemovePreset

namespace DPTZSetViewport {
struct Type;
struct DecodableType;
} // namespace DPTZSetViewport

namespace DPTZRelativeMove {
struct Type;
struct DecodableType;
} // namespace DPTZRelativeMove

} // namespace Commands

namespace Commands {
namespace MPTZSetPosition {
enum class Fields : uint8_t
{
    kPan  = 0,
    kTilt = 1,
    kZoom = 2,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::MPTZSetPosition::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::CameraAvSettingsUserLevelManagement::Id; }

    Optional<int16_t> pan;
    Optional<int16_t> tilt;
    Optional<uint8_t> zoom;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::MPTZSetPosition::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::CameraAvSettingsUserLevelManagement::Id; }

    Optional<int16_t> pan;
    Optional<int16_t> tilt;
    Optional<uint8_t> zoom;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace MPTZSetPosition
namespace MPTZRelativeMove {
enum class Fields : uint8_t
{
    kPanDelta  = 0,
    kTiltDelta = 1,
    kZoomDelta = 2,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::MPTZRelativeMove::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::CameraAvSettingsUserLevelManagement::Id; }

    Optional<int16_t> panDelta;
    Optional<int16_t> tiltDelta;
    Optional<int8_t> zoomDelta;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::MPTZRelativeMove::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::CameraAvSettingsUserLevelManagement::Id; }

    Optional<int16_t> panDelta;
    Optional<int16_t> tiltDelta;
    Optional<int8_t> zoomDelta;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace MPTZRelativeMove
namespace MPTZMoveToPreset {
enum class Fields : uint8_t
{
    kPresetID = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::MPTZMoveToPreset::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::CameraAvSettingsUserLevelManagement::Id; }

    uint8_t presetID = static_cast<uint8_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::MPTZMoveToPreset::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::CameraAvSettingsUserLevelManagement::Id; }

    uint8_t presetID = static_cast<uint8_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace MPTZMoveToPreset
namespace MPTZSavePreset {
enum class Fields : uint8_t
{
    kPresetID = 0,
    kName     = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::MPTZSavePreset::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::CameraAvSettingsUserLevelManagement::Id; }

    Optional<uint8_t> presetID;
    chip::CharSpan name;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::MPTZSavePreset::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::CameraAvSettingsUserLevelManagement::Id; }

    Optional<uint8_t> presetID;
    chip::CharSpan name;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace MPTZSavePreset
namespace MPTZRemovePreset {
enum class Fields : uint8_t
{
    kPresetID = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::MPTZRemovePreset::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::CameraAvSettingsUserLevelManagement::Id; }

    uint8_t presetID = static_cast<uint8_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::MPTZRemovePreset::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::CameraAvSettingsUserLevelManagement::Id; }

    uint8_t presetID = static_cast<uint8_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace MPTZRemovePreset
namespace DPTZSetViewport {
enum class Fields : uint8_t
{
    kVideoStreamID = 0,
    kViewport      = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::DPTZSetViewport::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::CameraAvSettingsUserLevelManagement::Id; }

    uint16_t videoStreamID = static_cast<uint16_t>(0);
    Structs::ViewportStruct::Type viewport;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::DPTZSetViewport::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::CameraAvSettingsUserLevelManagement::Id; }

    uint16_t videoStreamID = static_cast<uint16_t>(0);
    Structs::ViewportStruct::DecodableType viewport;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace DPTZSetViewport
namespace DPTZRelativeMove {
enum class Fields : uint8_t
{
    kVideoStreamID = 0,
    kDeltaX        = 1,
    kDeltaY        = 2,
    kZoomDelta     = 3,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::DPTZRelativeMove::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::CameraAvSettingsUserLevelManagement::Id; }

    uint16_t videoStreamID = static_cast<uint16_t>(0);
    Optional<int16_t> deltaX;
    Optional<int16_t> deltaY;
    Optional<int8_t> zoomDelta;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::DPTZRelativeMove::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::CameraAvSettingsUserLevelManagement::Id; }

    uint16_t videoStreamID = static_cast<uint16_t>(0);
    Optional<int16_t> deltaX;
    Optional<int16_t> deltaY;
    Optional<int8_t> zoomDelta;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace DPTZRelativeMove
} // namespace Commands
} // namespace CameraAvSettingsUserLevelManagement
} // namespace Clusters
} // namespace app
} // namespace chip
