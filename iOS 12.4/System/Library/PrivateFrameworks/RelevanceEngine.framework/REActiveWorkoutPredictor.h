/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/REPredictor.h>

@class HKQuery, REUpNextTimer, NSDate;

@interface REActiveWorkoutPredictor : REPredictor {

	int _workoutStateNotifyToken;
	float _dailyAverageWorkouts;
	unsigned long long _numberOfWorkoutsPerformedToday;
	HKQuery* _workoutObservationQuery;
	REUpNextTimer* _workoutQueryCoalesceTimer;
	BOOL _hasActiveWorkout;
	NSDate* _lastCompletedWorkoutDate;

}

@property (assign) BOOL hasActiveWorkout;                                              //@synthesize hasActiveWorkout=_hasActiveWorkout - In the implementation block
@property (retain) NSDate * lastCompletedWorkoutDate;                                  //@synthesize lastCompletedWorkoutDate=_lastCompletedWorkoutDate - In the implementation block
@property (getter=isActiveWorkout,nonatomic,readonly) BOOL activeWorkout; 
@property (nonatomic,readonly) NSDate * lastWorkoutDate; 
+(id)supportedFeatures;
+(double)updateInterval;
-(BOOL)hasActiveWorkout;
-(void)setHasActiveWorkout:(BOOL)arg1 ;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
-(id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4 ;
-(void)_cancelMonitoringWorkoutIfNeeded;
-(void)_updateWorkoutState;
-(void)_scheduleFetchWorkoutTimer;
-(NSDate *)lastCompletedWorkoutDate;
-(void)_queue_fetchWorkoutHistory;
-(void)_processWorkoutHistoryData:(id)arg1 ;
-(void)setLastCompletedWorkoutDate:(NSDate *)arg1 ;
-(BOOL)isActiveWorkout;
-(NSDate *)lastWorkoutDate;
-(id)init;
-(void)dealloc;
-(void)update;
-(void)resume;
-(void)pause;
@end

