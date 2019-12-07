/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:28 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSAppleIDSplashViewController.h>

@class CNFRegController;

@interface CNFRegAppleIDSplashViewController : PSAppleIDSplashViewController {

	BOOL _showBusyUIOnAppearance;
	CNFRegController* _regController;
	long long _serviceType;

}

@property (retain) CNFRegController * regController;              //@synthesize regController=_regController - In the implementation block
@property (assign) long long serviceType;                         //@synthesize serviceType=_serviceType - In the implementation block
@property (assign) BOOL showBusyUIOnAppearance;                   //@synthesize showBusyUIOnAppearance=_showBusyUIOnAppearance - In the implementation block
+(BOOL)shouldShowSplashViewForService:(id)arg1 inProgressRegisteringNonPhoneAccount:(id*)arg2 ;
+(id)_inProgressRegisteringNonPhoneAccountForService:(id)arg1 ;
-(void)dealloc;
-(id)serviceName;
-(long long)serviceType;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_applicationDidResume:(id)arg1 ;
-(void)setServiceType:(long long)arg1 ;
-(void)setSpecifier:(id)arg1 ;
-(void)handleAuthCompletionWithResults:(id)arg1 ;
-(id)serviceDescription;
-(id)serviceIcon;
-(id)_imService;
-(CNFRegController *)regController;
-(void)setRegController:(CNFRegController *)arg1 ;
-(void)continueRegisteringAccount:(id)arg1 ;
-(BOOL)showBusyUIOnAppearance;
-(void)setShowBusyUIOnAppearance:(BOOL)arg1 ;
-(id)_iCloudUserName;
-(void)_handleRegistarResults:(BOOL)arg1 alertController:(id)arg2 ;
-(void)_showSettingsController;
-(void)_cnfSignInWithUsername:(id)arg1 password:(id)arg2 ;
-(void)_completeIfAccountIsAlreadyRegistered;
@end
