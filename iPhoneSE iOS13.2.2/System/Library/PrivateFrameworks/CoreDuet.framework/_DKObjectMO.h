/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSNumber, _DKEventMO, NSSet, _DKSourceMO;

@interface _DKObjectMO : NSManagedObject

@property (nonatomic,copy) NSDate * creationDate; 
@property (nonatomic,copy) NSDate * localCreationDate; 
@property (nonatomic,copy) NSString * uuid; 
@property (nonatomic,copy) NSNumber * uuidHash; 
@property (nonatomic,retain) _DKEventMO * event; 
@property (nonatomic,retain) NSSet * relationObject; 
@property (nonatomic,retain) NSSet * relationSubject; 
@property (nonatomic,retain) _DKSourceMO * source; 
+(id)fetchRequest;
@end

