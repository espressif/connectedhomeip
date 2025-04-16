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
#include <clusters/SoftwareDiagnostics/Structs.h>

#include <app/data-model/StructDecodeIterator.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip {
namespace app {
namespace Clusters {
namespace SoftwareDiagnostics {
namespace Structs {

namespace ThreadMetricsStruct {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
    encoder.Encode(to_underlying(Fields::kId), id);
    encoder.Encode(to_underlying(Fields::kName), name);
    encoder.Encode(to_underlying(Fields::kStackFreeCurrent), stackFreeCurrent);
    encoder.Encode(to_underlying(Fields::kStackFreeMinimum), stackFreeMinimum);
    encoder.Encode(to_underlying(Fields::kStackSize), stackSize);
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

        if (__context_tag == to_underlying(Fields::kId))
        {
            err = DataModel::Decode(reader, id);
        }
        else if (__context_tag == to_underlying(Fields::kName))
        {
            err = DataModel::Decode(reader, name);
        }
        else if (__context_tag == to_underlying(Fields::kStackFreeCurrent))
        {
            err = DataModel::Decode(reader, stackFreeCurrent);
        }
        else if (__context_tag == to_underlying(Fields::kStackFreeMinimum))
        {
            err = DataModel::Decode(reader, stackFreeMinimum);
        }
        else if (__context_tag == to_underlying(Fields::kStackSize))
        {
            err = DataModel::Decode(reader, stackSize);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace ThreadMetricsStruct
} // namespace Structs
} // namespace SoftwareDiagnostics
} // namespace Clusters
} // namespace app
} // namespace chip
