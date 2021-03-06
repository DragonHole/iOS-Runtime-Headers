/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TinCanShared.framework/TinCanShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TCSServerXPC <NSObject>
@required
-(void)disconnectCall:(id)arg1;
-(void)sessionViewControllerViewDidAppear;
-(void)getCall:(/*^block*/id)arg1;
-(void)setUplinkMuted:(BOOL)arg1 for:(id)arg2 completion:(/*^block*/id)arg3;
-(void)localMeterLevelForCall:(id)arg1 result:(/*^block*/id)arg2;
-(void)remoteMeterLevelForCall:(id)arg1 result:(/*^block*/id)arg2;
-(void)setClientRecordingInProgress:(BOOL)arg1;
-(void)queryIsTinCannable:(id)arg1;

@end

