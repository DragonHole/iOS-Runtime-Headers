/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol GEOMapRoad <GEOMapLine>
@property (nonatomic,readonly) int roadClass; 
@property (nonatomic,readonly) int formOfWay; 
@property (nonatomic,readonly) int travelDirection; 
@property (nonatomic,readonly) double roadWidth; 
@property (nonatomic,readonly) unsigned long long speedLimit; 
@property (nonatomic,readonly) BOOL speedLimitIsMPH; 
@property (nonatomic,readonly) unsigned long long roadID; 
@property (nonatomic,readonly) BOOL isTunnel; 
@property (nonatomic,readonly) BOOL isBridge; 
@property (nonatomic,readonly) BOOL isRail; 
@property (nonatomic,readonly) int rampType; 
@property (nonatomic,readonly) NSString * internalRoadName; 
@required
-(unsigned long long)roadID;
-(BOOL)isTunnel;
-(BOOL)isBridge;
-(int)rampType;
-(int)roadClass;
-(int)formOfWay;
-(int)travelDirection;
-(double)roadWidth;
-(unsigned long long)speedLimit;
-(BOOL)speedLimitIsMPH;
-(BOOL)isRail;
-(NSString *)internalRoadName;
-(void)roadFeaturesWithHandler:(/*^block*/id)arg1;
-(void)roadEdgesWithHandler:(/*^block*/id)arg1;
-(id)findRoadsFrom:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findRoadsFromPreviousIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findRoadsToPreviousIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findRoadsFromNextIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;
-(id)findRoadsToNextIntersection:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2;

@end
