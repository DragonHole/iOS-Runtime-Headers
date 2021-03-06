/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreBrightness/CoreBrightness-Structs.h>
@interface CBColorSample : NSObject {

	double _lux;
	double _CCT;
	unsigned long long _mode;
	SCD_Struct_CB33 _xy;
	SCD_Struct_CB34 _XYZ;

}

@property (nonatomic,readonly) double lux;                         //@synthesize lux=_lux - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CB33 xy;                 //@synthesize xy=_xy - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CB34 XYZ;                //@synthesize XYZ=_XYZ - In the implementation block
@property (nonatomic,readonly) double CCT;                         //@synthesize CCT=_CCT - In the implementation block
@property (assign,nonatomic) unsigned long long mode;              //@synthesize mode=_mode - In the implementation block
-(double)lux;
-(id)copyDataInDictionary;
-(double)CCT;
-(SCD_Struct_CB34)XYZ;
-(id)initWithChromaticity:(SCD_Struct_CB33)arg1 illuminance:(double)arg2 andTempterature:(double)arg3 ;
-(SCD_Struct_CB33)xy;
-(id)initWithTristimulus:(SCD_Struct_CB34)arg1 illuminance:(double)arg2 andTempterature:(double)arg3 ;
-(void)fillInChromaticity;
-(void)fillInTristimulus;
-(void)setXy:(SCD_Struct_CB33)arg1 ;
-(void)setXYZ:(SCD_Struct_CB34)arg1 ;
-(id)initWithHIDEvent:(IOHIDEventRef)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)mode;
-(void)setMode:(unsigned long long)arg1 ;
@end

