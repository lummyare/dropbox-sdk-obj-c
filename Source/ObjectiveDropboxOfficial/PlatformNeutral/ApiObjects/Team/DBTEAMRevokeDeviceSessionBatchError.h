///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

#pragma mark - API Object

///
/// The `RevokeDeviceSessionBatchError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMRevokeDeviceSessionBatchError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBTEAMRevokeDeviceSessionBatchErrorTag` enum type represents the possible tag states with
/// which the `DBTEAMRevokeDeviceSessionBatchError` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMRevokeDeviceSessionBatchErrorTag) {
  /// (no description).
  DBTEAMRevokeDeviceSessionBatchErrorOther,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMRevokeDeviceSessionBatchErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

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
/// The serialization class for the `DBTEAMRevokeDeviceSessionBatchError` union.
///
@interface DBTEAMRevokeDeviceSessionBatchErrorSerializer : NSObject

///
/// Serializes `DBTEAMRevokeDeviceSessionBatchError` instances.
///
/// @param instance An instance of the `DBTEAMRevokeDeviceSessionBatchError` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMRevokeDeviceSessionBatchError`
/// API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMRevokeDeviceSessionBatchError * _Nonnull)instance;

///
/// Deserializes `DBTEAMRevokeDeviceSessionBatchError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMRevokeDeviceSessionBatchError` API object.
///
/// @return An instantiation of the `DBTEAMRevokeDeviceSessionBatchError` object.
///
+ (DBTEAMRevokeDeviceSessionBatchError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
