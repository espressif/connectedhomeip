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
#include <clusters/WaterHeaterManagement/Structs.h>

#include <app/data-model/StructDecodeIterator.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip {
namespace app {
namespace Clusters {
namespace WaterHeaterManagement {
namespace Structs {

namespace WaterHeaterBoostInfoStruct {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
    encoder.Encode(to_underlying(Fields::kDuration), duration);
    encoder.Encode(to_underlying(Fields::kOneShot), oneShot);
    encoder.Encode(to_underlying(Fields::kEmergencyBoost), emergencyBoost);
    encoder.Encode(to_underlying(Fields::kTemporarySetpoint), temporarySetpoint);
    encoder.Encode(to_underlying(Fields::kTargetPercentage), targetPercentage);
    encoder.Encode(to_underlying(Fields::kTargetReheat), targetReheat);
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

        if (__context_tag == to_underlying(Fields::kDuration))
        {
            err = DataModel::Decode(reader, duration);
        }
        else if (__context_tag == to_underlying(Fields::kOneShot))
        {
            err = DataModel::Decode(reader, oneShot);
        }
        else if (__context_tag == to_underlying(Fields::kEmergencyBoost))
        {
            err = DataModel::Decode(reader, emergencyBoost);
        }
        else if (__context_tag == to_underlying(Fields::kTemporarySetpoint))
        {
            err = DataModel::Decode(reader, temporarySetpoint);
        }
        else if (__context_tag == to_underlying(Fields::kTargetPercentage))
        {
            err = DataModel::Decode(reader, targetPercentage);
        }
        else if (__context_tag == to_underlying(Fields::kTargetReheat))
        {
            err = DataModel::Decode(reader, targetReheat);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace WaterHeaterBoostInfoStruct
} // namespace Structs
} // namespace WaterHeaterManagement
} // namespace Clusters
} // namespace app
} // namespace chip
