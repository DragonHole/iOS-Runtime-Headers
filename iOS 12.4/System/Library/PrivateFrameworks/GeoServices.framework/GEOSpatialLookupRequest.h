/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:07 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOLatLng;

@interface GEOSpatialLookupRequest : PBRequest <NSCopying> {

	SCD_Struct_GE2* _categorys;
	GEOLatLng* _center;
	int _maxResults;
	int _radius;
	SCD_Struct_GE22 _has;

}

@property (nonatomic,retain) GEOLatLng * center;                               //@synthesize center=_center - In the implementation block
@property (assign,nonatomic) BOOL hasRadius; 
@property (assign,nonatomic) int radius;                                       //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) BOOL hasMaxResults; 
@property (assign,nonatomic) int maxResults;                                   //@synthesize maxResults=_maxResults - In the implementation block
@property (nonatomic,readonly) unsigned long long categorysCount; 
@property (nonatomic,readonly) int* categorys; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned long long)categorysCount;
-(void)clearCategorys;
-(void)addCategory:(int)arg1 ;
-(int*)categorys;
-(void)setCategorys:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)categorysAsString:(int)arg1 ;
-(int)StringAsCategorys:(id)arg1 ;
-(int)maxResults;
-(void)setMaxResults:(int)arg1 ;
-(void)setHasMaxResults:(BOOL)arg1 ;
-(BOOL)hasMaxResults;
-(void)setHasRadius:(BOOL)arg1 ;
-(BOOL)hasRadius;
-(int)categoryAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(GEOLatLng *)center;
-(int)radius;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)setRadius:(int)arg1 ;
@end
