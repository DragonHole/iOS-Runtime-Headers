/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/SFAirDropDiscoveryControllerDelegate.h>

@class SFAirDropDiscoveryController, PSSpecifier, NSString;

@interface PSGAirDropController : PSListController <SFAirDropDiscoveryControllerDelegate> {

	SFAirDropDiscoveryController* _airDropDiscoveryController;
	PSSpecifier* _groupSpecifier;
	PSSpecifier* _offSpecifier;
	PSSpecifier* _contactsOnlySpecifier;
	PSSpecifier* _everyoneSpecifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)discoveryControllerSettingsDidChange:(id)arg1 ;
-(void)discoveryControllerVisibilityDidChange:(id)arg1 ;
-(void)_updateSpecifiersFromPreferences;
-(void)_refreshFooterForSpecifier:(id)arg1 ;
@end
