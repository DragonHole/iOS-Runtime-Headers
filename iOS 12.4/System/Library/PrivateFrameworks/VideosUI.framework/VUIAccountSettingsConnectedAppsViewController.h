/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier, NSArray, VideosSettingsController;

@interface VUIAccountSettingsConnectedAppsViewController : PSListController {

	int _didChangeNotificationToken;
	BOOL _ignoreChanges;
	PSSpecifier* _appGroup;
	NSArray* _permissionsSpecifiers;
	NSArray* _appSpecifiers;
	VideosSettingsController* _coreSettingsController;
	BOOL _didCheckBags;

}
-(id)specifiers;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)_alertStyle;
-(void)_stopAppSpinner;
-(void)_loadAppGroup;
-(void)_checkSettingsAndReload;
-(id)_appGroupSpecifier;
-(void)_addPrivacyFooterToGroup:(id)arg1 ;
-(void)_showPrivacySheet:(id)arg1 ;
-(void)_toggleSpecifier:(id)arg1 sender:(id)arg2 ;
-(id)_accessStatusForSpecifier:(id)arg1 ;
-(void)_showVppaExpiredPrompt:(id)arg1 ;
-(void)_promptToEnableChannel:(id)arg1 withExternalID:(id)arg2 ;
-(void)_promptToDisableChannel:(id)arg1 withExternalID:(id)arg2 ;
-(void)_startAppSpinner;
@end
