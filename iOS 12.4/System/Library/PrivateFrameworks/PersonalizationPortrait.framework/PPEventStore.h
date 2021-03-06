/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMapTable, NSObject;

@interface PPEventStore : NSObject {

	NSMapTable* _recordLoadingDelegates;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(BOOL)sendRTCLogsWithError:(id*)arg1 ;
-(void)_completeAndResetEventNameRecordsWithDelegate:(id)arg1 ;
-(void)_resetAllDelegates;
-(void)_sendChangesToDelegates:(id)arg1 ;
-(void)_loadEventNameRecordsWithDelegate:(id)arg1 ;
-(BOOL)loadEventNameRecordsAndMonitorChangesWithDelegate:(id)arg1 error:(id*)arg2 ;
-(BOOL)iterEventHighlightsFrom:(id)arg1 to:(id)arg2 options:(int)arg3 error:(id*)arg4 block:(/*^block*/id)arg5 ;
-(BOOL)iterDailyEventHighlightsWithOptions:(int)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)iterWeeklyEventHighlightsWithOptions:(int)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)iterEventHighlightsFrom:(id)arg1 to:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)iterDailyEventHighlightsError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)iterWeeklyEventHighlightsError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)interactionSummaryMetricsError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3 ;
-(BOOL)iterEventNameRecordsForClient:(id)arg1 error:(id*)arg2 block:(/*^block*/id)arg3 ;
-(id)init;
@end

