/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class PSSpecifier;

@interface AssistantAudioFeedbackController : PSListController {

	PSSpecifier* _switchWithRingerSpecifier;
	PSSpecifier* _alwaysSpecifier;
	PSSpecifier* _handsfreeSpecifier;
	PSSpecifier* _groupSpecifier;
	long long _useDeviceSpeakerForTTSPreference;

}
+(id)bundle;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)specifiers;
-(void)_updateSpecifiersFromPreferences;
-(void)_refreshFooterForSpecifier:(id)arg1 ;
-(id)_localizeTriggerString:(id)arg1 ;
-(void)preferencesDidChange:(id)arg1 ;
-(id)footerVariant;
@end
