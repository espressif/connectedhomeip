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

#include <clusters/OnOff/AttributeIds.h>
#include <clusters/OnOff/ClusterId.h>
#include <clusters/OnOff/Enums.h>
#include <clusters/OnOff/Structs.h>

namespace chip {
namespace app {
namespace Clusters {
namespace OnOff {
namespace Attributes {

namespace OnOff {
struct TypeInfo
{
    using Type             = bool;
    using DecodableType    = bool;
    using DecodableArgType = bool;

    static constexpr ClusterId GetClusterId() { return Clusters::OnOff::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::OnOff::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace OnOff
namespace GlobalSceneControl {
struct TypeInfo
{
    using Type             = bool;
    using DecodableType    = bool;
    using DecodableArgType = bool;

    static constexpr ClusterId GetClusterId() { return Clusters::OnOff::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::GlobalSceneControl::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace GlobalSceneControl
namespace OnTime {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::OnOff::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::OnTime::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace OnTime
namespace OffWaitTime {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::OnOff::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::OffWaitTime::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace OffWaitTime
namespace StartUpOnOff {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<chip::app::Clusters::OnOff::StartUpOnOffEnum>;
    using DecodableType    = chip::app::DataModel::Nullable<chip::app::Clusters::OnOff::StartUpOnOffEnum>;
    using DecodableArgType = const chip::app::DataModel::Nullable<chip::app::Clusters::OnOff::StartUpOnOffEnum> &;

    static constexpr ClusterId GetClusterId() { return Clusters::OnOff::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::StartUpOnOff::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace StartUpOnOff
namespace GeneratedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::GeneratedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::OnOff::Id; }
};
} // namespace GeneratedCommandList
namespace AcceptedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::AcceptedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::OnOff::Id; }
};
} // namespace AcceptedCommandList
namespace AttributeList {
struct TypeInfo : public Clusters::Globals::Attributes::AttributeList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::OnOff::Id; }
};
} // namespace AttributeList
namespace FeatureMap {
struct TypeInfo : public Clusters::Globals::Attributes::FeatureMap::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::OnOff::Id; }
};
} // namespace FeatureMap
namespace ClusterRevision {
struct TypeInfo : public Clusters::Globals::Attributes::ClusterRevision::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::OnOff::Id; }
};
} // namespace ClusterRevision

struct TypeInfo
{
    struct DecodableType
    {
        static constexpr ClusterId GetClusterId() { return Clusters::OnOff::Id; }

        CHIP_ERROR Decode(TLV::TLVReader & reader, const ConcreteAttributePath & path);

        Attributes::OnOff::TypeInfo::DecodableType onOff                           = static_cast<bool>(0);
        Attributes::GlobalSceneControl::TypeInfo::DecodableType globalSceneControl = static_cast<bool>(0);
        Attributes::OnTime::TypeInfo::DecodableType onTime                         = static_cast<uint16_t>(0);
        Attributes::OffWaitTime::TypeInfo::DecodableType offWaitTime               = static_cast<uint16_t>(0);
        Attributes::StartUpOnOff::TypeInfo::DecodableType startUpOnOff;
        Attributes::GeneratedCommandList::TypeInfo::DecodableType generatedCommandList;
        Attributes::AcceptedCommandList::TypeInfo::DecodableType acceptedCommandList;
        Attributes::AttributeList::TypeInfo::DecodableType attributeList;
        Attributes::FeatureMap::TypeInfo::DecodableType featureMap           = static_cast<uint32_t>(0);
        Attributes::ClusterRevision::TypeInfo::DecodableType clusterRevision = static_cast<uint16_t>(0);
    };
};
} // namespace Attributes
} // namespace OnOff
} // namespace Clusters
} // namespace app
} // namespace chip
