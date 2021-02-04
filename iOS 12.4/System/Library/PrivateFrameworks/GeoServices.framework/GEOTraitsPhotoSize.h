/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOTraitsPhotoSize : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _height;
	unsigned _width;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasWidth; 
@property (assign,nonatomic) unsigned width;                                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) BOOL hasHeight; 
@property (assign,nonatomic) unsigned height;                                //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHasWidth:(BOOL)arg1 ;
-(BOOL)hasWidth;
-(void)setHasHeight:(BOOL)arg1 ;
-(BOOL)hasHeight;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)width;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(unsigned)height;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
