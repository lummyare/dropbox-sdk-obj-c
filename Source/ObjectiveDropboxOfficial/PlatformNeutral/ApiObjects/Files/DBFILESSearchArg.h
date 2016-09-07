///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

@class DBFILESSearchMode;

#pragma mark - API Object

///
/// The `SearchArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBFILESSearchArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The path in the user's Dropbox to search. Should probably be a folder.
@property(nonatomic, readonly, copy) NSString * _Nonnull path;

/// The string to search for. The search string is split on spaces into multiple tokens. For file
/// name searching, the last token is used for prefix matching (i.e. "bat c" matches "bat cave" but
/// not "batman car").
@property(nonatomic, readonly, copy) NSString * _Nonnull query;

/// The starting index within the search results (used for paging).
@property(nonatomic, readonly) NSNumber * _Nonnull start;

/// The maximum number of search results to return.
@property(nonatomic, readonly) NSNumber * _Nonnull maxResults;

/// The search mode (filename, filename_and_content, or deleted_filename). Note that searching file
/// content is only available for Dropbox Business accounts.
@property(nonatomic, readonly) DBFILESSearchMode * _Nonnull mode;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param path The path in the user's Dropbox to search. Should probably be a folder.
/// @param query The string to search for. The search string is split on spaces into multiple
/// tokens. For file name searching, the last token is used for prefix matching (i.e. "bat c"
/// matches "bat cave" but not "batman car").
/// @param start The starting index within the search results (used for paging).
/// @param maxResults The maximum number of search results to return.
/// @param mode The search mode (filename, filename_and_content, or deleted_filename). Note that
/// searching file content is only available for Dropbox Business accounts.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path
                               query:(NSString * _Nonnull)query
                               start:(NSNumber * _Nullable)start
                          maxResults:(NSNumber * _Nullable)maxResults
                                mode:(DBFILESSearchMode * _Nullable)mode;

///
/// Convenience constructor (exposes only non-nullable instance variables with no default value).
///
/// @param path The path in the user's Dropbox to search. Should probably be a folder.
/// @param query The string to search for. The search string is split on spaces into multiple
/// tokens. For file name searching, the last token is used for prefix matching (i.e. "bat c"
/// matches "bat cave" but not "batman car").
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithPath:(NSString * _Nonnull)path query:(NSString * _Nonnull)query;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `SearchArg` struct.
///
@interface DBFILESSearchArgSerializer : NSObject

///
/// Serializes `DBFILESSearchArg` instances.
///
/// @param instance An instance of the `DBFILESSearchArg` API object.
///
/// @return A json-compatible dictionary representation of the `DBFILESSearchArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBFILESSearchArg * _Nonnull)instance;

///
/// Deserializes `DBFILESSearchArg` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBFILESSearchArg` API object.
///
/// @return An instantiation of the `DBFILESSearchArg` object.
///
+ (DBFILESSearchArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
