/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:03 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIEventFetcherSink.h>

@class UIEventEnvironment, UIEventFetcher;

@interface UIEventDispatcher : NSObject <UIEventFetcherSink> {

	UIEventEnvironment* _mainEnvironment;
	UIEventFetcher* _eventFetcher;
	CFRunLoopSourceRef _handleEventQueueRunLoopSource;
	CFRunLoopSourceRef _collectHIDEventsRunLoopSource;
	CFRunLoopRef _runLoop;

}

@property (nonatomic,retain) UIEventEnvironment * mainEnvironment;              //@synthesize mainEnvironment=_mainEnvironment - In the implementation block
-(void)dealloc;
-(id)initWithApplication:(id)arg1 ;
-(UIEventEnvironment *)mainEnvironment;
-(void)_installEventRunLoopSources:(CFRunLoopRef)arg1 ;
-(void)eventFetcherDidReceiveEvents:(id)arg1 ;
-(void)signalNextDelivery;
-(void)setMainEnvironment:(UIEventEnvironment *)arg1 ;
@end
