///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

#pragma mark - API Object

///
/// The `PollEmptyResult` union.
///
/// Result returned by methods that poll for the status of an asynchronous job. Upon completion of
/// the job, no additional information is returned.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBASYNCPollEmptyResult : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBASYNCPollEmptyResultTag` enum type represents the possible tag states with which the
/// `DBASYNCPollEmptyResult` union can exist.
typedef NS_ENUM(NSInteger, DBASYNCPollEmptyResultTag) {
  /// The asynchronous job is still in progress.
  DBASYNCPollEmptyResultInProgress,

  /// The asynchronous job has completed successfully.
  DBASYNCPollEmptyResultComplete,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBASYNCPollEmptyResultTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "in_progress".
///
/// Description of the "in_progress" tag state: The asynchronous job is still in progress.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithInProgress;

///
/// Initializes union class with tag state of "complete".
///
/// Description of the "complete" tag state: The asynchronous job has completed successfully.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithComplete;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "in_progress".
///
/// @return Whether the union's current tag state has value "in_progress".
///
- (BOOL)isInProgress;

///
/// Retrieves whether the union's current tag state has value "complete".
///
/// @return Whether the union's current tag state has value "complete".
///
- (BOOL)isComplete;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBASYNCPollEmptyResult` union.
///
@interface DBASYNCPollEmptyResultSerializer : NSObject

///
/// Serializes `DBASYNCPollEmptyResult` instances.
///
/// @param instance An instance of the `DBASYNCPollEmptyResult` API object.
///
/// @return A json-compatible dictionary representation of the `DBASYNCPollEmptyResult` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBASYNCPollEmptyResult * _Nonnull)instance;

///
/// Deserializes `DBASYNCPollEmptyResult` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBASYNCPollEmptyResult` API
/// object.
///
/// @return An instantiation of the `DBASYNCPollEmptyResult` object.
///
+ (DBASYNCPollEmptyResult * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
