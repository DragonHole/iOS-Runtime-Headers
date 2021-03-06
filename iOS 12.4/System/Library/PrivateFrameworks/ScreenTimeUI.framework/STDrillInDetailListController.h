/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STPINListViewController.h>

@class STUsageItem, STDrillInUsageGroupSpecifierProvider, STDrillInItemInfoGroupSpecifierProvider, STCategoryDetailsGroupSpecifierProvider, STAllowanceProgressGroupSpecifierProvider;

@interface STDrillInDetailListController : STPINListViewController {

	STUsageItem* _usageItem;
	STDrillInUsageGroupSpecifierProvider* _screenTimeGroupSpecifierProvider;
	STDrillInItemInfoGroupSpecifierProvider* _drillInItemInfoGroupSpecifierProvider;
	STCategoryDetailsGroupSpecifierProvider* _categoryDetailsGroupSpecifierProvider;
	STAllowanceProgressGroupSpecifierProvider* _allowanceProgressGroupSpecifierProvider;

}

@property (nonatomic,readonly) STUsageItem * usageItem;                                                                          //@synthesize usageItem=_usageItem - In the implementation block
@property (nonatomic,readonly) STDrillInUsageGroupSpecifierProvider * screenTimeGroupSpecifierProvider;                          //@synthesize screenTimeGroupSpecifierProvider=_screenTimeGroupSpecifierProvider - In the implementation block
@property (nonatomic,readonly) STDrillInItemInfoGroupSpecifierProvider * drillInItemInfoGroupSpecifierProvider;                  //@synthesize drillInItemInfoGroupSpecifierProvider=_drillInItemInfoGroupSpecifierProvider - In the implementation block
@property (nonatomic,readonly) STCategoryDetailsGroupSpecifierProvider * categoryDetailsGroupSpecifierProvider;                  //@synthesize categoryDetailsGroupSpecifierProvider=_categoryDetailsGroupSpecifierProvider - In the implementation block
@property (nonatomic,readonly) STAllowanceProgressGroupSpecifierProvider * allowanceProgressGroupSpecifierProvider;              //@synthesize allowanceProgressGroupSpecifierProvider=_allowanceProgressGroupSpecifierProvider - In the implementation block
-(BOOL)canBeShownFromSuspendedState;
-(STUsageItem *)usageItem;
-(id)initWithUsageItem:(id)arg1 coordinator:(id)arg2 ;
-(void)_didFetchAppInfo:(id)arg1 ;
-(STDrillInUsageGroupSpecifierProvider *)screenTimeGroupSpecifierProvider;
-(STDrillInItemInfoGroupSpecifierProvider *)drillInItemInfoGroupSpecifierProvider;
-(STCategoryDetailsGroupSpecifierProvider *)categoryDetailsGroupSpecifierProvider;
-(STAllowanceProgressGroupSpecifierProvider *)allowanceProgressGroupSpecifierProvider;
-(void)viewDidLoad;
@end

