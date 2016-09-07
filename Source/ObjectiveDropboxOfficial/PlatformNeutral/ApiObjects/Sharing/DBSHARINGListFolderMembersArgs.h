///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;
#import "DBSHARINGListFolderMembersCursorArg.h"

@class DBSHARINGMemberAction;

#pragma mark - API Object

///
/// The `ListFolderMembersArgs` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBSHARINGListFolderMembersArgs : DBSHARINGListFolderMembersCursorArg <DBSerializable>

#pragma mark - Instance fields

/// The ID for the shared folder.
@property(nonatomic, readonly, copy) NSString * _Nonnull sharedFolderId;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param sharedFolderId The ID for the shared folder.
/// @param actions This is a list indicating whether each returned member will include a boolean
/// value `allow` in `DBSHARINGMemberPermission` that describes whether the current user can perform
/// the MemberAction on the member.
/// @param limit The maximum number of results that include members, groups and invitees to return
/// per request.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId
                                       actions:(NSArray<DBSHARINGMemberAction *> * _Nullable)actions
                                         limit:(NSNumber * _Nullable)limit;

///
/// Convenience constructor (exposes only non-nullable instance variables with no default value).
///
/// @param sharedFolderId The ID for the shared folder.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithSharedFolderId:(NSString * _Nonnull)sharedFolderId;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFolderMembersArgs` struct.
///
@interface DBSHARINGListFolderMembersArgsSerializer : NSObject

///
/// Serializes `DBSHARINGListFolderMembersArgs` instances.
///
/// @param instance An instance of the `DBSHARINGListFolderMembersArgs` API object.
///
/// @return A json-compatible dictionary representation of the `DBSHARINGListFolderMembersArgs` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGListFolderMembersArgs * _Nonnull)instance;

///
/// Deserializes `DBSHARINGListFolderMembersArgs` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBSHARINGListFolderMembersArgs`
/// API object.
///
/// @return An instantiation of the `DBSHARINGListFolderMembersArgs` object.
///
+ (DBSHARINGListFolderMembersArgs * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
