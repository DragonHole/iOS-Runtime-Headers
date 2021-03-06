/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataValueEntity : HDHealthEntity
+(id)databaseTable;
+(const SCD_Struct_HD0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(long long)protectionClass;
+(id)indices;
+(id)deleteStatementForObjectMetadataWithDatabase:(id)arg1 ;
+(id)_insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)_predicateForEntityWithKeyID:(id)arg1 ;
+(id)_predicateForEntityWithObjectID:(id)arg1 ;
@end

