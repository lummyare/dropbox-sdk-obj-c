///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

@class DBSHARINGAddMemberSelectorError;
@class DBSHARINGSharedFolderAccessError;

#pragma mark - API Object

///
/// The `AddFolderMemberError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGAddFolderMemberError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBSHARINGAddFolderMemberErrorTag` enum type represents the possible tag states with which
/// the `DBSHARINGAddFolderMemberError` union can exist.
typedef NS_ENUM(NSInteger, DBSHARINGAddFolderMemberErrorTag) {
  /// Unable to access shared folder.
  DBSHARINGAddFolderMemberErrorAccessError,

  /// The current user's e-mail address is unverified.
  DBSHARINGAddFolderMemberErrorEmailUnverified,

  /// `members` in `DBSHARINGAddFolderMemberArg` contains a bad invitation recipient.
  DBSHARINGAddFolderMemberErrorBadMember,

  /// Your team policy does not allow sharing outside of the team.
  DBSHARINGAddFolderMemberErrorCantShareOutsideTeam,

  /// The value is the member limit that was reached.
  DBSHARINGAddFolderMemberErrorTooManyMembers,

  /// The value is the pending invite limit that was reached.
  DBSHARINGAddFolderMemberErrorTooManyPendingInvites,

  /// The current user has hit the limit of invites they can send per day. Try again in 24 hours.
  DBSHARINGAddFolderMemberErrorRateLimit,

  /// The current user is trying to share with too many people at once.
  DBSHARINGAddFolderMemberErrorTooManyInvitees,

  /// The current user's account doesn't support this action. An example of this is when adding a
  /// read-only member. This action can only be performed by users that have upgraded to a Pro or
  /// Business plan.
  DBSHARINGAddFolderMemberErrorInsufficientPlan,

  /// This action cannot be performed on a team shared folder.
  DBSHARINGAddFolderMemberErrorTeamFolder,

  /// The current user does not have permission to perform this action.
  DBSHARINGAddFolderMemberErrorNoPermission,

  /// (no description).
  DBSHARINGAddFolderMemberErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBSHARINGAddFolderMemberErrorTag tag;

/// Unable to access shared folder. @note Ensure the `isAccessError` method returns true before
/// accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) DBSHARINGSharedFolderAccessError * _Nonnull accessError;

/// `members` in `DBSHARINGAddFolderMemberArg` contains a bad invitation recipient. @note Ensure the
/// `isBadMember` method returns true before accessing, otherwise a runtime exception will be
/// raised.
@property(nonatomic, readonly) DBSHARINGAddMemberSelectorError * _Nonnull badMember;

/// The value is the member limit that was reached. @note Ensure the `isTooManyMembers` method
/// returns true before accessing, otherwise a runtime exception will be raised.
@property(nonatomic, readonly) NSNumber * _Nonnull tooManyMembers;

/// The value is the pending invite limit that was reached. @note Ensure the
/// `isTooManyPendingInvites` method returns true before accessing, otherwise a runtime exception
/// will be raised.
@property(nonatomic, readonly) NSNumber * _Nonnull tooManyPendingInvites;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "access_error".
///
/// Description of the "access_error" tag state: Unable to access shared folder.
///
/// @param accessError Unable to access shared folder.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAccessError:(DBSHARINGSharedFolderAccessError * _Nonnull)accessError;

///
/// Initializes union class with tag state of "email_unverified".
///
/// Description of the "email_unverified" tag state: The current user's e-mail address is
/// unverified.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithEmailUnverified;

///
/// Initializes union class with tag state of "bad_member".
///
/// Description of the "bad_member" tag state: `members` in `DBSHARINGAddFolderMemberArg` contains a
/// bad invitation recipient.
///
/// @param badMember `members` in `DBSHARINGAddFolderMemberArg` contains a bad invitation recipient.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithBadMember:(DBSHARINGAddMemberSelectorError * _Nonnull)badMember;

///
/// Initializes union class with tag state of "cant_share_outside_team".
///
/// Description of the "cant_share_outside_team" tag state: Your team policy does not allow sharing
/// outside of the team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithCantShareOutsideTeam;

///
/// Initializes union class with tag state of "too_many_members".
///
/// Description of the "too_many_members" tag state: The value is the member limit that was reached.
///
/// @param tooManyMembers The value is the member limit that was reached.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTooManyMembers:(NSNumber * _Nonnull)tooManyMembers;

///
/// Initializes union class with tag state of "too_many_pending_invites".
///
/// Description of the "too_many_pending_invites" tag state: The value is the pending invite limit
/// that was reached.
///
/// @param tooManyPendingInvites The value is the pending invite limit that was reached.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTooManyPendingInvites:(NSNumber * _Nonnull)tooManyPendingInvites;

///
/// Initializes union class with tag state of "rate_limit".
///
/// Description of the "rate_limit" tag state: The current user has hit the limit of invites they
/// can send per day. Try again in 24 hours.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithRateLimit;

///
/// Initializes union class with tag state of "too_many_invitees".
///
/// Description of the "too_many_invitees" tag state: The current user is trying to share with too
/// many people at once.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTooManyInvitees;

///
/// Initializes union class with tag state of "insufficient_plan".
///
/// Description of the "insufficient_plan" tag state: The current user's account doesn't support
/// this action. An example of this is when adding a read-only member. This action can only be
/// performed by users that have upgraded to a Pro or Business plan.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithInsufficientPlan;

///
/// Initializes union class with tag state of "team_folder".
///
/// Description of the "team_folder" tag state: This action cannot be performed on a team shared
/// folder.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTeamFolder;

///
/// Initializes union class with tag state of "no_permission".
///
/// Description of the "no_permission" tag state: The current user does not have permission to
/// perform this action.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithNoPermission;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "access_error".
///
/// @note Call this method and ensure it returns true before accessing the `accessError` property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "access_error".
///
- (BOOL)isAccessError;

///
/// Retrieves whether the union's current tag state has value "email_unverified".
///
/// @return Whether the union's current tag state has value "email_unverified".
///
- (BOOL)isEmailUnverified;

///
/// Retrieves whether the union's current tag state has value "bad_member".
///
/// @note Call this method and ensure it returns true before accessing the `badMember` property,
/// otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "bad_member".
///
- (BOOL)isBadMember;

///
/// Retrieves whether the union's current tag state has value "cant_share_outside_team".
///
/// @return Whether the union's current tag state has value "cant_share_outside_team".
///
- (BOOL)isCantShareOutsideTeam;

///
/// Retrieves whether the union's current tag state has value "too_many_members".
///
/// @note Call this method and ensure it returns true before accessing the `tooManyMembers`
/// property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "too_many_members".
///
- (BOOL)isTooManyMembers;

///
/// Retrieves whether the union's current tag state has value "too_many_pending_invites".
///
/// @note Call this method and ensure it returns true before accessing the `tooManyPendingInvites`
/// property, otherwise a runtime exception will be thrown.
///
/// @return Whether the union's current tag state has value "too_many_pending_invites".
///
- (BOOL)isTooManyPendingInvites;

///
/// Retrieves whether the union's current tag state has value "rate_limit".
///
/// @return Whether the union's current tag state has value "rate_limit".
///
- (BOOL)isRateLimit;

///
/// Retrieves whether the union's current tag state has value "too_many_invitees".
///
/// @return Whether the union's current tag state has value "too_many_invitees".
///
- (BOOL)isTooManyInvitees;

///
/// Retrieves whether the union's current tag state has value "insufficient_plan".
///
/// @return Whether the union's current tag state has value "insufficient_plan".
///
- (BOOL)isInsufficientPlan;

///
/// Retrieves whether the union's current tag state has value "team_folder".
///
/// @return Whether the union's current tag state has value "team_folder".
///
- (BOOL)isTeamFolder;

///
/// Retrieves whether the union's current tag state has value "no_permission".
///
/// @return Whether the union's current tag state has value "no_permission".
///
- (BOOL)isNoPermission;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBSHARINGAddFolderMemberError` union.
///
@interface DBSHARINGAddFolderMemberErrorSerializer : NSObject

///
/// Serializes `DBSHARINGAddFolderMemberError` instances.
///
/// @param instance An instance of the `DBSHARINGAddFolderMemberError` API object.
///
/// @return A json-compatible dictionary representation of the `DBSHARINGAddFolderMemberError` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGAddFolderMemberError * _Nonnull)instance;

///
/// Deserializes `DBSHARINGAddFolderMemberError` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBSHARINGAddFolderMemberError`
/// API object.
///
/// @return An instantiation of the `DBSHARINGAddFolderMemberError` object.
///
+ (DBSHARINGAddFolderMemberError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
