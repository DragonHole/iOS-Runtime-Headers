/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATNetworkReachabilityDelegate.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol CRKCloudZoneSyncDelegate;
@class NSString, CRKCloudAssetStore, CKContainer, NSMutableArray, CATStateMachine, CRKCloudLocalDeltaQueue, CATOperationQueue, APSConnection, NSMutableDictionary, CATNetworkReachability, CKServerChangeToken, CRKFileBasedKeyedDataStore, NSNumber, CKRecordZoneID;

@interface CRKCloudZoneSyncEngine : NSObject <CATNetworkReachabilityDelegate, APSConnectionDelegate> {

	NSString* mEnrollmentStatusKey;
	NSString* mLocalDeltaQueueKey;
	NSString* mPushTopic;
	NSString* mRecordCacheKey;
	NSString* mServerTokenKey;
	NSString* mSubscribedKey;
	BOOL _reachabilityScheduled;
	BOOL _startScheduled;
	long long _enrollmentStatus;
	CRKCloudAssetStore* _assetStore;
	CKContainer* _container;
	id<CRKCloudZoneSyncDelegate> _delegate;
	NSMutableArray* _fetchChangesCompletionStash;
	CATStateMachine* _fsm;
	CRKCloudLocalDeltaQueue* _localDeltaQueue;
	CATOperationQueue* _operationQueue;
	APSConnection* _pushConnection;
	NSMutableDictionary* _pushCompletionsByLocalDeltaIdentifier;
	CATNetworkReachability* _reachability;
	NSMutableDictionary* _recordCache;
	CKServerChangeToken* _serverToken;
	CRKFileBasedKeyedDataStore* _store;
	NSNumber* _subscribed;
	CKRecordZoneID* _zoneId;

}

@property (nonatomic,retain) CRKCloudAssetStore * assetStore;                                          //@synthesize assetStore=_assetStore - In the implementation block
@property (nonatomic,retain) CKContainer * container;                                                  //@synthesize container=_container - In the implementation block
@property (assign,nonatomic,__weak) id<CRKCloudZoneSyncDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long enrollmentStatus;                                               //@synthesize enrollmentStatus=_enrollmentStatus - In the implementation block
@property (nonatomic,readonly) NSMutableArray * fetchChangesCompletionStash;                           //@synthesize fetchChangesCompletionStash=_fetchChangesCompletionStash - In the implementation block
@property (nonatomic,retain) CATStateMachine * fsm;                                                    //@synthesize fsm=_fsm - In the implementation block
@property (nonatomic,retain) CRKCloudLocalDeltaQueue * localDeltaQueue;                                //@synthesize localDeltaQueue=_localDeltaQueue - In the implementation block
@property (nonatomic,retain) CATOperationQueue * operationQueue;                                       //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) APSConnection * pushConnection;                                           //@synthesize pushConnection=_pushConnection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pushCompletionsByLocalDeltaIdentifier;              //@synthesize pushCompletionsByLocalDeltaIdentifier=_pushCompletionsByLocalDeltaIdentifier - In the implementation block
@property (nonatomic,retain) CATNetworkReachability * reachability;                                    //@synthesize reachability=_reachability - In the implementation block
@property (assign,nonatomic) BOOL reachabilityScheduled;                                               //@synthesize reachabilityScheduled=_reachabilityScheduled - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * recordCache;                                      //@synthesize recordCache=_recordCache - In the implementation block
@property (nonatomic,retain) CKServerChangeToken * serverToken;                                        //@synthesize serverToken=_serverToken - In the implementation block
@property (assign,nonatomic) BOOL startScheduled;                                                      //@synthesize startScheduled=_startScheduled - In the implementation block
@property (nonatomic,retain) CRKFileBasedKeyedDataStore * store;                                       //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) NSNumber * subscribed;                                                    //@synthesize subscribed=_subscribed - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneId;                                                  //@synthesize zoneId=_zoneId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)shutDownWithCompletion:(/*^block*/id)arg1 ;
-(void)shutDown;
-(NSNumber *)subscribed;
-(void)setSubscribed:(NSNumber *)arg1 ;
-(CRKFileBasedKeyedDataStore *)store;
-(CRKCloudAssetStore *)assetStore;
-(void)setAssetStore:(CRKCloudAssetStore *)arg1 ;
-(CKServerChangeToken *)serverToken;
-(id)initWithDelegate:(id)arg1 store:(id)arg2 container:(id)arg3 zoneId:(id)arg4 ;
-(void)pushLocalDelta:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)cloudRecordFromCKRecord:(id)arg1 ;
-(void)cleanupZoneWithCompletion:(/*^block*/id)arg1 ;
-(void)initilizeStateMachine;
-(void)setFsm:(CATStateMachine *)arg1 ;
-(CATStateMachine *)fsm;
-(void)enterSettingUpStateWithContext:(id)arg1 ;
-(void)privateBeginShutDown;
-(void)privateBeginReady;
-(void)privateBeginRunning;
-(void)fetchChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)stashFetchChangesWithContext:(id)arg1 ;
-(void)enqueueLocalDeltaWithContext:(id)arg1 ;
-(void)requestStartWithConetext:(id)arg1 ;
-(void)enterReadyStateWithContext:(id)arg1 ;
-(void)privateBeginFetching;
-(void)checkRecordZoneForRecordsWithContext:(id)arg1 ;
-(void)enterRunningStateWithContext:(id)arg1 ;
-(void)privateBeginPaused;
-(void)networkBecameUnreachable;
-(void)fetchRemoteChangesWithContext:(id)arg1 ;
-(void)networkBecameReachable;
-(void)enterPausedStateWithContext:(id)arg1 ;
-(void)enterStoppedStateWithContext:(id)arg1 ;
-(void)enterShutDownStateWithContext:(id)arg1 ;
-(void)enterCleaningStateWithContext:(id)arg1 ;
-(CRKCloudLocalDeltaQueue *)localDeltaQueue;
-(/*^block*/id)completionFromContext:(id)arg1 ;
-(void)enableRemoteNotificationsWithCompletion:(/*^block*/id)arg1 ;
-(void)enableReachability;
-(void)setStartScheduled:(BOOL)arg1 ;
-(void)setEnrollmentStatus:(long long)arg1 ;
-(void)disableReachability;
-(void)dumpFetchChangesStash:(BOOL)arg1 ;
-(void)safeTransitionForSelector:(SEL)arg1 ;
-(void)enableRemoteNotificationsOperationDidFinish:(id)arg1 userInfo:(id)arg2 ;
-(BOOL)startScheduled;
-(void)retryableDeleteRecordZoneOperationDidFinish:(id)arg1 userInfo:(id)arg2 ;
-(void)setServerToken:(CKServerChangeToken *)arg1 ;
-(void)setLocalDeltaQueue:(CRKCloudLocalDeltaQueue *)arg1 ;
-(void)retryableFetchZoneChangesOperationDidFinish:(id)arg1 userInfo:(id)arg2 ;
-(void)debounceRemoteDelta:(id)arg1 ;
-(void)attemptPushNextLocalDelta;
-(void)debounceLocalDelta:(id)arg1 ;
-(void)enqueueLocalDelta:(id)arg1 ;
-(NSMutableDictionary *)pushCompletionsByLocalDeltaIdentifier;
-(NSMutableArray *)fetchChangesCompletionStash;
-(void)retryablePeekRecordZoneOperationDidFinish:(id)arg1 userInfo:(id)arg2 ;
-(void)safeTransitionForSelector:(SEL)arg1 withContext:(id)arg2 ;
-(void)panicPullWithCompletion:(/*^block*/id)arg1 ;
-(void)setRecordCache:(NSMutableDictionary *)arg1 ;
-(void)setRecordCacheRecord:(id)arg1 forRecordName:(id)arg2 ;
-(void)removeRecordCacheRecordName:(id)arg1 ;
-(BOOL)reachabilityScheduled;
-(void)setReachabilityScheduled:(BOOL)arg1 ;
-(void)pushLocalDeltaOperationDidFinish:(id)arg1 ;
-(void)dequeueLocalDelta:(id)arg1 ;
-(BOOL)hasFetchedFromServer;
-(void)cleanupZone;
-(void)panicPull;
-(void)pushLocalDelta:(id)arg1 ;
-(id)localDeltaFromTuple:(id)arg1 ;
-(long long)enrollmentStatus;
-(void)setPushCompletionsByLocalDeltaIdentifier:(NSMutableDictionary *)arg1 ;
-(void)stopWithCompletion:(/*^block*/id)arg1 ;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)setStore:(CRKFileBasedKeyedDataStore *)arg1 ;
-(NSMutableDictionary *)recordCache;
-(void)setZoneId:(CKRecordZoneID *)arg1 ;
-(CKRecordZoneID *)zoneId;
-(void)deleteZoneWithCompletion:(/*^block*/id)arg1 ;
-(void)setPushConnection:(APSConnection *)arg1 ;
-(APSConnection *)pushConnection;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)reachabilityDidChange:(id)arg1 ;
-(CATNetworkReachability *)reachability;
-(void)setReachability:(CATNetworkReachability *)arg1 ;
-(void)setDelegate:(id<CRKCloudZoneSyncDelegate>)arg1 ;
-(id<CRKCloudZoneSyncDelegate>)delegate;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)start;
-(void)setOperationQueue:(CATOperationQueue *)arg1 ;
-(CATOperationQueue *)operationQueue;
-(void)fetchChanges;
@end

