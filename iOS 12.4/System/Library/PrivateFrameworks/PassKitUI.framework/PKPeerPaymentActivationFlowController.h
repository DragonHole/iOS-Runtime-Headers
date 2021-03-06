/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AAUIDeviceToDeviceEncryptionHelperDelegate.h>

@class NSString;

@interface PKPeerPaymentActivationFlowController : NSObject <AAUIDeviceToDeviceEncryptionHelperDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_alertControllerForUpgradeSecurityDialogForViewController:(id)arg1 didRepairBlock:(/*^block*/id)arg2 completeFlowBlock:(/*^block*/id)arg3 deviceToDeviceEncryptionRepairHandler:(/*^block*/id)arg4 showErrorAlertBlock:(/*^block*/id)arg5 ;
+(id)alertControllerForUpgradeSecurityDialogForViewController:(id)arg1 context:(long long)arg2 delegate:(id)arg3 didRepairBlock:(/*^block*/id)arg4 completeFlowBlock:(/*^block*/id)arg5 showErrorAlertBlock:(/*^block*/id)arg6 ;
+(id)alertControllerForUpgradeSecurityDialogForViewController:(id)arg1 context:(long long)arg2 didRepairBlock:(/*^block*/id)arg3 completeFlowBlock:(/*^block*/id)arg4 showErrorAlertBlock:(/*^block*/id)arg5 ;
-(void)deviceToDeviceEncryptionHelper:(id)arg1 shouldContinueUpgradingUserToHSA2WithCompletion:(/*^block*/id)arg2 ;
@end

