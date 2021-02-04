/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue, _DKKnowledgeSaving, _DKKnowledgeQuerying;
@class _CDClientContext, NSObject, _DKKnowledgeStore;

@interface HMDDuetEventManager : HMFObject {

	_CDClientContext* _context;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<_DKKnowledgeSaving> _saveStore;
	_DKKnowledgeStore* _deleteStore;
	id<_DKKnowledgeQuerying> _queryStore;

}

@property (nonatomic,retain) _CDClientContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeSaving> saveStore;                    //@synthesize saveStore=_saveStore - In the implementation block
@property (nonatomic,retain) _DKKnowledgeStore * deleteStore;                     //@synthesize deleteStore=_deleteStore - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying> queryStore;                 //@synthesize queryStore=_queryStore - In the implementation block
+(id)eventTypeAsString:(unsigned long long)arg1 ;
+(id)identifierForType:(unsigned long long)arg1 eventValue:(id)arg2 ;
+(id)eventStreamForType:(unsigned long long)arg1 ;
+(id)sharedInstance;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(_DKKnowledgeStore *)deleteStore;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<_DKKnowledgeSaving>)saveStore;
-(void)_logToCoreDuetStoreEventWithType:(unsigned long long)arg1 metadata:(id)arg2 ;
-(void)_logEventWithType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 typeIdentifier:(id)arg4 metadata:(id)arg5 ;
-(id<_DKKnowledgeQuerying>)queryStore;
-(id)_queryEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)_deleteEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(id)_dumpEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)logEventWithType:(unsigned long long)arg1 startDate:(id)arg2 endDate:(id)arg3 typeIdentifier:(id)arg4 metadata:(id)arg5 ;
-(id)queryEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)deleteEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(void)resetAllEvents;
-(id)dumpEventsOfType:(unsigned long long)arg1 fromDate:(id)arg2 offset:(unsigned long long)arg3 limit:(unsigned long long)arg4 ;
-(id)dumpAllEvents;
-(void)setSaveStore:(id<_DKKnowledgeSaving>)arg1 ;
-(void)setDeleteStore:(_DKKnowledgeStore *)arg1 ;
-(void)setQueryStore:(id<_DKKnowledgeQuerying>)arg1 ;
-(id)init;
-(void)setContext:(_CDClientContext *)arg1 ;
-(_CDClientContext *)context;
@end
