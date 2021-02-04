/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOEquatorialCelestialBodyData : NSObject {

	double _rightAscension;
	double _declination;

}

@property (nonatomic,readonly) double rightAscension;              //@synthesize rightAscension=_rightAscension - In the implementation block
@property (nonatomic,readonly) double declination;                 //@synthesize declination=_declination - In the implementation block
-(id)initWithDate:(id)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3 ;
-(id)initWithJulianDay:(double)arg1 body:(long long)arg2 useHighPrecision:(BOOL)arg3 ;
-(id)initWithDate:(id)arg1 body:(long long)arg2 ;
-(id)initWithJulianDay:(double)arg1 body:(long long)arg2 ;
-(double)rightAscension;
-(double)declination;
@end
