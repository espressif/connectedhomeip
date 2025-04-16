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
namespace ModeSelect {
namespace Structs {
namespace SemanticTagStruct {
enum class Fields : uint8_t
{
    kMfgCode = 0,
    kValue   = 1,
};

struct Type
{
public:
    chip::VendorId mfgCode = static_cast<chip::VendorId>(0);
    uint16_t value         = static_cast<uint16_t>(0);

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace SemanticTagStruct
namespace ModeOptionStruct {
enum class Fields : uint8_t
{
    kLabel        = 0,
    kMode         = 1,
    kSemanticTags = 2,
};

struct Type
{
public:
    chip::CharSpan label;
    uint8_t mode = static_cast<uint8_t>(0);
    DataModel::List<const Structs::SemanticTagStruct::Type> semanticTags;

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

struct DecodableType
{
public:
    chip::CharSpan label;
    uint8_t mode = static_cast<uint8_t>(0);
    DataModel::DecodableList<Structs::SemanticTagStruct::DecodableType> semanticTags;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;
};

} // namespace ModeOptionStruct
} // namespace Structs
} // namespace ModeSelect
} // namespace Clusters
} // namespace app
} // namespace chip
