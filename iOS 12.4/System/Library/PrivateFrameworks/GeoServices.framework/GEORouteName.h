/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEONameInfo;

@interface GEORouteName : PBCodable <NSCopying> {

	int _lastZilchStitchedIndex;
	GEONameInfo* _nameInfo;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,readonly) BOOL hasNameInfo; 
@property (nonatomic,retain) GEONameInfo * nameInfo;                      //@synthesize nameInfo=_nameInfo - In the implementation block
@property (assign,nonatomic) BOOL hasLastZilchStitchedIndex; 
@property (assign,nonatomic) int lastZilchStitchedIndex;                  //@synthesize lastZilchStitchedIndex=_lastZilchStitchedIndex - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setNameInfo:(GEONameInfo *)arg1 ;
-(BOOL)hasNameInfo;
-(int)lastZilchStitchedIndex;
-(void)setLastZilchStitchedIndex:(int)arg1 ;
-(void)setHasLastZilchStitchedIndex:(BOOL)arg1 ;
-(BOOL)hasLastZilchStitchedIndex;
-(GEONameInfo *)nameInfo;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end
