/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRTransferServerDelegate <NSObject>
@optional
-(void)server:(id)arg1 didFailToReceiveData:(id)arg2;
-(void)serverWillReceiveData:(id)arg1;
-(void)server:(id)arg1 didReceiveData:(id)arg2 replyHandler:(/*^block*/id)arg3;

@end

