/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/SFXPCClient.h>

@protocol OS_dispatch_source;
@class NSDate, NSObject;

@interface SFChargingUICoordinator : SFXPCClient {

	BOOL _activateCalled;
	BOOL _invalidateCalled;
	BOOL _animationSPIAdopted;
	BOOL _runningAsCarry;
	NSDate* _uiUpdateMaxDate;
	NSDate* _uiUpdateRequestDate;
	/*^block*/id _uiUpdateHandler;
	BOOL _uiUpdateMinTimeElapsed;
	BOOL _uiUpdateShouldDismiss;
	NSObject*<OS_dispatch_source> _uiUpdateTimer;
	long long _defaultDuration;

}

@property (assign,nonatomic) long long defaultDuration;              //@synthesize defaultDuration=_defaultDuration - In the implementation block
-(id)remoteObjectInterface;
-(id)machServiceName;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)_requestToStartAnimationAtDate:(id)arg1 ;
-(void)_dismissUI;
-(void)_timingRestartMinTimer;
-(void)_sendDismissUIWithReason:(long long)arg1 ;
-(void)sendDismissUIWithReason:(long long)arg1 ;
-(void)_timingInvalidateMinTimer;
-(void)_initialViewControllerDidAppear;
-(void)initialViewControllerDidAppear;
-(void)_initialViewControllerDidDisappear;
-(void)initialViewControllerDidDisappear;
-(void)requestAnimationDateWithCompletion:(/*^block*/id)arg1 ;
-(void)requestToShowUIWithHandler:(/*^block*/id)arg1 ;
-(void)requestToStartAnimationAtDate:(id)arg1 ;
-(void)requestToDismissUIHandler:(/*^block*/id)arg1 ;
-(void)_requestToDismissUIHandler:(/*^block*/id)arg1 ;
-(void)onqueue_connectionEstablished;
-(void)onqueue_connectionInterrupted;
-(void)onqueue_connectionInvalidated;
-(void)setDefaultDuration:(long long)arg1 ;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(void)activate;
-(long long)defaultDuration;
-(id)exportedInterface;
@end

