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

#include <clusters/OccupancySensing/AttributeIds.h>
#include <clusters/OccupancySensing/ClusterId.h>
#include <clusters/OccupancySensing/Enums.h>
#include <clusters/OccupancySensing/Structs.h>

namespace chip {
namespace app {
namespace Clusters {
namespace OccupancySensing {
namespace Attributes {

namespace Occupancy {
struct TypeInfo
{
    using Type             = chip::BitMask<chip::app::Clusters::OccupancySensing::OccupancyBitmap>;
    using DecodableType    = chip::BitMask<chip::app::Clusters::OccupancySensing::OccupancyBitmap>;
    using DecodableArgType = chip::BitMask<chip::app::Clusters::OccupancySensing::OccupancyBitmap>;

    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::Occupancy::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace Occupancy
namespace OccupancySensorType {
struct TypeInfo
{
    using Type             = chip::app::Clusters::OccupancySensing::OccupancySensorTypeEnum;
    using DecodableType    = chip::app::Clusters::OccupancySensing::OccupancySensorTypeEnum;
    using DecodableArgType = chip::app::Clusters::OccupancySensing::OccupancySensorTypeEnum;

    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::OccupancySensorType::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace OccupancySensorType
namespace OccupancySensorTypeBitmap {
struct TypeInfo
{
    using Type             = chip::BitMask<chip::app::Clusters::OccupancySensing::OccupancySensorTypeBitmap>;
    using DecodableType    = chip::BitMask<chip::app::Clusters::OccupancySensing::OccupancySensorTypeBitmap>;
    using DecodableArgType = chip::BitMask<chip::app::Clusters::OccupancySensing::OccupancySensorTypeBitmap>;

    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::OccupancySensorTypeBitmap::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace OccupancySensorTypeBitmap
namespace HoldTime {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::HoldTime::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace HoldTime
namespace HoldTimeLimits {
struct TypeInfo
{
    using Type             = chip::app::Clusters::OccupancySensing::Structs::HoldTimeLimitsStruct::Type;
    using DecodableType    = chip::app::Clusters::OccupancySensing::Structs::HoldTimeLimitsStruct::DecodableType;
    using DecodableArgType = const chip::app::Clusters::OccupancySensing::Structs::HoldTimeLimitsStruct::DecodableType &;

    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::HoldTimeLimits::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace HoldTimeLimits
namespace PIROccupiedToUnoccupiedDelay {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::PIROccupiedToUnoccupiedDelay::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace PIROccupiedToUnoccupiedDelay
namespace PIRUnoccupiedToOccupiedDelay {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::PIRUnoccupiedToOccupiedDelay::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace PIRUnoccupiedToOccupiedDelay
namespace PIRUnoccupiedToOccupiedThreshold {
struct TypeInfo
{
    using Type             = uint8_t;
    using DecodableType    = uint8_t;
    using DecodableArgType = uint8_t;

    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::PIRUnoccupiedToOccupiedThreshold::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace PIRUnoccupiedToOccupiedThreshold
namespace UltrasonicOccupiedToUnoccupiedDelay {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::UltrasonicOccupiedToUnoccupiedDelay::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace UltrasonicOccupiedToUnoccupiedDelay
namespace UltrasonicUnoccupiedToOccupiedDelay {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::UltrasonicUnoccupiedToOccupiedDelay::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace UltrasonicUnoccupiedToOccupiedDelay
namespace UltrasonicUnoccupiedToOccupiedThreshold {
struct TypeInfo
{
    using Type             = uint8_t;
    using DecodableType    = uint8_t;
    using DecodableArgType = uint8_t;

    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::UltrasonicUnoccupiedToOccupiedThreshold::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace UltrasonicUnoccupiedToOccupiedThreshold
namespace PhysicalContactOccupiedToUnoccupiedDelay {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::PhysicalContactOccupiedToUnoccupiedDelay::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace PhysicalContactOccupiedToUnoccupiedDelay
namespace PhysicalContactUnoccupiedToOccupiedDelay {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::PhysicalContactUnoccupiedToOccupiedDelay::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace PhysicalContactUnoccupiedToOccupiedDelay
namespace PhysicalContactUnoccupiedToOccupiedThreshold {
struct TypeInfo
{
    using Type             = uint8_t;
    using DecodableType    = uint8_t;
    using DecodableArgType = uint8_t;

    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::PhysicalContactUnoccupiedToOccupiedThreshold::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace PhysicalContactUnoccupiedToOccupiedThreshold
namespace GeneratedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::GeneratedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
};
} // namespace GeneratedCommandList
namespace AcceptedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::AcceptedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
};
} // namespace AcceptedCommandList
namespace AttributeList {
struct TypeInfo : public Clusters::Globals::Attributes::AttributeList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
};
} // namespace AttributeList
namespace FeatureMap {
struct TypeInfo : public Clusters::Globals::Attributes::FeatureMap::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
};
} // namespace FeatureMap
namespace ClusterRevision {
struct TypeInfo : public Clusters::Globals::Attributes::ClusterRevision::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }
};
} // namespace ClusterRevision

struct TypeInfo
{
    struct DecodableType
    {
        static constexpr ClusterId GetClusterId() { return Clusters::OccupancySensing::Id; }

        CHIP_ERROR Decode(TLV::TLVReader & reader, const ConcreteAttributePath & path);

        Attributes::Occupancy::TypeInfo::DecodableType occupancy =
            static_cast<chip::BitMask<chip::app::Clusters::OccupancySensing::OccupancyBitmap>>(0);
        Attributes::OccupancySensorType::TypeInfo::DecodableType occupancySensorType =
            static_cast<chip::app::Clusters::OccupancySensing::OccupancySensorTypeEnum>(0);
        Attributes::OccupancySensorTypeBitmap::TypeInfo::DecodableType occupancySensorTypeBitmap =
            static_cast<chip::BitMask<chip::app::Clusters::OccupancySensing::OccupancySensorTypeBitmap>>(0);
        Attributes::HoldTime::TypeInfo::DecodableType holdTime = static_cast<uint16_t>(0);
        Attributes::HoldTimeLimits::TypeInfo::DecodableType holdTimeLimits;
        Attributes::PIROccupiedToUnoccupiedDelay::TypeInfo::DecodableType PIROccupiedToUnoccupiedDelay = static_cast<uint16_t>(0);
        Attributes::PIRUnoccupiedToOccupiedDelay::TypeInfo::DecodableType PIRUnoccupiedToOccupiedDelay = static_cast<uint16_t>(0);
        Attributes::PIRUnoccupiedToOccupiedThreshold::TypeInfo::DecodableType PIRUnoccupiedToOccupiedThreshold =
            static_cast<uint8_t>(0);
        Attributes::UltrasonicOccupiedToUnoccupiedDelay::TypeInfo::DecodableType ultrasonicOccupiedToUnoccupiedDelay =
            static_cast<uint16_t>(0);
        Attributes::UltrasonicUnoccupiedToOccupiedDelay::TypeInfo::DecodableType ultrasonicUnoccupiedToOccupiedDelay =
            static_cast<uint16_t>(0);
        Attributes::UltrasonicUnoccupiedToOccupiedThreshold::TypeInfo::DecodableType ultrasonicUnoccupiedToOccupiedThreshold =
            static_cast<uint8_t>(0);
        Attributes::PhysicalContactOccupiedToUnoccupiedDelay::TypeInfo::DecodableType physicalContactOccupiedToUnoccupiedDelay =
            static_cast<uint16_t>(0);
        Attributes::PhysicalContactUnoccupiedToOccupiedDelay::TypeInfo::DecodableType physicalContactUnoccupiedToOccupiedDelay =
            static_cast<uint16_t>(0);
        Attributes::PhysicalContactUnoccupiedToOccupiedThreshold::TypeInfo::DecodableType
            physicalContactUnoccupiedToOccupiedThreshold = static_cast<uint8_t>(0);
        Attributes::GeneratedCommandList::TypeInfo::DecodableType generatedCommandList;
        Attributes::AcceptedCommandList::TypeInfo::DecodableType acceptedCommandList;
        Attributes::AttributeList::TypeInfo::DecodableType attributeList;
        Attributes::FeatureMap::TypeInfo::DecodableType featureMap           = static_cast<uint32_t>(0);
        Attributes::ClusterRevision::TypeInfo::DecodableType clusterRevision = static_cast<uint16_t>(0);
    };
};
} // namespace Attributes
} // namespace OccupancySensing
} // namespace Clusters
} // namespace app
} // namespace chip
