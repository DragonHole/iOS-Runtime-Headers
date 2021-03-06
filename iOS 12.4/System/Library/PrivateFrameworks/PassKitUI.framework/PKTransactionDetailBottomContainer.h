/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PKPaymentDataProvider;
@class _UIBackdropView, UIView, UILabel, PKContinuousButton, PKPaymentTransaction, PKPaymentPass, PKBusinessChatController;

@interface PKTransactionDetailBottomContainer : UIView {

	_UIBackdropView* _backdropContainerView;
	UIView* _topSeparatorView;
	UILabel* _title;
	UILabel* _message;
	PKContinuousButton* _leadingButton;
	PKContinuousButton* _trailingButton;
	BOOL _isTemplateLayout;
	PKPaymentTransaction* _transaction;
	PKPaymentPass* _paymentPass;
	id<PKPaymentDataProvider> _paymentDataProvider;
	PKBusinessChatController* _businessChatController;
	BOOL _hasContentChanged;

}

@property (nonatomic,readonly) BOOL hasContentChanged; 
-(void)setTransaction:(id)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(id)initWithPaymentPass:(id)arg1 paymentDataProvider:(id)arg2 ;
-(void)_callIssuer;
-(void)_leadingButtonTapped:(id)arg1 ;
-(void)_trailingButtonTapped:(id)arg1 ;
-(void)_enableButtons:(BOOL)arg1 ;
-(void)_presentContactViewController;
-(void)_submitQuestionAnswer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_openBusinessChat;
-(BOOL)hasContentChanged;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

