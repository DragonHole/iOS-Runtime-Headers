/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AVTEventCoalescer.h>

@protocol AVTEventCoalescer
@required
-(void)registerEventForCoalescingWithLabel:(id)arg1 handler:(/*^block*/id)arg2;
-(void)eventDidOccur;

@end


@protocol AVTUILogger, OS_dispatch_queue;
@class NSString, NSObject;

@interface AVTEventCoalescer : NSObject <AVTEventCoalescer> {

	BOOL _eventDeliveryScheduled;
	/*^block*/id _eventHandler;
	NSString* _eventLabel;
	id<AVTUILogger> _logger;
	NSObject*<OS_dispatch_queue> _workQueue;
	double _delay;

}

@property (nonatomic,copy) id eventHandler;                                         //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy) NSString * eventLabel;                                   //@synthesize eventLabel=_eventLabel - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) double delay;                                        //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) BOOL eventDeliveryScheduled;                           //@synthesize eventDeliveryScheduled=_eventDeliveryScheduled - In the implementation block
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setEventHandler:(id)arg1 ;
-(id)eventHandler;
-(id<AVTUILogger>)logger;
-(id)initWithDelay:(double)arg1 queue:(id)arg2 logger:(id)arg3 ;
-(void)registerEventForCoalescingWithLabel:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)eventDidOccur;
-(void)setEventLabel:(NSString *)arg1 ;
-(NSString *)eventLabel;
-(BOOL)eventDeliveryScheduled;
-(void)setEventDeliveryScheduled:(BOOL)arg1 ;
-(double)delay;
@end
