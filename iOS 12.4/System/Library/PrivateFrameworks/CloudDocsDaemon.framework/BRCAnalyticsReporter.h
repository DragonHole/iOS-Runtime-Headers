/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class BRCAccountSession, NSObject, BRCMetricEndpoint, NSMutableDictionary;

@interface BRCAnalyticsReporter : NSObject {

	BRCAccountSession* _session;
	NSObject*<OS_dispatch_queue> _queue;
	BRCMetricEndpoint* _metricEndpoint;
	NSMutableDictionary* _eventsByKind;

}
-(id)initWithSession:(id)arg1 ;
-(void)dumpToContext:(id)arg1 ;
-(void)submitEventMetric:(id)arg1 ;
-(void)_forgetEventMetrics:(id)arg1 ;
-(void)_cleanupTimedOutEventMetrics:(id)arg1 ;
-(void)_withEventMetricsOfKind:(id)arg1 accessor:(/*^block*/id)arg2 ;
-(void)forgetEventMetric:(id)arg1 ;
-(void)createFSEventToSyncUpEventForFileID:(unsigned long long)arg1 genID:(unsigned)arg2 ;
-(void)lookupFSEventToSyncUpEventByFileID:(unsigned long long)arg1 genID:(unsigned)arg2 accessor:(/*^block*/id)arg3 ;
-(void)lookupFSEventToSyncUpEventByItemID:(id)arg1 accessor:(/*^block*/id)arg2 ;
-(void)createUserDownloadEventForOperationID:(id)arg1 isRecursive:(BOOL)arg2 isForBackup:(BOOL)arg3 ;
-(void)lookupUserDownloadEventByOperationID:(id)arg1 accessor:(/*^block*/id)arg2 ;
-(void)lookupUserDownloadEventByDocID:(id)arg1 accessor:(/*^block*/id)arg2 ;
@end

