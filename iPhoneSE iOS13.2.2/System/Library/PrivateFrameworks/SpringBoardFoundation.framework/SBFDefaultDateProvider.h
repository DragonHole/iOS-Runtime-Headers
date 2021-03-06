/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBFDateProviding.h>

@class NSMutableDictionary, NSTimer, NSCalendar, NSString;

@interface SBFDefaultDateProvider : NSObject <SBFDateProviding> {

	NSMutableDictionary* _minuteHandlers;
	unsigned long long _nextToken;
	NSTimer* _minuteTimer;
	NSCalendar* _calendar;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)date;
-(void)_updateMinuteTimer;
-(void)_scheduleNextMinuteTimer;
-(void)_minuteTimerFired;
-(id)observeMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)removeMinuteUpdateHandler:(id)arg1 ;
@end

