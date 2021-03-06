/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEODownloadMetadata, GEOResources;

@interface GEOResourceManifestDownload : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEODownloadMetadata* _metadata;
	GEOResources* _resources;

}

@property (nonatomic,readonly) BOOL hasResources; 
@property (nonatomic,retain) GEOResources * resources;                       //@synthesize resources=_resources - In the implementation block
@property (nonatomic,retain) GEODownloadMetadata * metadata;                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOResources *)resources;
-(void)setResources:(GEOResources *)arg1 ;
-(void)setMetadata:(GEODownloadMetadata *)arg1 ;
-(BOOL)hasResources;
-(id)initWithResourceManifestData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(GEODownloadMetadata *)metadata;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

