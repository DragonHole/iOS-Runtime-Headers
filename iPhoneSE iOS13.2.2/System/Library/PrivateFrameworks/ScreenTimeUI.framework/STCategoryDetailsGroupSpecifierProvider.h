/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STGroupSpecifierProvider.h>

@protocol STRootViewModelCoordinator;
@class STUsageDetailsViewModel, NSObject;

@interface STCategoryDetailsGroupSpecifierProvider : STGroupSpecifierProvider {

	STUsageDetailsViewModel* _usageDetailsViewModel;
	NSObject*<STRootViewModelCoordinator> _coordinator;

}

@property (nonatomic,readonly) STUsageDetailsViewModel * usageDetailsViewModel;                //@synthesize usageDetailsViewModel=_usageDetailsViewModel - In the implementation block
@property (nonatomic,readonly) NSObject*<STRootViewModelCoordinator> coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
-(NSObject*<STRootViewModelCoordinator>)coordinator;
-(id)totalUsageDescription:(id)arg1 ;
-(void)showMostUsedDetailListController:(id)arg1 ;
-(id)initWithCategoryUsageItem:(id)arg1 coordinator:(id)arg2 ;
-(STUsageDetailsViewModel *)usageDetailsViewModel;
@end
