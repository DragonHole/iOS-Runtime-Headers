/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKPaymentSetupFieldCell.h>

@interface PKPaymentSetupBuiltInCardOnFilePrimaryAccountNumberFieldCell : PKPaymentSetupFieldCell {

	BOOL _hasDarkAppearance;
	long long _paymentCredentialType;

}

@property (assign,nonatomic) long long paymentCredentialType;              //@synthesize paymentCredentialType=_paymentCredentialType - In the implementation block
@property (assign,nonatomic) BOOL hasDarkAppearance;                       //@synthesize hasDarkAppearance=_hasDarkAppearance - In the implementation block
-(void)pk_applyAppearance:(id)arg1 ;
-(BOOL)hasDarkAppearance;
-(void)setHasDarkAppearance:(BOOL)arg1 ;
-(void)setPaymentCredentialType:(long long)arg1 ;
-(void)setPaymentSetupField:(id)arg1 ;
-(long long)paymentCredentialType;
-(id)_imageForPaymentCredentialType:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
@end

