/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/_SFCreditCardCaptureViewControllerDelegate.h>

@class WBSCreditCardData, WBSCreditCardFormatter, NSDateFormatter, PSTextFieldSpecifier, NSArray, NSString;

@interface SafariSavedCreditCardDetailController : PSListController <_SFCreditCardCaptureViewControllerDelegate> {

	WBSCreditCardData* _creditCardData;
	WBSCreditCardFormatter* _creditCardFormatter;
	NSDateFormatter* _expirationDateFormatter;
	PSTextFieldSpecifier* _cardholderSpecifier;
	PSTextFieldSpecifier* _numberSpecifier;
	PSTextFieldSpecifier* _expirationDateSpecifier;
	PSTextFieldSpecifier* _descriptionSpecifier;
	NSArray* _deleteButtonSpecifiers;
	NSArray* _useCameraSpecifiers;
	BOOL _hasDefaultDescription;
	BOOL _editing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(BOOL)shouldSelectResponderOnAppearance;
-(void)creditCardCaptureViewControllerDidCancel:(id)arg1 ;
-(void)creditCardCaptureViewController:(id)arg1 didCaptureCreditCard:(id)arg2 ;
-(void)_cancelEditing:(id)arg1 ;
-(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(id)_specifierWithName:(id)arg1 ;
-(void)_updateDoneButtonForCardNumberString:(id)arg1 ;
-(id)_valueOfSpecifier:(id)arg1 ;
-(void)_updateSpecifiersFromCreditCardData:(id)arg1 ;
-(void)_setEditing:(BOOL)arg1 ;
-(void)_updateSpecifiers;
-(id)_useCameraSpecifiers;
-(void)_updateRightBarButtonItem;
-(void)_deleteCreditCard:(id)arg1 ;
-(void)_useCamera:(id)arg1 ;
-(void)_endEditing:(id)arg1 ;
-(void)_edit:(id)arg1 ;
-(id)_deleteButtonSpecifiers;
-(void)_removeCreditCardDataAndPopViewController;
@end
