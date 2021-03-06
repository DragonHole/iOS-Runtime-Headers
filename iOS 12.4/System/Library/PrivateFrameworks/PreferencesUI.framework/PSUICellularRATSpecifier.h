/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>

@class PSListController, PSSpecifier, CTXPCServiceSubscriptionContext, PSListItemsController;

@interface PSUICellularRATSpecifier : PSSpecifier {

	PSListController* _hostController;
	PSSpecifier* _mobileDataGroup;
	int _RATSwitchKind;
	BOOL _3GOverrideTo4G;
	BOOL _LTEOverrideTo4G;
	CTXPCServiceSubscriptionContext* _subscriptionContext;
	PSListItemsController* _RATModeDrilldownController;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionContext * subscriptionContext;                  //@synthesize subscriptionContext=_subscriptionContext - In the implementation block
@property (assign,nonatomic,__weak) PSListItemsController * RATModeDrilldownController;              //@synthesize RATModeDrilldownController=_RATModeDrilldownController - In the implementation block
-(BOOL)updateState;
-(void)setRATModeDrilldownController:(PSListItemsController *)arg1 ;
-(id)initWithName:(id)arg1 identifier:(id)arg2 hostController:(id)arg3 subscriptionContext:(id)arg4 groupSpecifierToUpdateFooterFor:(id)arg5 ;
-(void)setRATModeState:(id)arg1 specifier:(id)arg2 ;
-(id)getRATModeState:(id)arg1 ;
-(void)updateRATState;
-(BOOL)shouldShowLTEOptions;
-(BOOL)shouldShowLegacyRATOptions;
-(BOOL)_updateMobileDataGroupContentShowingRAT:(BOOL)arg1 ;
-(void)_setRATModeConfirmed:(int)arg1 ;
-(id)localizableRATModeStringKeyForKey:(id)arg1 targetMode:(int)arg2 ;
-(void)acceptedRATSwitch:(id)arg1 ;
-(void)canceledRATSwitch:(id)arg1 ;
-(CTXPCServiceSubscriptionContext *)subscriptionContext;
-(BOOL)supportsVoLTE;
-(id)getLTEService:(id)arg1 ;
-(void)setLTEService:(id)arg1 specifier:(id)arg2 ;
-(id)getRATSwitchIsOn:(id)arg1 ;
-(void)setRATSwitchIsOn:(id)arg1 specifier:(id)arg2 ;
-(void)updateRATSpecifiers;
-(void)_setRATModeStateIsOn:(BOOL)arg1 ;
-(void)reloadRATStatus:(id)arg1 ;
-(void)setSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(PSListItemsController *)RATModeDrilldownController;
@end

