/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCBoostableOperationThrottlerDelegate.h>

@protocol FCFetchCoordinatorDelegate;
@class NSHashTable, NSCountedSet, NSMapTable, NFMutexLock, FCBoostableOperationThrottler, NSString;

@interface FCFetchCoordinator : NSObject <FCBoostableOperationThrottlerDelegate> {

	id<FCFetchCoordinatorDelegate> _delegate;
	unsigned long long _maxConcurrentFetchCount;
	NSHashTable* _fetchGroups;
	NSCountedSet* _allKeys;
	NSMapTable* _fetchOperationsByGroup;
	NFMutexLock* _accessLock;
	FCBoostableOperationThrottler* _fetchThrottler;

}

@property (nonatomic,retain) NSHashTable * fetchGroups;                                   //@synthesize fetchGroups=_fetchGroups - In the implementation block
@property (nonatomic,retain) NSCountedSet * allKeys;                                      //@synthesize allKeys=_allKeys - In the implementation block
@property (nonatomic,retain) NSMapTable * fetchOperationsByGroup;                         //@synthesize fetchOperationsByGroup=_fetchOperationsByGroup - In the implementation block
@property (nonatomic,retain) NFMutexLock * accessLock;                                    //@synthesize accessLock=_accessLock - In the implementation block
@property (nonatomic,retain) FCBoostableOperationThrottler * fetchThrottler;              //@synthesize fetchThrottler=_fetchThrottler - In the implementation block
@property (assign,nonatomic,__weak) id<FCFetchCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long maxConcurrentFetchCount;                            //@synthesize maxConcurrentFetchCount=_maxConcurrentFetchCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)operationThrottlerPerformOperation:(id)arg1 ;
-(id)fetchKeys:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(id)fetchKeysUnconditionally:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(/*^block*/id)arg6 ;
-(NFMutexLock *)accessLock;
-(void)setAccessLock:(NFMutexLock *)arg1 ;
-(void)addFetchGroup:(id)arg1 ;
-(void)removeFetchGroup:(id)arg1 ;
-(void)cancelFetchesIfNeededWithLock;
-(void)beginFetchesIfNeededWithLock;
-(NSHashTable *)fetchGroups;
-(FCBoostableOperationThrottler *)fetchThrottler;
-(NSMapTable *)fetchOperationsByGroup;
-(unsigned long long)maxConcurrentFetchCount;
-(id)fetchKey:(id)arg1 qualityOfService:(long long)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setMaxConcurrentFetchCount:(unsigned long long)arg1 ;
-(void)setFetchGroups:(NSHashTable *)arg1 ;
-(void)setAllKeys:(NSCountedSet *)arg1 ;
-(void)setFetchOperationsByGroup:(NSMapTable *)arg1 ;
-(void)setFetchThrottler:(FCBoostableOperationThrottler *)arg1 ;
-(id)init;
-(void)setDelegate:(id<FCFetchCoordinatorDelegate>)arg1 ;
-(id<FCFetchCoordinatorDelegate>)delegate;
-(NSCountedSet *)allKeys;
@end

