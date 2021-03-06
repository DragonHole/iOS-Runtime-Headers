/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariSafeBrowsing/SafariSafeBrowsing-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface SSBLookupContext : NSObject <MCProfileConnectionObserver> {

	shared_ptr<SafeBrowsing::LookupContext>* _lookupContext;
	unsigned _observerToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedLookupContext;
-(void)lookUpURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_fetchCellularDataPlanWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setSafeBrowsingEnabledStateNeedsUpdate;
-(void)_forceDatabaseUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getDatabaseStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getServiceStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_forceLoadRemoteConfigurationFromDiskWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_forceUpdateRemoteConfigurationFromServerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_deleteAllDatabasesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_getLastDatabaseUpdateTimeWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_lookUpURLs:(id)arg1 forProtectionType:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)dealloc;
@end

