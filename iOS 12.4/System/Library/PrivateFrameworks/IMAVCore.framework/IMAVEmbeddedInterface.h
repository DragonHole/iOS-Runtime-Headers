/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMAVCore/IMAVConferenceInterface.h>

@interface IMAVEmbeddedInterface : IMAVConferenceInterface
+(void)updateCriticalState;
-(void)chatStateUpdated;
-(void)_conferenceWillStart:(id)arg1 ;
-(void)_conferenceEnded:(id)arg1 ;
-(long long)_checkNetworkForChat:(id)arg1 requiresWifi:(BOOL)arg2 ;
-(long long)_runPingTestForChat:(id)arg1 ;
@end

