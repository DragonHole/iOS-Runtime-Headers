/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupDelegate.h>

@class NSString;

@interface PKPeerPaymentRegistrationRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentSetupDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isSecureForRemoteViewService;
-(id)_peerPaymentAccountFromData:(id)arg1 ;
-(void)paymentSetupDidFinish:(id)arg1 ;
-(void)handleHomeButtonPressed;
-(void)setUserInfo:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(void)_dismiss;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)_willAppearInRemoteViewController;
@end

