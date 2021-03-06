/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:05 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSDate;

@interface RTEventModelUserInteractionMO : NSManagedObject

@property (nonatomic,copy) NSString * feedback; 
@property (nonatomic,retain) NSNumber * interaction; 
@property (nonatomic,copy) NSString * locationOfInterestIdentifier; 
@property (nonatomic,copy) NSString * receiptCalendarIdentifier; 
@property (nonatomic,copy) NSString * receiptLocation; 
@property (nonatomic,copy) NSString * receiptTitle; 
@property (nonatomic,copy) NSDate * date; 
+(id)managedObjectWithFeedback:(id)arg1 interaction:(id)arg2 locationOfInterestIdentifier:(id)arg3 receiptCalendarIdentifier:(id)arg4 receiptLocation:(id)arg5 receiptTitle:(id)arg6 date:(id)arg7 inManagedObjectContext:(id)arg8 ;
@end

