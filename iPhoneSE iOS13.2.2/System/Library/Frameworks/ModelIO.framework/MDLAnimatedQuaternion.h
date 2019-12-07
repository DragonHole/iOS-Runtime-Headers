/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedQuaternion : MDLAnimatedValue
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)precision;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 time:(double)arg3 ;
-(SCD_Struct_MD20)floatQuaternionAtTime:(double)arg1 ;
-(SCD_Struct_MD20)doubleQuaternionAtTime:(double)arg1 ;
-(VtValue*)defaultVtValue;
-(unsigned long long)getFloatQuaternionArray:(SCD_Struct_MD20*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDoubleQuaternionArray:(SCD_Struct_MD20*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)setFloatQuaternion:(SCD_Struct_MD20)arg1 atTime:(double)arg2 ;
-(void)setDoubleQuaternion:(SCD_Struct_MD20)arg1 atTime:(double)arg2 ;
-(void)resetWithFloatQuaternionArray:(const SCD_Struct_MD20*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
-(void)resetWithDoubleQuaternionArray:(const SCD_Struct_MD20*)arg1 atTimes:(const double*)arg2 count:(unsigned long long)arg3 ;
@end
