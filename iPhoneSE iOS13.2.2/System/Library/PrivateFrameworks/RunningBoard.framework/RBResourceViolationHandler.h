/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBAssertionManaging, OS_dispatch_queue, OS_xpc_object;
@class NSObject;

@interface RBResourceViolationHandler : NSObject {

	id<RBAssertionManaging> _assertionManager;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_xpc_object> _listener;

}
+(id)sharedInstance;
-(void)handleCPUViolationMessage:(id)arg1 fromConnection:(id)arg2 ;
-(void)handleMessage:(id)arg1 fromConnection:(id)arg2 ;
-(void)startWithAssertionManager:(id)arg1 ;
@end
