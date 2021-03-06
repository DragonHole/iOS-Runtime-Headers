/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol WFNetworkListing <NSObject>
@property (assign,nonatomic) BOOL showOtherNetwork; 
@property (assign) float currentNetworkScaledRSSI; 
@property (retain) id<WFNetworkListRecord> currentNetwork; 
@property (assign) long long currentNetworkState; 
@property (assign,nonatomic) long long deviceCapability; 
@property (nonatomic,copy) NSString * currentNetworkSubtitle; 
@property (assign,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL userAutoJoinEnabled; 
@optional
-(BOOL)userAutoJoinEnabled;
-(long long)deviceCapability;
-(void)setDeviceCapability:(long long)arg1;
-(NSString *)currentNetworkSubtitle;
-(void)setScanning:(BOOL)arg1;
-(void)setCurrentNetwork:(id)arg1 scrollToRecord:(BOOL)arg2;
-(void)setCurrentNetworkSubtitle:(id)arg1;
-(BOOL)supportsWiFiPasswordSharing;
-(void)networkListDelegateWillPresentAccessoryViewController:(id)arg1;
-(BOOL)shouldPromptWhenPersonalHotspotIsEnabled;
-(BOOL)shouldPromptWhenCarPlaySessionIsActive;
-(void)networkListDelegateDidPresentAccessoryViewController:(id)arg1;
-(void)updateViewsForNetworks:(id)arg1;
-(void)setUserAutoJoinEnabled:(BOOL)arg1;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1;

@required
-(void)setListDelegate:(id)arg1;
-(id<WFNetworkListRecord>)currentNetwork;
-(BOOL)showOtherNetwork;
-(float)currentNetworkScaledRSSI;
-(void)setCurrentNetwork:(id)arg1;
-(void)setShowOtherNetwork:(BOOL)arg1;
-(void)setNetworks:(id)arg1;
-(void)powerStateDidChange:(BOOL)arg1;
-(void)setCurrentNetworkScaledRSSI:(float)arg1;
-(void)setCurrentNetworkState:(long long)arg1;
-(long long)currentNetworkState;
-(void)refresh;

@end

