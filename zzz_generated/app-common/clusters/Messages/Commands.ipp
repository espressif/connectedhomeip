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
#include <clusters/Messages/Commands.h>

#include <app/data-model/Decode.h>
#include <app/data-model/StructDecodeIterator.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip {
namespace app {
namespace Clusters {
namespace Messages {
namespace Commands {
namespace PresentMessagesRequest {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
    encoder.Encode(to_underlying(Fields::kMessageID), messageID);
    encoder.Encode(to_underlying(Fields::kPriority), priority);
    encoder.Encode(to_underlying(Fields::kMessageControl), messageControl);
    encoder.Encode(to_underlying(Fields::kStartTime), startTime);
    encoder.Encode(to_underlying(Fields::kDuration), duration);
    encoder.Encode(to_underlying(Fields::kMessageText), messageText);
    encoder.Encode(to_underlying(Fields::kResponses), responses);
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

        if (__context_tag == to_underlying(Fields::kMessageID))
        {
            err = DataModel::Decode(reader, messageID);
        }
        else if (__context_tag == to_underlying(Fields::kPriority))
        {
            err = DataModel::Decode(reader, priority);
        }
        else if (__context_tag == to_underlying(Fields::kMessageControl))
        {
            err = DataModel::Decode(reader, messageControl);
        }
        else if (__context_tag == to_underlying(Fields::kStartTime))
        {
            err = DataModel::Decode(reader, startTime);
        }
        else if (__context_tag == to_underlying(Fields::kDuration))
        {
            err = DataModel::Decode(reader, duration);
        }
        else if (__context_tag == to_underlying(Fields::kMessageText))
        {
            err = DataModel::Decode(reader, messageText);
        }
        else if (__context_tag == to_underlying(Fields::kResponses))
        {
            err = DataModel::Decode(reader, responses);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}
} // namespace PresentMessagesRequest.
namespace CancelMessagesRequest {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
    encoder.Encode(to_underlying(Fields::kMessageIDs), messageIDs);
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

        if (__context_tag == to_underlying(Fields::kMessageIDs))
        {
            err = DataModel::Decode(reader, messageIDs);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}
} // namespace CancelMessagesRequest.
} // namespace Commands
} // namespace Messages
} // namespace Clusters
} // namespace app
} // namespace chip
