/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFApplicationContextProvider <NSObject>
@property (assign,nonatomic) BOOL wfIdleTimerDisabled; 
@optional
-(long long)currentApplicationStateForWFApplicationContext:(id)arg1;
-(BOOL)wfIdleTimerDisabled;
-(void)setWfIdleTimerDisabled:(BOOL)arg1;

@required
-(BOOL)shouldReverseLayoutDirection;
-(id)bundleForWFApplicationContext:(id)arg1;
-(id)currentUserInterfaceTypeForWFApplicationContext:(id)arg1;
-(id)notificationNameForApplicationStateEvent:(long long)arg1 applicationContext:(id)arg2;
-(id)keyWindowForWFApplicationContext:(id)arg1;
-(id)applicationForWFApplicationContext:(id)arg1;

@end
