/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet;

@interface CLSEICategory : NSManagedObject

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSSet * subCategories; 
@property (nonatomic,retain) CLSEICategory * parentCategory; 
@property (nonatomic,retain) NSSet * events; 
@end
