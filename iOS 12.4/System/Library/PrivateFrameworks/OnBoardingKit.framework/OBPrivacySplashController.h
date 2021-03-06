/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <OnBoardingKit/OBSplashController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/OBNavigationBarTitleTransistor.h>

@class OBPrivacyFlow, UINavigationController, NSString, UIButton, UILabel, OBNavigationBarDisplayState;

@interface OBPrivacySplashController : OBSplashController <UIScrollViewDelegate, OBNavigationBarTitleTransistor> {

	OBPrivacyFlow* _flow;
	UINavigationController* _nav;
	BOOL _suppressPerPageAnalyticsLogging;
	BOOL _allowsOpeningSafari;
	BOOL _showLinkToPrivacyGateway;
	BOOL _showsLinkToUnifiedAbout;
	BOOL _useSmallTitle;
	BOOL _forceLargeMargins;
	BOOL _useModalStyle;
	BOOL _isCombined;
	NSString* _displayLanguage;
	unsigned long long _displayDeviceType;
	UIButton* _linkToPrivacyGatewayButton;
	UILabel* _privacyGatewayDescription;
	UILabel* _linkToPrivacyGateway;
	UIButton* _unifiedAboutButton;
	OBNavigationBarDisplayState* _cachedBarState;

}

@property (retain) UIButton * linkToPrivacyGatewayButton;                               //@synthesize linkToPrivacyGatewayButton=_linkToPrivacyGatewayButton - In the implementation block
@property (retain) UILabel * privacyGatewayDescription;                                 //@synthesize privacyGatewayDescription=_privacyGatewayDescription - In the implementation block
@property (retain) UILabel * linkToPrivacyGateway;                                      //@synthesize linkToPrivacyGateway=_linkToPrivacyGateway - In the implementation block
@property (retain) UIButton * unifiedAboutButton;                                       //@synthesize unifiedAboutButton=_unifiedAboutButton - In the implementation block
@property (nonatomic,retain) OBNavigationBarDisplayState * cachedBarState;              //@synthesize cachedBarState=_cachedBarState - In the implementation block
@property (assign) BOOL suppressPerPageAnalyticsLogging;                                //@synthesize suppressPerPageAnalyticsLogging=_suppressPerPageAnalyticsLogging - In the implementation block
@property (assign) BOOL allowsOpeningSafari;                                            //@synthesize allowsOpeningSafari=_allowsOpeningSafari - In the implementation block
@property (assign,nonatomic) BOOL showLinkToPrivacyGateway;                             //@synthesize showLinkToPrivacyGateway=_showLinkToPrivacyGateway - In the implementation block
@property (assign) BOOL showsLinkToUnifiedAbout;                                        //@synthesize showsLinkToUnifiedAbout=_showsLinkToUnifiedAbout - In the implementation block
@property (assign) BOOL useSmallTitle;                                                  //@synthesize useSmallTitle=_useSmallTitle - In the implementation block
@property (assign) BOOL forceLargeMargins;                                              //@synthesize forceLargeMargins=_forceLargeMargins - In the implementation block
@property (retain) NSString * displayLanguage;                                          //@synthesize displayLanguage=_displayLanguage - In the implementation block
@property (assign) unsigned long long displayDeviceType;                                //@synthesize displayDeviceType=_displayDeviceType - In the implementation block
@property (assign) BOOL useModalStyle;                                                  //@synthesize useModalStyle=_useModalStyle - In the implementation block
@property (assign,nonatomic) BOOL isCombined;                                           //@synthesize isCombined=_isCombined - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)splashPageWithBundleIdentifier:(id)arg1 ;
-(void)updateNavigationBarAnimated:(BOOL)arg1 ;
-(void)setDarkMode:(BOOL)arg1 ;
-(void)setDisplayLanguage:(NSString *)arg1 ;
-(void)setRestoreState:(id)arg1 ;
-(void)setAllowsOpeningSafari:(BOOL)arg1 ;
-(BOOL)allowsOpeningSafari;
-(NSString *)displayLanguage;
-(id)initWithPrivacyIdentifier:(id)arg1 ;
-(id)initWithFlow:(id)arg1 ;
-(BOOL)suppressPerPageAnalyticsLogging;
-(void)setDisplayDeviceType:(unsigned long long)arg1 ;
-(void)_initializeFromBundle;
-(unsigned long long)displayDeviceType;
-(BOOL)shouldUseTiledTextViews;
-(BOOL)showLinkToPrivacyGateway;
-(void)setLinkToPrivacyGatewayButton:(UIButton *)arg1 ;
-(UIButton *)linkToPrivacyGatewayButton;
-(void)showPrivacyGateway:(id)arg1 ;
-(void)setPrivacyGatewayDescription:(UILabel *)arg1 ;
-(UILabel *)privacyGatewayDescription;
-(void)setLinkToPrivacyGateway:(UILabel *)arg1 ;
-(UILabel *)linkToPrivacyGateway;
-(BOOL)showsLinkToUnifiedAbout;
-(void)setUnifiedAboutButton:(UIButton *)arg1 ;
-(UIButton *)unifiedAboutButton;
-(void)showUnifiedAbout:(id)arg1 ;
-(void)updateFontForPrivacyGateway;
-(void)updateFontForUnifiedAboutButton;
-(BOOL)useSmallTitle;
-(BOOL)forceLargeMargins;
-(OBNavigationBarDisplayState *)cachedBarState;
-(void)setCachedBarState:(OBNavigationBarDisplayState *)arg1 ;
-(void)restoreNavigationBarAppearance;
-(id)_defaultButtonTitle;
-(void)setCurrentNavigationBarDisplayState:(id)arg1 ;
-(void)setDismissHandlerForDefaultButton:(/*^block*/id)arg1 ;
-(void)setSuppressPerPageAnalyticsLogging:(BOOL)arg1 ;
-(void)setShowLinkToPrivacyGateway:(BOOL)arg1 ;
-(void)setShowsLinkToUnifiedAbout:(BOOL)arg1 ;
-(void)setUseSmallTitle:(BOOL)arg1 ;
-(void)setForceLargeMargins:(BOOL)arg1 ;
-(BOOL)useModalStyle;
-(void)setUseModalStyle:(BOOL)arg1 ;
-(BOOL)isCombined;
-(void)setIsCombined:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

