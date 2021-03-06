/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class _ATXDataStore, NSMapTable, _ATXInternalUninstallNotification, NSObject, NSString, NSDate;

@interface _ATXAppLaunchSequenceManager : NSObject {

	_ATXDataStore* _datastore;
	NSMapTable* _appLaunchSequence;
	NSMapTable* _appActionLaunchSequence;
	_ATXInternalUninstallNotification* _uninstallNotificationListener;
	NSObject*<OS_dispatch_queue> _syncQueue;
	NSString* _lastAppActionLaunch;
	NSDate* _lastAppActionLaunchDate;

}
+(id)sharedInstance;
-(id)initWithDataStore:(id)arg1 ;
-(id)initWithInMemoryStore;
-(id)launchSequenceForBundle:(id)arg1 ;
-(id)launchSequenceForAppAction:(id)arg1 ;
-(void)decayAllLaunchSequencesWithHalfLife:(double)arg1 ;
-(void)decayAllAppActionLaunchSequencesWithHalfLife:(double)arg1 ;
-(void)deleteAllLaunchesForBundles:(id)arg1 ;
-(void)deleteAllLaunchesForAppActions:(id)arg1 ;
-(id)launchSequence;
-(void)addBundleIdToLaunchSequence:(id)arg1 date:(id)arg2 ;
-(id)syncQueue;
-(id)init;
@end

