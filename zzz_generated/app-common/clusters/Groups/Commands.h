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

#include <clusters/Groups/ClusterId.h>
#include <clusters/Groups/CommandIds.h>
#include <clusters/Groups/Enums.h>
#include <clusters/Groups/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace Groups {
namespace Commands {
// Forward-declarations so we can reference these later.

namespace AddGroup {
struct Type;
struct DecodableType;
} // namespace AddGroup

namespace AddGroupResponse {
struct Type;
struct DecodableType;
} // namespace AddGroupResponse

namespace ViewGroup {
struct Type;
struct DecodableType;
} // namespace ViewGroup

namespace ViewGroupResponse {
struct Type;
struct DecodableType;
} // namespace ViewGroupResponse

namespace GetGroupMembership {
struct Type;
struct DecodableType;
} // namespace GetGroupMembership

namespace GetGroupMembershipResponse {
struct Type;
struct DecodableType;
} // namespace GetGroupMembershipResponse

namespace RemoveGroup {
struct Type;
struct DecodableType;
} // namespace RemoveGroup

namespace RemoveGroupResponse {
struct Type;
struct DecodableType;
} // namespace RemoveGroupResponse

namespace RemoveAllGroups {
struct Type;
struct DecodableType;
} // namespace RemoveAllGroups

namespace AddGroupIfIdentifying {
struct Type;
struct DecodableType;
} // namespace AddGroupIfIdentifying

} // namespace Commands

namespace Commands {
namespace AddGroup {
enum class Fields : uint8_t
{
    kGroupID   = 0,
    kGroupName = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::AddGroup::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    chip::GroupId groupID = static_cast<chip::GroupId>(0);
    chip::CharSpan groupName;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::Groups::Commands::AddGroupResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::AddGroup::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    chip::GroupId groupID = static_cast<chip::GroupId>(0);
    chip::CharSpan groupName;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace AddGroup
namespace AddGroupResponse {
enum class Fields : uint8_t
{
    kStatus  = 0,
    kGroupID = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::AddGroupResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    uint8_t status        = static_cast<uint8_t>(0);
    chip::GroupId groupID = static_cast<chip::GroupId>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::AddGroupResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    uint8_t status        = static_cast<uint8_t>(0);
    chip::GroupId groupID = static_cast<chip::GroupId>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace AddGroupResponse
namespace ViewGroup {
enum class Fields : uint8_t
{
    kGroupID = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ViewGroup::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    chip::GroupId groupID = static_cast<chip::GroupId>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::Groups::Commands::ViewGroupResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ViewGroup::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    chip::GroupId groupID = static_cast<chip::GroupId>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ViewGroup
namespace ViewGroupResponse {
enum class Fields : uint8_t
{
    kStatus    = 0,
    kGroupID   = 1,
    kGroupName = 2,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::ViewGroupResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    uint8_t status        = static_cast<uint8_t>(0);
    chip::GroupId groupID = static_cast<chip::GroupId>(0);
    chip::CharSpan groupName;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::ViewGroupResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    uint8_t status        = static_cast<uint8_t>(0);
    chip::GroupId groupID = static_cast<chip::GroupId>(0);
    chip::CharSpan groupName;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace ViewGroupResponse
namespace GetGroupMembership {
enum class Fields : uint8_t
{
    kGroupList = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::GetGroupMembership::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    DataModel::List<const chip::GroupId> groupList;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::Groups::Commands::GetGroupMembershipResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::GetGroupMembership::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    DataModel::DecodableList<chip::GroupId> groupList;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace GetGroupMembership
namespace GetGroupMembershipResponse {
enum class Fields : uint8_t
{
    kCapacity  = 0,
    kGroupList = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::GetGroupMembershipResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    DataModel::Nullable<uint8_t> capacity;
    DataModel::List<const chip::GroupId> groupList;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::GetGroupMembershipResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    DataModel::Nullable<uint8_t> capacity;
    DataModel::DecodableList<chip::GroupId> groupList;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace GetGroupMembershipResponse
namespace RemoveGroup {
enum class Fields : uint8_t
{
    kGroupID = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::RemoveGroup::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    chip::GroupId groupID = static_cast<chip::GroupId>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::Groups::Commands::RemoveGroupResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::RemoveGroup::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    chip::GroupId groupID = static_cast<chip::GroupId>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace RemoveGroup
namespace RemoveGroupResponse {
enum class Fields : uint8_t
{
    kStatus  = 0,
    kGroupID = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::RemoveGroupResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    uint8_t status        = static_cast<uint8_t>(0);
    chip::GroupId groupID = static_cast<chip::GroupId>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::RemoveGroupResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    uint8_t status        = static_cast<uint8_t>(0);
    chip::GroupId groupID = static_cast<chip::GroupId>(0);
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace RemoveGroupResponse
namespace RemoveAllGroups {
enum class Fields : uint8_t
{
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::RemoveAllGroups::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::RemoveAllGroups::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace RemoveAllGroups
namespace AddGroupIfIdentifying {
enum class Fields : uint8_t
{
    kGroupID   = 0,
    kGroupName = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::AddGroupIfIdentifying::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    chip::GroupId groupID = static_cast<chip::GroupId>(0);
    chip::CharSpan groupName;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::AddGroupIfIdentifying::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::Groups::Id; }

    chip::GroupId groupID = static_cast<chip::GroupId>(0);
    chip::CharSpan groupName;
    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace AddGroupIfIdentifying
} // namespace Commands
} // namespace Groups
} // namespace Clusters
} // namespace app
} // namespace chip
