/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOLatLng, NSMutableArray;

@interface GEOWaypointPlace : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOLatLng* _center;
	NSMutableArray* _roadAccessPoints;

}

@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                             //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSMutableArray * roadAccessPoints;              //@synthesize roadAccessPoints=_roadAccessPoints - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)roadAccessPointType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addRoadAccessPoint:(id)arg1 ;
-(unsigned long long)roadAccessPointsCount;
-(void)clearRoadAccessPoints;
-(id)roadAccessPointAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCenter;
-(NSMutableArray *)roadAccessPoints;
-(void)setRoadAccessPoints:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(GEOLatLng *)center;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

