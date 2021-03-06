/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKSectionTableViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/PKPassHeaderViewDelegate.h>

@protocol OS_dispatch_source, PKPassDeleteHandler;
@class PKPassDisplayProfile, PKPassColorProfile, PKLinkedAppView, UIView, UIRefreshControl, PKSettingTableCell, UITableViewCell, PKBarcodeTableViewCell, NSMutableDictionary, NSObject, BluetoothManager, NSArray, PKPassHeaderView, UISegmentedControl, PKPass, NSString;

@interface PKBarcodePassDetailViewController : PKSectionTableViewController <UITextViewDelegate, PKPassHeaderViewDelegate> {

	PKPassDisplayProfile* _displayProfile;
	PKPassColorProfile* _colorProfile;
	PKLinkedAppView* _linkedApp;
	UIView* _locationHelpView;
	UIRefreshControl* _refreshControl;
	PKSettingTableCell* _automaticUpdatesCell;
	PKSettingTableCell* _showNotificationsCell;
	PKSettingTableCell* _showInLockScreenCell;
	PKSettingTableCell* _automaticSelectionCell;
	UITableViewCell* _shareCell;
	UITableViewCell* _personalizePassCell;
	UITableViewCell* _deleteCell;
	PKBarcodeTableViewCell* _barcodeCell;
	NSMutableDictionary* _fieldCellsByRow;
	NSMutableDictionary* _fieldCellHeightsByRow;
	BOOL _forcedRefresh;
	double _forcedTopContentInset;
	NSObject*<OS_dispatch_source> _refreshTimeout;
	BluetoothManager* _btManager;
	BOOL _isBluetoothEnabled;
	BOOL _isLocationEnabled;
	BOOL _isWifiEnabled;
	BOOL _showsLinks;
	NSArray* _tabBarSegments;
	double _headerHeight;
	UIEdgeInsets _headerContentInset;
	double _tabBarHeight;
	CGSize _previousLayoutTableViewBoundsSize;
	BOOL _navigationControllerHidesShadow;
	UIView* _headerView;
	PKPassHeaderView* _passHeaderView;
	UISegmentedControl* _tabBar;
	BOOL _didRampScreenBrightness;
	unsigned char _visiblityState;
	BOOL _navigationBarVisible;
	BOOL _showDoneButton;
	PKPass* _pass;
	unsigned long long _suppressedContent;
	id<PKPassDeleteHandler> _deleteOverrider;

}

@property (nonatomic,readonly) PKPass * pass;                                      //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) unsigned long long suppressedContent;                 //@synthesize suppressedContent=_suppressedContent - In the implementation block
@property (assign,nonatomic) id<PKPassDeleteHandler> deleteOverrider;              //@synthesize deleteOverrider=_deleteOverrider - In the implementation block
@property (assign,nonatomic) BOOL showDoneButton;                                  //@synthesize showDoneButton=_showDoneButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_linkColor;
+(id)_linkTextAttributes;
+(BOOL)isWifiEnabled;
-(PKPass *)pass;
-(id)initWithPass:(id)arg1 ;
-(void)setSuppressedContent:(unsigned long long)arg1 ;
-(BOOL)pkui_prefersNavigationBarShadowHidden;
-(void)setShowDoneButton:(BOOL)arg1 ;
-(id)_relevantBuckets;
-(id)linkedApp;
-(id)initWithStyle:(long long)arg1 numberOfSections:(unsigned long long)arg2 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(double)pkui_preferredNavigationBarBackgroundOpacity;
-(unsigned long long)suppressedContent;
-(void)_updatePassProperties;
-(void)_wifiChanged:(id)arg1 ;
-(void)_bluetoothPowerChanged:(id)arg1 ;
-(void)_passSettingsChanged:(id)arg1 ;
-(void)_done:(id)arg1 ;
-(BOOL)shouldAllowRefresh;
-(void)refreshControlValueChanged:(id)arg1 ;
-(BOOL)_updateHeaderHeightDeterminingLayout:(BOOL)arg1 ;
-(id)_createTabBarWithSelectedIndex:(long long)arg1 ;
-(void)_reloadTitle;
-(double)_offscreenHeaderHeight;
-(double)_titleOpacityForBounds:(CGRect)arg1 lowerBoundary:(double)arg2 higherBoundary:(double)arg3 ;
-(BOOL)_linkedAppAvailable;
-(BOOL)_settingsAvailable;
-(BOOL)_personalizeAvailable;
-(void)reloadSection:(unsigned long long)arg1 ;
-(long long)rowAnimationForReloadingSection:(unsigned long long)arg1 ;
-(void)_updateTabBarWithSegments:(id)arg1 ;
-(void)_tabBarSegmentChanged:(id)arg1 ;
-(id)_locationRelevancyHelpText;
-(unsigned long long)_numberOfAvailableSettings;
-(id)_settingsCellForRow:(unsigned long long)arg1 ;
-(id)_automaticSelectionCell;
-(id)_shareCell;
-(id)_personalizePassCell;
-(id)_deleteCell;
-(id)_barcodeCell;
-(id)_fieldCellForRow:(unsigned long long)arg1 ;
-(void)_sharePass;
-(void)_deletePass;
-(id)_locationHelpViewForTableView:(id)arg1 ;
-(void)_reloadPassAndView;
-(void)_updateTabBar;
-(void)pushSettingsFromViewToModel;
-(unsigned long long)_settingForRow:(unsigned long long)arg1 ;
-(id)_fieldForRow:(unsigned long long)arg1 ;
-(void)_refreshFinished:(BOOL)arg1 ;
-(void)passHeaderViewDidChangePass:(id)arg1 ;
-(void)setShowsLinks:(BOOL)arg1 ;
-(BOOL)_isBluetoothEnabled;
-(id<PKPassDeleteHandler>)deleteOverrider;
-(void)setDeleteOverrider:(id<PKPassDeleteHandler>)arg1 ;
-(BOOL)showDoneButton;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(BOOL)reloadData;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
@end

