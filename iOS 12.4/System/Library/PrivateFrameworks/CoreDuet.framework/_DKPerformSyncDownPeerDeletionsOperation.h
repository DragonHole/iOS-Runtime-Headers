/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <CoreDuet/_DKSyncCompositeOperation.h>

@protocol _DKSyncLocalKnowledgeStorage, _DKSyncRemoteKnowledgeStorage, _DKKeyValueStore;
@class _DKSyncPeer, _DKSync2Policy, _DKSyncType, _CDMutablePerfMetric, _DKSyncHistory, NSString, NSDate;

@interface _DKPerformSyncDownPeerDeletionsOperation : _DKSyncCompositeOperation {

	id<_DKSyncLocalKnowledgeStorage> _localStorage;
	id<_DKSyncRemoteKnowledgeStorage> _transport;
	_DKSyncPeer* _peer;
	_DKSync2Policy* _policy;
	_DKSyncType* _type;
	_CDMutablePerfMetric* _perfMetric;
	CDPerfEvent _perfEvent;
	BOOL _highPriority;
	_DKSyncHistory* _history;
	id<_DKKeyValueStore> _keyValueStore;
	NSString* _hadDeletionsKey;
	BOOL _hadDeletions;
	NSDate* _highWaterMark;
	unsigned long long _batchNumber;
	BOOL _foundDeletions;

}
+(void)_updateEventStatsWithPreviousSyncDate:(id)arg1 transportType:(long long)arg2 ;
+(void)_updateEventStatsWithTotal:(unsigned long long)arg1 transportType:(long long)arg2 ;
-(id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peer:(id)arg4 policy:(id)arg5 type:(id)arg6 ;
-(void)startPerfMetrics;
-(void)endPerfMetrics;
-(void)performSyncDownPeerDeletions;
-(void)performSyncDownPeerDeletionsWithDidPrewarm:(BOOL)arg1 orError:(id)arg2 ;
-(void)performSyncDownPeerDeletionsWithHighWaterMark:(id)arg1 orError:(id)arg2 ;
-(void)performSyncDownPeerDeletionsWithPreviousUntilDate:(id)arg1 ;
-(void)handleFetchedDeletedEventIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 untilDate:(id)arg4 ;
-(BOOL)isAsynchronous;
-(void)endOperation;
-(void)main;
@end
