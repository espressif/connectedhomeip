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

#include <app/data-model/DecodableList.h>
#include <app/data-model/List.h>
#include <app/data-model/NullObject.h>
#include <app/data-model/Nullable.h>
#include <lib/core/DataModelTypes.h>
#include <lib/core/Optional.h>
#include <lib/core/TLV.h>
#include <lib/support/BitMask.h>

#include <clusters/shared/Enums.h>
#include <clusters/shared/Structs.h>

#include <clusters/GeneralCommissioning/ClusterId.h>
#include <clusters/GeneralCommissioning/CommandIds.h>
#include <clusters/GeneralCommissioning/Enums.h>
#include <clusters/GeneralCommissioning/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace GeneralCommissioning {
namespace Commands {
// Forward-declarations so we can reference these later.

namespace ArmFailSafe {
struct Type;
struct DecodableType;
} // namespace ArmFailSafe

namespace ArmFailSafeResponse {
struct Type;
struct DecodableType;
} // namespace ArmFailSafeResponse

namespace SetRegulatoryConfig {
struct Type;
struct DecodableType;
} // namespace SetRegulatoryConfig

namespace SetRegulatoryConfigResponse {
struct Type;
struct DecodableType;
} // namespace SetRegulatoryConfigResponse

namespace CommissioningComplete {
struct Type;
struct DecodableType;
} // namespace CommissioningComplete

namespace CommissioningCompleteResponse {
struct Type;
struct DecodableType;
} // namespace CommissioningCompleteResponse

namespace SetTCAcknowledgements {
struct Type;
struct DecodableType;
} // namespace SetTCAcknowledgements

namespace SetTCAcknowledgementsResponse {
struct Type;
struct DecodableType;
} // namespace SetTCAcknowledgementsResponse

} // namespace Commands

namespace Commands {
namespace ArmFailSafe {
enum class Fields : uint8_t
{
    kExpiryLengthSeconds = 0,
    kBreadcrumb          = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ArmFailSafe::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    uint16_t expiryLengthSeconds = static_cast<uint16_t>(0);
    uint64_t breadcrumb          = static_cast<uint64_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::GeneralCommissioning::Commands::ArmFailSafeResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ArmFailSafe::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    uint16_t expiryLengthSeconds = static_cast<uint16_t>(0);
    uint64_t breadcrumb          = static_cast<uint64_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ArmFailSafe
namespace ArmFailSafeResponse {
enum class Fields : uint8_t
{
    kErrorCode = 0,
    kDebugText = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ArmFailSafeResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    CommissioningErrorEnum errorCode = static_cast<CommissioningErrorEnum>(0);
    chip::CharSpan debugText;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ArmFailSafeResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    CommissioningErrorEnum errorCode = static_cast<CommissioningErrorEnum>(0);
    chip::CharSpan debugText;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ArmFailSafeResponse
namespace SetRegulatoryConfig {
enum class Fields : uint8_t
{
    kNewRegulatoryConfig = 0,
    kCountryCode         = 1,
    kBreadcrumb          = 2,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::SetRegulatoryConfig::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    RegulatoryLocationTypeEnum newRegulatoryConfig = static_cast<RegulatoryLocationTypeEnum>(0);
    chip::CharSpan countryCode;
    uint64_t breadcrumb = static_cast<uint64_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::GeneralCommissioning::Commands::SetRegulatoryConfigResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::SetRegulatoryConfig::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    RegulatoryLocationTypeEnum newRegulatoryConfig = static_cast<RegulatoryLocationTypeEnum>(0);
    chip::CharSpan countryCode;
    uint64_t breadcrumb = static_cast<uint64_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace SetRegulatoryConfig
namespace SetRegulatoryConfigResponse {
enum class Fields : uint8_t
{
    kErrorCode = 0,
    kDebugText = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::SetRegulatoryConfigResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    CommissioningErrorEnum errorCode = static_cast<CommissioningErrorEnum>(0);
    chip::CharSpan debugText;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::SetRegulatoryConfigResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    CommissioningErrorEnum errorCode = static_cast<CommissioningErrorEnum>(0);
    chip::CharSpan debugText;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace SetRegulatoryConfigResponse
namespace CommissioningComplete {
enum class Fields : uint8_t
{
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::CommissioningComplete::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::GeneralCommissioning::Commands::CommissioningCompleteResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::CommissioningComplete::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace CommissioningComplete
namespace CommissioningCompleteResponse {
enum class Fields : uint8_t
{
    kErrorCode = 0,
    kDebugText = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::CommissioningCompleteResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    CommissioningErrorEnum errorCode = static_cast<CommissioningErrorEnum>(0);
    chip::CharSpan debugText;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::CommissioningCompleteResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    CommissioningErrorEnum errorCode = static_cast<CommissioningErrorEnum>(0);
    chip::CharSpan debugText;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace CommissioningCompleteResponse
namespace SetTCAcknowledgements {
enum class Fields : uint8_t
{
    kTCVersion      = 0,
    kTCUserResponse = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::SetTCAcknowledgements::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    uint16_t TCVersion      = static_cast<uint16_t>(0);
    uint16_t TCUserResponse = static_cast<uint16_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::GeneralCommissioning::Commands::SetTCAcknowledgementsResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::SetTCAcknowledgements::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    uint16_t TCVersion      = static_cast<uint16_t>(0);
    uint16_t TCUserResponse = static_cast<uint16_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace SetTCAcknowledgements
namespace SetTCAcknowledgementsResponse {
enum class Fields : uint8_t
{
    kErrorCode = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::SetTCAcknowledgementsResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    CommissioningErrorEnum errorCode = static_cast<CommissioningErrorEnum>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::SetTCAcknowledgementsResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::GeneralCommissioning::Id; }

    CommissioningErrorEnum errorCode = static_cast<CommissioningErrorEnum>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace SetTCAcknowledgementsResponse
} // namespace Commands
} // namespace GeneralCommissioning
} // namespace Clusters
} // namespace app
} // namespace chip
