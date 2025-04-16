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

#include <clusters/TlsClientManagement/ClusterId.h>
#include <clusters/TlsClientManagement/CommandIds.h>
#include <clusters/TlsClientManagement/Enums.h>
#include <clusters/TlsClientManagement/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace TlsClientManagement {
namespace Commands {
// Forward-declarations so we can reference these later.

namespace ProvisionEndpoint {
struct Type;
struct DecodableType;
} // namespace ProvisionEndpoint

namespace ProvisionEndpointResponse {
struct Type;
struct DecodableType;
} // namespace ProvisionEndpointResponse

namespace FindEndpoint {
struct Type;
struct DecodableType;
} // namespace FindEndpoint

namespace FindEndpointResponse {
struct Type;
struct DecodableType;
} // namespace FindEndpointResponse

namespace RemoveEndpoint {
struct Type;
struct DecodableType;
} // namespace RemoveEndpoint

} // namespace Commands

namespace Commands {
namespace ProvisionEndpoint {
enum class Fields : uint8_t
{
    kHostname   = 0,
    kPort       = 1,
    kCaid       = 2,
    kCcdid      = 3,
    kEndpointID = 4,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ProvisionEndpoint::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsClientManagement::Id; }

    chip::ByteSpan hostname;
    uint16_t port = static_cast<uint16_t>(0);
    uint16_t caid = static_cast<uint16_t>(0);
    DataModel::Nullable<uint16_t> ccdid;
    DataModel::Nullable<uint16_t> endpointID;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::TlsClientManagement::Commands::ProvisionEndpointResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ProvisionEndpoint::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsClientManagement::Id; }

    chip::ByteSpan hostname;
    uint16_t port = static_cast<uint16_t>(0);
    uint16_t caid = static_cast<uint16_t>(0);
    DataModel::Nullable<uint16_t> ccdid;
    DataModel::Nullable<uint16_t> endpointID;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ProvisionEndpoint
namespace ProvisionEndpointResponse {
enum class Fields : uint8_t
{
    kEndpointID = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ProvisionEndpointResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsClientManagement::Id; }

    uint16_t endpointID = static_cast<uint16_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ProvisionEndpointResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsClientManagement::Id; }

    uint16_t endpointID = static_cast<uint16_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ProvisionEndpointResponse
namespace FindEndpoint {
enum class Fields : uint8_t
{
    kEndpointID = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::FindEndpoint::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsClientManagement::Id; }

    DataModel::Nullable<uint16_t> endpointID;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::TlsClientManagement::Commands::FindEndpointResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::FindEndpoint::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsClientManagement::Id; }

    DataModel::Nullable<uint16_t> endpointID;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace FindEndpoint
namespace FindEndpointResponse {
enum class Fields : uint8_t
{
    kEndpoints = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::FindEndpointResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsClientManagement::Id; }

    DataModel::List<const Structs::TLSEndpointStruct::Type> endpoints;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::FindEndpointResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsClientManagement::Id; }

    DataModel::DecodableList<Structs::TLSEndpointStruct::DecodableType> endpoints;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace FindEndpointResponse
namespace RemoveEndpoint {
enum class Fields : uint8_t
{
    kEndpointID = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::RemoveEndpoint::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsClientManagement::Id; }

    uint16_t endpointID = static_cast<uint16_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::RemoveEndpoint::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsClientManagement::Id; }

    uint16_t endpointID = static_cast<uint16_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace RemoveEndpoint
} // namespace Commands
} // namespace TlsClientManagement
} // namespace Clusters
} // namespace app
} // namespace chip
