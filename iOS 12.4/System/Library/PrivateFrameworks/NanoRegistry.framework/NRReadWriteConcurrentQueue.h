/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <NanoRegistry/NanoRegistry-Structs.h>
@class NSMutableArray, NSObject;

@interface NRReadWriteConcurrentQueue : NSObject {

	NSMutableArray* _readerQueues;
	NSObject*<OS_dispatch_queue> _writerQueue;
	long long _nextReader;
	BOOL _suspended;
	NSMutableArray* _suspendedReadRequests;
	NSMutableArray* _suspendedWriteRequests;
	os_unfair_lock_s _lock;

}
-(void)enqueueReadWithBlock:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 async:(BOOL)arg3 ;
-(void)_suspendReadersAndWaitForDrain;
-(void)_resumeReaders;
-(id)initWithNumberOfReaders:(unsigned long long)arg1 ;
-(void)enqueueReadWithBlock:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(void)enqueueReadWithBlockAsync:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(void)enqueueWriteWithBlockAsync:(/*^block*/id)arg1 bypassSuspend:(BOOL)arg2 ;
-(void)invalidate;
-(void)resume;
-(void)suspend;
@end

