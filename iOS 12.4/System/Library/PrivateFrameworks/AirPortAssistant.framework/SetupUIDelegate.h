/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SetupUIDelegate
@optional
-(void)setupTaskResponseWithResult:(int)arg1 responseDict:(id)arg2 forController:(id)arg3;
-(void)setupRPCResponseWithResult:(int)arg1 rpcSelector:(int)arg2 responseDict:(id)arg3 forController:(id)arg4;
-(void)setupMonitoringMessage:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(void)setupMonitoredSettingChanged:(int)arg1 paramDict:(id)arg2 forController:(id)arg3;
-(void)setupProgressUpdated:(int)arg1 status:(int)arg2 paramDict:(id)arg3 forController:(id)arg4;
-(void)setupCompleteWithResult:(int)arg1 baseStationInfo:(id)arg2 forController:(id)arg3;

@end

