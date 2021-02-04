/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKExplanationViewController.h>

@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsSetupCompleteViewController : PKExplanationViewController {

	PKAccountAutomaticPaymentsController* _controller;
	unsigned long long _featureIdentifier;

}
-(id)initWithController:(id)arg1 ;
-(void)_donePressed;
-(id)bodyString;
-(id)_doneButton;
-(id)_paymentDateString;
-(long long)_paymentDay;
-(id)_paymentDayString;
-(id)_paymentDayNameString;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
