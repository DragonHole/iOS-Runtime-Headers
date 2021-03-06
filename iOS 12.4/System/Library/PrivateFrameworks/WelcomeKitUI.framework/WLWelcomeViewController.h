/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKitUI/WelcomeKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WLSourceDevicesDelegate.h>

@class WLSourceDevicesController, WLIntroViewController, WLPairingViewController, WLMigrationProgressViewController, WLMigrationCompletedViewController, WLWelcomeViewControllerMetrics;

@interface WLWelcomeViewController : UIViewController <WLSourceDevicesDelegate> {

	WLSourceDevicesController* _sourceDevicesController;
	WLIntroViewController* _introViewController;
	WLPairingViewController* _pairingViewController;
	WLMigrationProgressViewController* _progressViewController;
	WLMigrationCompletedViewController* _completedViewController;
	WLWelcomeViewControllerMetrics* _metrics;
	BOOL _dismissAfterTimeout;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
+(void)allowedToDisplay:(/*^block*/id)arg1 ;
-(void)_loadIntroGroupView;
-(CGRect)_frameForGroupView;
-(void)_addGroupViewController:(id)arg1 ;
-(void)_startConnectivity;
-(CGRect)_frameForIncomingGroupViewBeforeAnimation;
-(CGRect)_frameForOutgoingGroupViewAfterAnimation;
-(void)_removeGroupViewController:(id)arg1 ;
-(void)_transitionToPairingCodeViewControllerWithPairingCode:(id)arg1 wifiPSK:(id)arg2 ssid:(id)arg3 ;
-(void)_completeWithSuccess:(BOOL)arg1 ;
-(void)_uiTestModeStartFakePairing;
-(void)_animateFromGroupViewController:(id)arg1 toGroupViewController:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_authenticationPeriodDidEnd;
-(void)sourceDeviceController:(id)arg1 didDiscoverDevice:(id)arg2 ;
-(void)_progressViewControllerDidFinishWithSuccess:(BOOL)arg1 ;
-(void)_migrationDidBegin;
-(void)_transitionToCompletedViewController;
-(void)_transitionToProgressViewControllerWithSourceDevice:(id)arg1 ;
-(void)wifiAndDeviceDiscoveryDidGetInterrupted;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
@end

