/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <Sharing/Sharing-Structs.h>
@class CURetrier, NSObject;

@interface SFWiFiHealthMonitor : NSObject {

	BOOL _invalidateCalled;
	int _lockdownActivated;
	int _lockdownActivationNotifyToken;
	WiFiDeviceClientRef _wifiDevice;
	BOOL _wifiDeviceSetup;
	WiFiManagerClientRef _wifiManager;
	BOOL _wifiManagerSetup;
	CURetrier* _wifiRetrier;
	unsigned long long _wifiStatusBadTicks;
	unsigned long long _wifiStatusGoodTicks;
	double _wifiStatusDebounceSecs;
	NSObject*<OS_dispatch_source> _wifiStatusDebounceTimer;
	long long _wifiStatusExternal;
	long long _wifiStatusInternal;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	/*^block*/id _statusHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,copy) id statusHandler;                                          //@synthesize statusHandler=_statusHandler - In the implementation block
-(void)_wifiEnsureStopped;
-(void)_wifiStatusChangedInternal:(long long)arg1 ;
-(void)_wifiEnsureStarted;
-(void)_wifiStatusChangedExternal:(long long)arg1 ;
-(void)_wifiAutoJoinNotification:(id)arg1 ;
-(id)statusHandler;
-(void)setStatusHandler:(id)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_activate;
-(id)init;
-(id)description;
-(void)reset;
-(void)invalidate;
-(void)_invalidate;
-(void)activate;
-(void)_update;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
@end

