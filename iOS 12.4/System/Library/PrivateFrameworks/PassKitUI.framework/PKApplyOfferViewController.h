/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKApplyExplanationViewController.h>
#import <libobjc.A.dylib/PKApplyFlowControllerProtocol.h>

@class PKAccountFlowController, PKApplyOfferCreditCardView, NSString, CLInUseAssertion, UIView;

@interface PKApplyOfferViewController : PKApplyExplanationViewController <PKApplyFlowControllerProtocol> {

	PKAccountFlowController* _accountController;
	PKApplyOfferCreditCardView* _offerView;
	NSString* _offerTermsIdentifier;
	CLInUseAssertion* _inUseAssertion;
	UIView* _heroView;
	UIView* _cardImageShadowView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id)initWithController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 applyPage:(id)arg4 ;
-(void)_setupForBroadwayApplication:(id)arg1 ;
-(void)_termsAccepted:(BOOL)arg1 ;
-(void)_openTermsAndConditions;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
