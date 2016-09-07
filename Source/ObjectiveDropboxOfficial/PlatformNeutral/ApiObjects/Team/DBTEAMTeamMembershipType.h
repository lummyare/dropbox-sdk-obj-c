///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

#pragma mark - API Object

///
/// The `TeamMembershipType` union.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMTeamMembershipType : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBTEAMTeamMembershipTypeTag` enum type represents the possible tag states with which the
/// `DBTEAMTeamMembershipType` union can exist.
typedef NS_ENUM(NSInteger, DBTEAMTeamMembershipTypeTag) {
  /// User uses a license and has full access to team resources like the shared quota.
  DBTEAMTeamMembershipTypeFull,

  /// User does not have access to the shared quota and team admins have restricted administrative
  /// control.
  DBTEAMTeamMembershipTypeLimited,

};

/// Represents the union's current tag state.
@property(nonatomic, readonly) DBTEAMTeamMembershipTypeTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "full".
///
/// Description of the "full" tag state: User uses a license and has full access to team resources
/// like the shared quota.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithFull;

///
/// Initializes union class with tag state of "limited".
///
/// Description of the "limited" tag state: User does not have access to the shared quota and team
/// admins have restricted administrative control.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithLimited;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "full".
///
/// @return Whether the union's current tag state has value "full".
///
- (BOOL)isFull;

///
/// Retrieves whether the union's current tag state has value "limited".
///
/// @return Whether the union's current tag state has value "limited".
///
- (BOOL)isLimited;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBTEAMTeamMembershipType` union.
///
@interface DBTEAMTeamMembershipTypeSerializer : NSObject

///
/// Serializes `DBTEAMTeamMembershipType` instances.
///
/// @param instance An instance of the `DBTEAMTeamMembershipType` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMTeamMembershipType` API
/// object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMTeamMembershipType * _Nonnull)instance;

///
/// Deserializes `DBTEAMTeamMembershipType` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBTEAMTeamMembershipType` API
/// object.
///
/// @return An instantiation of the `DBTEAMTeamMembershipType` object.
///
+ (DBTEAMTeamMembershipType * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
