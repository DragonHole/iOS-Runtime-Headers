/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDataEntity.h>

@interface HDDeletedObjectEntity : HDDataEntity
+(BOOL)deleteEntitiesWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(long long)preferredEntityType;
+(id)insertDeletedObject:(id)arg1 provenanceIdentifier:(id)arg2 deletionDate:(id)arg3 inDatabase:(id)arg4 error:(id*)arg5 ;
+(BOOL)deleteObjectsWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)deletedObjectEntityForDeletedObject:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(Class)baseDataEntityClass;
+(BOOL)requiresSampleTypePredicate;
@end
