/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ITIdleTimerServerInterface <NSObject>
@required
-(BOOL)isIdleTimerServiceAvailableWithError:(id*)arg1;
-(void)addIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3;
-(void)removeIdleTimerConfiguration:(id)arg1 forReason:(id)arg2 error:(id*)arg3;

@end

