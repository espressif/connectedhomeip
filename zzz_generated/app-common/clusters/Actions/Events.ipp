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
#include <clusters/Actions/Events.h>

#include <app/data-model/Decode.h>
#include <app/data-model/Encode.h>
#include <app/data-model/StructDecodeIterator.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip {
namespace app {
namespace Clusters {
namespace Actions {
namespace Events {
namespace StateChanged {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    TLV::TLVType outer;
    ReturnErrorOnFailure(aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
    ReturnErrorOnFailure(DataModel::Encode(aWriter, TLV::ContextTag(Fields::kActionID), actionID));
    ReturnErrorOnFailure(DataModel::Encode(aWriter, TLV::ContextTag(Fields::kInvokeID), invokeID));
    ReturnErrorOnFailure(DataModel::Encode(aWriter, TLV::ContextTag(Fields::kNewState), newState));
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

        if (__context_tag == to_underlying(Fields::kActionID))
        {
            err = DataModel::Decode(reader, actionID);
        }
        else if (__context_tag == to_underlying(Fields::kInvokeID))
        {
            err = DataModel::Decode(reader, invokeID);
        }
        else if (__context_tag == to_underlying(Fields::kNewState))
        {
            err = DataModel::Decode(reader, newState);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}
} // namespace StateChanged.
namespace ActionFailed {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    TLV::TLVType outer;
    ReturnErrorOnFailure(aWriter.StartContainer(aTag, TLV::kTLVType_Structure, outer));
    ReturnErrorOnFailure(DataModel::Encode(aWriter, TLV::ContextTag(Fields::kActionID), actionID));
    ReturnErrorOnFailure(DataModel::Encode(aWriter, TLV::ContextTag(Fields::kInvokeID), invokeID));
    ReturnErrorOnFailure(DataModel::Encode(aWriter, TLV::ContextTag(Fields::kNewState), newState));
    ReturnErrorOnFailure(DataModel::Encode(aWriter, TLV::ContextTag(Fields::kError), error));
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

        if (__context_tag == to_underlying(Fields::kActionID))
        {
            err = DataModel::Decode(reader, actionID);
        }
        else if (__context_tag == to_underlying(Fields::kInvokeID))
        {
            err = DataModel::Decode(reader, invokeID);
        }
        else if (__context_tag == to_underlying(Fields::kNewState))
        {
            err = DataModel::Decode(reader, newState);
        }
        else if (__context_tag == to_underlying(Fields::kError))
        {
            err = DataModel::Decode(reader, error);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}
} // namespace ActionFailed.
} // namespace Events
} // namespace Actions
} // namespace Clusters
} // namespace app
} // namespace chip
