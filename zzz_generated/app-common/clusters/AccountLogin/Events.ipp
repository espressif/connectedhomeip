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
#include <clusters/AccountLogin/Events.h>

#include <app/data-model/Decode.h>
#include <app/data-model/Encode.h>
#include <app/data-model/StructDecodeIterator.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip {
namespace app {
namespace Clusters {
namespace AccountLogin {
namespace Events {
namespace LoggedOut {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    TLV::TLVType outer;
    ReturnErrorOnFailure(aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
    ReturnErrorOnFailure(DataModel::Encode(aWriter, TLV::ContextTag(Fields::kNode), node));
    ReturnErrorOnFailure(DataModel::Encode(aWriter, TLV::ContextTag(Fields::kFabricIndex), fabricIndex));
    return aWriter.EndContainer(outer);
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

        if (__context_tag == to_underlying(Fields::kNode))
        {
            err = DataModel::Decode(reader, node);
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
} // namespace LoggedOut.
} // namespace Events
} // namespace AccountLogin
} // namespace Clusters
} // namespace app
} // namespace chip
