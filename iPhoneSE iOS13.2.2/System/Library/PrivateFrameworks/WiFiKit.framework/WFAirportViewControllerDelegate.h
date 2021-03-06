/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFAirportViewControllerDelegate <NSObject,WFNetworkListDelegate>
@required
-(BOOL)networkListViewControllerNetworkRestrictionActive:(id)arg1;
-(BOOL)networkListViewControllerPowerModificationDisabled:(id)arg1;
-(id)airportSettingsViewController:(id)arg1 unconfiguredAccessoriesGroupHeaderTitle:(id)arg2;
-(long long)airportSettingsViewControllerAskToJoinMode:(id)arg1;
-(void)airportSettingsViewController:(id)arg1 setAskToJoinMode:(long long)arg2;
-(BOOL)airportSettingsViewControllerShouldShowDiagnosticsMode:(id)arg1;
-(void)airportSettingsViewControllerDidTapDiagnosticsMode:(id)arg1;
-(BOOL)airportSettingsViewControllerCurrentNetworkConnectionIsProblematic:(id)arg1;
-(void)airportSettingsViewControllerDidTapDataUsage:(id)arg1;
-(BOOL)airportSettingsViewControllerShouldShowKnownNetworks:(id)arg1;
-(void)airportSettingsViewControllerDidTapKnownNetworks:(id)arg1;

@end

