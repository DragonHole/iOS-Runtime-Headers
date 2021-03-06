/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKPaymentSetupTableViewController.h>

@protocol PKPaymentSelectPassesViewControllerDelegate;
@class PKTableHeaderView, NSArray, NSMutableArray, PKPeerPaymentAccount, NSString;

@interface PKPaymentSelectPassesViewController : PKPaymentSetupTableViewController {

	PKTableHeaderView* _headerView;
	NSArray* _passes;
	NSMutableArray* _selectedIndexPaths;
	id<PKPaymentSelectPassesViewControllerDelegate> _delegate;
	PKPeerPaymentAccount* _peerPaymentAccount;
	BOOL _canSelectMultiplePasses;
	NSString* _buttonText;
	NSString* _headerTitle;
	NSString* _headerSubtitle;

}

@property (assign,nonatomic) BOOL canSelectMultiplePasses;              //@synthesize canSelectMultiplePasses=_canSelectMultiplePasses - In the implementation block
@property (nonatomic,copy) NSString * buttonText;                       //@synthesize buttonText=_buttonText - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                      //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy) NSString * headerSubtitle;                   //@synthesize headerSubtitle=_headerSubtitle - In the implementation block
-(void)setButtonText:(NSString *)arg1 ;
-(NSString *)buttonText;
-(id)initWithStyle:(long long)arg1 context:(long long)arg2 ;
-(void)_setNavigationBarEnabled:(BOOL)arg1 ;
-(void)setHeaderViewTitle:(id)arg1 subtitle:(id)arg2 ;
-(BOOL)pkui_prefersNavigationBarShadowHidden;
-(id)pkui_navigationBarTintColor;
-(NSString *)headerSubtitle;
-(void)setHeaderSubtitle:(NSString *)arg1 ;
-(id)initWithPaymentPasses:(id)arg1 context:(long long)arg2 delegate:(id)arg3 peerPaymentAccount:(id)arg4 ;
-(void)setCanSelectMultiplePasses:(BOOL)arg1 ;
-(void)_continuousButtonPressed;
-(void)_setContinuousButtonEnabledState;
-(void)_setViewEnabledState:(BOOL)arg1 ;
-(BOOL)canSelectMultiplePasses;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(id)headerView;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
@end

