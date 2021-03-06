/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SOSServerProtocol <NSObject>
@required
-(void)willStartSendingLocationUpdate;
-(void)startSendingLocationUpdateWithCompletion:(/*^block*/id)arg1;
-(void)startSendingLocationUpdateForReason:(long long)arg1 WithCompletion:(/*^block*/id)arg2;
-(void)stopSendingLocationUpdate;
-(void)isSendingLocationUpdate:(/*^block*/id)arg1;
-(void)mostRecentLocationSentWithCompletion:(/*^block*/id)arg1;

@end

