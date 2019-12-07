/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PVCanceler;

@interface PVQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	Ai _currentlyExecutingTasksCount;
	PVCanceler* _canceler;
	BOOL _terminating;
	BOOL _isConcurrent;

}
-(void)resume;
-(void)waitForCurrentTasksToFinish;
-(id)initQueueWithName:(id)arg1 isSerial:(BOOL)arg2 qos_class:(unsigned)arg3 ;
-(void)execute_async:(/*^block*/id)arg1 ;
-(void)execute_after:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)execute_sync:(/*^block*/id)arg1 ;
-(void)dispatch_barrier_async:(/*^block*/id)arg1 ;
-(void)dispatch_barrier_sync:(/*^block*/id)arg1 ;
-(void)suspend_sync;
-(void)suspend_async;
-(void)terminate_sync;
@end
