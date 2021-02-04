/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDQueryServer.h>

@class HDSQLitePredicate, HDActivitySummaryQueryHelper;

@interface HDActivitySummaryQueryServer : HDQueryServer {

	BOOL _deliversUpdates;
	long long _lastProcessedAnchor;
	HDSQLitePredicate* _filterPredicate;
	HDActivitySummaryQueryHelper* _queryHelper;
	BOOL _shouldIncludeActivitySummaryPrivateProperties;
	BOOL _shouldIncludeActivitySummaryStatistics;
	BOOL _hasSentInitialResults;

}
+(id)requiredEntitlements;
+(Class)queryClass;
-(id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5 ;
-(void)_queue_start;
-(void)_queue_stop;
-(void)_setUpInitialQueryHelper;
-(void)_queue_deliverErrorToClient:(id)arg1 ;
-(void)_queue_deliverActivitySummariesToClient:(id)arg1 ;
-(void)_queue_deliverResultsWithActivitySummaries:(id)arg1 error:(id)arg2 ;
@end
