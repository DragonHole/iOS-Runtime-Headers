/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCJSONEncodableObjectProviding.h>
#import <libobjc.A.dylib/FCPrivateZoneSyncManagerDelegate.h>
#import <libobjc.A.dylib/FCPrivateRecordSyncManagerDelegate.h>
#import <libobjc.A.dylib/FCCommandQueueDelegate.h>
#import <libobjc.A.dylib/FCCKZoneRestorationSource.h>
#import <libobjc.A.dylib/FCCKZonePruningAssistant.h>

@class FCPushNotificationCenter, NSString, FCCommandQueue, NSArray, FCAsyncSerialQueue, NSHashTable, FCCloudContext, FCKeyValueStore;

@interface FCPrivateDataController : NSObject <FCJSONEncodableObjectProviding, FCPrivateZoneSyncManagerDelegate, FCPrivateRecordSyncManagerDelegate, FCCommandQueueDelegate, FCCKZoneRestorationSource, FCCKZonePruningAssistant> {

	BOOL _waitingForFirstSync;
	BOOL _preparedForUse;
	BOOL _syncingEnabled;
	FCPushNotificationCenter* _pushNotificationCenter;
	NSString* _storeDirectory;
	FCCommandQueue* _commandQueue;
	NSArray* _syncManagers;
	unsigned long long _changeCount;
	FCAsyncSerialQueue* _syncQueue;
	NSHashTable* _stateObservers;
	FCCloudContext* _context;
	NSHashTable* _observers;
	FCKeyValueStore* _localStore;

}

@property (getter=isSyncingEnabled,nonatomic,readonly) BOOL syncingEnabled; 
@property (nonatomic,retain) FCPushNotificationCenter * pushNotificationCenter;              //@synthesize pushNotificationCenter=_pushNotificationCenter - In the implementation block
@property (nonatomic,copy) NSString * storeDirectory;                                        //@synthesize storeDirectory=_storeDirectory - In the implementation block
@property (nonatomic,retain) FCCommandQueue * commandQueue;                                  //@synthesize commandQueue=_commandQueue - In the implementation block
@property (assign,getter=hasBeenPreparedForUse,nonatomic) BOOL preparedForUse;               //@synthesize preparedForUse=_preparedForUse - In the implementation block
@property (getter=isWaitingForFirstSync) BOOL waitingForFirstSync;                           //@synthesize waitingForFirstSync=_waitingForFirstSync - In the implementation block
@property (nonatomic,retain) NSArray * syncManagers;                                         //@synthesize syncManagers=_syncManagers - In the implementation block
@property (assign,nonatomic) unsigned long long changeCount;                                 //@synthesize changeCount=_changeCount - In the implementation block
@property (nonatomic,retain) FCAsyncSerialQueue * syncQueue;                                 //@synthesize syncQueue=_syncQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * stateObservers;                                   //@synthesize stateObservers=_stateObservers - In the implementation block
@property (assign,getter=isSyncingEnabled,nonatomic) BOOL syncingEnabled;                    //@synthesize syncingEnabled=_syncingEnabled - In the implementation block
@property (nonatomic,readonly) FCCloudContext * context;                                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                      //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) FCKeyValueStore * localStore;                                 //@synthesize localStore=_localStore - In the implementation block
@property (getter=isDirty,nonatomic,readonly) BOOL dirty; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isLocalStoreKeyInternal:(id)arg1 ;
+(id)internalLocalStoreKeys;
+(BOOL)requiresPushNotificationSupport;
+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(id)backingRecordZoneIDs;
+(id)backingRecordIDs;
+(id)localStoreFilename;
+(unsigned long long)localStoreVersion;
+(id)commandStoreFileName;
+(long long)commandQueueUrgency;
+(id)commandsToMergeLocalDataToCloud:(id)arg1 ;
+(id)desiredKeys;
+(void)populateLocalStoreClassRegistry:(id)arg1 ;
+(id)localStoreMigrator;
+(void)configureKeyValueStoreForJSONHandling:(id)arg1 ;
-(BOOL)isDirty;
-(void)forceSyncWithCompletion:(/*^block*/id)arg1 ;
-(FCKeyValueStore *)localStore;
-(id)initWithContext:(id)arg1 pushNotificationCenter:(id)arg2 storeDirectory:(id)arg3 ;
-(void)addCommandToCommandQueue:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)handleSyncWithChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2 ;
-(BOOL)canHelpRestoreZoneName:(id)arg1 ;
-(id)recordsForRestoringZoneName:(id)arg1 ;
-(void)manualDirty;
-(BOOL)canHelpPruneZoneName:(id)arg1 ;
-(id)pruneRecords:(id)arg1 forZoneName:(id)arg2 ;
-(double)softMaxRecordAgeWhenMigratingZoneName:(id)arg1 ;
-(unsigned long long)softMaxRecordCountWhenMigratingZoneName:(id)arg1 ;
-(id)jsonEncodableObject;
-(void)recordSyncManagerNotifyObservers:(id)arg1 ;
-(void)recordSyncManager:(id)arg1 stateDidChange:(id)arg2 ;
-(void)syncWithCompletion:(/*^block*/id)arg1 ;
-(void)performFirstSyncWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)storeDirectory;
-(FCPushNotificationCenter *)pushNotificationCenter;
-(long long)_qualityOfServiceForNextSync;
-(void)handleSyncCompletion;
-(NSHashTable *)stateObservers;
-(void)_serialSyncWithCompletion:(/*^block*/id)arg1 ;
-(void)_syncWithCondition:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_markAsDirtyAndNotifyObservers:(BOOL)arg1 ;
-(BOOL)isWaitingForFirstSync;
-(FCCommandQueue *)commandQueue;
-(NSArray *)syncManagers;
-(id)_newSyncState;
-(void)_notifyObservers;
-(long long)_qualityOfServiceForFirstSync:(BOOL)arg1 ;
-(void)setWaitingForFirstSync:(BOOL)arg1 ;
-(void)zoneSyncManager:(id)arg1 stateDidChange:(id)arg2 ;
-(void)zoneSyncManagerNotifyObservers:(id)arg1 ;
-(long long)commandQueue:(id)arg1 qualityOfServiceForCommand:(id)arg2 ;
-(void)syncWithCallbackQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)saveWithCompletion:(/*^block*/id)arg1 ;
-(void)addStateObserver:(id)arg1 ;
-(void)removeStateObserver:(id)arg1 ;
-(BOOL)isBackedByAnyRecordZoneIDsInSet:(id)arg1 ;
-(void)setPushNotificationCenter:(FCPushNotificationCenter *)arg1 ;
-(void)setStoreDirectory:(NSString *)arg1 ;
-(void)setCommandQueue:(FCCommandQueue *)arg1 ;
-(BOOL)hasBeenPreparedForUse;
-(void)setPreparedForUse:(BOOL)arg1 ;
-(void)setSyncManagers:(NSArray *)arg1 ;
-(void)setStateObservers:(NSHashTable *)arg1 ;
-(void)setSyncingEnabled:(BOOL)arg1 ;
-(void)_possiblySimulateCrashWithMessage:(id)arg1 ;
-(void)enableSyncing;
-(void)disableSyncing;
-(void)createLocalStore;
-(void)mergeLocalStoreWithCloud;
-(void)prepareForUse;
-(void)assertReadyForUse;
-(BOOL)isSyncingEnabled;
-(FCAsyncSerialQueue *)syncQueue;
-(void)setSyncQueue:(FCAsyncSerialQueue *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(FCCloudContext *)context;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
-(unsigned long long)changeCount;
-(void)setChangeCount:(unsigned long long)arg1 ;
@end

