/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapLine <NSObject>
@property (nonatomic,readonly) unsigned long long coordinateCount; 
@property (nonatomic,readonly) SCD_Struct_GE30* coordinates; 
@property (nonatomic,readonly) double length; 
@required
-(unsigned long long)coordinateCount;
-(SCD_Struct_GE30*)coordinates;
-(double)distanceFromCoordinate:(SCD_Struct_GE30)arg1 outSegmentCoordinate:(PolylineCoordinate*)arg2;
-(double)length;

@end

