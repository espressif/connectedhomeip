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
#include <clusters/CameraAvStreamManagement/Attributes.h>

#include <app/data-model/Decode.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip {
namespace app {
namespace Clusters {
namespace CameraAvStreamManagement {
namespace Attributes {
CHIP_ERROR TypeInfo::DecodableType::Decode(TLV::TLVReader & reader, const ConcreteAttributePath & path)
{
    switch (path.mAttributeId)
    {
    case Attributes::MaxConcurrentEncoders::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, maxConcurrentEncoders);
    case Attributes::MaxEncodedPixelRate::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, maxEncodedPixelRate);
    case Attributes::VideoSensorParams::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, videoSensorParams);
    case Attributes::NightVisionCapable::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, nightVisionCapable);
    case Attributes::MinViewport::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, minViewport);
    case Attributes::RateDistortionTradeOffPoints::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, rateDistortionTradeOffPoints);
    case Attributes::MaxContentBufferSize::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, maxContentBufferSize);
    case Attributes::MicrophoneCapabilities::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, microphoneCapabilities);
    case Attributes::SpeakerCapabilities::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, speakerCapabilities);
    case Attributes::TwoWayTalkSupport::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, twoWayTalkSupport);
    case Attributes::SnapshotCapabilities::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, snapshotCapabilities);
    case Attributes::MaxNetworkBandwidth::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, maxNetworkBandwidth);
    case Attributes::CurrentFrameRate::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, currentFrameRate);
    case Attributes::HDRModeEnabled::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, HDRModeEnabled);
    case Attributes::SupportedStreamUsages::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, supportedStreamUsages);
    case Attributes::AllocatedVideoStreams::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, allocatedVideoStreams);
    case Attributes::AllocatedAudioStreams::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, allocatedAudioStreams);
    case Attributes::AllocatedSnapshotStreams::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, allocatedSnapshotStreams);
    case Attributes::RankedVideoStreamPrioritiesList::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, rankedVideoStreamPrioritiesList);
    case Attributes::SoftRecordingPrivacyModeEnabled::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, softRecordingPrivacyModeEnabled);
    case Attributes::SoftLivestreamPrivacyModeEnabled::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, softLivestreamPrivacyModeEnabled);
    case Attributes::HardPrivacyModeOn::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, hardPrivacyModeOn);
    case Attributes::NightVision::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, nightVision);
    case Attributes::NightVisionIllum::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, nightVisionIllum);
    case Attributes::Viewport::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, viewport);
    case Attributes::SpeakerMuted::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, speakerMuted);
    case Attributes::SpeakerVolumeLevel::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, speakerVolumeLevel);
    case Attributes::SpeakerMaxLevel::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, speakerMaxLevel);
    case Attributes::SpeakerMinLevel::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, speakerMinLevel);
    case Attributes::MicrophoneMuted::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, microphoneMuted);
    case Attributes::MicrophoneVolumeLevel::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, microphoneVolumeLevel);
    case Attributes::MicrophoneMaxLevel::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, microphoneMaxLevel);
    case Attributes::MicrophoneMinLevel::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, microphoneMinLevel);
    case Attributes::MicrophoneAGCEnabled::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, microphoneAGCEnabled);
    case Attributes::ImageRotation::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, imageRotation);
    case Attributes::ImageFlipHorizontal::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, imageFlipHorizontal);
    case Attributes::ImageFlipVertical::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, imageFlipVertical);
    case Attributes::LocalVideoRecordingEnabled::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, localVideoRecordingEnabled);
    case Attributes::LocalSnapshotRecordingEnabled::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, localSnapshotRecordingEnabled);
    case Attributes::StatusLightEnabled::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, statusLightEnabled);
    case Attributes::StatusLightBrightness::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, statusLightBrightness);
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
} // namespace CameraAvStreamManagement
} // namespace Clusters
} // namespace app
} // namespace chip
