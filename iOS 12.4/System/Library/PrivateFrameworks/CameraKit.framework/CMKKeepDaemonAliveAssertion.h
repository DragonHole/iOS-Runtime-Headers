/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface CMKKeepDaemonAliveAssertion : NSObject {

	NSObject*<OS_xpc_object> _keepaliveConnection;

}
+(id)assertion;
-(void)_tearDownConnection;
-(void)_registerForAppActiveNotifications;
-(void)_unregisterForAppActiveNotifications;
-(void)_setupHeartBeatForConnection:(id)arg1 ;
-(void)_setupConnection;
-(id)init;
-(void)dealloc;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
@end

