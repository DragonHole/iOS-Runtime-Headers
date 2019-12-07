/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NAScheduler;
@class NSMutableArray;

@interface MTAgentNotificationManager : NSObject {

	NSMutableArray* _listeners;
	id<NAScheduler> _serializer;

}

@property (nonatomic,retain) NSMutableArray * listeners;              //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;              //@synthesize serializer=_serializer - In the implementation block
+(double)defaultAssertionTimeOutForNotification:(id)arg1 type:(long long)arg2 ;
+(double)_schedulingAssertionTimeout;
-(id)init;
-(void)dealloc;
-(void)beginListening;
-(NSMutableArray *)listeners;
-(void)registerListener:(id)arg1 ;
-(void)setListeners:(NSMutableArray *)arg1 ;
-(id<NAScheduler>)serializer;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(void)_registerForDarwinNotifications;
-(void)_registerForLiveDarwinNotification:(id)arg1 ;
-(void)_registerForDistributedNotifications;
-(void)_registerForAlarmNotifications;
-(void)_registerForXPCStream:(id)arg1 notificationType:(long long)arg2 ;
-(void)_handleNotificationWithName:(id)arg1 type:(long long)arg2 ;
@end
