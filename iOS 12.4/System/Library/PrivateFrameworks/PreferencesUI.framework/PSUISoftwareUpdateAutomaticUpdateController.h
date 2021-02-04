/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface PSUISoftwareUpdateAutomaticUpdateController : PSListController {

	PSSpecifier* _automaticUpdateGroup;
	PSSpecifier* _automaticUpdateSwitchSpecifier;

}

@property (nonatomic,retain) PSSpecifier * automaticUpdateGroup;                        //@synthesize automaticUpdateGroup=_automaticUpdateGroup - In the implementation block
@property (nonatomic,retain) PSSpecifier * automaticUpdateSwitchSpecifier;              //@synthesize automaticUpdateSwitchSpecifier=_automaticUpdateSwitchSpecifier - In the implementation block
-(id)specifiers;
-(void)setAutomaticUpdateGroup:(PSSpecifier *)arg1 ;
-(PSSpecifier *)automaticUpdateGroup;
-(void)armedAutoUpdateForAutomaticUpdatesToggled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)automaticUpdateStatus;
-(void)setAutomaticUpdateSwitchSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)automaticUpdateSwitchSpecifier;
@end
