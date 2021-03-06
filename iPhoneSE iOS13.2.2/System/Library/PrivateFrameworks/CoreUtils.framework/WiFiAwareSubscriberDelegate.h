/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WiFiAwareSubscriberDelegate <NSObject>
@optional
-(void)subscriber:(id)arg1 receivedMessage:(id)arg2 fromPublishID:(unsigned char)arg3 address:(id)arg4;

@required
-(void)subscriberStarted:(id)arg1;
-(void)subscriber:(id)arg1 failedToStartWithError:(long long)arg2;
-(void)subscriber:(id)arg1 terminatedWithReason:(long long)arg2;
-(void)subscriber:(id)arg1 receivedDiscoveyResult:(id)arg2;
-(void)subscriber:(id)arg1 lostDiscoveryResultForPublishID:(unsigned char)arg2 address:(id)arg3;

@end

