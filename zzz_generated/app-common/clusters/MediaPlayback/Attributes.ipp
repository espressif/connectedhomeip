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
#include <clusters/MediaPlayback/Attributes.h>

#include <app/data-model/Decode.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip {
namespace app {
namespace Clusters {
namespace MediaPlayback {
namespace Attributes {
CHIP_ERROR TypeInfo::DecodableType::Decode(TLV::TLVReader & reader, const ConcreteAttributePath & path)
{
    switch (path.mAttributeId)
    {
    case Attributes::CurrentState::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, currentState);
    case Attributes::StartTime::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, startTime);
    case Attributes::Duration::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, duration);
    case Attributes::SampledPosition::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, sampledPosition);
    case Attributes::PlaybackSpeed::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, playbackSpeed);
    case Attributes::SeekRangeEnd::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, seekRangeEnd);
    case Attributes::SeekRangeStart::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, seekRangeStart);
    case Attributes::ActiveAudioTrack::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, activeAudioTrack);
    case Attributes::AvailableAudioTracks::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, availableAudioTracks);
    case Attributes::ActiveTextTrack::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, activeTextTrack);
    case Attributes::AvailableTextTracks::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, availableTextTracks);
    case Attributes::GeneratedCommandList::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, generatedCommandList);
    case Attributes::AcceptedCommandList::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, acceptedCommandList);
    case Attributes::AttributeList::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, attributeList);
    case Attributes::FeatureMap::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, featureMap);
    case Attributes::ClusterRevision::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, clusterRevision);
    default:
        return CHIP_NO_ERROR;
    }
}
} // namespace Attributes
} // namespace MediaPlayback
} // namespace Clusters
} // namespace app
} // namespace chip
