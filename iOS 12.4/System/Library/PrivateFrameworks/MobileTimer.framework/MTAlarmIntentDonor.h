/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MTAlarmObserver.h>

@protocol NAScheduler;
@class MTAlarmStorage, NSMutableDictionary, NSString;

@interface MTAlarmIntentDonor : NSObject <MTAlarmObserver> {

	MTAlarmStorage* _storage;
	NSMutableDictionary* _alarmsByID;
	id<NAScheduler> _serializer;

}

@property (nonatomic,readonly) MTAlarmStorage * storage;                      //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * alarmsByID;              //@synthesize alarmsByID=_alarmsByID - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                      //@synthesize serializer=_serializer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStorage:(id)arg1 ;
-(NSMutableDictionary *)alarmsByID;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)source:(id)arg1 didAddAlarms:(id)arg2 ;
-(void)source:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(void)source:(id)arg1 didRemoveAlarms:(id)arg2 ;
-(void)source:(id)arg1 didSnoozeAlarm:(id)arg2 snoozeAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didFireAlarm:(id)arg2 triggerType:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didDismissAlarm:(id)arg2 dismissAction:(unsigned long long)arg3 ;
-(void)source:(id)arg1 didChangeNextAlarm:(id)arg2 ;
-(void)prepareAlarms;
-(MTAlarmStorage *)storage;
@end
