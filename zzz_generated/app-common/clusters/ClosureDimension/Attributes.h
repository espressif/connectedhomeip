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

#include <clusters/ClosureDimension/AttributeIds.h>
#include <clusters/ClosureDimension/ClusterId.h>
#include <clusters/ClosureDimension/Enums.h>
#include <clusters/ClosureDimension/Structs.h>

namespace chip {
namespace app {
namespace Clusters {
namespace ClosureDimension {
namespace Attributes {

namespace Current {
struct TypeInfo
{
    using Type = chip::app::DataModel::Nullable<chip::app::Clusters::ClosureDimension::Structs::CurrentStruct::Type>;
    using DecodableType =
        chip::app::DataModel::Nullable<chip::app::Clusters::ClosureDimension::Structs::CurrentStruct::DecodableType>;
    using DecodableArgType =
        const chip::app::DataModel::Nullable<chip::app::Clusters::ClosureDimension::Structs::CurrentStruct::DecodableType> &;

    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::Current::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace Current
namespace Target {
struct TypeInfo
{
    using Type = chip::app::DataModel::Nullable<chip::app::Clusters::ClosureDimension::Structs::TargetStruct::Type>;
    using DecodableType =
        chip::app::DataModel::Nullable<chip::app::Clusters::ClosureDimension::Structs::TargetStruct::DecodableType>;
    using DecodableArgType =
        const chip::app::DataModel::Nullable<chip::app::Clusters::ClosureDimension::Structs::TargetStruct::DecodableType> &;

    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::Target::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace Target
namespace Resolution {
struct TypeInfo
{
    using Type             = chip::Percent100ths;
    using DecodableType    = chip::Percent100ths;
    using DecodableArgType = chip::Percent100ths;

    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::Resolution::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace Resolution
namespace StepValue {
struct TypeInfo
{
    using Type             = chip::Percent100ths;
    using DecodableType    = chip::Percent100ths;
    using DecodableArgType = chip::Percent100ths;

    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::StepValue::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace StepValue
namespace Unit {
struct TypeInfo
{
    using Type             = chip::app::Clusters::ClosureDimension::ClosureUnitEnum;
    using DecodableType    = chip::app::Clusters::ClosureDimension::ClosureUnitEnum;
    using DecodableArgType = chip::app::Clusters::ClosureDimension::ClosureUnitEnum;

    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::Unit::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace Unit
namespace UnitRange {
struct TypeInfo
{
    using Type = chip::app::DataModel::Nullable<chip::app::Clusters::ClosureDimension::Structs::UnitRangeStruct::Type>;
    using DecodableType =
        chip::app::DataModel::Nullable<chip::app::Clusters::ClosureDimension::Structs::UnitRangeStruct::DecodableType>;
    using DecodableArgType =
        const chip::app::DataModel::Nullable<chip::app::Clusters::ClosureDimension::Structs::UnitRangeStruct::DecodableType> &;

    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::UnitRange::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace UnitRange
namespace LimitRange {
struct TypeInfo
{
    using Type             = chip::app::Clusters::ClosureDimension::Structs::RangePercent100thsStruct::Type;
    using DecodableType    = chip::app::Clusters::ClosureDimension::Structs::RangePercent100thsStruct::DecodableType;
    using DecodableArgType = const chip::app::Clusters::ClosureDimension::Structs::RangePercent100thsStruct::DecodableType &;

    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::LimitRange::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace LimitRange
namespace TranslationDirection {
struct TypeInfo
{
    using Type             = chip::app::Clusters::ClosureDimension::TranslationDirectionEnum;
    using DecodableType    = chip::app::Clusters::ClosureDimension::TranslationDirectionEnum;
    using DecodableArgType = chip::app::Clusters::ClosureDimension::TranslationDirectionEnum;

    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::TranslationDirection::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace TranslationDirection
namespace RotationAxis {
struct TypeInfo
{
    using Type             = chip::app::Clusters::ClosureDimension::RotationAxisEnum;
    using DecodableType    = chip::app::Clusters::ClosureDimension::RotationAxisEnum;
    using DecodableArgType = chip::app::Clusters::ClosureDimension::RotationAxisEnum;

    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::RotationAxis::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace RotationAxis
namespace Overflow {
struct TypeInfo
{
    using Type             = chip::app::Clusters::ClosureDimension::OverflowEnum;
    using DecodableType    = chip::app::Clusters::ClosureDimension::OverflowEnum;
    using DecodableArgType = chip::app::Clusters::ClosureDimension::OverflowEnum;

    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::Overflow::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace Overflow
namespace ModulationType {
struct TypeInfo
{
    using Type             = chip::app::Clusters::ClosureDimension::ModulationTypeEnum;
    using DecodableType    = chip::app::Clusters::ClosureDimension::ModulationTypeEnum;
    using DecodableArgType = chip::app::Clusters::ClosureDimension::ModulationTypeEnum;

    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::ModulationType::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace ModulationType
namespace GeneratedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::GeneratedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
};
} // namespace GeneratedCommandList
namespace AcceptedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::AcceptedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
};
} // namespace AcceptedCommandList
namespace AttributeList {
struct TypeInfo : public Clusters::Globals::Attributes::AttributeList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
};
} // namespace AttributeList
namespace FeatureMap {
struct TypeInfo : public Clusters::Globals::Attributes::FeatureMap::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
};
} // namespace FeatureMap
namespace ClusterRevision {
struct TypeInfo : public Clusters::Globals::Attributes::ClusterRevision::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }
};
} // namespace ClusterRevision

struct TypeInfo
{
    struct DecodableType
    {
        static constexpr ClusterId GetClusterId() { return Clusters::ClosureDimension::Id; }

        CHIP_ERROR Decode(TLV::TLVReader & reader, const ConcreteAttributePath & path);

        Attributes::Current::TypeInfo::DecodableType current;
        Attributes::Target::TypeInfo::DecodableType target;
        Attributes::Resolution::TypeInfo::DecodableType resolution = static_cast<chip::Percent100ths>(0);
        Attributes::StepValue::TypeInfo::DecodableType stepValue   = static_cast<chip::Percent100ths>(0);
        Attributes::Unit::TypeInfo::DecodableType unit = static_cast<chip::app::Clusters::ClosureDimension::ClosureUnitEnum>(0);
        Attributes::UnitRange::TypeInfo::DecodableType unitRange;
        Attributes::LimitRange::TypeInfo::DecodableType limitRange;
        Attributes::TranslationDirection::TypeInfo::DecodableType translationDirection =
            static_cast<chip::app::Clusters::ClosureDimension::TranslationDirectionEnum>(0);
        Attributes::RotationAxis::TypeInfo::DecodableType rotationAxis =
            static_cast<chip::app::Clusters::ClosureDimension::RotationAxisEnum>(0);
        Attributes::Overflow::TypeInfo::DecodableType overflow =
            static_cast<chip::app::Clusters::ClosureDimension::OverflowEnum>(0);
        Attributes::ModulationType::TypeInfo::DecodableType modulationType =
            static_cast<chip::app::Clusters::ClosureDimension::ModulationTypeEnum>(0);
        Attributes::GeneratedCommandList::TypeInfo::DecodableType generatedCommandList;
        Attributes::AcceptedCommandList::TypeInfo::DecodableType acceptedCommandList;
        Attributes::AttributeList::TypeInfo::DecodableType attributeList;
        Attributes::FeatureMap::TypeInfo::DecodableType featureMap           = static_cast<uint32_t>(0);
        Attributes::ClusterRevision::TypeInfo::DecodableType clusterRevision = static_cast<uint16_t>(0);
    };
};
} // namespace Attributes
} // namespace ClosureDimension
} // namespace Clusters
} // namespace app
} // namespace chip
