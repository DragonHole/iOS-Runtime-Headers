/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFConcurrentQueueClass.h>

@class NSMutableArray, PFSerialQueue;

@interface PFLimitedConcurrencyQueueClass : PFConcurrentQueueClass {

	NSMutableArray* _slotQueues;
	unsigned long long _concurrencyLimit;
	PFSerialQueue* _serializer;
	NSMutableArray* _availableSlots;
	BOOL _usesBarrierBlocks;
	unsigned long long _suspendCount;

}
-(void)resume;
-(void)suspend;
-(id)_extensionsForTargetingQueue;
-(void)dispatchSync:(/*^block*/id)arg1 ;
-(void)dispatchAsync:(/*^block*/id)arg1 ;
-(void)dispatchBarrierSync:(/*^block*/id)arg1 ;
-(void)dispatchBarrierAsync:(/*^block*/id)arg1 ;
-(void)dispatchAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchBarrierAsyncWithQOS:(unsigned)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchGroup:(id)arg1 async:(/*^block*/id)arg2 ;
-(void)dispatchGroup:(id)arg1 notify:(/*^block*/id)arg2 ;
-(unsigned long long)concurrencyLimit;
-(void)_setupConcurrencyLimit:(unsigned long long)arg1 ;
-(id)_allocateOneSlotQueue;
-(void)_allocateAllSlotQueues;
-(id)checkoutAvailableSlot;
-(void)slotQueueMightBeUnused:(id)arg1 ;
-(void)enqueueDelayedDrop;
-(void)dropOneSlotQueue;
@end

