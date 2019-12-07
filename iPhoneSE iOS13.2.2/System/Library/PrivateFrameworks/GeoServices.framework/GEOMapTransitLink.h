/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:29 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GEOMapTransitLink <GEOMapLine>
@property (nonatomic,readonly) unsigned long long transitLineID; 
@property (nonatomic,readonly) NSString * internalLineName; 
@property (nonatomic,readonly) unsigned minimumTravelTime; 
@property (nonatomic,readonly) id<GEOMapTransitStop> stopFrom; 
@property (nonatomic,readonly) id<GEOMapTransitStop> stopTo; 
@required
-(double)distanceInMetersFrom:(SCD_Struct_GE32)arg1 outClosestCoordinateOnLine:(SCD_Struct_GE32*)arg2;
-(unsigned long long)transitLineID;
-(NSString *)internalLineName;
-(unsigned)minimumTravelTime;
-(id<GEOMapTransitStop>)stopFrom;
-(id<GEOMapTransitStop>)stopTo;

@end
