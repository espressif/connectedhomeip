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
#pragma once

#include <app/ConcreteAttributePath.h>
#include <app/data-model/DecodableList.h>
#include <app/data-model/List.h>
#include <app/data-model/Nullable.h>
#include <app/util/basic-types.h>
#include <lib/core/TLV.h>
#include <lib/support/BitMask.h>

#include <clusters/shared/Attributes.h>
#include <clusters/shared/Enums.h>
#include <clusters/shared/Structs.h>

#include <clusters/BasicInformation/AttributeIds.h>
#include <clusters/BasicInformation/ClusterId.h>
#include <clusters/BasicInformation/Enums.h>
#include <clusters/BasicInformation/Structs.h>

namespace chip {
namespace app {
namespace Clusters {
namespace BasicInformation {
namespace Attributes {

namespace DataModelRevision {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::DataModelRevision::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace DataModelRevision
namespace VendorName {
struct TypeInfo
{
    using Type             = chip::CharSpan;
    using DecodableType    = chip::CharSpan;
    using DecodableArgType = chip::CharSpan;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::VendorName::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
    static constexpr size_t MaxLength() { return 32; }
};
} // namespace VendorName
namespace VendorID {
struct TypeInfo
{
    using Type             = chip::VendorId;
    using DecodableType    = chip::VendorId;
    using DecodableArgType = chip::VendorId;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::VendorID::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace VendorID
namespace ProductName {
struct TypeInfo
{
    using Type             = chip::CharSpan;
    using DecodableType    = chip::CharSpan;
    using DecodableArgType = chip::CharSpan;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::ProductName::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
    static constexpr size_t MaxLength() { return 32; }
};
} // namespace ProductName
namespace ProductID {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::ProductID::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace ProductID
namespace NodeLabel {
struct TypeInfo
{
    using Type             = chip::CharSpan;
    using DecodableType    = chip::CharSpan;
    using DecodableArgType = chip::CharSpan;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::NodeLabel::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
    static constexpr size_t MaxLength() { return 32; }
};
} // namespace NodeLabel
namespace Location {
struct TypeInfo
{
    using Type             = chip::CharSpan;
    using DecodableType    = chip::CharSpan;
    using DecodableArgType = chip::CharSpan;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::Location::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
    static constexpr size_t MaxLength() { return 2; }
};
} // namespace Location
namespace HardwareVersion {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::HardwareVersion::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace HardwareVersion
namespace HardwareVersionString {
struct TypeInfo
{
    using Type             = chip::CharSpan;
    using DecodableType    = chip::CharSpan;
    using DecodableArgType = chip::CharSpan;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::HardwareVersionString::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
    static constexpr size_t MaxLength() { return 64; }
};
} // namespace HardwareVersionString
namespace SoftwareVersion {
struct TypeInfo
{
    using Type             = uint32_t;
    using DecodableType    = uint32_t;
    using DecodableArgType = uint32_t;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::SoftwareVersion::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace SoftwareVersion
namespace SoftwareVersionString {
struct TypeInfo
{
    using Type             = chip::CharSpan;
    using DecodableType    = chip::CharSpan;
    using DecodableArgType = chip::CharSpan;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::SoftwareVersionString::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
    static constexpr size_t MaxLength() { return 64; }
};
} // namespace SoftwareVersionString
namespace ManufacturingDate {
struct TypeInfo
{
    using Type             = chip::CharSpan;
    using DecodableType    = chip::CharSpan;
    using DecodableArgType = chip::CharSpan;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::ManufacturingDate::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
    static constexpr size_t MaxLength() { return 16; }
};
} // namespace ManufacturingDate
namespace PartNumber {
struct TypeInfo
{
    using Type             = chip::CharSpan;
    using DecodableType    = chip::CharSpan;
    using DecodableArgType = chip::CharSpan;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::PartNumber::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
    static constexpr size_t MaxLength() { return 32; }
};
} // namespace PartNumber
namespace ProductURL {
struct TypeInfo
{
    using Type             = chip::CharSpan;
    using DecodableType    = chip::CharSpan;
    using DecodableArgType = chip::CharSpan;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::ProductURL::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
    static constexpr size_t MaxLength() { return 256; }
};
} // namespace ProductURL
namespace ProductLabel {
struct TypeInfo
{
    using Type             = chip::CharSpan;
    using DecodableType    = chip::CharSpan;
    using DecodableArgType = chip::CharSpan;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::ProductLabel::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
    static constexpr size_t MaxLength() { return 64; }
};
} // namespace ProductLabel
namespace SerialNumber {
struct TypeInfo
{
    using Type             = chip::CharSpan;
    using DecodableType    = chip::CharSpan;
    using DecodableArgType = chip::CharSpan;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::SerialNumber::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
    static constexpr size_t MaxLength() { return 32; }
};
} // namespace SerialNumber
namespace LocalConfigDisabled {
struct TypeInfo
{
    using Type             = bool;
    using DecodableType    = bool;
    using DecodableArgType = bool;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::LocalConfigDisabled::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace LocalConfigDisabled
namespace Reachable {
struct TypeInfo
{
    using Type             = bool;
    using DecodableType    = bool;
    using DecodableArgType = bool;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::Reachable::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace Reachable
namespace UniqueID {
struct TypeInfo
{
    using Type             = chip::CharSpan;
    using DecodableType    = chip::CharSpan;
    using DecodableArgType = chip::CharSpan;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::UniqueID::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
    static constexpr size_t MaxLength() { return 32; }
};
} // namespace UniqueID
namespace CapabilityMinima {
struct TypeInfo
{
    using Type             = chip::app::Clusters::BasicInformation::Structs::CapabilityMinimaStruct::Type;
    using DecodableType    = chip::app::Clusters::BasicInformation::Structs::CapabilityMinimaStruct::DecodableType;
    using DecodableArgType = const chip::app::Clusters::BasicInformation::Structs::CapabilityMinimaStruct::DecodableType &;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::CapabilityMinima::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace CapabilityMinima
namespace ProductAppearance {
struct TypeInfo
{
    using Type             = chip::app::Clusters::BasicInformation::Structs::ProductAppearanceStruct::Type;
    using DecodableType    = chip::app::Clusters::BasicInformation::Structs::ProductAppearanceStruct::DecodableType;
    using DecodableArgType = const chip::app::Clusters::BasicInformation::Structs::ProductAppearanceStruct::DecodableType &;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::ProductAppearance::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace ProductAppearance
namespace SpecificationVersion {
struct TypeInfo
{
    using Type             = uint32_t;
    using DecodableType    = uint32_t;
    using DecodableArgType = uint32_t;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::SpecificationVersion::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace SpecificationVersion
namespace MaxPathsPerInvoke {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::MaxPathsPerInvoke::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace MaxPathsPerInvoke
namespace GeneratedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::GeneratedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
};
} // namespace GeneratedCommandList
namespace AcceptedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::AcceptedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
};
} // namespace AcceptedCommandList
namespace AttributeList {
struct TypeInfo : public Clusters::Globals::Attributes::AttributeList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
};
} // namespace AttributeList
namespace FeatureMap {
struct TypeInfo : public Clusters::Globals::Attributes::FeatureMap::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
};
} // namespace FeatureMap
namespace ClusterRevision {
struct TypeInfo : public Clusters::Globals::Attributes::ClusterRevision::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }
};
} // namespace ClusterRevision

struct TypeInfo
{
    struct DecodableType
    {
        static constexpr ClusterId GetClusterId() { return Clusters::BasicInformation::Id; }

        CHIP_ERROR Decode(TLV::TLVReader & reader, const ConcreteAttributePath & path);

        Attributes::DataModelRevision::TypeInfo::DecodableType dataModelRevision = static_cast<uint16_t>(0);
        Attributes::VendorName::TypeInfo::DecodableType vendorName;
        Attributes::VendorID::TypeInfo::DecodableType vendorID = static_cast<chip::VendorId>(0);
        Attributes::ProductName::TypeInfo::DecodableType productName;
        Attributes::ProductID::TypeInfo::DecodableType productID = static_cast<uint16_t>(0);
        Attributes::NodeLabel::TypeInfo::DecodableType nodeLabel;
        Attributes::Location::TypeInfo::DecodableType location;
        Attributes::HardwareVersion::TypeInfo::DecodableType hardwareVersion = static_cast<uint16_t>(0);
        Attributes::HardwareVersionString::TypeInfo::DecodableType hardwareVersionString;
        Attributes::SoftwareVersion::TypeInfo::DecodableType softwareVersion = static_cast<uint32_t>(0);
        Attributes::SoftwareVersionString::TypeInfo::DecodableType softwareVersionString;
        Attributes::ManufacturingDate::TypeInfo::DecodableType manufacturingDate;
        Attributes::PartNumber::TypeInfo::DecodableType partNumber;
        Attributes::ProductURL::TypeInfo::DecodableType productURL;
        Attributes::ProductLabel::TypeInfo::DecodableType productLabel;
        Attributes::SerialNumber::TypeInfo::DecodableType serialNumber;
        Attributes::LocalConfigDisabled::TypeInfo::DecodableType localConfigDisabled = static_cast<bool>(0);
        Attributes::Reachable::TypeInfo::DecodableType reachable                     = static_cast<bool>(0);
        Attributes::UniqueID::TypeInfo::DecodableType uniqueID;
        Attributes::CapabilityMinima::TypeInfo::DecodableType capabilityMinima;
        Attributes::ProductAppearance::TypeInfo::DecodableType productAppearance;
        Attributes::SpecificationVersion::TypeInfo::DecodableType specificationVersion = static_cast<uint32_t>(0);
        Attributes::MaxPathsPerInvoke::TypeInfo::DecodableType maxPathsPerInvoke       = static_cast<uint16_t>(0);
        Attributes::GeneratedCommandList::TypeInfo::DecodableType generatedCommandList;
        Attributes::AcceptedCommandList::TypeInfo::DecodableType acceptedCommandList;
        Attributes::AttributeList::TypeInfo::DecodableType attributeList;
        Attributes::FeatureMap::TypeInfo::DecodableType featureMap           = static_cast<uint32_t>(0);
        Attributes::ClusterRevision::TypeInfo::DecodableType clusterRevision = static_cast<uint16_t>(0);
    };
};
} // namespace Attributes
} // namespace BasicInformation
} // namespace Clusters
} // namespace app
} // namespace chip
