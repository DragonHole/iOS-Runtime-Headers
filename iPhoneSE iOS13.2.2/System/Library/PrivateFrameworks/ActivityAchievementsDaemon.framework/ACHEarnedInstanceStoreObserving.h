/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACHEarnedInstanceStoreObserving <NSObject>
@optional
-(void)earnedInstanceStoreDidFinishInitialFetch:(id)arg1;

@required
-(void)earnedInstanceStore:(id)arg1 didAddNewEarnedInstances:(id)arg2;
-(void)earnedInstanceStore:(id)arg1 didRemoveEarnedInstances:(id)arg2;

@end

