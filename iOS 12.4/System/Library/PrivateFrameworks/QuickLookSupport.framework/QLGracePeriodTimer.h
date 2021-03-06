/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface QLGracePeriodTimer : NSObject {

	/*^block*/id _action;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	double _delay;
	NSObject*<OS_dispatch_source> _timer;

}
-(void)_suppress;
-(void)_createTimer;
-(id)initWithAction:(/*^block*/id)arg1 callbackQueue:(id)arg2 delay:(double)arg3 ;
-(void)suppress;
-(void)arm;
@end

