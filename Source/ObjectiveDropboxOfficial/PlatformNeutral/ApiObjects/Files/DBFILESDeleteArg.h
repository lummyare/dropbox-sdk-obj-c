///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

#pragma mark - API Object

///
/// The `DeleteArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBFILESDeleteArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// Path in the user's Dropbox to delete.
@property(nonatomic, readonly, copy) NSString * _Nonnull path;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path Path in the user's Dropbox to delete.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DeleteArg` struct.
///
@interface DBFILESDeleteArgSerializer : NSObject

///
/// Serializes `DBFILESDeleteArg` instances.
///
/// @param instance An instance of the `DBFILESDeleteArg` API object.
///
/// @return A json-compatible dictionary representation of the `DBFILESDeleteArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESDeleteArg * _Nonnull)instance;

///
/// Deserializes `DBFILESDeleteArg` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBFILESDeleteArg` API object.
///
/// @return An instantiation of the `DBFILESDeleteArg` object.
///
+ (DBFILESDeleteArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
