/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class BWInferenceSchedulerJobList, BWInferenceSchedulerGraph;

@interface BWInferenceSchedulerFramebuffer : NSObject {

	os_unfair_lock_s framebufferLock;
	Ai failedJobStatus;
	BWInferenceSchedulerJobList* _jobs;
	BWInferenceSchedulerGraph* _graph;

}

@property (nonatomic,readonly) BWInferenceSchedulerJobList * jobs;              //@synthesize jobs=_jobs - In the implementation block
@property (nonatomic,readonly) BWInferenceSchedulerGraph * graph;               //@synthesize graph=_graph - In the implementation block
-(void)dealloc;
-(BWInferenceSchedulerGraph *)graph;
-(BWInferenceSchedulerJobList *)jobs;
-(void)resetJobStatesWithPreventionBlock:(/*^block*/id)arg1 ;
-(id)initWithGraph:(id)arg1 jobList:(id)arg2 ;
@end

