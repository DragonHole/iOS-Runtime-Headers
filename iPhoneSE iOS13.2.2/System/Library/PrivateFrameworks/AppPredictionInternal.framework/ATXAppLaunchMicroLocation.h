/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _PASLock, _ATXDuetHelper, NSString;

@interface ATXAppLaunchMicroLocation : NSObject {

	_PASLock* _lock;
	_ATXDuetHelper* _duetHelper;
	NSString* _path;

}
-(id)init;
-(void)train;
-(id)initWithDuetHelper:(id)arg1 directory:(id)arg2 forTesting:(BOOL)arg3 ;
-(void)_subscribeToDKInsertionEvents;
-(void)_receivedNotificationOfNewMicroLocation;
-(double)popularityAtCurrentMicroLocationForApp:(id)arg1 ;
-(double)popularityAtCurrentMicroLocationForActionKey:(id)arg1 ;
-(void)_writeAppLaunchCorrelationMatrix:(id)arg1 actionKeyCorrelationMatrix:(id)arg2 ;
-(BOOL)loadCorrelationMatrices;
-(id)_getHistoricalData;
-(id)_getAppLaunchCorrelationMatrix;
-(id)_getActionKeyCorrelationMatrix;
@end

