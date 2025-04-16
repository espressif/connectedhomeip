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
#include <clusters/BridgedDeviceBasicInformation/Attributes.h>

#include <app/data-model/Decode.h>
#include <app/data-model/WrappedStructEncoder.h>

namespace chip {
namespace app {
namespace Clusters {
namespace BridgedDeviceBasicInformation {
namespace Attributes {
CHIP_ERROR TypeInfo::DecodableType::Decode(TLV::TLVReader & reader, const ConcreteAttributePath & path)
{
    switch (path.mAttributeId)
    {
    case Attributes::VendorName::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, vendorName);
    case Attributes::VendorID::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, vendorID);
    case Attributes::ProductName::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, productName);
    case Attributes::ProductID::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, productID);
    case Attributes::NodeLabel::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, nodeLabel);
    case Attributes::HardwareVersion::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, hardwareVersion);
    case Attributes::HardwareVersionString::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, hardwareVersionString);
    case Attributes::SoftwareVersion::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, softwareVersion);
    case Attributes::SoftwareVersionString::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, softwareVersionString);
    case Attributes::ManufacturingDate::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, manufacturingDate);
    case Attributes::PartNumber::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, partNumber);
    case Attributes::ProductURL::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, productURL);
    case Attributes::ProductLabel::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, productLabel);
    case Attributes::SerialNumber::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, serialNumber);
    case Attributes::Reachable::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, reachable);
    case Attributes::UniqueID::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, uniqueID);
    case Attributes::ProductAppearance::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, productAppearance);
    case Attributes::ConfigurationVersion::TypeInfo::GetAttributeId():
        return DataModel::Decode(reader, configurationVersion);
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
} // namespace BridgedDeviceBasicInformation
} // namespace Clusters
} // namespace app
} // namespace chip
