/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDTaskServerDelegate <NSObject>
@optional
-(id)sampleSavingDelegate;

@required
-(void)addObserver:(id)arg1 forTaskServerUUID:(id)arg2;
-(void)removeObserver:(id)arg1 forTaskServerUUID:(id)arg2;
-(void)removeTaskServerObserver:(id)arg1;
-(void)taskServerDidFinishInitialization:(id)arg1;
-(void)taskServerDidFailToInitializeForUUID:(id)arg1;
-(void)taskServerDidInvalidate:(id)arg1;
-(id)taskServerWithUUID:(id)arg1;

@end

