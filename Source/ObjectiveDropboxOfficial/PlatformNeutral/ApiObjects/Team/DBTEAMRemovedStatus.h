///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

#pragma mark - API Object

///
/// The `RemovedStatus` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMRemovedStatus : NSObject <DBSerializable>

#pragma mark - Instance fields

/// True if the removed team member is recoverable
@property(nonatomic, readonly) NSNumber * _Nonnull isRecoverable;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param isRecoverable True if the removed team member is recoverable
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithIsRecoverable:(NSNumber * _Nonnull)isRecoverable;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RemovedStatus` struct.
///
@interface DBTEAMRemovedStatusSerializer : NSObject

///
/// Serializes `DBTEAMRemovedStatus` instances.
///
/// @param instance An instance of the `DBTEAMRemovedStatus` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMRemovedStatus` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMRemovedStatus * _Nonnull)instance;

///
/// Deserializes `DBTEAMRemovedStatus` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBTEAMRemovedStatus` API object.
///
/// @return An instantiation of the `DBTEAMRemovedStatus` object.
///
+ (DBTEAMRemovedStatus * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
