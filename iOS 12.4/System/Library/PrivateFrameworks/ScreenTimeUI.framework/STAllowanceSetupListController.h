/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@protocol STAllowanceSetupListControllerDelegate;
@class NSArray, PSSpecifier;

@interface STAllowanceSetupListController : PSListController {

	BOOL _creatingNewAllowance;
	NSArray* _initialSelectedIdentifiers;
	id<STAllowanceSetupListControllerDelegate> _delegate;
	PSSpecifier* _categoriesGroupSpecifier;
	PSSpecifier* _allAppsAndCategoriesSpecifier;

}

@property (nonatomic,retain) PSSpecifier * categoriesGroupSpecifier;                   //@synthesize categoriesGroupSpecifier=_categoriesGroupSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * allAppsAndCategoriesSpecifier;              //@synthesize allAppsAndCategoriesSpecifier=_allAppsAndCategoriesSpecifier - In the implementation block
@property (nonatomic,copy) NSArray * initialSelectedIdentifiers;                       //@synthesize initialSelectedIdentifiers=_initialSelectedIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL creatingNewAllowance;                              //@synthesize creatingNewAllowance=_creatingNewAllowance - In the implementation block
@property (__weak) id<STAllowanceSetupListControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(void)addButtonTapped:(id)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)cancelButtonTapped:(id)arg1 ;
-(BOOL)creatingNewAllowance;
-(id)initWithSelectedIdentifiers:(id)arg1 creatingNewAllowance:(BOOL)arg2 ;
-(void)setInitialSelectedIdentifiers:(NSArray *)arg1 ;
-(NSArray *)initialSelectedIdentifiers;
-(PSSpecifier *)categoriesGroupSpecifier;
-(void)setCategoriesGroupSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)allAppsAndCategoriesSpecifier;
-(void)setAllAppsAndCategoriesSpecifier:(PSSpecifier *)arg1 ;
-(void)setDelegate:(id<STAllowanceSetupListControllerDelegate>)arg1 ;
-(id<STAllowanceSetupListControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

