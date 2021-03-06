/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _HKExpiringCompletionTimer, NSObject;

@interface _HDFTMProducerMetricTracker : NSObject {

	_HKExpiringCompletionTimer* _timer;
	/*^block*/id _timeoutHandler;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _paused;
	BOOL _metricAvailable;

}

@property (nonatomic,readonly) BOOL metricAvailable;              //@synthesize metricAvailable=_metricAvailable - In the implementation block
-(void)invalidate;
-(void)pause;
-(void)resume;
-(void)_startTimer;
-(id)initWithTimeoutHandler:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)metricReceived;
-(BOOL)metricAvailable;
@end

