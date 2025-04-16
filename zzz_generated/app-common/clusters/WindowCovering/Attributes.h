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

#include <clusters/WindowCovering/AttributeIds.h>
#include <clusters/WindowCovering/ClusterId.h>
#include <clusters/WindowCovering/Enums.h>
#include <clusters/WindowCovering/Structs.h>

namespace chip {
namespace app {
namespace Clusters {
namespace WindowCovering {
namespace Attributes {

namespace Type {
struct TypeInfo
{
    using Type             = chip::app::Clusters::WindowCovering::Type;
    using DecodableType    = chip::app::Clusters::WindowCovering::Type;
    using DecodableArgType = chip::app::Clusters::WindowCovering::Type;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::Type::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace Type
namespace PhysicalClosedLimitLift {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::PhysicalClosedLimitLift::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace PhysicalClosedLimitLift
namespace PhysicalClosedLimitTilt {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::PhysicalClosedLimitTilt::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace PhysicalClosedLimitTilt
namespace CurrentPositionLift {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<uint16_t>;
    using DecodableType    = chip::app::DataModel::Nullable<uint16_t>;
    using DecodableArgType = const chip::app::DataModel::Nullable<uint16_t> &;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::CurrentPositionLift::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace CurrentPositionLift
namespace CurrentPositionTilt {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<uint16_t>;
    using DecodableType    = chip::app::DataModel::Nullable<uint16_t>;
    using DecodableArgType = const chip::app::DataModel::Nullable<uint16_t> &;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::CurrentPositionTilt::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace CurrentPositionTilt
namespace NumberOfActuationsLift {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::NumberOfActuationsLift::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace NumberOfActuationsLift
namespace NumberOfActuationsTilt {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::NumberOfActuationsTilt::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace NumberOfActuationsTilt
namespace ConfigStatus {
struct TypeInfo
{
    using Type             = chip::BitMask<chip::app::Clusters::WindowCovering::ConfigStatus>;
    using DecodableType    = chip::BitMask<chip::app::Clusters::WindowCovering::ConfigStatus>;
    using DecodableArgType = chip::BitMask<chip::app::Clusters::WindowCovering::ConfigStatus>;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::ConfigStatus::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace ConfigStatus
namespace CurrentPositionLiftPercentage {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<chip::Percent>;
    using DecodableType    = chip::app::DataModel::Nullable<chip::Percent>;
    using DecodableArgType = const chip::app::DataModel::Nullable<chip::Percent> &;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::CurrentPositionLiftPercentage::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace CurrentPositionLiftPercentage
namespace CurrentPositionTiltPercentage {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<chip::Percent>;
    using DecodableType    = chip::app::DataModel::Nullable<chip::Percent>;
    using DecodableArgType = const chip::app::DataModel::Nullable<chip::Percent> &;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::CurrentPositionTiltPercentage::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace CurrentPositionTiltPercentage
namespace OperationalStatus {
struct TypeInfo
{
    using Type             = chip::BitMask<chip::app::Clusters::WindowCovering::OperationalStatus>;
    using DecodableType    = chip::BitMask<chip::app::Clusters::WindowCovering::OperationalStatus>;
    using DecodableArgType = chip::BitMask<chip::app::Clusters::WindowCovering::OperationalStatus>;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::OperationalStatus::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace OperationalStatus
namespace TargetPositionLiftPercent100ths {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<chip::Percent100ths>;
    using DecodableType    = chip::app::DataModel::Nullable<chip::Percent100ths>;
    using DecodableArgType = const chip::app::DataModel::Nullable<chip::Percent100ths> &;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::TargetPositionLiftPercent100ths::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace TargetPositionLiftPercent100ths
namespace TargetPositionTiltPercent100ths {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<chip::Percent100ths>;
    using DecodableType    = chip::app::DataModel::Nullable<chip::Percent100ths>;
    using DecodableArgType = const chip::app::DataModel::Nullable<chip::Percent100ths> &;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::TargetPositionTiltPercent100ths::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace TargetPositionTiltPercent100ths
namespace EndProductType {
struct TypeInfo
{
    using Type             = chip::app::Clusters::WindowCovering::EndProductType;
    using DecodableType    = chip::app::Clusters::WindowCovering::EndProductType;
    using DecodableArgType = chip::app::Clusters::WindowCovering::EndProductType;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::EndProductType::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace EndProductType
namespace CurrentPositionLiftPercent100ths {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<chip::Percent100ths>;
    using DecodableType    = chip::app::DataModel::Nullable<chip::Percent100ths>;
    using DecodableArgType = const chip::app::DataModel::Nullable<chip::Percent100ths> &;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::CurrentPositionLiftPercent100ths::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace CurrentPositionLiftPercent100ths
namespace CurrentPositionTiltPercent100ths {
struct TypeInfo
{
    using Type             = chip::app::DataModel::Nullable<chip::Percent100ths>;
    using DecodableType    = chip::app::DataModel::Nullable<chip::Percent100ths>;
    using DecodableArgType = const chip::app::DataModel::Nullable<chip::Percent100ths> &;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::CurrentPositionTiltPercent100ths::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace CurrentPositionTiltPercent100ths
namespace InstalledOpenLimitLift {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::InstalledOpenLimitLift::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace InstalledOpenLimitLift
namespace InstalledClosedLimitLift {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::InstalledClosedLimitLift::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace InstalledClosedLimitLift
namespace InstalledOpenLimitTilt {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::InstalledOpenLimitTilt::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace InstalledOpenLimitTilt
namespace InstalledClosedLimitTilt {
struct TypeInfo
{
    using Type             = uint16_t;
    using DecodableType    = uint16_t;
    using DecodableArgType = uint16_t;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::InstalledClosedLimitTilt::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace InstalledClosedLimitTilt
namespace Mode {
struct TypeInfo
{
    using Type             = chip::BitMask<chip::app::Clusters::WindowCovering::Mode>;
    using DecodableType    = chip::BitMask<chip::app::Clusters::WindowCovering::Mode>;
    using DecodableArgType = chip::BitMask<chip::app::Clusters::WindowCovering::Mode>;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::Mode::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace Mode
namespace SafetyStatus {
struct TypeInfo
{
    using Type             = chip::BitMask<chip::app::Clusters::WindowCovering::SafetyStatus>;
    using DecodableType    = chip::BitMask<chip::app::Clusters::WindowCovering::SafetyStatus>;
    using DecodableArgType = chip::BitMask<chip::app::Clusters::WindowCovering::SafetyStatus>;

    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
    static constexpr AttributeId GetAttributeId() { return Attributes::SafetyStatus::Id; }
    static constexpr bool MustUseTimedWrite() { return false; }
};
} // namespace SafetyStatus
namespace GeneratedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::GeneratedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
};
} // namespace GeneratedCommandList
namespace AcceptedCommandList {
struct TypeInfo : public Clusters::Globals::Attributes::AcceptedCommandList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
};
} // namespace AcceptedCommandList
namespace AttributeList {
struct TypeInfo : public Clusters::Globals::Attributes::AttributeList::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
};
} // namespace AttributeList
namespace FeatureMap {
struct TypeInfo : public Clusters::Globals::Attributes::FeatureMap::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
};
} // namespace FeatureMap
namespace ClusterRevision {
struct TypeInfo : public Clusters::Globals::Attributes::ClusterRevision::TypeInfo
{
    static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }
};
} // namespace ClusterRevision

struct TypeInfo
{
    struct DecodableType
    {
        static constexpr ClusterId GetClusterId() { return Clusters::WindowCovering::Id; }

        CHIP_ERROR Decode(TLV::TLVReader & reader, const ConcreteAttributePath & path);

        Attributes::Type::TypeInfo::DecodableType type = static_cast<chip::app::Clusters::WindowCovering::Type>(0);
        Attributes::PhysicalClosedLimitLift::TypeInfo::DecodableType physicalClosedLimitLift = static_cast<uint16_t>(0);
        Attributes::PhysicalClosedLimitTilt::TypeInfo::DecodableType physicalClosedLimitTilt = static_cast<uint16_t>(0);
        Attributes::CurrentPositionLift::TypeInfo::DecodableType currentPositionLift;
        Attributes::CurrentPositionTilt::TypeInfo::DecodableType currentPositionTilt;
        Attributes::NumberOfActuationsLift::TypeInfo::DecodableType numberOfActuationsLift = static_cast<uint16_t>(0);
        Attributes::NumberOfActuationsTilt::TypeInfo::DecodableType numberOfActuationsTilt = static_cast<uint16_t>(0);
        Attributes::ConfigStatus::TypeInfo::DecodableType configStatus =
            static_cast<chip::BitMask<chip::app::Clusters::WindowCovering::ConfigStatus>>(0);
        Attributes::CurrentPositionLiftPercentage::TypeInfo::DecodableType currentPositionLiftPercentage;
        Attributes::CurrentPositionTiltPercentage::TypeInfo::DecodableType currentPositionTiltPercentage;
        Attributes::OperationalStatus::TypeInfo::DecodableType operationalStatus =
            static_cast<chip::BitMask<chip::app::Clusters::WindowCovering::OperationalStatus>>(0);
        Attributes::TargetPositionLiftPercent100ths::TypeInfo::DecodableType targetPositionLiftPercent100ths;
        Attributes::TargetPositionTiltPercent100ths::TypeInfo::DecodableType targetPositionTiltPercent100ths;
        Attributes::EndProductType::TypeInfo::DecodableType endProductType =
            static_cast<chip::app::Clusters::WindowCovering::EndProductType>(0);
        Attributes::CurrentPositionLiftPercent100ths::TypeInfo::DecodableType currentPositionLiftPercent100ths;
        Attributes::CurrentPositionTiltPercent100ths::TypeInfo::DecodableType currentPositionTiltPercent100ths;
        Attributes::InstalledOpenLimitLift::TypeInfo::DecodableType installedOpenLimitLift     = static_cast<uint16_t>(0);
        Attributes::InstalledClosedLimitLift::TypeInfo::DecodableType installedClosedLimitLift = static_cast<uint16_t>(0);
        Attributes::InstalledOpenLimitTilt::TypeInfo::DecodableType installedOpenLimitTilt     = static_cast<uint16_t>(0);
        Attributes::InstalledClosedLimitTilt::TypeInfo::DecodableType installedClosedLimitTilt = static_cast<uint16_t>(0);
        Attributes::Mode::TypeInfo::DecodableType mode = static_cast<chip::BitMask<chip::app::Clusters::WindowCovering::Mode>>(0);
        Attributes::SafetyStatus::TypeInfo::DecodableType safetyStatus =
            static_cast<chip::BitMask<chip::app::Clusters::WindowCovering::SafetyStatus>>(0);
        Attributes::GeneratedCommandList::TypeInfo::DecodableType generatedCommandList;
        Attributes::AcceptedCommandList::TypeInfo::DecodableType acceptedCommandList;
        Attributes::AttributeList::TypeInfo::DecodableType attributeList;
        Attributes::FeatureMap::TypeInfo::DecodableType featureMap           = static_cast<uint32_t>(0);
        Attributes::ClusterRevision::TypeInfo::DecodableType clusterRevision = static_cast<uint16_t>(0);
    };
};
} // namespace Attributes
} // namespace WindowCovering
} // namespace Clusters
} // namespace app
} // namespace chip
