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
#include <clusters/ServiceArea/Structs.h>

#include <app/data-model/StructDecodeIterator.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip {
namespace app {
namespace Clusters {
namespace ServiceArea {
namespace Structs {

namespace LandmarkInfoStruct {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
    encoder.Encode(to_underlying(Fields::kLandmarkTag), landmarkTag);
    encoder.Encode(to_underlying(Fields::kRelativePositionTag), relativePositionTag);
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

        if (__context_tag == to_underlying(Fields::kLandmarkTag))
        {
            err = DataModel::Decode(reader, landmarkTag);
        }
        else if (__context_tag == to_underlying(Fields::kRelativePositionTag))
        {
            err = DataModel::Decode(reader, relativePositionTag);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace LandmarkInfoStruct

namespace AreaInfoStruct {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
    encoder.Encode(to_underlying(Fields::kLocationInfo), locationInfo);
    encoder.Encode(to_underlying(Fields::kLandmarkInfo), landmarkInfo);
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

        if (__context_tag == to_underlying(Fields::kLocationInfo))
        {
            err = DataModel::Decode(reader, locationInfo);
        }
        else if (__context_tag == to_underlying(Fields::kLandmarkInfo))
        {
            err = DataModel::Decode(reader, landmarkInfo);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace AreaInfoStruct

namespace AreaStruct {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
    encoder.Encode(to_underlying(Fields::kAreaID), areaID);
    encoder.Encode(to_underlying(Fields::kMapID), mapID);
    encoder.Encode(to_underlying(Fields::kAreaInfo), areaInfo);
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

        if (__context_tag == to_underlying(Fields::kAreaID))
        {
            err = DataModel::Decode(reader, areaID);
        }
        else if (__context_tag == to_underlying(Fields::kMapID))
        {
            err = DataModel::Decode(reader, mapID);
        }
        else if (__context_tag == to_underlying(Fields::kAreaInfo))
        {
            err = DataModel::Decode(reader, areaInfo);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace AreaStruct

namespace MapStruct {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
    encoder.Encode(to_underlying(Fields::kMapID), mapID);
    encoder.Encode(to_underlying(Fields::kName), name);
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

        if (__context_tag == to_underlying(Fields::kMapID))
        {
            err = DataModel::Decode(reader, mapID);
        }
        else if (__context_tag == to_underlying(Fields::kName))
        {
            err = DataModel::Decode(reader, name);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace MapStruct

namespace ProgressStruct {
CHIP_ERROR Type::Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const
{
    DataModel::WrappedStructEncoder encoder{ aWriter, aTag };
    encoder.Encode(to_underlying(Fields::kAreaID), areaID);
    encoder.Encode(to_underlying(Fields::kStatus), status);
    encoder.Encode(to_underlying(Fields::kTotalOperationalTime), totalOperationalTime);
    encoder.Encode(to_underlying(Fields::kEstimatedTime), estimatedTime);
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

        if (__context_tag == to_underlying(Fields::kAreaID))
        {
            err = DataModel::Decode(reader, areaID);
        }
        else if (__context_tag == to_underlying(Fields::kStatus))
        {
            err = DataModel::Decode(reader, status);
        }
        else if (__context_tag == to_underlying(Fields::kTotalOperationalTime))
        {
            err = DataModel::Decode(reader, totalOperationalTime);
        }
        else if (__context_tag == to_underlying(Fields::kEstimatedTime))
        {
            err = DataModel::Decode(reader, estimatedTime);
        }
        else
        {
        }

        ReturnErrorOnFailure(err);
    }
}

} // namespace ProgressStruct
} // namespace Structs
} // namespace ServiceArea
} // namespace Clusters
} // namespace app
} // namespace chip
