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
namespace ServiceArea {
namespace Structs {
namespace LandmarkInfoStruct {
enum class Fields : uint8_t
{
    kLandmarkTag         = 0,
    kRelativePositionTag = 1,
};

struct Type
{
public:
    Globals::LandmarkTag landmarkTag = static_cast<Globals::LandmarkTag>(0);
    DataModel::Nullable<Globals::RelativePositionTag> relativePositionTag;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace LandmarkInfoStruct
namespace AreaInfoStruct {
enum class Fields : uint8_t
{
    kLocationInfo = 0,
    kLandmarkInfo = 1,
};

struct Type
{
public:
    DataModel::Nullable<Globals::Structs::LocationDescriptorStruct::Type> locationInfo;
    DataModel::Nullable<Structs::LandmarkInfoStruct::Type> landmarkInfo;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace AreaInfoStruct
namespace AreaStruct {
enum class Fields : uint8_t
{
    kAreaID   = 0,
    kMapID    = 1,
    kAreaInfo = 2,
};

struct Type
{
public:
    uint32_t areaID = static_cast<uint32_t>(0);
    DataModel::Nullable<uint32_t> mapID;
    Structs::AreaInfoStruct::Type areaInfo;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace AreaStruct
namespace MapStruct {
enum class Fields : uint8_t
{
    kMapID = 0,
    kName  = 1,
};

struct Type
{
public:
    uint32_t mapID = static_cast<uint32_t>(0);
    chip::CharSpan name;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace MapStruct
namespace ProgressStruct {
enum class Fields : uint8_t
{
    kAreaID               = 0,
    kStatus               = 1,
    kTotalOperationalTime = 2,
    kEstimatedTime        = 3,
};

struct Type
{
public:
    uint32_t areaID              = static_cast<uint32_t>(0);
    OperationalStatusEnum status = static_cast<OperationalStatusEnum>(0);
    Optional<DataModel::Nullable<uint32_t>> totalOperationalTime;
    Optional<DataModel::Nullable<uint32_t>> estimatedTime;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace ProgressStruct
} // namespace Structs
} // namespace ServiceArea
} // namespace Clusters
} // namespace app
} // namespace chip
