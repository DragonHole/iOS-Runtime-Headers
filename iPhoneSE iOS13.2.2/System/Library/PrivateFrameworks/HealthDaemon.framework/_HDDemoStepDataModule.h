/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/_HDDemoDataModule.h>

@interface _HDDemoStepDataModule : _HDDemoDataModule {

	double _nextFireInterval;
	unsigned long long _nextStepCount;
	double _nextDistance;

}
-(double)nextFireInterval;
-(void)scheduleNextFire;
-(void)timerDidFireWithInterval:(double)arg1 ;
-(void)_getDelayBeforeNextStepData:(double*)arg1 stepCount:(unsigned long long*)arg2 distance:(double*)arg3 ;
-(id)_nextStepQuantitySampleWithInterval:(double)arg1 ;
-(id)_nextDistanceQuantitySampleWithInterval:(double)arg1 ;
@end

