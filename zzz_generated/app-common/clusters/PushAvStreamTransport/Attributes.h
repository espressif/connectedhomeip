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

#include <clusters/PushAvStreamTransport/AttributeIds.h>
#include <clusters/PushAvStreamTransport/ClusterId.h>
#include <clusters/PushAvStreamTransport/Enums.h>
#include <clusters/PushAvStreamTransport/Structs.h>

namespace chip {
namespace app {
namespace Clusters {
namespace PushAvStreamTransport {
namespace Attributes {

namespace SupportedContainerFormats {
struct TypeInfo
{
    using Type             = chip::BitMask<chip::app::Clusters::PushAvStreamTransport::SupportedContainerFormatsBitmap>;
    using DecodableType    = chip::BitMask<chip::app::Clusters::PushAvStreamTransport::SupportedContainerFormatsBitmap>;
    using DecodableArgType = chip::BitMask<chip::app::Clusters::PushAvStreamTransport::SupportedContainerFormatsBitmap>;

    static constexpr ClusterId GetClusterId() { return Clusters::PushAvStreamTransport::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::SupportedContainerFormats::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace SupportedContainerFormats
namespace SupportedIngestMethods {
struct TypeInfo
{
    using Type             = chip::BitMask<chip::app::Clusters::PushAvStreamTransport::SupportedIngestMethodsBitmap>;
    using DecodableType    = chip::BitMask<chip::app::Clusters::PushAvStreamTransport::SupportedIngestMethodsBitmap>;
    using DecodableArgType = chip::BitMask<chip::app::Clusters::PushAvStreamTransport::SupportedIngestMethodsBitmap>;

    static constexpr ClusterId GetClusterId() { return Clusters::PushAvStreamTransport::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::SupportedIngestMethods::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace SupportedIngestMethods
namespace CurrentConnections {
struct TypeInfo
{
    using Type             = chip::app::DataModel::List<const uint16_t>;
    using DecodableType    = chip::app::DataModel::DecodableList<uint16_t>;
    using DecodableArgType = const chip::app::DataModel::DecodableList<uint16_t> &;

    static constexpr ClusterId GetClusterId() { return Clusters::PushAvStreamTransport::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::CurrentConnections::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace CurrentConnections
namespace GeneratedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::GeneratedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PushAvStreamTransport::Id; }
};
} // namespace GeneratedCommandList
namespace AcceptedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::AcceptedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PushAvStreamTransport::Id; }
};
} // namespace AcceptedCommandList
namespace AttributeList {
struct TypeInfo : public Clusters::Globals::Attributes::AttributeList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PushAvStreamTransport::Id; }
};
} // namespace AttributeList
namespace FeatureMap {
struct TypeInfo : public Clusters::Globals::Attributes::FeatureMap::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PushAvStreamTransport::Id; }
};
} // namespace FeatureMap
namespace ClusterRevision {
struct TypeInfo : public Clusters::Globals::Attributes::ClusterRevision::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PushAvStreamTransport::Id; }
};
} // namespace ClusterRevision

struct TypeInfo
{
    struct DecodableType
    {
        static constexpr ClusterId GetClusterId() { return Clusters::PushAvStreamTransport::Id; }

        CHIP_ERROR Decode(TLV::TLVReader & reader, const ConcreteAttributePath & path);

        Attributes::SupportedContainerFormats::TypeInfo::DecodableType supportedContainerFormats =
            static_cast<chip::BitMask<chip::app::Clusters::PushAvStreamTransport::SupportedContainerFormatsBitmap>>(0);
        Attributes::SupportedIngestMethods::TypeInfo::DecodableType supportedIngestMethods =
            static_cast<chip::BitMask<chip::app::Clusters::PushAvStreamTransport::SupportedIngestMethodsBitmap>>(0);
        Attributes::CurrentConnections::TypeInfo::DecodableType currentConnections;
        Attributes::GeneratedCommandList::TypeInfo::DecodableType generatedCommandList;
        Attributes::AcceptedCommandList::TypeInfo::DecodableType acceptedCommandList;
        Attributes::AttributeList::TypeInfo::DecodableType attributeList;
        Attributes::FeatureMap::TypeInfo::DecodableType featureMap           = static_cast<uint32_t>(0);
        Attributes::ClusterRevision::TypeInfo::DecodableType clusterRevision = static_cast<uint16_t>(0);
    };
};
} // namespace Attributes
} // namespace PushAvStreamTransport
} // namespace Clusters
} // namespace app
} // namespace chip
