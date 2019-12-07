/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString;

@interface CLSContactCacheEntry : NSManagedObject

@property (assign,nonatomic) NSString * contactIdentifier; 
@property (assign,nonatomic) BOOL hasPicture; 
@property (assign,nonatomic) NSString * classifiedPersonLocalIdentifierWithFaceModelID; 
@property (assign,nonatomic) double updateTimestamp; 
+(id)entityName;
-(id)cachedContact;
@end
