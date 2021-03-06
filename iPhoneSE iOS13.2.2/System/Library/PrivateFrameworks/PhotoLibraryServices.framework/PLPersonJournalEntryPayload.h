/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSString, NSDictionary;

@interface PLPersonJournalEntryPayload : PLJournalEntryPayload

@property (nonatomic,readonly) NSString * fullName; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * personUri; 
@property (nonatomic,readonly) unsigned manualOrder; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) int verifiedType; 
@property (nonatomic,readonly) int cloudVerifiedType; 
@property (nonatomic,readonly) short keyFacePickSource; 
@property (nonatomic,readonly) NSDictionary * contactMatchingDictionary; 
@property (nonatomic,readonly) NSString * mergeTargetPersonUUID; 
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)payloadVersion;
+(unsigned)minimumSnapshotPayloadVersion;
+(BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1 ;
+(void)updateMergeTargetPersonWithPersonUUIDMapping:(id)arg1 fromDataInManagedObjectContext:(id)arg2 ;
-(int)type;
-(NSString *)displayName;
-(NSString *)fullName;
-(BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3 ;
-(BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3 ;
-(void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 ;
-(int)verifiedType;
-(id)insertPersonFromDataInManagedObjectContext:(id)arg1 ;
-(NSString *)mergeTargetPersonUUID;
-(NSString *)personUri;
-(unsigned)manualOrder;
-(int)cloudVerifiedType;
-(NSDictionary *)contactMatchingDictionary;
-(short)keyFacePickSource;
@end

