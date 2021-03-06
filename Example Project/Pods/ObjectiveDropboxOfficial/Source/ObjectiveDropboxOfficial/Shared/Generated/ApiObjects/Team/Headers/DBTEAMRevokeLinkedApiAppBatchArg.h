///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBTEAMRevokeLinkedApiAppArg;
@class DBTEAMRevokeLinkedApiAppBatchArg;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - API Object

///
/// The `RevokeLinkedApiAppBatchArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMRevokeLinkedApiAppBatchArg : NSObject <DBSerializable, NSCopying>

#pragma mark - Instance fields

/// (no description).
@property (nonatomic, readonly) NSArray<DBTEAMRevokeLinkedApiAppArg *> *revokeLinkedApp;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param revokeLinkedApp (no description).
///
/// @return An initialized instance.
///
- (instancetype)initWithRevokeLinkedApp:(NSArray<DBTEAMRevokeLinkedApiAppArg *> *)revokeLinkedApp;

- (instancetype)init NS_UNAVAILABLE;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `RevokeLinkedApiAppBatchArg` struct.
///
@interface DBTEAMRevokeLinkedApiAppBatchArgSerializer : NSObject

///
/// Serializes `DBTEAMRevokeLinkedApiAppBatchArg` instances.
///
/// @param instance An instance of the `DBTEAMRevokeLinkedApiAppBatchArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMRevokeLinkedApiAppBatchArg` API object.
///
+ (NSDictionary *)serialize:(DBTEAMRevokeLinkedApiAppBatchArg *)instance;

///
/// Deserializes `DBTEAMRevokeLinkedApiAppBatchArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMRevokeLinkedApiAppBatchArg` API object.
///
/// @return An instantiation of the `DBTEAMRevokeLinkedApiAppBatchArg` object.
///
+ (DBTEAMRevokeLinkedApiAppBatchArg *)deserialize:(NSDictionary *)dict;

@end

NS_ASSUME_NONNULL_END
