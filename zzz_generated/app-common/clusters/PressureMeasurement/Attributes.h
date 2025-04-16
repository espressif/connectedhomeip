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

#include <clusters/PressureMeasurement/AttributeIds.h>
#include <clusters/PressureMeasurement/ClusterId.h>
#include <clusters/PressureMeasurement/Enums.h>
#include <clusters/PressureMeasurement/Structs.h>

namespace chip {
namespace app {
namespace Clusters {
namespace PressureMeasurement {
namespace Attributes {

namespace MeasuredValue {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<int16_t>;
    using DecodableType    = chip::app::DataModel::Nullable<int16_t>;
    using DecodableArgType = const chip::app::DataModel::Nullable<int16_t> &;

    static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::MeasuredValue::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace MeasuredValue
namespace MinMeasuredValue {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<int16_t>;
    using DecodableType    = chip::app::DataModel::Nullable<int16_t>;
    using DecodableArgType = const chip::app::DataModel::Nullable<int16_t> &;

    static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::MinMeasuredValue::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace MinMeasuredValue
namespace MaxMeasuredValue {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<int16_t>;
    using DecodableType    = chip::app::DataModel::Nullable<int16_t>;
    using DecodableArgType = const chip::app::DataModel::Nullable<int16_t> &;

    static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::MaxMeasuredValue::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace MaxMeasuredValue
namespace Tolerance {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::Tolerance::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace Tolerance
namespace ScaledValue {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<int16_t>;
    using DecodableType    = chip::app::DataModel::Nullable<int16_t>;
    using DecodableArgType = const chip::app::DataModel::Nullable<int16_t> &;

    static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::ScaledValue::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace ScaledValue
namespace MinScaledValue {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<int16_t>;
    using DecodableType    = chip::app::DataModel::Nullable<int16_t>;
    using DecodableArgType = const chip::app::DataModel::Nullable<int16_t> &;

    static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::MinScaledValue::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace MinScaledValue
namespace MaxScaledValue {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<int16_t>;
    using DecodableType    = chip::app::DataModel::Nullable<int16_t>;
    using DecodableArgType = const chip::app::DataModel::Nullable<int16_t> &;

    static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::MaxScaledValue::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace MaxScaledValue
namespace ScaledTolerance {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::ScaledTolerance::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace ScaledTolerance
namespace Scale {
struct TypeInfo
{
    using Type             = int8_t;
    using DecodableType    = int8_t;
    using DecodableArgType = int8_t;

    static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::Scale::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace Scale
namespace GeneratedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::GeneratedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }
};
} // namespace GeneratedCommandList
namespace AcceptedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::AcceptedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }
};
} // namespace AcceptedCommandList
namespace AttributeList {
struct TypeInfo : public Clusters::Globals::Attributes::AttributeList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }
};
} // namespace AttributeList
namespace FeatureMap {
struct TypeInfo : public Clusters::Globals::Attributes::FeatureMap::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }
};
} // namespace FeatureMap
namespace ClusterRevision {
struct TypeInfo : public Clusters::Globals::Attributes::ClusterRevision::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }
};
} // namespace ClusterRevision

struct TypeInfo
{
    struct DecodableType
    {
        static constexpr ClusterId GetClusterId() { return Clusters::PressureMeasurement::Id; }

        CHIP_ERROR Decode(TLV::TLVReader & reader, const ConcreteAttributePath & path);

        Attributes::MeasuredValue::TypeInfo::DecodableType measuredValue;
        Attributes::MinMeasuredValue::TypeInfo::DecodableType minMeasuredValue;
        Attributes::MaxMeasuredValue::TypeInfo::DecodableType maxMeasuredValue;
        Attributes::Tolerance::TypeInfo::DecodableType tolerance = static_cast<uint16_t>(0);
        Attributes::ScaledValue::TypeInfo::DecodableType scaledValue;
        Attributes::MinScaledValue::TypeInfo::DecodableType minScaledValue;
        Attributes::MaxScaledValue::TypeInfo::DecodableType maxScaledValue;
        Attributes::ScaledTolerance::TypeInfo::DecodableType scaledTolerance = static_cast<uint16_t>(0);
        Attributes::Scale::TypeInfo::DecodableType scale                     = static_cast<int8_t>(0);
        Attributes::GeneratedCommandList::TypeInfo::DecodableType generatedCommandList;
        Attributes::AcceptedCommandList::TypeInfo::DecodableType acceptedCommandList;
        Attributes::AttributeList::TypeInfo::DecodableType attributeList;
        Attributes::FeatureMap::TypeInfo::DecodableType featureMap           = static_cast<uint32_t>(0);
        Attributes::ClusterRevision::TypeInfo::DecodableType clusterRevision = static_cast<uint16_t>(0);
    };
};
} // namespace Attributes
} // namespace PressureMeasurement
} // namespace Clusters
} // namespace app
} // namespace chip
