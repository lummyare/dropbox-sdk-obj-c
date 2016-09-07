///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
@protocol DBSerializable;

@class DBTEAMApiApp;

#pragma mark - API Object

///
/// The `MemberLinkedApps` struct.
///
/// Information on linked applications of a team member.
///
/// This class implements the `DBSerializable` protocol (serialize and deserialize instance
/// methods), which is required for all Obj-C SDK API route objects.
///
@interface DBTEAMMemberLinkedApps : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The member unique Id
@property(nonatomic, readonly, copy) NSString * _Nonnull teamMemberId;

/// List of third party applications linked by this team member
@property(nonatomic, readonly) NSArray<DBTEAMApiApp *> * _Nonnull linkedApiApps;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param teamMemberId The member unique Id
/// @param linkedApiApps List of third party applications linked by this team member
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTeamMemberId:(NSString * _Nonnull)teamMemberId
                               linkedApiApps:(NSArray<DBTEAMApiApp *> * _Nonnull)linkedApiApps;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `MemberLinkedApps` struct.
///
@interface DBTEAMMemberLinkedAppsSerializer : NSObject

///
/// Serializes `DBTEAMMemberLinkedApps` instances.
///
/// @param instance An instance of the `DBTEAMMemberLinkedApps` API object.
///
/// @return A json-compatible dictionary representation of the `DBTEAMMemberLinkedApps` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMMemberLinkedApps * _Nonnull)instance;

///
/// Deserializes `DBTEAMMemberLinkedApps` instances.
///
/// @param dict A json-compatible dictionary representation of the `DBTEAMMemberLinkedApps` API
/// object.
///
/// @return An instantiation of the `DBTEAMMemberLinkedApps` object.
///
+ (DBTEAMMemberLinkedApps * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
