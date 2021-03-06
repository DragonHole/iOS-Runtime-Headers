/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NUJobPriorityQueue;

@interface NUJobQueue : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NUJobPriorityQueue* _hiQueue;
	NUJobPriorityQueue* _loQueue;
	long long _updateGroupLevel;
	long long _stage;

}

@property (readonly) long long stage;              //@synthesize stage=_stage - In the implementation block
-(void)_addJob:(id)arg1 ;
-(void)_removeJob:(id)arg1 ;
-(void)finishedPriorityQueue:(id)arg1 ;
-(void)removeJob:(id)arg1 ;
-(void)_addJobs:(id)arg1 ;
-(void)_incrementGroupLevel;
-(void)_decrementGroupLevel;
-(void)_startRunningIfNeeded;
-(void)_finishedPriorityQueue:(id)arg1 ;
-(id)initWithStage:(long long)arg1 ;
-(void)addJobs:(id)arg1 ;
-(void)addJob:(id)arg1 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(long long)stage;
@end

