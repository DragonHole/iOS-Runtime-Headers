/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivityAchievements/ActivityAchievements-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>
#import <libobjc.A.dylib/HDSyncEntity.h>
#import <libobjc.A.dylib/HDNanoSyncEntity.h>

@class NSString;

@interface ACHTemplateEntity : HDHealthEntity <HDSyncEntity, HDNanoSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)databaseTable;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(long long)protectionClass;
+(id)propertyForSyncProvenance;
+(id)syncEntityIdentifier;
+(BOOL)generateSyncObjectsForSession:(id)arg1 predicate:(id)arg2 syncAnchorRange:(HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 error:(id*)arg6 handler:(/*^block*/id)arg7 ;
+(long long)nextSyncAnchorWithSession:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)decodeSyncObjectWithData:(id)arg1 ;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1 ;
+(BOOL)supportsSyncStore:(id)arg1 ;
+(id)createTableSQL;
+(id)columnsDefinition;
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1 ;
+(void)setSyncedTemplatesObserver:(id)arg1 ;
+(BOOL)insertTemplates:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id*)arg5 ;
+(BOOL)removeTemplates:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)allTemplatesWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)syncedTemplatesObserver;
+(BOOL)_insertTemplates:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id*)arg5 ;
+(BOOL)_removeTemplates:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_templatesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_insertTemplate:(id)arg1 provenance:(long long)arg2 database:(id)arg3 error:(id*)arg4 ;
+(id)codableTemplateForTemplateInDatabase:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
@end
