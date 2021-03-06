/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSWatchdog.h>

@class FBTransaction;

@interface FBTransactionWatchdog : BSWatchdog {

	FBTransaction* _transaction;

}

@property (nonatomic,readonly) FBTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
-(FBTransaction *)transaction;
-(void)_dumpDebugInfo;
-(void)_watchdogTimerFired;
-(id)initWithTransaction:(id)arg1 ;
-(void)invalidate;
@end

