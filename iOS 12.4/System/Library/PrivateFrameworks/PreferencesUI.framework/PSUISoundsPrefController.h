/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/PSListControllerTestableSpecifiers.h>

@class PSSpecifier, NSString;

@interface PSUISoundsPrefController : PSListController <PSListControllerTestableSpecifiers> {

	float _volume;
	float _rateLimitedVolume;
	BOOL _hasTelephony;
	BOOL _volumeHUDsuppressed;
	double _lastTime;
	PSSpecifier* _voiceMailSpecifier;
	long long _voiceMailSpecifierIndex;
	BOOL _sliderActive;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)booleanCapabilitiesToTest;
-(int)_deviceType;
-(void)endInterruption;
-(void)didLock;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)willResignActive;
-(void)willBecomeActive;
-(id)specifiers;
-(void)volumeChangedExternally:(id)arg1 ;
-(void)updateVoiceMailVisibility;
-(void)didBackground;
-(void)willForeground;
-(BOOL)_canChangeRingtoneWithButtons;
-(void)setVolumeHUDsuppression:(BOOL)arg1 ;
-(void)willHideSlider;
-(void)willShowSlider;
-(void)setSystemHapticsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)systemHapticsEnabled:(id)arg1 ;
-(void)updateVolume;
-(void)startRingtonePreview;
-(void)setVolumeAfterRateLimiting;
-(void)setSoundEffects:(id)arg1 specifier:(id)arg2 ;
-(id)soundEffects:(id)arg1 ;
-(id)volume:(id)arg1 ;
-(void)setVolume:(id)arg1 specifier:(id)arg2 ;
-(id)detailTextForToneWithSpecifier:(id)arg1 ;
-(id)shouldPlayCalendarSound:(id)arg1 ;
-(void)setPlayKeyboardSound:(id)arg1 specifier:(id)arg2 ;
-(id)canChangeRingtoneWithButtons:(id)arg1 ;
-(void)setCanChangeRingtoneWithButtons:(id)arg1 specifier:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

