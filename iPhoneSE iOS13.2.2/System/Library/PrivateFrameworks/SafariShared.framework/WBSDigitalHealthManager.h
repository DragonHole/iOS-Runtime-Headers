/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSDigitalHealthManagerDelegate;
@class DMFWebsitePolicyMonitor, NSMutableDictionary;

@interface WBSDigitalHealthManager : NSObject {

	DMFWebsitePolicyMonitor* _monitor;
	NSMutableDictionary* _trackedUrlsToUsageState;
	id<WBSDigitalHealthManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WBSDigitalHealthManagerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (getter=isDeviceManagementEnabled,readonly) BOOL deviceManagementEnabled; 
+(void)_updateWebpageUsage:(id)arg1 withDigitalHealthManagerUsageState:(unsigned long long)arg2 ;
+(void)deleteUsageHistoryForURL:(id)arg1 ;
+(void)deleteAllUsageHistory;
+(void)deleteUsageHistoryFromDate:(id)arg1 toDate:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id<WBSDigitalHealthManagerDelegate>)delegate;
-(void)setDelegate:(id<WBSDigitalHealthManagerDelegate>)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)startObserving;
-(void)stopObserving;
-(void)_historyItemsWereRemoved:(id)arg1 ;
-(void)_historyWasCleared:(id)arg1 ;
-(void)getOverlayStateForURLs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_requestPoliciesForWebsites:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isDeviceManagementEnabled;
-(void)updateUsageTrackingForURL:(id)arg1 toState:(unsigned long long)arg2 ;
-(void)stopUsageTrackingForURL:(id)arg1 ;
@end

