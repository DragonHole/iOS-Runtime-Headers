/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSData, NSDate, NSSet, FCFeedRange;

@interface FCFDBFeedSegment : NSManagedObject

@property (assign,nonatomic) unsigned long long top; 
@property (assign,nonatomic) unsigned long long bottom; 
@property (nonatomic,retain) NSNumber * feedItemCount; 
@property (nonatomic,retain) NSData * ckCursor; 
@property (nonatomic,retain) NSDate * lastAccessDate; 
@property (nonatomic,retain) NSSet * feedItemIndexes; 
@property (nonatomic,readonly) FCFeedRange * feedRange; 
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(FCFeedRange *)feedRange;
-(id)description;
@end

