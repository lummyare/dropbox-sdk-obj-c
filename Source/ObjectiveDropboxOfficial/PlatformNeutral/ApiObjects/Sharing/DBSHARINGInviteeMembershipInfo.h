///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;
#import "DBSHARINGMembershipInfo.h"

@class DBSHARINGAccessLevel;
@class DBSHARINGInviteeInfo;
@class DBSHARINGMemberPermission;
@class DBSHARINGUserInfo;

#pragma mark - API Object

///
/// The `InviteeMembershipInfo` struct.
///
/// Information about an invited member of a shared content.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGInviteeMembershipInfo : DBSHARINGMembershipInfo <DBSerializable>

#pragma mark - Instance fields

/// Recipient of the invitation.
@property(nonatomic, readonly) DBSHARINGInviteeInfo * _Nonnull invitee;

/// The user this invitation is tied to, if available.
@property(nonatomic, readonly) DBSHARINGUserInfo * _Nullable user;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param accessType The access type for this member.
/// @param invitee Recipient of the invitation.
/// @param permissions The permissions that requesting user has on this member. The set of
/// permissions corresponds to the MemberActions in the request.
/// @param initials Suggested name initials for a member.
/// @param isInherited True if the member has access from a parent folder.
/// @param user The user this invitation is tied to, if available.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAccessType:(DBSHARINGAccessLevel * _Nonnull)accessType
                                   invitee:(DBSHARINGInviteeInfo * _Nonnull)invitee
                               permissions:(NSArray<DBSHARINGMemberPermission *> * _Nullable)permissions
                                  initials:(NSString * _Nullable)initials
                               isInherited:(NSNumber * _Nullable)isInherited
                                      user:(DBSHARINGUserInfo * _Nullable)user;

///
/// Convenience constructor (exposes only non-nullable instance variables with no default value).
///
/// @param accessType The access type for this member.
/// @param invitee Recipient of the invitation.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAccessType:(DBSHARINGAccessLevel * _Nonnull)accessType
                                   invitee:(DBSHARINGInviteeInfo * _Nonnull)invitee;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `InviteeMembershipInfo` struct.
///
@interface DBSHARINGInviteeMembershipInfoSerializer : NSObject

///
/// Serializes `DBSHARINGInviteeMembershipInfo` instances.
///
/// @param instance An instance of the `DBSHARINGInviteeMembershipInfo` API object.
///
/// @return A json-compatible dictionary representation of the `DBSHARINGInviteeMembershipInfo` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGInviteeMembershipInfo * _Nonnull)instance;

///
/// Deserializes `DBSHARINGInviteeMembershipInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBSHARINGInviteeMembershipInfo`
/// API object.
///
/// @return An instantiation of the `DBSHARINGInviteeMembershipInfo` object.
///
+ (DBSHARINGInviteeMembershipInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
