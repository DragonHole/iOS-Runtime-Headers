/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEODownloadMetadata, GEOSupportedTileSets;

@interface GEOSupportedTileSetsDownload : PBCodable <NSCopying> {

	GEODownloadMetadata* _metadata;
	GEOSupportedTileSets* _tileSets;

}

@property (nonatomic,retain) GEOSupportedTileSets * tileSets;              //@synthesize tileSets=_tileSets - In the implementation block
@property (nonatomic,retain) GEODownloadMetadata * metadata;               //@synthesize metadata=_metadata - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(GEOSupportedTileSets *)tileSets;
-(void)setTileSets:(GEOSupportedTileSets *)arg1 ;
-(void)setMetadata:(GEODownloadMetadata *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEODownloadMetadata *)metadata;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

