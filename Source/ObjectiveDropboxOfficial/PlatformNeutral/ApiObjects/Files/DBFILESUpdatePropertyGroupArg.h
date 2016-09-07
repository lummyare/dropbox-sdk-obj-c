///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

@class DBFILESPropertyGroupUpdate;

#pragma mark - API Object

///
/// The `UpdatePropertyGroupArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBFILESUpdatePropertyGroupArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// A unique identifier for the file.
@property(nonatomic, readonly, copy) NSString * _Nonnull path;

/// Filled custom property templates associated with a file.
@property(nonatomic, readonly) NSArray<DBFILESPropertyGroupUpdate *> * _Nonnull updatePropertyGroups;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path A unique identifier for the file.
/// @param updatePropertyGroups Filled custom property templates associated with a file.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path
                updatePropertyGroups:(NSArray<DBFILESPropertyGroupUpdate *> * _Nonnull)updatePropertyGroups;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `UpdatePropertyGroupArg` struct.
///
@interface DBFILESUpdatePropertyGroupArgSerializer : NSObject

///
/// Serializes `DBFILESUpdatePropertyGroupArg` instances.
///
/// @param instance An instance of the `DBFILESUpdatePropertyGroupArg` API object.
///
/// @return A json-compatible dictionary representation of the `DBFILESUpdatePropertyGroupArg` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESUpdatePropertyGroupArg * _Nonnull)instance;

///
/// Deserializes `DBFILESUpdatePropertyGroupArg` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBFILESUpdatePropertyGroupArg`
/// API object.
///
/// @return An instantiation of the `DBFILESUpdatePropertyGroupArg` object.
///
+ (DBFILESUpdatePropertyGroupArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
