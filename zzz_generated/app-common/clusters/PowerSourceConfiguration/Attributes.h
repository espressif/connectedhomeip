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

#include <clusters/PowerSourceConfiguration/AttributeIds.h>
#include <clusters/PowerSourceConfiguration/ClusterId.h>
#include <clusters/PowerSourceConfiguration/Enums.h>
#include <clusters/PowerSourceConfiguration/Structs.h>

namespace chip {
namespace app {
namespace Clusters {
namespace PowerSourceConfiguration {
namespace Attributes {

namespace Sources {
struct TypeInfo
{
    using Type             = chip::app::DataModel::List<const chip::EndpointId>;
    using DecodableType    = chip::app::DataModel::DecodableList<chip::EndpointId>;
    using DecodableArgType = const chip::app::DataModel::DecodableList<chip::EndpointId> &;

    static constexpr ClusterId GetClusterId() { return Clusters::PowerSourceConfiguration::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::Sources::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace Sources
namespace GeneratedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::GeneratedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PowerSourceConfiguration::Id; }
};
} // namespace GeneratedCommandList
namespace AcceptedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::AcceptedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PowerSourceConfiguration::Id; }
};
} // namespace AcceptedCommandList
namespace AttributeList {
struct TypeInfo : public Clusters::Globals::Attributes::AttributeList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PowerSourceConfiguration::Id; }
};
} // namespace AttributeList
namespace FeatureMap {
struct TypeInfo : public Clusters::Globals::Attributes::FeatureMap::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PowerSourceConfiguration::Id; }
};
} // namespace FeatureMap
namespace ClusterRevision {
struct TypeInfo : public Clusters::Globals::Attributes::ClusterRevision::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PowerSourceConfiguration::Id; }
};
} // namespace ClusterRevision

struct TypeInfo
{
    struct DecodableType
    {
        static constexpr ClusterId GetClusterId() { return Clusters::PowerSourceConfiguration::Id; }

        CHIP_ERROR Decode(TLV::TLVReader & reader, const ConcreteAttributePath & path);

        Attributes::Sources::TypeInfo::DecodableType sources;
        Attributes::GeneratedCommandList::TypeInfo::DecodableType generatedCommandList;
        Attributes::AcceptedCommandList::TypeInfo::DecodableType acceptedCommandList;
        Attributes::AttributeList::TypeInfo::DecodableType attributeList;
        Attributes::FeatureMap::TypeInfo::DecodableType featureMap           = static_cast<uint32_t>(0);
        Attributes::ClusterRevision::TypeInfo::DecodableType clusterRevision = static_cast<uint16_t>(0);
    };
};
} // namespace Attributes
} // namespace PowerSourceConfiguration
} // namespace Clusters
} // namespace app
} // namespace chip
