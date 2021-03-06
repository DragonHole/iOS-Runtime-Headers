/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, PKPaymentSetupFieldFooter;

@interface PKPaymentSetupFieldsModel : NSObject {

	NSMutableArray* _paymentSetupFields;
	PKPaymentSetupFieldFooter* _footerField;

}
+(id)defaultPaymentSetupProvisioningFields;
+(id)fakePaymentSetupProvisioningFields;
-(void)prefillDefaultValues;
-(id)incompletePaymentSetupFields;
-(id)paymentSetupFieldAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPaymentSetupFields;
-(BOOL)hasIncompletePaymentSetupFields;
-(void)resetAllPaymentSetupFieldValues;
-(id)paymentSetupFields;
-(void)replaceAllPaymentSetupFields:(id)arg1 ;
-(id)paymentSetupFieldIdentifiers;
-(id)initWithPaymentSetupFields:(id)arg1 ;
-(id)submissionValuesForDestination:(id)arg1 ;
-(id)secureSubmissionValuesForDestination:(id)arg1 ;
-(id)paymentSetupFieldWithIdentifier:(id)arg1 ;
-(void)updateWithPaymentSetupFields:(id)arg1 ;
-(BOOL)hasFooterPaymentSetupField;
-(id)footerPaymentSetupField;
-(void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1 ;
@end

