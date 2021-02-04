/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
@class CADisplayLink, NSMutableDictionary, NSCalendar;

@interface SBUIPreciseClockTimer : NSObject {

	CADisplayLink* _displayLink;
	NSMutableDictionary* _minuteUpdateHandlers;
	unsigned long long _nextToken;
	NSCalendar* _calendar;
	long long _lastHour;
	long long _lastMinute;

}
+(id)now;
+(id)sharedInstance;
-(void)_updateDisplayLink;
-(void)_handleTimePassed;
-(void)_updateDisplayLinkFrameIntervalForSecondsPastMinute:(double)arg1 ;
-(NSNumber*)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_onDisplayLink:(id)arg1 ;
-(void)stopMinuteUpdatesForToken:(NSNumber*)arg1 ;
-(id)init;
-(void)dealloc;
@end
