/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationSmootherDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSString, CLLocationSmoother, NSObject, HDProfile, NSMutableArray, HDSmoothingTask;

@interface HDWorkoutLocationSmoother : NSObject <CLLocationSmootherDelegate> {

	NSString* _xpcTransactionName;
	CLLocationSmoother* _smoother;
	NSObject*<OS_dispatch_queue> _queue;
	HDProfile* _profile;
	NSMutableArray* _pendingSmoothingTasks;
	HDSmoothingTask* _currentSmoothingTask;
	NSObject*<OS_dispatch_source> _timeoutSource;
	double _smoothingTaskTimeout;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(void)_queue_smoothNextSample;
-(void)_queue_cancelTimeout;
-(void)_queue_smoothingDidFailForTask:(id)arg1 error:(id)arg2 shouldRetry:(BOOL)arg3 ;
-(void)_queue_saveLocations:(id)arg1 forTask:(id)arg2 smoothingError:(id)arg3 ;
-(void)_queue_smoothRouteSampleForTask:(id)arg1 ;
-(id)_locationsForSampleUUID:(id)arg1 error:(id*)arg2 ;
-(void)_finishSmoothingSample;
-(BOOL)_deleteSample:(id)arg1 error:(id*)arg2 ;
-(void)_queue_scheduleSmoothingTimeoutTimerForTask:(id)arg1 ;
-(void)_queue_startSmoothingTask:(id)arg1 ;
-(void)_queue_locationManagerDidSmoothLocations:(id)arg1 forTask:(id)arg2 error:(id)arg3 ;
-(id)_queue_createNewSeriesFromTask:(id)arg1 locations:(id)arg2 error:(id*)arg3 ;
-(BOOL)_queue_insertInitialMetadataForRoute:(id)arg1 syncIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)_createWorkoutRouteWithMetadata:(id)arg1 sourceEntity:(id)arg2 locations:(id)arg3 error:(id*)arg4 ;
-(void)smoothRouteSample:(id)arg1 ;
-(BOOL)_containsWorkoutObject:(id)arg1 error:(id*)arg2 ;
-(void)unitTest_smoothRouteSample:(id)arg1 withSmoother:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

