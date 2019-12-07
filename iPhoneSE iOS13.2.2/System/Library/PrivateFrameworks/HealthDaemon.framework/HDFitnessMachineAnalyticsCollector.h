/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDAWDHealthKitGymKitWorkoutEvent, HKPersistentTimer;

@interface HDFitnessMachineAnalyticsCollector : NSObject {

	HDAWDHealthKitGymKitWorkoutEvent* _gymKitWorkoutEvent;
	HKPersistentTimer* _authorizationTimer;

}

@property (nonatomic,retain) HDAWDHealthKitGymKitWorkoutEvent * gymKitWorkoutEvent;              //@synthesize gymKitWorkoutEvent=_gymKitWorkoutEvent - In the implementation block
@property (nonatomic,retain) HKPersistentTimer * authorizationTimer;                             //@synthesize authorizationTimer=_authorizationTimer - In the implementation block
-(id)init;
-(void)_reset;
-(void)setFitnessMachineType:(unsigned long long)arg1 manufacturer:(id)arg2 ;
-(void)workoutEnded;
-(void)workoutFailedWithError:(id)arg1 ;
-(void)userIsAuthorized;
-(void)userBeganPairing;
-(void)_recordTimeToAuthorize;
-(long long)_failureReasonForError:(id)arg1 ;
-(HDAWDHealthKitGymKitWorkoutEvent *)gymKitWorkoutEvent;
-(void)setGymKitWorkoutEvent:(HDAWDHealthKitGymKitWorkoutEvent *)arg1 ;
-(HKPersistentTimer *)authorizationTimer;
-(void)setAuthorizationTimer:(HKPersistentTimer *)arg1 ;
@end
