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
#include <clusters/IcdManagement/Attributes.h>

#include <app/data-model/Decode.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip {
namespace app {
namespace Clusters {
namespace IcdManagement {
namespace Attributes {
CHIP_ERROR TypeInfo::DecodableType::Decode(TLV::TLVReader & reader, const ConcreteAttributePath & path)
{
    switch (path.mAttributeId)
    {
    case Attributes::IdleModeDuration::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, idleModeDuration);
    case Attributes::ActiveModeDuration::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, activeModeDuration);
    case Attributes::ActiveModeThreshold::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, activeModeThreshold);
    case Attributes::RegisteredClients::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, registeredClients);
    case Attributes::ICDCounter::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, ICDCounter);
    case Attributes::ClientsSupportedPerFabric::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, clientsSupportedPerFabric);
    case Attributes::UserActiveModeTriggerHint::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, userActiveModeTriggerHint);
    case Attributes::UserActiveModeTriggerInstruction::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, userActiveModeTriggerInstruction);
    case Attributes::OperatingMode::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, operatingMode);
    case Attributes::MaximumCheckInBackOff::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, maximumCheckInBackOff);
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
} // namespace IcdManagement
} // namespace Clusters
} // namespace app
} // namespace chip
