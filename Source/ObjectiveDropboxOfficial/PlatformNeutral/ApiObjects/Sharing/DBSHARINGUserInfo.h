///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

#pragma mark - API Object

///
/// The `UserInfo` struct.
///
/// Basic information about a user. Use `usersAccount` and `usersAccountBatch` to obtain more
/// detailed information.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGUserInfo : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The account ID of the user.
@property(nonatomic, readonly, copy) NSString * _Nonnull accountId;

/// If the user is in the same team as current user.
@property(nonatomic, readonly) NSNumber * _Nonnull sameTeam;

/// The team member ID of the shared folder member. Only present if sameTeam is true.
@property(nonatomic, readonly) NSString * _Nullable teamMemberId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param accountId The account ID of the user.
/// @param sameTeam If the user is in the same team as current user.
/// @param teamMemberId The team member ID of the shared folder member. Only present if sameTeam is
/// true.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAccountId:(NSString * _Nonnull)accountId
                                 sameTeam:(NSNumber * _Nonnull)sameTeam
                             teamMemberId:(NSString * _Nullable)teamMemberId;

///
/// Convenience constructor (exposes only non-nullable instance variables with no default value).
///
/// @param accountId The account ID of the user.
/// @param sameTeam If the user is in the same team as current user.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithAccountId:(NSString * _Nonnull)accountId sameTeam:(NSNumber * _Nonnull)sameTeam;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `UserInfo` struct.
///
@interface DBSHARINGUserInfoSerializer : NSObject

///
/// Serializes `DBSHARINGUserInfo` instances.
///
/// @param instance An instance of the `DBSHARINGUserInfo` API object.
///
/// @return A json-compatible dictionary representation of the `DBSHARINGUserInfo` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGUserInfo * _Nonnull)instance;

///
/// Deserializes `DBSHARINGUserInfo` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBSHARINGUserInfo` API object.
///
/// @return An instantiation of the `DBSHARINGUserInfo` object.
///
+ (DBSHARINGUserInfo * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
