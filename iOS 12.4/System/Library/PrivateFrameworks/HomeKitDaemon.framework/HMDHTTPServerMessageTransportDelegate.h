/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMDHTTPServerMessageTransportDelegate <NSObject>
@required
-(void)server:(id)arg1 didStopWithError:(id)arg2;
-(void)server:(id)arg1 didAddDevice:(id)arg2;
-(void)server:(id)arg1 didRemoveDevice:(id)arg2;
-(void)server:(id)arg1 didReceiveMessage:(id)arg2 fromDevice:(id)arg3 completionHandler:(/*^block*/id)arg4;

@end
