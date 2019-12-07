/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/HFColorPrimitive.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface HFTemperatureColor : NSObject <HFColorPrimitive, NSCopying> {

	float _temperatureInMired;

}

@property (nonatomic,readonly) float temperatureInMired;               //@synthesize temperatureInMired=_temperatureInMired - In the implementation block
@property (nonatomic,readonly) float temperatureInKelvin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)hf_RGBColorRepresentation;
-(id)hf_temperatureColorRepresentation;
-(id)initWithTemperatureInMired:(float)arg1 ;
-(id)initWithTemperatureInKelvin:(float)arg1 ;
-(float)temperatureInKelvin;
-(float)temperatureInMired;
@end
