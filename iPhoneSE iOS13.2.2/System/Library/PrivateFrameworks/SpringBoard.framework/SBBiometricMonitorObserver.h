/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBBiometricMonitorObserver <NSObject>
@optional
-(void)biometricMonitorDataSourceMatchingStarted:(id)arg1;
-(void)biometricMonitorDataSourceMatchingFailed:(id)arg1;
-(void)biometricMonitorDataSourceMatchingSucceeded:(id)arg1;
-(void)biometricMonitorDataSourceMatchingEnded:(id)arg1;
-(void)biometricMonitorDataSourcePresenceDetectionStarted:(id)arg1;
-(void)biometricMonitorDataSourcePresenceDetectionFailed:(id)arg1;
-(void)biometricMonitorDataSourcePresenceDetectionSucceeded:(id)arg1;
-(void)biometricMonitorDataSourcePresenceDetectionEnded:(id)arg1;
-(void)biometricMonitorDataSourcePoseUpdated:(id)arg1;

@end

