/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPeerPaymentActionViewController.h>
#import <libobjc.A.dylib/PKEnterCurrencyAmountViewDelegate.h>
#import <libobjc.A.dylib/PKNumberPadSuggestionsViewDelegate.h>
#import <libobjc.A.dylib/PKPeerPaymentActionControllerDelegate.h>

@class PKNumericSuggestionsEnterValueAlgorithm, PKEnterCurrencyAmountView, PKEnterValueNewBalanceView, PKNumberPadSuggestionsView, NSString;

@interface PKPeerPaymentActionAddMoneyViewController : PKPeerPaymentActionViewController <PKEnterCurrencyAmountViewDelegate, PKNumberPadSuggestionsViewDelegate, PKPeerPaymentActionControllerDelegate> {

	PKNumericSuggestionsEnterValueAlgorithm* _suggestionGenerator;
	PKEnterCurrencyAmountView* _enterCurrencyAmountView;
	PKEnterValueNewBalanceView* _newBalanceView;
	PKNumberPadSuggestionsView* _suggestionView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPaymentPass:(id)arg1 webService:(id)arg2 context:(long long)arg3 ;
-(void)updateFirstResponder;
-(void)updateAccountValues;
-(void)willDismissViewController;
-(void)setCardBalance:(id)arg1 ;
-(void)setMaxBalance:(id)arg1 ;
-(void)setMinBalance:(id)arg1 ;
-(void)setMinLoadAmount:(id)arg1 ;
-(void)setMaxLoadAmount:(id)arg1 ;
-(void)peerPaymentActionController:(id)arg1 hasChangedState:(unsigned long long)arg2 ;
-(void)_showNavigationBarSpinner:(BOOL)arg1 ;
-(id)_spinnerBarButton;
-(BOOL)_shouldShakeCard:(id)arg1 ;
-(BOOL)enterCurrencyAmountView:(id)arg1 shouldChangeAmountFrom:(id)arg2 to:(id)arg3 ;
-(void)enterCurrencyAmountViewDidChangeAmount:(id)arg1 ;
-(void)numberPadSuggestionsView:(id)arg1 didSelectSuggestion:(id)arg2 ;
-(void)_updateCurrentAmount:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(void)_updateBarButtonEnabledState;
-(void)_currentAmountDidChangeTo:(id)arg1 shouldGenerateNewSuggestions:(BOOL)arg2 ;
-(BOOL)_isCurrentAmountValid;
-(id)_addBarButton;
-(void)_addBarButtonPressed:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
@end
