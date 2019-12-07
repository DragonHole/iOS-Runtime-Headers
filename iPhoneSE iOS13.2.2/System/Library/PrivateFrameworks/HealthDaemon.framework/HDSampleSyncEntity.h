/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDataSyncEntity.h>

@interface HDSampleSyncEntity : HDDataSyncEntity
+(int)nanoSyncObjectType;
+(BOOL)supportsSpeculativeNanoSyncChanges;
+(id)_predicateForSyncSession:(id)arg1 ;
+(id)_basePruningPredicateForDate:(id)arg1 profile:(id)arg2 ;
+(id)_predicateForDateIntervalInSyncSession:(id)arg1 ;
+(Class)_syncedSampleTypeClass;
+(id)_predicateForSampleAgeInSyncSession:(id)arg1 sampleTypeClass:(Class)arg2 ;
@end
