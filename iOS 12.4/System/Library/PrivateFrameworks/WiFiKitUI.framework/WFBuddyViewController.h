/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/WFNetworkListing.h>

@protocol WFNetworkListRecord, WFBuddyViewControllerDelegate, WFNetworkListDelegate;
@class UITableView, NSArray, BFFPaneHeaderView, NSString, UIView, NSOrderedSet;

@interface WFBuddyViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, WFNetworkListing> {

	BOOL showOtherNetwork;
	BOOL _showNetworkSettings;
	BOOL _showAdditionalSetupInfo;
	BOOL _supportsCellularActivation;
	float _currentNetworkScaledRSSI;
	id<WFNetworkListRecord> _currentNetwork;
	long long _currentNetworkState;
	long long _deviceCapability;
	id<WFBuddyViewControllerDelegate> _buddyDelegate;
	UITableView* _tableView;
	NSArray* _sortedNetworks;
	id<WFNetworkListDelegate> _listDelegate;
	BFFPaneHeaderView* _headerView;
	NSString* _alternateSetupTitle;
	NSString* _alternateSetupFooter;
	UIView* _buddyIPadContainerView;
	NSOrderedSet* _sections;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                                      //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSArray * sortedNetworks;                                            //@synthesize sortedNetworks=_sortedNetworks - In the implementation block
@property (__weak) id<WFNetworkListDelegate> listDelegate;                                        //@synthesize listDelegate=_listDelegate - In the implementation block
@property (nonatomic,retain) BFFPaneHeaderView * headerView;                                      //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,copy) NSString * alternateSetupTitle;                                        //@synthesize alternateSetupTitle=_alternateSetupTitle - In the implementation block
@property (nonatomic,copy) NSString * alternateSetupFooter;                                       //@synthesize alternateSetupFooter=_alternateSetupFooter - In the implementation block
@property (nonatomic,retain) UIView * buddyIPadContainerView;                                     //@synthesize buddyIPadContainerView=_buddyIPadContainerView - In the implementation block
@property (retain) NSOrderedSet * sections;                                                       //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) BOOL showNetworkSettings;                                            //@synthesize showNetworkSettings=_showNetworkSettings - In the implementation block
@property (assign,nonatomic) BOOL showAdditionalSetupInfo;                                        //@synthesize showAdditionalSetupInfo=_showAdditionalSetupInfo - In the implementation block
@property (assign,nonatomic) BOOL supportsCellularActivation;                                     //@synthesize supportsCellularActivation=_supportsCellularActivation - In the implementation block
@property (assign,nonatomic,__weak) id<WFBuddyViewControllerDelegate> buddyDelegate;              //@synthesize buddyDelegate=_buddyDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL showOtherNetwork; 
@property (assign) float currentNetworkScaledRSSI;                                                //@synthesize currentNetworkScaledRSSI=_currentNetworkScaledRSSI - In the implementation block
@property (retain) id<WFNetworkListRecord> currentNetwork;                                        //@synthesize currentNetwork=_currentNetwork - In the implementation block
@property (assign) long long currentNetworkState;                                                 //@synthesize currentNetworkState=_currentNetworkState - In the implementation block
@property (assign,nonatomic) long long deviceCapability;                                          //@synthesize deviceCapability=_deviceCapability - In the implementation block
@property (nonatomic,copy) NSString * currentNetworkSubtitle; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL userAutoJoinEnabled; 
-(id<WFNetworkListDelegate>)listDelegate;
-(void)setListDelegate:(id<WFNetworkListDelegate>)arg1 ;
-(id<WFNetworkListRecord>)currentNetwork;
-(void)_enableWAPISwitchChanged:(id)arg1 ;
-(BOOL)showOtherNetwork;
-(float)currentNetworkScaledRSSI;
-(NSArray *)sortedNetworks;
-(id)_cellForNetworkRecord:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 ;
-(void)setSortedNetworks:(NSArray *)arg1 ;
-(void)setSupportsCellularActivation:(BOOL)arg1 ;
-(void)_notifyBuddyWiFiPickerIsVisble:(BOOL)arg1 ;
-(void)setAlternateSetupTitle:(NSString *)arg1 ;
-(void)setAlternateSetupFooter:(NSString *)arg1 ;
-(void)_updateCellsWithNewData:(id)arg1 oldData:(id)arg2 inSection:(long long)arg3 ;
-(void)_refreshSections;
-(BOOL)showAdditionalSetupInfo;
-(BOOL)showNetworkSettings;
-(NSString *)alternateSetupTitle;
-(NSString *)alternateSetupFooter;
-(void)_chooseOtherNetworkTapped:(id)arg1 ;
-(id<WFBuddyViewControllerDelegate>)buddyDelegate;
-(void)setShowNetworkSettings:(BOOL)arg1 ;
-(void)setShowAdditionalSetupInfo:(BOOL)arg1 ;
-(BOOL)supportsCellularActivation;
-(void)setBuddyDelegate:(id<WFBuddyViewControllerDelegate>)arg1 ;
-(UIView *)buddyIPadContainerView;
-(void)setBuddyIPadContainerView:(UIView *)arg1 ;
-(void)setCurrentNetwork:(id<WFNetworkListRecord>)arg1 ;
-(long long)deviceCapability;
-(void)setDeviceCapability:(long long)arg1 ;
-(void)setShowOtherNetwork:(BOOL)arg1 ;
-(void)setNetworks:(id)arg1 ;
-(void)powerStateDidChange:(BOOL)arg1 ;
-(void)setCurrentNetworkScaledRSSI:(float)arg1 ;
-(void)setCurrentNetworkState:(long long)arg1 ;
-(void)networkListDelegateWillPresentAccessoryViewController:(id)arg1 ;
-(long long)currentNetworkState;
-(id)init;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BFFPaneHeaderView *)headerView;
-(void)setHeaderView:(BFFPaneHeaderView *)arg1 ;
-(NSOrderedSet *)sections;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setSections:(NSOrderedSet *)arg1 ;
-(void)refresh;
@end

