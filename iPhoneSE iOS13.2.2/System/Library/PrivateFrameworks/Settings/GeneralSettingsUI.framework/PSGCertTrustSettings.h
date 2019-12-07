/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralSettingsUI/GeneralSettingsUI-Structs.h>
#import <Preferences/PSListController.h>

@interface PSGCertTrustSettings : PSListController {

	id _profileListChangedNotificationObserver;

}

@property (nonatomic,retain) id profileListChangedNotificationObserver;              //@synthesize profileListChangedNotificationObserver=_profileListChangedNotificationObserver - In the implementation block
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(void)setProfileListChangedNotificationObserver:(id)arg1 ;
-(id)profileListChangedNotificationObserver;
-(id)trustVersionString:(id)arg1 ;
-(id)trustAssetVersionString:(id)arg1 ;
-(id)specifierForTrustSettings:(SecCertificateRef)arg1 isRestricted:(BOOL)arg2 ;
-(void)setFullTrustEnabled:(id)arg1 forSpecifier:(id)arg2 ;
-(id)isFullTrustEnabled:(id)arg1 ;
@end
