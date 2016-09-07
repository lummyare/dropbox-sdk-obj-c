///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

#pragma mark - API Object

///
/// The `MembersRemoveError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMMembersRemoveError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBTEAMMembersRemoveErrorTag` enum type represents the possible tag states with which the
/// `DBTEAMMembersRemoveError` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMMembersRemoveErrorTag) {
  /// No matching user found. The provided team_member_id, email, or external_id does not exist on
  /// this team.
  DBTEAMMembersRemoveErrorUserNotFound,

  /// The user is not a member of the team.
  DBTEAMMembersRemoveErrorUserNotInTeam,

  /// (no description).
  DBTEAMMembersRemoveErrorOther,

  /// The user is the last admin of the team, so it cannot be removed from it.
  DBTEAMMembersRemoveErrorRemoveLastAdmin,

  /// Expected removed user and transfer_dest user to be different
  DBTEAMMembersRemoveErrorRemovedAndTransferDestShouldDiffer,

  /// Expected removed user and transfer_admin user to be different.
  DBTEAMMembersRemoveErrorRemovedAndTransferAdminShouldDiffer,

  /// No matching user found for the argument transfer_dest_id.
  DBTEAMMembersRemoveErrorTransferDestUserNotFound,

  /// The provided transfer_dest_id does not exist on this team.
  DBTEAMMembersRemoveErrorTransferDestUserNotInTeam,

  /// No matching user found for the argument transfer_admin_id.
  DBTEAMMembersRemoveErrorTransferAdminUserNotFound,

  /// The provided transfer_admin_id does not exist on this team.
  DBTEAMMembersRemoveErrorTransferAdminUserNotInTeam,

  /// The transfer_admin_id argument must be provided when file transfer is requested.
  DBTEAMMembersRemoveErrorUnspecifiedTransferAdminId,

  /// Specified transfer_admin user is not a team admin.
  DBTEAMMembersRemoveErrorTransferAdminIsNotAdmin,

  /// Cannot keep account and transfer the data to another user at the same time.
  DBTEAMMembersRemoveErrorCannotKeepAccountAndTransfer,

  /// Cannot keep account and delete the data at the same time.
  DBTEAMMembersRemoveErrorCannotKeepAccountAndDeleteData,

  /// The email address of the user is too long to be disabled.
  DBTEAMMembersRemoveErrorEmailAddressTooLongToBeDisabled,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMMembersRemoveErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "user_not_found".
///
/// Description of the "user_not_found" tag state: No matching user found. The provided
/// team_member_id, email, or external_id does not exist on this team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUserNotFound;

///
/// Initializes union class with tag state of "user_not_in_team".
///
/// Description of the "user_not_in_team" tag state: The user is not a member of the team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUserNotInTeam;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

///
/// Initializes union class with tag state of "remove_last_admin".
///
/// Description of the "remove_last_admin" tag state: The user is the last admin of the team, so it
/// cannot be removed from it.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithRemoveLastAdmin;

///
/// Initializes union class with tag state of "removed_and_transfer_dest_should_differ".
///
/// Description of the "removed_and_transfer_dest_should_differ" tag state: Expected removed user
/// and transfer_dest user to be different
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithRemovedAndTransferDestShouldDiffer;

///
/// Initializes union class with tag state of "removed_and_transfer_admin_should_differ".
///
/// Description of the "removed_and_transfer_admin_should_differ" tag state: Expected removed user
/// and transfer_admin user to be different.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithRemovedAndTransferAdminShouldDiffer;

///
/// Initializes union class with tag state of "transfer_dest_user_not_found".
///
/// Description of the "transfer_dest_user_not_found" tag state: No matching user found for the
/// argument transfer_dest_id.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTransferDestUserNotFound;

///
/// Initializes union class with tag state of "transfer_dest_user_not_in_team".
///
/// Description of the "transfer_dest_user_not_in_team" tag state: The provided transfer_dest_id
/// does not exist on this team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTransferDestUserNotInTeam;

///
/// Initializes union class with tag state of "transfer_admin_user_not_found".
///
/// Description of the "transfer_admin_user_not_found" tag state: No matching user found for the
/// argument transfer_admin_id.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTransferAdminUserNotFound;

///
/// Initializes union class with tag state of "transfer_admin_user_not_in_team".
///
/// Description of the "transfer_admin_user_not_in_team" tag state: The provided transfer_admin_id
/// does not exist on this team.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTransferAdminUserNotInTeam;

///
/// Initializes union class with tag state of "unspecified_transfer_admin_id".
///
/// Description of the "unspecified_transfer_admin_id" tag state: The transfer_admin_id argument
/// must be provided when file transfer is requested.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUnspecifiedTransferAdminId;

///
/// Initializes union class with tag state of "transfer_admin_is_not_admin".
///
/// Description of the "transfer_admin_is_not_admin" tag state: Specified transfer_admin user is not
/// a team admin.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTransferAdminIsNotAdmin;

///
/// Initializes union class with tag state of "cannot_keep_account_and_transfer".
///
/// Description of the "cannot_keep_account_and_transfer" tag state: Cannot keep account and
/// transfer the data to another user at the same time.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithCannotKeepAccountAndTransfer;

///
/// Initializes union class with tag state of "cannot_keep_account_and_delete_data".
///
/// Description of the "cannot_keep_account_and_delete_data" tag state: Cannot keep account and
/// delete the data at the same time.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithCannotKeepAccountAndDeleteData;

///
/// Initializes union class with tag state of "email_address_too_long_to_be_disabled".
///
/// Description of the "email_address_too_long_to_be_disabled" tag state: The email address of the
/// user is too long to be disabled.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithEmailAddressTooLongToBeDisabled;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "user_not_found".
///
/// @return Whether the union's current tag state has value "user_not_found".
///
- (BOOL)isUserNotFound;

///
/// Retrieves whether the union's current tag state has value "user_not_in_team".
///
/// @return Whether the union's current tag state has value "user_not_in_team".
///
- (BOOL)isUserNotInTeam;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value "remove_last_admin".
///
/// @return Whether the union's current tag state has value "remove_last_admin".
///
- (BOOL)isRemoveLastAdmin;

///
/// Retrieves whether the union's current tag state has value
/// "removed_and_transfer_dest_should_differ".
///
/// @return Whether the union's current tag state has value
/// "removed_and_transfer_dest_should_differ".
///
- (BOOL)isRemovedAndTransferDestShouldDiffer;

///
/// Retrieves whether the union's current tag state has value
/// "removed_and_transfer_admin_should_differ".
///
/// @return Whether the union's current tag state has value
/// "removed_and_transfer_admin_should_differ".
///
- (BOOL)isRemovedAndTransferAdminShouldDiffer;

///
/// Retrieves whether the union's current tag state has value "transfer_dest_user_not_found".
///
/// @return Whether the union's current tag state has value "transfer_dest_user_not_found".
///
- (BOOL)isTransferDestUserNotFound;

///
/// Retrieves whether the union's current tag state has value "transfer_dest_user_not_in_team".
///
/// @return Whether the union's current tag state has value "transfer_dest_user_not_in_team".
///
- (BOOL)isTransferDestUserNotInTeam;

///
/// Retrieves whether the union's current tag state has value "transfer_admin_user_not_found".
///
/// @return Whether the union's current tag state has value "transfer_admin_user_not_found".
///
- (BOOL)isTransferAdminUserNotFound;

///
/// Retrieves whether the union's current tag state has value "transfer_admin_user_not_in_team".
///
/// @return Whether the union's current tag state has value "transfer_admin_user_not_in_team".
///
- (BOOL)isTransferAdminUserNotInTeam;

///
/// Retrieves whether the union's current tag state has value "unspecified_transfer_admin_id".
///
/// @return Whether the union's current tag state has value "unspecified_transfer_admin_id".
///
- (BOOL)isUnspecifiedTransferAdminId;

///
/// Retrieves whether the union's current tag state has value "transfer_admin_is_not_admin".
///
/// @return Whether the union's current tag state has value "transfer_admin_is_not_admin".
///
- (BOOL)isTransferAdminIsNotAdmin;

///
/// Retrieves whether the union's current tag state has value "cannot_keep_account_and_transfer".
///
/// @return Whether the union's current tag state has value "cannot_keep_account_and_transfer".
///
- (BOOL)isCannotKeepAccountAndTransfer;

///
/// Retrieves whether the union's current tag state has value "cannot_keep_account_and_delete_data".
///
/// @return Whether the union's current tag state has value "cannot_keep_account_and_delete_data".
///
- (BOOL)isCannotKeepAccountAndDeleteData;

///
/// Retrieves whether the union's current tag state has value
/// "email_address_too_long_to_be_disabled".
///
/// @return Whether the union's current tag state has value "email_address_too_long_to_be_disabled".
///
- (BOOL)isEmailAddressTooLongToBeDisabled;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMMembersRemoveError` union.
///
@interface DBTEAMMembersRemoveErrorSerializer : NSObject

///
/// Serializes `DBTEAMMembersRemoveError` instances.
///
/// @param instance An instance of the `DBTEAMMembersRemoveError` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMMembersRemoveError` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMMembersRemoveError * _Nonnull)instance;

///
/// Deserializes `DBTEAMMembersRemoveError` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBTEAMMembersRemoveError` API
/// object.
///
/// @return An instantiation of the `DBTEAMMembersRemoveError` object.
///
+ (DBTEAMMembersRemoveError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
