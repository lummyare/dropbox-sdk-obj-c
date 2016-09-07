///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

#pragma mark - API Object

///
/// The `GroupDeleteError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMGroupDeleteError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBTEAMGroupDeleteErrorTag` enum type represents the possible tag states with which the
/// `DBTEAMGroupDeleteError` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMGroupDeleteErrorTag) {
  /// No matching group found. No groups match the specified group ID.
  DBTEAMGroupDeleteErrorGroupNotFound,

  /// (no description).
  DBTEAMGroupDeleteErrorOther,

  /// This group has already been deleted.
  DBTEAMGroupDeleteErrorGroupAlreadyDeleted,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMGroupDeleteErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "group_not_found".
///
/// Description of the "group_not_found" tag state: No matching group found. No groups match the
/// specified group ID.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithGroupNotFound;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

///
/// Initializes union class with tag state of "group_already_deleted".
///
/// Description of the "group_already_deleted" tag state: This group has already been deleted.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithGroupAlreadyDeleted;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "group_not_found".
///
/// @return Whether the union's current tag state has value "group_not_found".
///
- (BOOL)isGroupNotFound;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves whether the union's current tag state has value "group_already_deleted".
///
/// @return Whether the union's current tag state has value "group_already_deleted".
///
- (BOOL)isGroupAlreadyDeleted;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMGroupDeleteError` union.
///
@interface DBTEAMGroupDeleteErrorSerializer : NSObject

///
/// Serializes `DBTEAMGroupDeleteError` instances.
///
/// @param instance An instance of the `DBTEAMGroupDeleteError` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMGroupDeleteError` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMGroupDeleteError * _Nonnull)instance;

///
/// Deserializes `DBTEAMGroupDeleteError` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBTEAMGroupDeleteError` API
/// object.
///
/// @return An instantiation of the `DBTEAMGroupDeleteError` object.
///
+ (DBTEAMGroupDeleteError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
