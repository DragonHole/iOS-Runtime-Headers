/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PFPipelineDelegate;
@class NSString, NSArray;

@interface PFPipeline : NSObject {

	NSString* _label;
	NSArray* _stages;
	unsigned long long _jobsInFlight;
	unsigned long long _concurrentJobLimit;
	unsigned long long _recomputeAllocatedThreads;
	id<PFPipelineDelegate> _delegate;

}

@property (readonly) NSArray * stages;                                    //@synthesize stages=_stages - In the implementation block
@property (__weak,readonly) id<PFPipelineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(unsigned long long)maximumConcurrency;
+(void)concurrencyRecomputeNeeded;
+(void)recomputeConcurrency:(unsigned long long)arg1 ;
+(id)pipelineWithLabel:(id)arg1 stageCount:(unsigned long long)arg2 selectors:(SEL*)arg3 concurrentJobLimit:(unsigned long long)arg4 delegate:(id)arg5 ;
+(void)initialize;
-(void)addJobs:(id)arg1 ;
-(NSArray *)stages;
-(void)addJob:(id)arg1 ;
-(void)invokeStage:(id)arg1 ;
-(void)resumePreviousStage:(unsigned long long)arg1 ;
-(void)jobCompletedStage:(id)arg1 ;
-(void)pausePreviousStage:(unsigned long long)arg1 ;
-(void)stage0GeneratedJob:(id)arg1 ;
-(id)initWithLabel:(id)arg1 stages:(id)arg2 concurrentJobLimit:(unsigned long long)arg3 delegate:(id)arg4 ;
-(void)addJobs:(unsigned long long)arg1 withQOS:(unsigned)arg2 generator:(/*^block*/id)arg3 ;
-(void)finishedAJob:(id)arg1 ;
-(id)init;
-(id)description;
-(id<PFPipelineDelegate>)delegate;
-(void)activate;
-(void)deactivate;
@end

