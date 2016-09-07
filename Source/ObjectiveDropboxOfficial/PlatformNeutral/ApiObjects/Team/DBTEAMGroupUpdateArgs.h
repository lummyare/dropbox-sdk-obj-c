///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;
#import "DBTEAMIncludeMembersArg.h"

@class DBTEAMCOMMONGroupManagementType;
@class DBTEAMGroupSelector;

#pragma mark - API Object

///
/// The `GroupUpdateArgs` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMGroupUpdateArgs : DBTEAMIncludeMembersArg <DBSerializable>

#pragma mark - Instance fields

/// Specify a group.
@property(nonatomic, readonly) DBTEAMGroupSelector * _Nonnull group;

/// Optional argument. Set group name to this if provided.
@property(nonatomic, readonly) NSString * _Nullable dNewGroupName;

/// Optional argument. New group external ID. If the argument is None, the group's external_id won't
/// be updated. If the argument is empty string, the group's external id will be cleared.
@property(nonatomic, readonly) NSString * _Nullable dNewGroupExternalId;

/// Set new group management type, if provided.
@property(nonatomic, readonly) DBTEAMCOMMONGroupManagementType * _Nullable dNewGroupManagementType;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param group Specify a group.
/// @param returnMembers Whether to return the list of members in the group.  Note that the default
/// value will cause all the group members  to be returned in the response. This may take a long
/// time for large groups.
/// @param dNewGroupName Optional argument. Set group name to this if provided.
/// @param dNewGroupExternalId Optional argument. New group external ID. If the argument is None,
/// the group's external_id won't be updated. If the argument is empty string, the group's external
/// id will be cleared.
/// @param dNewGroupManagementType Set new group management type, if provided.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithGroup:(DBTEAMGroupSelector * _Nonnull)group
                        returnMembers:(NSNumber * _Nullable)returnMembers
                        dNewGroupName:(NSString * _Nullable)dNewGroupName
                  dNewGroupExternalId:(NSString * _Nullable)dNewGroupExternalId
              dNewGroupManagementType:(DBTEAMCOMMONGroupManagementType * _Nullable)dNewGroupManagementType;

///
/// Convenience constructor (exposes only non-nullable instance variables with no default value).
///
/// @param group Specify a group.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithGroup:(DBTEAMGroupSelector * _Nonnull)group;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupUpdateArgs` struct.
///
@interface DBTEAMGroupUpdateArgsSerializer : NSObject

///
/// Serializes `DBTEAMGroupUpdateArgs` instances.
///
/// @param instance An instance of the `DBTEAMGroupUpdateArgs` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMGroupUpdateArgs` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMGroupUpdateArgs * _Nonnull)instance;

///
/// Deserializes `DBTEAMGroupUpdateArgs` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBTEAMGroupUpdateArgs` API
/// object.
///
/// @return An instantiation of the `DBTEAMGroupUpdateArgs` object.
///
+ (DBTEAMGroupUpdateArgs * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
