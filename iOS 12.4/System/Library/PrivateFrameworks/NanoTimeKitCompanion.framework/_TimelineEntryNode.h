/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/_TimelineNode.h>

@protocol CLKTimelineEntry;
@class NSDate;

@interface _TimelineEntryNode : _TimelineNode {

	id<CLKTimelineEntry> _entry;

}

@property (nonatomic,retain) id<CLKTimelineEntry> entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) NSDate * date; 
-(NSDate *)date;
-(id<CLKTimelineEntry>)entry;
-(void)setEntry:(id<CLKTimelineEntry>)arg1 ;
@end

