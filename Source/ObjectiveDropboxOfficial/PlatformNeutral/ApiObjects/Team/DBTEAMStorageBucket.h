///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

#pragma mark - API Object

///
/// The `StorageBucket` struct.
///
/// Describes the number of users in a specific storage bucket.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMStorageBucket : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The name of the storage bucket. For example, '1G' is a bucket of users with storage size up to 1
/// Giga.
@property(nonatomic, readonly, copy) NSString * _Nonnull bucket;

/// The number of people whose storage is in the range of this storage bucket.
@property(nonatomic, readonly) NSNumber * _Nonnull users;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param bucket The name of the storage bucket. For example, '1G' is a bucket of users with
/// storage size up to 1 Giga.
/// @param users The number of people whose storage is in the range of this storage bucket.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithBucket:(NSString * _Nonnull)bucket users:(NSNumber * _Nonnull)users;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `StorageBucket` struct.
///
@interface DBTEAMStorageBucketSerializer : NSObject

///
/// Serializes `DBTEAMStorageBucket` instances.
///
/// @param instance An instance of the `DBTEAMStorageBucket` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMStorageBucket` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMStorageBucket * _Nonnull)instance;

///
/// Deserializes `DBTEAMStorageBucket` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBTEAMStorageBucket` API object.
///
/// @return An instantiation of the `DBTEAMStorageBucket` object.
///
+ (DBTEAMStorageBucket * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
