/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class GEOVectorTile;

@interface GEOMapFeatureJunction : NSObject {

	SCD_Struct_GE30 _coordinate;
	SCD_Struct_GE198 _tilePoint;
	GEOVectorTile* _tile;

}

@property (nonatomic,readonly) GEOVectorTile * tile; 
@property (nonatomic,readonly) SCD_Struct_GE198 tilePoint; 
@property (nonatomic,readonly) SCD_Struct_GE136* connectivityJunction; 
@property (nonatomic,readonly) BOOL isOnTileBorder; 
@property (nonatomic,readonly) SCD_Struct_GE30 coordinate; 
+(id)junctionForRoadFeature:(SCD_Struct_GE200*)arg1 startJunction:(BOOL)arg2 ;
+(BOOL)_isPointOnTileBorder:(SCD_Struct_GE198)arg1 ;
-(SCD_Struct_GE30)coordinate;
-(GEOVectorTile *)tile;
-(SCD_Struct_GE136*)connectivityJunction;
-(BOOL)isOnTileBorder;
-(SCD_Struct_GE198)tilePoint;
@end

