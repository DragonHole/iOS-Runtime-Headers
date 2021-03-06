/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, _DKSimpleKeyValueStore;
@class NSCountedSet, NSCache, NSObject;

@interface _DKActivityThrottler : NSObject {

	NSCountedSet* _minimumIntervalScheduledActions;
	NSCountedSet* _delayScheduledActions;
	NSCache* _cache;
	NSObject*<OS_dispatch_queue> _storeQueue;
	id<_DKSimpleKeyValueStore> _store;

}

@property (nonatomic,retain) id<_DKSimpleKeyValueStore> store;              //@synthesize store=_store - In the implementation block
-(id)initWithStore:(id)arg1 ;
-(void)_performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(/*^block*/id)arg3 throttleBlock:(/*^block*/id)arg4 ;
-(void)_performOrScheduleWithTimeInterval:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 callDepth:(unsigned long long)arg5 ;
-(void)_performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(/*^block*/id)arg4 ;
-(void)clearHistoryForName:(id)arg1 ;
-(id)keyForName:(id)arg1 ;
-(BOOL)_minimumIntervalScheduledActionsContainsActionName:(id)arg1 ;
-(void)_minimumIntervalScheduledActionsAddActionName:(id)arg1 ;
-(void)_minimumIntervalScheduledActionsRemoveActionName:(id)arg1 ;
-(void)clearDateForKey:(id)arg1 ;
-(id<_DKSimpleKeyValueStore>)store;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(void)setStore:(id<_DKSimpleKeyValueStore>)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(id)description;
@end

