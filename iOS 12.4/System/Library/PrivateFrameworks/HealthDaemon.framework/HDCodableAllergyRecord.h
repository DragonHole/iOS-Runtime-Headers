/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDDecoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalCodingList, NSString, HDCodableMedicalCoding, NSData, HDCodableMedicalRecord, HDCodableAllergyReactionList;

@interface HDCodableAllergyRecord : PBCodable <HDDecoding, NSCopying> {

	HDCodableMedicalCodingList* _allergyCodings;
	NSString* _asserter;
	HDCodableMedicalCoding* _criticalityCoding;
	NSData* _lastOccurenceDate;
	HDCodableMedicalRecord* _medicalRecord;
	NSData* _onsetDate;
	HDCodableAllergyReactionList* _reactions;
	NSData* _recordedDate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasMedicalRecord; 
@property (nonatomic,retain) HDCodableMedicalRecord * medicalRecord;                   //@synthesize medicalRecord=_medicalRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasAllergyCodings; 
@property (nonatomic,retain) HDCodableMedicalCodingList * allergyCodings;              //@synthesize allergyCodings=_allergyCodings - In the implementation block
@property (nonatomic,readonly) BOOL hasOnsetDate; 
@property (nonatomic,retain) NSData * onsetDate;                                       //@synthesize onsetDate=_onsetDate - In the implementation block
@property (nonatomic,readonly) BOOL hasAsserter; 
@property (nonatomic,retain) NSString * asserter;                                      //@synthesize asserter=_asserter - In the implementation block
@property (nonatomic,readonly) BOOL hasReactions; 
@property (nonatomic,retain) HDCodableAllergyReactionList * reactions;                 //@synthesize reactions=_reactions - In the implementation block
@property (nonatomic,readonly) BOOL hasCriticalityCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * criticalityCoding;               //@synthesize criticalityCoding=_criticalityCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasLastOccurenceDate; 
@property (nonatomic,retain) NSData * lastOccurenceDate;                               //@synthesize lastOccurenceDate=_lastOccurenceDate - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordedDate; 
@property (nonatomic,retain) NSData * recordedDate;                                    //@synthesize recordedDate=_recordedDate - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMedicalRecord:(HDCodableMedicalRecord *)arg1 ;
-(BOOL)hasMedicalRecord;
-(HDCodableMedicalRecord *)medicalRecord;
-(BOOL)applyToObject:(id)arg1 ;
-(BOOL)applyToObject:(id)arg1 error:(out id*)arg2 ;
-(void)setAsserter:(NSString *)arg1 ;
-(void)setRecordedDate:(NSData *)arg1 ;
-(BOOL)hasAsserter;
-(BOOL)hasRecordedDate;
-(NSString *)asserter;
-(NSData *)recordedDate;
-(HDCodableMedicalCodingList *)allergyCodings;
-(void)setAllergyCodings:(HDCodableMedicalCodingList *)arg1 ;
-(NSData *)onsetDate;
-(void)setOnsetDate:(NSData *)arg1 ;
-(HDCodableAllergyReactionList *)reactions;
-(void)setReactions:(HDCodableAllergyReactionList *)arg1 ;
-(HDCodableMedicalCoding *)criticalityCoding;
-(void)setCriticalityCoding:(HDCodableMedicalCoding *)arg1 ;
-(NSData *)lastOccurenceDate;
-(void)setLastOccurenceDate:(NSData *)arg1 ;
-(BOOL)hasOnsetDate;
-(BOOL)hasAllergyCodings;
-(BOOL)hasReactions;
-(BOOL)hasCriticalityCoding;
-(BOOL)hasLastOccurenceDate;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

