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

#include <clusters/TlsCertificateManagement/ClusterId.h>
#include <clusters/TlsCertificateManagement/CommandIds.h>
#include <clusters/TlsCertificateManagement/Enums.h>
#include <clusters/TlsCertificateManagement/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace TlsCertificateManagement {
namespace Commands {
// Forward-declarations so we can reference these later.

namespace ProvisionRootCertificate {
struct Type;
struct DecodableType;
} // namespace ProvisionRootCertificate

namespace ProvisionRootCertificateResponse {
struct Type;
struct DecodableType;
} // namespace ProvisionRootCertificateResponse

namespace FindRootCertificate {
struct Type;
struct DecodableType;
} // namespace FindRootCertificate

namespace FindRootCertificateResponse {
struct Type;
struct DecodableType;
} // namespace FindRootCertificateResponse

namespace LookupRootCertificate {
struct Type;
struct DecodableType;
} // namespace LookupRootCertificate

namespace LookupRootCertificateResponse {
struct Type;
struct DecodableType;
} // namespace LookupRootCertificateResponse

namespace RemoveRootCertificate {
struct Type;
struct DecodableType;
} // namespace RemoveRootCertificate

namespace TLSClientCSR {
struct Type;
struct DecodableType;
} // namespace TLSClientCSR

namespace TLSClientCSRResponse {
struct Type;
struct DecodableType;
} // namespace TLSClientCSRResponse

namespace ProvisionClientCertificate {
struct Type;
struct DecodableType;
} // namespace ProvisionClientCertificate

namespace FindClientCertificate {
struct Type;
struct DecodableType;
} // namespace FindClientCertificate

namespace FindClientCertificateResponse {
struct Type;
struct DecodableType;
} // namespace FindClientCertificateResponse

namespace LookupClientCertificate {
struct Type;
struct DecodableType;
} // namespace LookupClientCertificate

namespace LookupClientCertificateResponse {
struct Type;
struct DecodableType;
} // namespace LookupClientCertificateResponse

namespace RemoveClientCertificate {
struct Type;
struct DecodableType;
} // namespace RemoveClientCertificate

} // namespace Commands

namespace Commands {
namespace ProvisionRootCertificate {
enum class Fields : uint8_t
{
    kCertificate = 0,
    kCaid        = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ProvisionRootCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    chip::ByteSpan certificate;
    DataModel::Nullable<uint16_t> caid;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::TlsCertificateManagement::Commands::ProvisionRootCertificateResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ProvisionRootCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    chip::ByteSpan certificate;
    DataModel::Nullable<uint16_t> caid;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ProvisionRootCertificate
namespace ProvisionRootCertificateResponse {
enum class Fields : uint8_t
{
    kCaid = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ProvisionRootCertificateResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    uint16_t caid = static_cast<uint16_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ProvisionRootCertificateResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    uint16_t caid = static_cast<uint16_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ProvisionRootCertificateResponse
namespace FindRootCertificate {
enum class Fields : uint8_t
{
    kCaid = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::FindRootCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    DataModel::Nullable<uint16_t> caid;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::TlsCertificateManagement::Commands::FindRootCertificateResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::FindRootCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    DataModel::Nullable<uint16_t> caid;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace FindRootCertificate
namespace FindRootCertificateResponse {
enum class Fields : uint8_t
{
    kCertificateDetails = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::FindRootCertificateResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    DataModel::List<const Structs::TLSCertStruct::Type> certificateDetails;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::FindRootCertificateResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    DataModel::DecodableList<Structs::TLSCertStruct::DecodableType> certificateDetails;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace FindRootCertificateResponse
namespace LookupRootCertificate {
enum class Fields : uint8_t
{
    kFingerprint = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::LookupRootCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    chip::ByteSpan fingerprint;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::TlsCertificateManagement::Commands::LookupRootCertificateResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::LookupRootCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    chip::ByteSpan fingerprint;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace LookupRootCertificate
namespace LookupRootCertificateResponse {
enum class Fields : uint8_t
{
    kCaid = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::LookupRootCertificateResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    uint16_t caid = static_cast<uint16_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::LookupRootCertificateResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    uint16_t caid = static_cast<uint16_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace LookupRootCertificateResponse
namespace RemoveRootCertificate {
enum class Fields : uint8_t
{
    kCaid = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::RemoveRootCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    uint16_t caid = static_cast<uint16_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::RemoveRootCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    uint16_t caid = static_cast<uint16_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace RemoveRootCertificate
namespace TLSClientCSR {
enum class Fields : uint8_t
{
    kNonce = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::TLSClientCSR::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    chip::ByteSpan nonce;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::TlsCertificateManagement::Commands::TLSClientCSRResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::TLSClientCSR::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    chip::ByteSpan nonce;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace TLSClientCSR
namespace TLSClientCSRResponse {
enum class Fields : uint8_t
{
    kCcdid = 0,
    kCsr   = 1,
    kNonce = 2,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::TLSClientCSRResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    uint16_t ccdid = static_cast<uint16_t>(0);
    chip::ByteSpan csr;
    chip::ByteSpan nonce;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::TLSClientCSRResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    uint16_t ccdid = static_cast<uint16_t>(0);
    chip::ByteSpan csr;
    chip::ByteSpan nonce;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace TLSClientCSRResponse
namespace ProvisionClientCertificate {
enum class Fields : uint8_t
{
    kCcdid                    = 0,
    kClientCertificateDetails = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ProvisionClientCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    uint16_t ccdid = static_cast<uint16_t>(0);
    Structs::TLSClientCertificateDetailStruct::Type clientCertificateDetails;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ProvisionClientCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    uint16_t ccdid = static_cast<uint16_t>(0);
    Structs::TLSClientCertificateDetailStruct::DecodableType clientCertificateDetails;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ProvisionClientCertificate
namespace FindClientCertificate {
enum class Fields : uint8_t
{
    kCcdid = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::FindClientCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    DataModel::Nullable<uint16_t> ccdid;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::TlsCertificateManagement::Commands::FindClientCertificateResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::FindClientCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    DataModel::Nullable<uint16_t> ccdid;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace FindClientCertificate
namespace FindClientCertificateResponse {
enum class Fields : uint8_t
{
    kCertificateDetails = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::FindClientCertificateResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    DataModel::List<const Structs::TLSClientCertificateDetailStruct::Type> certificateDetails;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::FindClientCertificateResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    DataModel::DecodableList<Structs::TLSClientCertificateDetailStruct::DecodableType> certificateDetails;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace FindClientCertificateResponse
namespace LookupClientCertificate {
enum class Fields : uint8_t
{
    kFingerprint = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::LookupClientCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    chip::ByteSpan fingerprint;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::TlsCertificateManagement::Commands::LookupClientCertificateResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::LookupClientCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    chip::ByteSpan fingerprint;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace LookupClientCertificate
namespace LookupClientCertificateResponse {
enum class Fields : uint8_t
{
    kCcdid = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::LookupClientCertificateResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    uint16_t ccdid = static_cast<uint16_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::LookupClientCertificateResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    uint16_t ccdid = static_cast<uint16_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace LookupClientCertificateResponse
namespace RemoveClientCertificate {
enum class Fields : uint8_t
{
    kCcdid = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::RemoveClientCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    uint16_t ccdid = static_cast<uint16_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::RemoveClientCertificate::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::TlsCertificateManagement::Id; }

    uint16_t ccdid = static_cast<uint16_t>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace RemoveClientCertificate
} // namespace Commands
} // namespace TlsCertificateManagement
} // namespace Clusters
} // namespace app
} // namespace chip
