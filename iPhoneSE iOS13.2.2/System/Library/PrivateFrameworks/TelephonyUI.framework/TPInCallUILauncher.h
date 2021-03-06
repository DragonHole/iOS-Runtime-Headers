/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@class NSString;

@interface TPInCallUILauncher : NSObject <SBSRemoteAlertHandleObserver> {

	/*^block*/id _launchSOSCompletion;

}

@property (nonatomic,copy) id launchSOSCompletion;                  //@synthesize launchSOSCompletion=_launchSOSCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)TPRemoteAlertActivationReasonForTPInCallUILaunchReason:(long long)arg1 ;
+(id)sharedInCallUILauncher;
-(void)remoteAlertHandleDidActivate:(id)arg1 ;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(void)setLaunchSOSCompletion:(id)arg1 ;
-(id)launchSOSCompletion;
-(void)launchInCallUIForReason:(long long)arg1 withRequestURL:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

