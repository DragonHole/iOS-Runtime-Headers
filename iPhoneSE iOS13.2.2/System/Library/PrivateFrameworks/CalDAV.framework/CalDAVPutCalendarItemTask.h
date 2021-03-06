/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVPutTask.h>

@class NSString;

@interface CalDAVPutCalendarItemTask : CoreDAVPutTask {

	NSString* _previousScheduleTag;

}

@property (assign,nonatomic) id<CalDAVPutCalendarItemTaskDelegate> delegate; 
@property (nonatomic,retain) NSString * previousScheduleTag;                              //@synthesize previousScheduleTag=_previousScheduleTag - In the implementation block
-(id)description;
-(id)additionalHeaderValues;
-(void)setPreviousScheduleTag:(NSString *)arg1 ;
-(NSString *)previousScheduleTag;
@end

