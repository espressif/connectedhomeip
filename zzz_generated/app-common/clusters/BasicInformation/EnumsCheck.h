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

#include <clusters/BasicInformation/Enums.h>

namespace chip {
namespace app {
namespace Clusters {
static auto __attribute__((unused)) EnsureKnownEnumValue(BasicInformation::ColorEnum val)
{
    using EnumType = BasicInformation::ColorEnum;
    switch (val)
    {
    case EnumType::kBlack:
    case EnumType::kNavy:
    case EnumType::kGreen:
    case EnumType::kTeal:
    case EnumType::kMaroon:
    case EnumType::kPurple:
    case EnumType::kOlive:
    case EnumType::kGray:
    case EnumType::kBlue:
    case EnumType::kLime:
    case EnumType::kAqua:
    case EnumType::kRed:
    case EnumType::kFuchsia:
    case EnumType::kYellow:
    case EnumType::kWhite:
    case EnumType::kNickel:
    case EnumType::kChrome:
    case EnumType::kBrass:
    case EnumType::kCopper:
    case EnumType::kSilver:
    case EnumType::kGold:
        return val;
    default:
        return EnumType::kUnknownEnumValue;
    }
}
static auto __attribute__((unused)) EnsureKnownEnumValue(BasicInformation::ProductFinishEnum val)
{
    using EnumType = BasicInformation::ProductFinishEnum;
    switch (val)
    {
    case EnumType::kOther:
    case EnumType::kMatte:
    case EnumType::kSatin:
    case EnumType::kPolished:
    case EnumType::kRugged:
    case EnumType::kFabric:
        return val;
    default:
        return EnumType::kUnknownEnumValue;
    }
}
} // namespace Clusters
} // namespace app
} // namespace chip
