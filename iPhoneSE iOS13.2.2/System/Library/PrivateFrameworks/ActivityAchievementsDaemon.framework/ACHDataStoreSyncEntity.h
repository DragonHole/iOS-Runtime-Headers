/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDKeyValueSyncEntity.h>
#import <libobjc.A.dylib/HDNanoSyncEntity.h>

@class NSString;

@interface ACHDataStoreSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)category;
+(id)syncEntityIdentifier;
+(int)nanoSyncObjectType;
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1 ;
+(id)dataStoreValueForKey:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)setDataStoreValuesWithDictionary:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)removeDataStoreValuesForKeys:(id)arg1 domain:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(void)didReceiveValuesForKeys:(id)arg1 profile:(id)arg2 ;
@end

