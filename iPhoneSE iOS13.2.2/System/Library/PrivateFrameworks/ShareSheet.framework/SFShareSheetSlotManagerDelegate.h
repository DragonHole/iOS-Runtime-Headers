/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFShareSheetSlotManagerDelegate <NSObject>
@required
-(void)dataSourceUpdatedWithSessionConfiguration:(id)arg1;
-(void)connectionInterrupted;
-(void)performActivityInHostWithUUID:(id)arg1;
-(void)performExtensionActivityInHostWithBundleID:(id)arg1 request:(id)arg2;
-(void)performAirDropActivityInHostWithNoContentView:(BOOL)arg1;
-(void)performShortcutActivityInHostWithBundleID:(id)arg1 singleUseToken:(id)arg2;
-(void)willPerformInServiceActivityWithRequest:(id)arg1 completion:(/*^block*/id)arg2;
-(void)performUserDefaultsWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 orderedUUIDs:(id)arg3 activityCategory:(long long)arg4;
-(void)setProgress:(id)arg1 withTopText:(id)arg2 bottomText:(id)arg3 forNodeWithIdentifier:(id)arg4 shouldPulse:(id)arg5 animated:(BOOL)arg6;

@end

