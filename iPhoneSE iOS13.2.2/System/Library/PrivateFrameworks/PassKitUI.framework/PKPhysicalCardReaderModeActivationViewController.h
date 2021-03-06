/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKExplanationViewDelegate.h>
#import <libobjc.A.dylib/PKNFCTagReaderSessionDelegate.h>

@class PKAccountService, PKAccount, PKPhysicalCard, PKPaymentPass, PKPhysicalCardActivationAnimationView, PKPaymentSessionHandle, PKNFCTagReaderSession, PKBusinessChatController, NSString;

@interface PKPhysicalCardReaderModeActivationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKNFCTagReaderSessionDelegate> {

	PKAccountService* _accountService;
	PKAccount* _account;
	PKPhysicalCard* _physicalCard;
	PKPaymentPass* _paymentPass;
	unsigned long long _feature;
	PKPhysicalCardActivationAnimationView* _animationView;
	BOOL _invalidated;
	BOOL _deviceSupportsReaderMode;
	PKPaymentSessionHandle* _sessionHandle;
	PKNFCTagReaderSession* _readerSession;
	PKBusinessChatController* _businessChatController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)_invalidate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_dismiss;
-(void)nfcTagReaderSession:(id)arg1 didDetectTags:(id)arg2 ;
-(void)nfcTagReaderSessionDidEndUnexpectedly:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(id)initWithAccountService:(id)arg1 account:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4 ;
-(void)_startTagReaderSession;
-(void)_stopTagReaderSession;
-(void)_presentActivationWithActivationCode:(id)arg1 ;
@end

