/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriActivation-Structs.h>
#import <libobjc.A.dylib/AFClockAlarmListening.h>
#import <libobjc.A.dylib/AFClockTimerListening.h>

@protocol OS_dispatch_semaphore;
@class NSObject, CMMotionActivityManager, SASLockStateMonitor, FBSDisplayLayoutMonitor, NSString;

@interface SASMyriadController : NSObject <AFClockAlarmListening, AFClockTimerListening> {

	NSObject*<OS_dispatch_semaphore> _myriadFinishedSemaphore;
	CMMotionActivityManager* _activityManager;
	BOOL _isLifted;
	double _liftEndTime;
	BOOL _isLocked;
	SASLockStateMonitor* _lockStateMonitor;
	FBSDisplayLayoutMonitor* _displayMonitor;
	double _raiseToWakeTime;
	SCD_Struct_SA2 _mobileClockObserver;
	BOOL _canceledByMyriad;

}

@property (assign,nonatomic) BOOL canceledByMyriad;                 //@synthesize canceledByMyriad=_canceledByMyriad - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentController;
-(void)dealloc;
-(id)_init;
-(void)clockTimerObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3 ;
-(void)clockTimerObserver:(id)arg1 timerDidDismiss:(id)arg2 ;
-(void)clockTimerObserver:(id)arg1 timerDidFire:(id)arg2 ;
-(void)clockAlarmObserver:(id)arg1 snapshotDidUpdateFrom:(id)arg2 to:(id)arg3 ;
-(void)clockAlarmObserver:(id)arg1 alarmDidDismiss:(id)arg2 ;
-(void)clockAlarmObserver:(id)arg1 alarmDidFire:(id)arg2 ;
-(void)_handleCMMotionActivity:(id)arg1 ;
-(void)_updateRaiseToWakeTimeForTransition:(id)arg1 ;
-(void)setCanceledByMyriad:(BOOL)arg1 ;
-(BOOL)activateForRequest:(id)arg1 visible:(BOOL)arg2 ;
-(void)activateForInTaskRequest:(BOOL)arg1 isVisible:(BOOL)arg2 ;
-(BOOL)canceledByMyriad;
@end

