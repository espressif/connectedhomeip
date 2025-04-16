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
#include <clusters/AccessControl/Structs.h>

#include <app/data-model/StructDecodeIterator.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip {
namespace app {
namespace Clusters {
namespace AccessControl {
namespace Structs {

namespace AccessRestrictionStruct {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
    encoder.Encode(to_underlying(Fields::kType), type);
    encoder.Encode(to_underlying(Fields::kId), id);
    return encoder.Finalize();
}

CHIP_ERROR DecodableType::Decode(TLV::TLVReader & reader)
{
    detail::StructDecodeIterator __iterator(reader);
    while (true)
    {
        uint8_t __context_tag = 0;
        CHIP_ERROR err        = __iterator.Next(__context_tag);
        VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV, CHIP_NO_ERROR);
        ReturnErrorOnFailure(err);

        if (__context_tag == to_underlying(Fields::kType))
        {
            err = DataModel::Decode(reader, type);
        }
        else if (__context_tag == to_underlying(Fields::kId))
        {
            err = DataModel::Decode(reader, id);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace AccessRestrictionStruct

namespace CommissioningAccessRestrictionEntryStruct {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
    encoder.Encode(to_underlying(Fields::kEndpoint), endpoint);
    encoder.Encode(to_underlying(Fields::kCluster), cluster);
    encoder.Encode(to_underlying(Fields::kRestrictions), restrictions);
    return encoder.Finalize();
}

CHIP_ERROR DecodableType::Decode(TLV::TLVReader & reader)
{
    detail::StructDecodeIterator __iterator(reader);
    while (true)
    {
        uint8_t __context_tag = 0;
        CHIP_ERROR err        = __iterator.Next(__context_tag);
        VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV, CHIP_NO_ERROR);
        ReturnErrorOnFailure(err);

        if (__context_tag == to_underlying(Fields::kEndpoint))
        {
            err = DataModel::Decode(reader, endpoint);
        }
        else if (__context_tag == to_underlying(Fields::kCluster))
        {
            err = DataModel::Decode(reader, cluster);
        }
        else if (__context_tag == to_underlying(Fields::kRestrictions))
        {
            err = DataModel::Decode(reader, restrictions);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace CommissioningAccessRestrictionEntryStruct

namespace AccessRestrictionEntryStruct {
CHIP_ERROR Type::EncodeForWrite(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    return DoEncode(aWriter, aTag, NullOptional);
}

CHIP_ERROR Type::EncodeForRead(TLV::TLVWriter & aWriter, TLV::Tag aTag, FabricIndex aAccessingFabricIndex) const
{
    return DoEncode(aWriter, aTag, MakeOptional(aAccessingFabricIndex));
}

CHIP_ERROR Type::DoEncode(TLV::TLVWriter & aWriter, TLV::Tag aTag, const Optional<FabricIndex> & aAccessingFabricIndex) const
{
    bool includeSensitive = !aAccessingFabricIndex.HasValue() || (aAccessingFabricIndex.Value() == fabricIndex);

    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };

    if (includeSensitive)
    {
        encoder.Encode(to_underlying(Fields::kEndpoint), endpoint);
    }
    if (includeSensitive)
    {
        encoder.Encode(to_underlying(Fields::kCluster), cluster);
    }
    if (includeSensitive)
    {
        encoder.Encode(to_underlying(Fields::kRestrictions), restrictions);
    }
    if (aAccessingFabricIndex.HasValue())
    {
        encoder.Encode(to_underlying(Fields::kFabricIndex), fabricIndex);
    }

    return encoder.Finalize();
}

CHIP_ERROR DecodableType::Decode(TLV::TLVReader & reader)
{
    detail::StructDecodeIterator __iterator(reader);
    while (true)
    {
        uint8_t __context_tag = 0;
        CHIP_ERROR err        = __iterator.Next(__context_tag);
        VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV, CHIP_NO_ERROR);
        ReturnErrorOnFailure(err);

        if (__context_tag == to_underlying(Fields::kEndpoint))
        {
            err = DataModel::Decode(reader, endpoint);
        }
        else if (__context_tag == to_underlying(Fields::kCluster))
        {
            err = DataModel::Decode(reader, cluster);
        }
        else if (__context_tag == to_underlying(Fields::kRestrictions))
        {
            err = DataModel::Decode(reader, restrictions);
        }
        else if (__context_tag == to_underlying(Fields::kFabricIndex))
        {
            err = DataModel::Decode(reader, fabricIndex);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace AccessRestrictionEntryStruct

namespace AccessControlTargetStruct {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
    encoder.Encode(to_underlying(Fields::kCluster), cluster);
    encoder.Encode(to_underlying(Fields::kEndpoint), endpoint);
    encoder.Encode(to_underlying(Fields::kDeviceType), deviceType);
    return encoder.Finalize();
}

CHIP_ERROR DecodableType::Decode(TLV::TLVReader & reader)
{
    detail::StructDecodeIterator __iterator(reader);
    while (true)
    {
        uint8_t __context_tag = 0;
        CHIP_ERROR err        = __iterator.Next(__context_tag);
        VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV, CHIP_NO_ERROR);
        ReturnErrorOnFailure(err);

        if (__context_tag == to_underlying(Fields::kCluster))
        {
            err = DataModel::Decode(reader, cluster);
        }
        else if (__context_tag == to_underlying(Fields::kEndpoint))
        {
            err = DataModel::Decode(reader, endpoint);
        }
        else if (__context_tag == to_underlying(Fields::kDeviceType))
        {
            err = DataModel::Decode(reader, deviceType);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace AccessControlTargetStruct

namespace AccessControlEntryStruct {
CHIP_ERROR Type::EncodeForWrite(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    return DoEncode(aWriter, aTag, NullOptional);
}

CHIP_ERROR Type::EncodeForRead(TLV::TLVWriter & aWriter, TLV::Tag aTag, FabricIndex aAccessingFabricIndex) const
{
    return DoEncode(aWriter, aTag, MakeOptional(aAccessingFabricIndex));
}

CHIP_ERROR Type::DoEncode(TLV::TLVWriter & aWriter, TLV::Tag aTag, const Optional<FabricIndex> & aAccessingFabricIndex) const
{
    bool includeSensitive = !aAccessingFabricIndex.HasValue() || (aAccessingFabricIndex.Value() == fabricIndex);

    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };

    if (includeSensitive)
    {
        encoder.Encode(to_underlying(Fields::kPrivilege), privilege);
    }
    if (includeSensitive)
    {
        encoder.Encode(to_underlying(Fields::kAuthMode), authMode);
    }
    if (includeSensitive)
    {
        encoder.Encode(to_underlying(Fields::kSubjects), subjects);
    }
    if (includeSensitive)
    {
        encoder.Encode(to_underlying(Fields::kTargets), targets);
    }
    if (aAccessingFabricIndex.HasValue())
    {
        encoder.Encode(to_underlying(Fields::kFabricIndex), fabricIndex);
    }

    return encoder.Finalize();
}

CHIP_ERROR DecodableType::Decode(TLV::TLVReader & reader)
{
    detail::StructDecodeIterator __iterator(reader);
    while (true)
    {
        uint8_t __context_tag = 0;
        CHIP_ERROR err        = __iterator.Next(__context_tag);
        VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV, CHIP_NO_ERROR);
        ReturnErrorOnFailure(err);

        if (__context_tag == to_underlying(Fields::kPrivilege))
        {
            err = DataModel::Decode(reader, privilege);
        }
        else if (__context_tag == to_underlying(Fields::kAuthMode))
        {
            err = DataModel::Decode(reader, authMode);
        }
        else if (__context_tag == to_underlying(Fields::kSubjects))
        {
            err = DataModel::Decode(reader, subjects);
        }
        else if (__context_tag == to_underlying(Fields::kTargets))
        {
            err = DataModel::Decode(reader, targets);
        }
        else if (__context_tag == to_underlying(Fields::kFabricIndex))
        {
            err = DataModel::Decode(reader, fabricIndex);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace AccessControlEntryStruct

namespace AccessControlExtensionStruct {
CHIP_ERROR Type::EncodeForWrite(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    return DoEncode(aWriter, aTag, NullOptional);
}

CHIP_ERROR Type::EncodeForRead(TLV::TLVWriter & aWriter, TLV::Tag aTag, FabricIndex aAccessingFabricIndex) const
{
    return DoEncode(aWriter, aTag, MakeOptional(aAccessingFabricIndex));
}

CHIP_ERROR Type::DoEncode(TLV::TLVWriter & aWriter, TLV::Tag aTag, const Optional<FabricIndex> & aAccessingFabricIndex) const
{
    bool includeSensitive = !aAccessingFabricIndex.HasValue() || (aAccessingFabricIndex.Value() == fabricIndex);

    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };

    if (includeSensitive)
    {
        encoder.Encode(to_underlying(Fields::kData), data);
    }
    if (aAccessingFabricIndex.HasValue())
    {
        encoder.Encode(to_underlying(Fields::kFabricIndex), fabricIndex);
    }

    return encoder.Finalize();
}

CHIP_ERROR DecodableType::Decode(TLV::TLVReader & reader)
{
    detail::StructDecodeIterator __iterator(reader);
    while (true)
    {
        uint8_t __context_tag = 0;
        CHIP_ERROR err        = __iterator.Next(__context_tag);
        VerifyOrReturnError(err != CHIP_ERROR_END_OF_TLV, CHIP_NO_ERROR);
        ReturnErrorOnFailure(err);

        if (__context_tag == to_underlying(Fields::kData))
        {
            err = DataModel::Decode(reader, data);
        }
        else if (__context_tag == to_underlying(Fields::kFabricIndex))
        {
            err = DataModel::Decode(reader, fabricIndex);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace AccessControlExtensionStruct
} // namespace Structs
} // namespace AccessControl
} // namespace Clusters
} // namespace app
} // namespace chip
