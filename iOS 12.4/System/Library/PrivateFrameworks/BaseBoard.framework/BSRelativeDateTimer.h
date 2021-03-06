/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSPowerMonitorObserver.h>

@protocol BSRelativeDateTimerDelegate;
@class NSCalendar, NSTimer, NSDate, NSString;

@interface BSRelativeDateTimer : NSObject <BSPowerMonitorObserver> {

	NSCalendar* _gregorian;
	NSTimer* _timer;
	NSDate* _date;
	id<BSRelativeDateTimerDelegate> _delegate;
	unsigned long long _currResolution;
	long long _currValue;

}

@property (assign,nonatomic,__weak) id<BSRelativeDateTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)addTimerToMainRunLoop:(id)arg1 ;
+(void)invalidateTimer:(id)arg1 ;
+(void)initialize;
-(void)powerMonitorSystemDidWakeFromSleep:(id)arg1 ;
-(void)_fireForLocaleEvent:(id)arg1 ;
-(void)fireAndSchedule;
-(void)_fireForEvent;
-(void)_fireAndUpdateTimerIfNecessary;
-(id)_timeDifferenceFromDate:(id)arg1 ;
-(double)_nextFireInterval:(id)arg1 resolution:(unsigned long long)arg2 comparedToNow:(long long)arg3 ;
-(void)_invalidateTimer;
-(double)nextFireInterval;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<BSRelativeDateTimerDelegate>)arg1 ;
-(id<BSRelativeDateTimerDelegate>)delegate;
-(id)date;
-(void)invalidate;
-(void)setDate:(id)arg1 ;
@end

