/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class PKAccountService, PKAccount, PKPaymentPass, PKPhysicalCard, PKTableHeaderView, UIBarButtonItem, PKBusinessChatController;

@interface PKPhysicalCardSupportViewController : UITableViewController {

	PKAccountService* _accountService;
	PKAccount* _account;
	PKPaymentPass* _paymentPass;
	PKPhysicalCard* _physicalCard;
	PKTableHeaderView* _tableHeaderView;
	UIBarButtonItem* _nextButton;
	PKBusinessChatController* _businessChatController;
	BOOL _hasSelectedReason;
	long long _selectedReason;

}
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_nextButtonTapped:(id)arg1 ;
-(void)_presentManualActivation;
-(void)_presentBusinessChatWithContext:(id)arg1 ;
-(id)initWithAccountService:(id)arg1 account:(id)arg2 paymentPass:(id)arg3 physicalCard:(id)arg4 ;
@end

