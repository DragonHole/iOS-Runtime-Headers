/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitIconDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOPBTransitIcon : PBCodable <GEOTransitIconDataSource, NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _cartoId;
	unsigned _transitTypeEnumValue;
	SCD_Struct_GE22 _has;

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
@property (assign,nonatomic) BOOL hasCartoId; 
@property (assign,nonatomic) unsigned cartoId;                               //@synthesize cartoId=_cartoId - In the implementation block
@property (assign,nonatomic) BOOL hasTransitTypeEnumValue; 
@property (assign,nonatomic) unsigned transitTypeEnumValue;                  //@synthesize transitTypeEnumValue=_transitTypeEnumValue - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(long long)iconType;
-(unsigned)cartoId;
-(unsigned)transitTypeEnumValue;
-(unsigned)cartoID;
-(unsigned)defaultTransitType;
-(unsigned)iconAttributeKey;
-(unsigned)iconAttributeValue;
-(void)setCartoId:(unsigned)arg1 ;
-(void)setHasCartoId:(BOOL)arg1 ;
-(BOOL)hasCartoId;
-(void)setTransitTypeEnumValue:(unsigned)arg1 ;
-(void)setHasTransitTypeEnumValue:(BOOL)arg1 ;
-(BOOL)hasTransitTypeEnumValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
