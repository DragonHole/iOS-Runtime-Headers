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

@class PBUnknownFields;

@interface GEOActiveResourceFilters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOActiveResourceFilter* _filters;
	unsigned long long _filtersCount;
	unsigned long long _filtersSpace;

}

@property (nonatomic,readonly) unsigned long long filtersCount; 
@property (nonatomic,readonly) GEOActiveResourceFilter* filters; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)addFilter:(GEOActiveResourceFilter)arg1 ;
-(unsigned long long)filtersCount;
-(void)clearFilters;
-(GEOActiveResourceFilter)filterAtIndex:(unsigned long long)arg1 ;
-(void)setFilters:(GEOActiveResourceFilter*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(GEOActiveResourceFilter*)filters;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

