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
namespace BasicInformation {
namespace Structs {
namespace CapabilityMinimaStruct {
enum class Fields : uint8_t
{
    kCaseSessionsPerFabric  = 0,
    kSubscriptionsPerFabric = 1,
};

struct Type
{
public:
    uint16_t caseSessionsPerFabric  = static_cast<uint16_t>(0);
    uint16_t subscriptionsPerFabric = static_cast<uint16_t>(0);

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace CapabilityMinimaStruct
namespace ProductAppearanceStruct {
enum class Fields : uint8_t
{
    kFinish       = 0,
    kPrimaryColor = 1,
};

struct Type
{
public:
    ProductFinishEnum finish = static_cast<ProductFinishEnum>(0);
    DataModel::Nullable<ColorEnum> primaryColor;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace ProductAppearanceStruct
} // namespace Structs
} // namespace BasicInformation
} // namespace Clusters
} // namespace app
} // namespace chip
