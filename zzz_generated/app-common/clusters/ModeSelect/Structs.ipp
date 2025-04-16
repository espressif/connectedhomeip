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
#include <clusters/ModeSelect/Structs.h>

#include <app/data-model/StructDecodeIterator.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip {
namespace app {
namespace Clusters {
namespace ModeSelect {
namespace Structs {

namespace SemanticTagStruct {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
    encoder.Encode(to_underlying(Fields::kMfgCode), mfgCode);
    encoder.Encode(to_underlying(Fields::kValue), value);
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

        if (__context_tag == to_underlying(Fields::kMfgCode))
        {
            err = DataModel::Decode(reader, mfgCode);
        }
        else if (__context_tag == to_underlying(Fields::kValue))
        {
            err = DataModel::Decode(reader, value);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace SemanticTagStruct

namespace ModeOptionStruct {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
    encoder.Encode(to_underlying(Fields::kLabel), label);
    encoder.Encode(to_underlying(Fields::kMode), mode);
    encoder.Encode(to_underlying(Fields::kSemanticTags), semanticTags);
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

        if (__context_tag == to_underlying(Fields::kLabel))
        {
            err = DataModel::Decode(reader, label);
        }
        else if (__context_tag == to_underlying(Fields::kMode))
        {
            err = DataModel::Decode(reader, mode);
        }
        else if (__context_tag == to_underlying(Fields::kSemanticTags))
        {
            err = DataModel::Decode(reader, semanticTags);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace ModeOptionStruct
} // namespace Structs
} // namespace ModeSelect
} // namespace Clusters
} // namespace app
} // namespace chip
