/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOComposedRouteSection.h>
#import <libobjc.A.dylib/GEOComposedRouteTransitSection.h>

@class NSString;

@interface GEOComposedRouteTransitTripSection : GEOComposedRouteSection <GEOComposedRouteTransitSection> {

	SCD_Struct_GE61 _fromNodeID;
	SCD_Struct_GE61 _toNodeID;
	unsigned long long _lineID;
	SCD_Struct_GE30 _fromNodeLocation;
	SCD_Struct_GE30 _toNodeLocation;
	int _toNodeSignificance;
	Matrix<float, 4, 1> _lineColor;
	SCD_Struct_GE44 _originalBounds;

}

@property (nonatomic,readonly) Matrix<float lineColor;                  //@synthesize lineColor=_lineColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_GE61 fromNodeID;              //@synthesize fromNodeID=_fromNodeID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_GE61 toNodeID;                //@synthesize toNodeID=_toNodeID - In the implementation block
@property (nonatomic,readonly) unsigned long long lineID;               //@synthesize lineID=_lineID - In the implementation block
@property (nonatomic,readonly) BOOL isTransfer; 
@property (nonatomic,readonly) int toNodeSignificance;                  //@synthesize toNodeSignificance=_toNodeSignificance - In the implementation block
-(BOOL)_MapsCarPlay_isEqual:(id)arg1 ;
-(unsigned long long)lineID;
-(BOOL)isTransfer;
-(SCD_Struct_GE61)fromNodeID;
-(SCD_Struct_GE61)toNodeID;
-(int)toNodeSignificance;
-(id)initWithRoute:(id)arg1 startPoint:(unsigned)arg2 pointCount:(unsigned)arg3 step:(id)arg4 stepIndex:(unsigned long long)arg5 toNodeSignificance:(int)arg6 currentTransitLineColor:(id)arg7 startDistance:(double)arg8 lengthScaleFactor:(double)arg9 ;
-(Matrix<float)lineColor;
-(NSString *)description;
@end

