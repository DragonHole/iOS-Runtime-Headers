/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PreferenceBundles/MobileSafariSettings.bundle/MobileSafariSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/SFSafariViewControllerDelegate.h>

@class PSTextFieldSpecifier, PSSpecifier, SFSafariViewController, WBSSavedPassword, NSArray, SafariSettingsFeatureManager, NSString;

@interface SafariSavedPasswordDetailController : PSListController <SFSafariViewControllerDelegate> {

	PSTextFieldSpecifier* _websiteSpecifier;
	PSTextFieldSpecifier* _usernameSpecifier;
	PSTextFieldSpecifier* _passwordSpecifier;
	PSSpecifier* _changePasswordButtonSpecifier;
	SFSafariViewController* _changePasswordSafariViewController;
	WBSSavedPassword* _savedPassword;
	NSArray* _reusedSavedPasswords;
	BOOL _editing;
	SafariSettingsFeatureManager* _featureManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
+(id)_valueOfSpecifier:(id)arg1 ;
+(id)_specifierWithName:(id)arg1 placeholder:(id)arg2 keyboardType:(long long)arg3 textChangeHandler:(/*^block*/id)arg4 ;
-(void)setSpecifier:(id)arg1 ;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)_willHideUIMenuController:(id)arg1 ;
-(void)safari_copyUserName:(id)arg1 ;
-(void)safari_copyPassword:(id)arg1 ;
-(void)safariViewControllerDidFinish:(id)arg1 ;
-(id)specifiers;
-(void)_updateSpecifiers;
-(void)_updateRightBarButtonItem;
-(void)_setEditing:(BOOL)arg1 ;
-(void)_endEditing:(id)arg1 ;
-(void)_edit:(id)arg1 ;
-(void)_cancelEditing:(id)arg1 ;
-(void)safari_sharePassword:(id)arg1 ;
-(void)_updateDoneButtonForWebsite:(id)arg1 user:(id)arg2 password:(id)arg3 ;
-(void)_sharePassword:(id)arg1 fromCell:(id)arg2 ;
-(void)_refreshSpecifiers;
-(void)_changePassword:(id)arg1 ;
-(id)_sharePasswordMenuItem;
-(BOOL)_savedUserIsEmpty;
-(BOOL)_savedPasswordIsEmpty;
-(BOOL)_isSpecifierForAutoFillItem:(id)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
@end

