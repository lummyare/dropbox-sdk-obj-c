///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMLOGFileUnresolveCommentDetails;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `FileUnresolveCommentDetails` struct.
///
/// Unresolved a file comment.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMLOGFileUnresolveCommentDetails : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// Comment text. Might be missing due to historical data gap.
@property (nonatomic, readonly, copy, nullable) NSString *commentText;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param commentText Comment text. Might be missing due to historical data
/// gap.
///
/// @return An initialized instance.
///
- (instancetype)initWithCommentText:(nullable NSString *)commentText;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
///
/// @return An initialized instance.
///
- (instancetype)initDefault;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `FileUnresolveCommentDetails` struct.
///
@interface DBTEAMLOGFileUnresolveCommentDetailsSerializer : NSObject

///
/// Serializes `DBTEAMLOGFileUnresolveCommentDetails` instances.
///
/// @param instance An instance of the `DBTEAMLOGFileUnresolveCommentDetails`
/// API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMLOGFileUnresolveCommentDetails` API object.
///
+ (nullable NSDictionary *)serialize:(DBTEAMLOGFileUnresolveCommentDetails *)instance;

///
/// Deserializes `DBTEAMLOGFileUnresolveCommentDetails` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMLOGFileUnresolveCommentDetails` API object.
///
/// @return An instantiation of the `DBTEAMLOGFileUnresolveCommentDetails`
/// object.
///
+ (DBTEAMLOGFileUnresolveCommentDetails *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
