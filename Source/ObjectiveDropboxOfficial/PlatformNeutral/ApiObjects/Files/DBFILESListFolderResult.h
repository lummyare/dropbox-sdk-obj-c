///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

@class DBFILESMetadata;

#pragma mark - API Object

///
/// The `ListFolderResult` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBFILESListFolderResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The files and (direct) subfolders in the folder.
@property(nonatomic, readonly) NSArray<DBFILESMetadata *> * _Nonnull entries;

/// Pass the cursor into `listFolderContinue` to see what's changed in the folder since your
/// previous query.
@property(nonatomic, readonly, copy) NSString * _Nonnull cursor;

/// If true, then there are more entries available. Pass the cursor to `listFolderContinue` to
/// retrieve the rest.
@property(nonatomic, readonly) NSNumber * _Nonnull hasMore;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param entries The files and (direct) subfolders in the folder.
/// @param cursor Pass the cursor into `listFolderContinue` to see what's changed in the folder
/// since your previous query.
/// @param hasMore If true, then there are more entries available. Pass the cursor to
/// `listFolderContinue` to retrieve the rest.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithEntries:(NSArray<DBFILESMetadata *> * _Nonnull)entries
                                 cursor:(NSString * _Nonnull)cursor
                                hasMore:(NSNumber * _Nonnull)hasMore;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `ListFolderResult` struct.
///
@interface DBFILESListFolderResultSerializer : NSObject

///
/// Serializes `DBFILESListFolderResult` instances.
///
/// @param instance An instance of the `DBFILESListFolderResult` API object.
///
/// @return A json-compatible dictionary representation of the `DBFILESListFolderResult` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESListFolderResult * _Nonnull)instance;

///
/// Deserializes `DBFILESListFolderResult` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBFILESListFolderResult` API
/// object.
///
/// @return An instantiation of the `DBFILESListFolderResult` object.
///
+ (DBFILESListFolderResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
