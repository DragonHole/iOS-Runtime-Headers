/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOMatchedToken : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	SCD_Struct_GE61* _geoIds;
	int _geoType;
	NSString* _matchedToken;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,retain) NSString * matchedToken;                        //@synthesize matchedToken=_matchedToken - In the implementation block
@property (assign,nonatomic) BOOL hasGeoType; 
@property (assign,nonatomic) int geoType;                                    //@synthesize geoType=_geoType - In the implementation block
@property (nonatomic,readonly) unsigned long long geoIdsCount; 
@property (nonatomic,readonly) unsigned long long* geoIds; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(unsigned long long)geoIdsCount;
-(void)clearGeoIds;
-(unsigned long long*)geoIds;
-(void)setGeoIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)geoIdAtIndex:(unsigned long long)arg1 ;
-(void)addGeoId:(unsigned long long)arg1 ;
-(void)setMatchedToken:(NSString *)arg1 ;
-(void)setGeoType:(int)arg1 ;
-(void)setHasGeoType:(BOOL)arg1 ;
-(BOOL)hasGeoType;
-(NSString *)matchedToken;
-(int)geoType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
