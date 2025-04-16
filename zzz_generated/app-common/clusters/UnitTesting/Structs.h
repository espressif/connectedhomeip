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
namespace UnitTesting {
namespace Structs {
namespace SimpleStruct {
enum class Fields : uint8_t
{
    kA = 0,
    kB = 1,
    kC = 2,
    kD = 3,
    kE = 4,
    kF = 5,
    kG = 6,
    kH = 7,
    kI = 8,
};

struct Type
{
public:
    uint8_t a    = static_cast<uint8_t>(0);
    bool b       = static_cast<bool>(0);
    SimpleEnum c = static_cast<SimpleEnum>(0);
    chip::ByteSpan d;
    chip::CharSpan e;
    chip::BitMask<SimpleBitmap> f = static_cast<chip::BitMask<SimpleBitmap>>(0);
    float g                       = static_cast<float>(0);
    double h                      = static_cast<double>(0);
    Optional<Globals::TestGlobalEnum> i;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace SimpleStruct
namespace TestFabricScoped {
enum class Fields : uint8_t
{
    kFabricSensitiveInt8u                 = 1,
    kOptionalFabricSensitiveInt8u         = 2,
    kNullableFabricSensitiveInt8u         = 3,
    kNullableOptionalFabricSensitiveInt8u = 4,
    kFabricSensitiveCharString            = 5,
    kFabricSensitiveStruct                = 6,
    kFabricSensitiveInt8uList             = 7,
    kFabricIndex                          = 254,
};

struct Type
{
public:
    uint8_t fabricSensitiveInt8u = static_cast<uint8_t>(0);
    Optional<uint8_t> optionalFabricSensitiveInt8u;
    DataModel::Nullable<uint8_t> nullableFabricSensitiveInt8u;
    Optional<DataModel::Nullable<uint8_t>> nullableOptionalFabricSensitiveInt8u;
    chip::CharSpan fabricSensitiveCharString;
    Structs::SimpleStruct::Type fabricSensitiveStruct;
    DataModel::List<const uint8_t> fabricSensitiveInt8uList;
    chip::FabricIndex fabricIndex = static_cast<chip::FabricIndex>(0);

    static constexpr bool kIsFabricScoped = true;

    auto GetFabricIndex() const { return fabricIndex; }

    void SetFabricIndex(chip::FabricIndex fabricIndex_) { fabricIndex = fabricIndex_; }

    CHIP_ERROR EncodeForWrite(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
    CHIP_ERROR EncodeForRead(TLV::TLVWriter & aWriter, TLV::Tag aTag, FabricIndex aAccessingFabricIndex) const;

private:
    CHIP_ERROR DoEncode(TLV::TLVWriter & aWriter, TLV::Tag aTag, const Optional<FabricIndex> & aAccessingFabricIndex) const;
};

struct DecodableType
{
public:
    uint8_t fabricSensitiveInt8u = static_cast<uint8_t>(0);
    Optional<uint8_t> optionalFabricSensitiveInt8u;
    DataModel::Nullable<uint8_t> nullableFabricSensitiveInt8u;
    Optional<DataModel::Nullable<uint8_t>> nullableOptionalFabricSensitiveInt8u;
    chip::CharSpan fabricSensitiveCharString;
    Structs::SimpleStruct::DecodableType fabricSensitiveStruct;
    DataModel::DecodableList<uint8_t> fabricSensitiveInt8uList;
    chip::FabricIndex fabricIndex = static_cast<chip::FabricIndex>(0);

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = true;

    auto GetFabricIndex() const { return fabricIndex; }

    void SetFabricIndex(chip::FabricIndex fabricIndex_) { fabricIndex = fabricIndex_; }
};

} // namespace TestFabricScoped
namespace NullablesAndOptionalsStruct {
enum class Fields : uint8_t
{
    kNullableInt            = 0,
    kOptionalInt            = 1,
    kNullableOptionalInt    = 2,
    kNullableString         = 3,
    kOptionalString         = 4,
    kNullableOptionalString = 5,
    kNullableStruct         = 6,
    kOptionalStruct         = 7,
    kNullableOptionalStruct = 8,
    kNullableList           = 9,
    kOptionalList           = 10,
    kNullableOptionalList   = 11,
};

struct Type
{
public:
    DataModel::Nullable<uint16_t> nullableInt;
    Optional<uint16_t> optionalInt;
    Optional<DataModel::Nullable<uint16_t>> nullableOptionalInt;
    DataModel::Nullable<chip::CharSpan> nullableString;
    Optional<chip::CharSpan> optionalString;
    Optional<DataModel::Nullable<chip::CharSpan>> nullableOptionalString;
    DataModel::Nullable<Structs::SimpleStruct::Type> nullableStruct;
    Optional<Structs::SimpleStruct::Type> optionalStruct;
    Optional<DataModel::Nullable<Structs::SimpleStruct::Type>> nullableOptionalStruct;
    DataModel::Nullable<DataModel::List<const SimpleEnum>> nullableList;
    Optional<DataModel::List<const SimpleEnum>> optionalList;
    Optional<DataModel::Nullable<DataModel::List<const SimpleEnum>>> nullableOptionalList;

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

struct DecodableType
{
public:
    DataModel::Nullable<uint16_t> nullableInt;
    Optional<uint16_t> optionalInt;
    Optional<DataModel::Nullable<uint16_t>> nullableOptionalInt;
    DataModel::Nullable<chip::CharSpan> nullableString;
    Optional<chip::CharSpan> optionalString;
    Optional<DataModel::Nullable<chip::CharSpan>> nullableOptionalString;
    DataModel::Nullable<Structs::SimpleStruct::DecodableType> nullableStruct;
    Optional<Structs::SimpleStruct::DecodableType> optionalStruct;
    Optional<DataModel::Nullable<Structs::SimpleStruct::DecodableType>> nullableOptionalStruct;
    DataModel::Nullable<DataModel::DecodableList<SimpleEnum>> nullableList;
    Optional<DataModel::DecodableList<SimpleEnum>> optionalList;
    Optional<DataModel::Nullable<DataModel::DecodableList<SimpleEnum>>> nullableOptionalList;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;
};

} // namespace NullablesAndOptionalsStruct
namespace NestedStruct {
enum class Fields : uint8_t
{
    kA = 0,
    kB = 1,
    kC = 2,
    kD = 3,
};

struct Type
{
public:
    uint8_t a = static_cast<uint8_t>(0);
    bool b    = static_cast<bool>(0);
    Structs::SimpleStruct::Type c;
    Optional<Globals::Structs::TestGlobalStruct::Type> d;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace NestedStruct
namespace NestedStructList {
enum class Fields : uint8_t
{
    kA = 0,
    kB = 1,
    kC = 2,
    kD = 3,
    kE = 4,
    kF = 5,
    kG = 6,
};

struct Type
{
public:
    uint8_t a = static_cast<uint8_t>(0);
    bool b    = static_cast<bool>(0);
    Structs::SimpleStruct::Type c;
    DataModel::List<const Structs::SimpleStruct::Type> d;
    DataModel::List<const uint32_t> e;
    DataModel::List<const chip::ByteSpan> f;
    DataModel::List<const uint8_t> g;

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

struct DecodableType
{
public:
    uint8_t a = static_cast<uint8_t>(0);
    bool b    = static_cast<bool>(0);
    Structs::SimpleStruct::DecodableType c;
    DataModel::DecodableList<Structs::SimpleStruct::DecodableType> d;
    DataModel::DecodableList<uint32_t> e;
    DataModel::DecodableList<chip::ByteSpan> f;
    DataModel::DecodableList<uint8_t> g;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;
};

} // namespace NestedStructList
namespace DoubleNestedStructList {
enum class Fields : uint8_t
{
    kA = 0,
};

struct Type
{
public:
    DataModel::List<const Structs::NestedStructList::Type> a;

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

struct DecodableType
{
public:
    DataModel::DecodableList<Structs::NestedStructList::DecodableType> a;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;
};

} // namespace DoubleNestedStructList
namespace TestListStructOctet {
enum class Fields : uint8_t
{
    kMember1 = 0,
    kMember2 = 1,
};

struct Type
{
public:
    uint64_t member1 = static_cast<uint64_t>(0);
    chip::ByteSpan member2;

    CHIP_ERROR Decode(TLV::TLVReader & reader);

    static constexpr bool kIsFabricScoped = false;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;
};

using DecodableType = Type;

} // namespace TestListStructOctet
} // namespace Structs
} // namespace UnitTesting
} // namespace Clusters
} // namespace app
} // namespace chip
