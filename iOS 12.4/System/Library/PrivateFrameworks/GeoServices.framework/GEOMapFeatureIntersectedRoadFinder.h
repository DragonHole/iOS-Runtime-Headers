/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapFeatureAccessFinder.h>

@class GEOTileLoader;

@interface GEOMapFeatureIntersectedRoadFinder : GEOMapFeatureAccessFinder {

	GEOTileLoader* _tileLoader;

}
-(id)initWithTileLoader:(id)arg1 ;
-(id)_findRoadsFromJunction:(id)arg1 outboundRoads:(BOOL)arg2 roadToIgnore:(id)arg3 handler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)_tilesAdjacentToTile:(GEOTileKey)arg1 atPoint:(SCD_Struct_GE42)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)findRoadsFromPreviousIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsToPreviousIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsFromNextIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsToNextIntersectionOf:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsFromJunction:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)findRoadsToJunction:(id)arg1 handler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

