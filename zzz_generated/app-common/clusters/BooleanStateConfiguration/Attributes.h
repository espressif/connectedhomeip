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

#include <clusters/BooleanStateConfiguration/AttributeIds.h>
#include <clusters/BooleanStateConfiguration/ClusterId.h>
#include <clusters/BooleanStateConfiguration/Enums.h>
#include <clusters/BooleanStateConfiguration/Structs.h>

namespace chip {
namespace app {
namespace Clusters {
namespace BooleanStateConfiguration {
namespace Attributes {

namespace CurrentSensitivityLevel {
struct TypeInfo
{
    using Type             = uint8_t;
    using DecodableType    = uint8_t;
    using DecodableArgType = uint8_t;

    static constexpr ClusterId GetClusterId() { return Clusters::BooleanStateConfiguration::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::CurrentSensitivityLevel::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace CurrentSensitivityLevel
namespace SupportedSensitivityLevels {
struct TypeInfo
{
    using Type             = uint8_t;
    using DecodableType    = uint8_t;
    using DecodableArgType = uint8_t;

    static constexpr ClusterId GetClusterId() { return Clusters::BooleanStateConfiguration::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::SupportedSensitivityLevels::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace SupportedSensitivityLevels
namespace DefaultSensitivityLevel {
struct TypeInfo
{
    using Type             = uint8_t;
    using DecodableType    = uint8_t;
    using DecodableArgType = uint8_t;

    static constexpr ClusterId GetClusterId() { return Clusters::BooleanStateConfiguration::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::DefaultSensitivityLevel::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace DefaultSensitivityLevel
namespace AlarmsActive {
struct TypeInfo
{
    using Type             = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>;
    using DecodableType    = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>;
    using DecodableArgType = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>;

    static constexpr ClusterId GetClusterId() { return Clusters::BooleanStateConfiguration::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::AlarmsActive::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace AlarmsActive
namespace AlarmsSuppressed {
struct TypeInfo
{
    using Type             = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>;
    using DecodableType    = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>;
    using DecodableArgType = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>;

    static constexpr ClusterId GetClusterId() { return Clusters::BooleanStateConfiguration::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::AlarmsSuppressed::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace AlarmsSuppressed
namespace AlarmsEnabled {
struct TypeInfo
{
    using Type             = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>;
    using DecodableType    = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>;
    using DecodableArgType = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>;

    static constexpr ClusterId GetClusterId() { return Clusters::BooleanStateConfiguration::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::AlarmsEnabled::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace AlarmsEnabled
namespace AlarmsSupported {
struct TypeInfo
{
    using Type             = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>;
    using DecodableType    = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>;
    using DecodableArgType = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>;

    static constexpr ClusterId GetClusterId() { return Clusters::BooleanStateConfiguration::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::AlarmsSupported::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace AlarmsSupported
namespace SensorFault {
struct TypeInfo
{
    using Type             = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::SensorFaultBitmap>;
    using DecodableType    = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::SensorFaultBitmap>;
    using DecodableArgType = chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::SensorFaultBitmap>;

    static constexpr ClusterId GetClusterId() { return Clusters::BooleanStateConfiguration::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::SensorFault::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace SensorFault
namespace GeneratedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::GeneratedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::BooleanStateConfiguration::Id; }
};
} // namespace GeneratedCommandList
namespace AcceptedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::AcceptedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::BooleanStateConfiguration::Id; }
};
} // namespace AcceptedCommandList
namespace AttributeList {
struct TypeInfo : public Clusters::Globals::Attributes::AttributeList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::BooleanStateConfiguration::Id; }
};
} // namespace AttributeList
namespace FeatureMap {
struct TypeInfo : public Clusters::Globals::Attributes::FeatureMap::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::BooleanStateConfiguration::Id; }
};
} // namespace FeatureMap
namespace ClusterRevision {
struct TypeInfo : public Clusters::Globals::Attributes::ClusterRevision::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::BooleanStateConfiguration::Id; }
};
} // namespace ClusterRevision

struct TypeInfo
{
    struct DecodableType
    {
        static constexpr ClusterId GetClusterId() { return Clusters::BooleanStateConfiguration::Id; }

        CHIP_ERROR Decode(TLV::TLVReader & reader, const ConcreteAttributePath & path);

        Attributes::CurrentSensitivityLevel::TypeInfo::DecodableType currentSensitivityLevel       = static_cast<uint8_t>(0);
        Attributes::SupportedSensitivityLevels::TypeInfo::DecodableType supportedSensitivityLevels = static_cast<uint8_t>(0);
        Attributes::DefaultSensitivityLevel::TypeInfo::DecodableType defaultSensitivityLevel       = static_cast<uint8_t>(0);
        Attributes::AlarmsActive::TypeInfo::DecodableType alarmsActive =
            static_cast<chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>>(0);
        Attributes::AlarmsSuppressed::TypeInfo::DecodableType alarmsSuppressed =
            static_cast<chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>>(0);
        Attributes::AlarmsEnabled::TypeInfo::DecodableType alarmsEnabled =
            static_cast<chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>>(0);
        Attributes::AlarmsSupported::TypeInfo::DecodableType alarmsSupported =
            static_cast<chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::AlarmModeBitmap>>(0);
        Attributes::SensorFault::TypeInfo::DecodableType sensorFault =
            static_cast<chip::BitMask<chip::app::Clusters::BooleanStateConfiguration::SensorFaultBitmap>>(0);
        Attributes::GeneratedCommandList::TypeInfo::DecodableType generatedCommandList;
        Attributes::AcceptedCommandList::TypeInfo::DecodableType acceptedCommandList;
        Attributes::AttributeList::TypeInfo::DecodableType attributeList;
        Attributes::FeatureMap::TypeInfo::DecodableType featureMap           = static_cast<uint32_t>(0);
        Attributes::ClusterRevision::TypeInfo::DecodableType clusterRevision = static_cast<uint16_t>(0);
    };
};
} // namespace Attributes
} // namespace BooleanStateConfiguration
} // namespace Clusters
} // namespace app
} // namespace chip
