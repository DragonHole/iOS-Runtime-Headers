/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/FxCustomParameterInterpolation.h>

@interface PAEColorWheelChannelData : NSObject <NSCoding, NSCopying, FxCustomParameterInterpolation> {

	PAEColorWheelData _value;

}
+(id)channelDataWithRadius:(double)arg1 theta:(double)arg2 saturation:(double)arg3 light:(double)arg4 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(double)saturation;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(void)setSaturation:(double)arg1 ;
-(BOOL)isEqualTo:(id)arg1 ;
-(double)light;
-(void)setLight:(double)arg1 ;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(BOOL)isAtDefaults;
-(id)initWithRadius:(double)arg1 theta:(double)arg2 saturation:(double)arg3 light:(double)arg4 ;
-(double)theta;
-(void)setTheta:(double)arg1 ;
@end
