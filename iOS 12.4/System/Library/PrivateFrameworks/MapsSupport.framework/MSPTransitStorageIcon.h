/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIconDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface MSPTransitStorageIcon : PBCodable <GEOTransitIconDataSource, NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _cartoID;
	unsigned _defaultTransitType;
	unsigned _iconAttributeKey;
	unsigned _iconAttributeValue;
	long long _iconType;
	SCD_Struct_MS1 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long iconType; 
@property (nonatomic,readonly) unsigned cartoID; 
@property (nonatomic,readonly) unsigned defaultTransitType; 
@property (nonatomic,readonly) unsigned iconAttributeKey; 
@property (nonatomic,readonly) unsigned iconAttributeValue; 
@property (assign,nonatomic) BOOL hasIconType; 
@property (assign,nonatomic) long long iconType;                             //@synthesize iconType=_iconType - In the implementation block
@property (assign,nonatomic) BOOL hasCartoID; 
@property (assign,nonatomic) unsigned cartoID;                               //@synthesize cartoID=_cartoID - In the implementation block
@property (assign,nonatomic) BOOL hasDefaultTransitType; 
@property (assign,nonatomic) unsigned defaultTransitType;                    //@synthesize defaultTransitType=_defaultTransitType - In the implementation block
@property (assign,nonatomic) BOOL hasIconAttributeKey; 
@property (assign,nonatomic) unsigned iconAttributeKey;                      //@synthesize iconAttributeKey=_iconAttributeKey - In the implementation block
@property (assign,nonatomic) BOOL hasIconAttributeValue; 
@property (assign,nonatomic) unsigned iconAttributeValue;                    //@synthesize iconAttributeValue=_iconAttributeValue - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(long long)iconType;
-(BOOL)hasIconType;
-(unsigned)cartoID;
-(unsigned)defaultTransitType;
-(unsigned)iconAttributeKey;
-(unsigned)iconAttributeValue;
-(void)setIconType:(long long)arg1 ;
-(void)setHasIconType:(BOOL)arg1 ;
-(id)iconTypeAsString:(long long)arg1 ;
-(long long)StringAsIconType:(id)arg1 ;
-(id)initWithIcon:(id)arg1 ;
-(void)setCartoID:(unsigned)arg1 ;
-(void)setHasCartoID:(BOOL)arg1 ;
-(BOOL)hasCartoID;
-(void)setDefaultTransitType:(unsigned)arg1 ;
-(void)setHasDefaultTransitType:(BOOL)arg1 ;
-(BOOL)hasDefaultTransitType;
-(void)setIconAttributeKey:(unsigned)arg1 ;
-(void)setHasIconAttributeKey:(BOOL)arg1 ;
-(BOOL)hasIconAttributeKey;
-(void)setIconAttributeValue:(unsigned)arg1 ;
-(void)setHasIconAttributeValue:(BOOL)arg1 ;
-(BOOL)hasIconAttributeValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
