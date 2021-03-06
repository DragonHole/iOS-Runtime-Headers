/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCFSSchedulerBase.h>

@interface BRCSyncUpScheduler : BRCFSSchedulerBase
-(id)initWithAccountSession:(id)arg1 ;
-(void)performFirstSchedulingAfterStartupInDB:(id)arg1 ;
-(id)descriptionForItem:(id)arg1 context:(id)arg2 ;
-(BOOL)isItemInSyncUpAndInFlight:(id)arg1 ;
-(void)createSyncUpJobForItem:(id)arg1 inZone:(id)arg2 ;
-(void)deleteSyncUpJobsForItem:(id)arg1 ;
-(BOOL)isItemInSyncUpAndInFlight:(id)arg1 inZone:(id)arg2 ;
-(unsigned long long)finishSyncUpForItem:(id)arg1 inZone:(id)arg2 success:(BOOL)arg3 ;
-(unsigned long long)inFlightDiffsForItem:(id)arg1 ;
-(void)prepareItemForSyncUp:(id)arg1 inFlightDiffs:(unsigned long long)arg2 inZone:(id)arg3 ;
-(BOOL)isItemPendingSyncUp:(id)arg1 ;
-(void)postponeSyncUpForItem:(id)arg1 inZone:(id)arg2 ;
-(void)_scheduleSyncUpJob:(id)arg1 ;
-(unsigned long long)inFlightDiffsForItem:(id)arg1 zone:(id)arg2 ;
-(void)schedule;
@end

