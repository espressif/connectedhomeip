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

#include <clusters/shared/Enums.h>
#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace ActivatedCarbonFilterMonitoring {

using ChangeIndicationEnum = Clusters::detail::ChangeIndicationEnum;

using DegradationDirectionEnum = Clusters::detail::DegradationDirectionEnum;

using ProductIdentifierTypeEnum = Clusters::detail::ProductIdentifierTypeEnum;

// Bitmap for Feature
enum class Feature : uint32_t
{
    kCondition              = 0x1,
    kWarning                = 0x2,
    kReplacementProductList = 0x4,
};
} // namespace ActivatedCarbonFilterMonitoring
} // namespace Clusters
} // namespace app
} // namespace chip
