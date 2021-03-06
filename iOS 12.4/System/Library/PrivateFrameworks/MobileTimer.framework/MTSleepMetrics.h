/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NAScheduler, MTAlarmStorage;
@class HKHealthStore, HKObserverQuery, NSMutableSet;

@interface MTSleepMetrics : NSObject {

	id<NAScheduler> _serializer;
	id<MTAlarmStorage> _alarmStorage;
	HKHealthStore* _healthStore;
	HKObserverQuery* _healthObserver;
	NSMutableSet* _sleepDataObservers;

}

@property (nonatomic,retain) id<NAScheduler> serializer;                     //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) id<MTAlarmStorage> alarmStorage;                //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,readonly) HKHealthStore * healthStore;                  //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) HKObserverQuery * healthObserver;               //@synthesize healthObserver=_healthObserver - In the implementation block
@property (nonatomic,retain) NSMutableSet * sleepDataObservers;              //@synthesize sleepDataObservers=_sleepDataObservers - In the implementation block
+(id)_sharedPublicMetrics;
+(void)registerSleepDataObserver:(id)arg1 ;
+(void)unregisterSleepDataObserver:(id)arg1 ;
+(id)inBedSampleWithInterval:(id)arg1 metadata:(id)arg2 ;
+(id)sleepDataForPastWeek;
+(id)sleepDataForRange:(id)arg1 ;
+(id)sleepDataForRange:(id)arg1 intervalComponents:(id)arg2 ;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)sleepMonitor:(id)arg1 bedtimeReminderWasConfirmed:(id)arg2 sleepAlarm:(id)arg3 ;
-(void)sleepMonitor:(id)arg1 wakeUpAlarmWasDismissed:(id)arg2 sleepAlarm:(id)arg3 ;
-(id<MTAlarmStorage>)alarmStorage;
-(void)setAlarmStorage:(id<MTAlarmStorage>)arg1 ;
-(id)initWithAlarmStorage:(id)arg1 ;
-(void)saveTimeInBed;
-(void)registerSleepDataObserver:(id)arg1 ;
-(NSMutableSet *)sleepDataObservers;
-(HKObserverQuery *)healthObserver;
-(void)setHealthObserver:(HKObserverQuery *)arg1 ;
-(void)unregisterSleepDataObserver:(id)arg1 ;
-(void)logUserWentToBed:(id)arg1 ;
-(void)logUserWokeUp:(id)arg1 ;
-(id)_queue_unprocessedInBedIntervals;
-(void)_queue_setUnprocessedInBedIntervals:(id)arg1 ;
-(BOOL)_queue_hasUnprocessedIntervals;
-(void)_saveTimeInBedSampleToHealthStore;
-(void)deviceFirstUnlocked;
-(id)sleepDataForPastWeek;
-(id)sleepDataForRange:(id)arg1 ;
-(id)sleepDataForRange:(id)arg1 intervalComponents:(id)arg2 ;
-(void)setSleepDataObservers:(NSMutableSet *)arg1 ;
-(HKHealthStore *)healthStore;
@end

