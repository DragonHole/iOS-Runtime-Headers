/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSDColorFill.h>

@class TSUColor;

@interface TSDMutableColorFill : TSDColorFill

@property (nonatomic,copy) TSUColor * color; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) double hue; 
@property (assign,nonatomic) double saturation; 
@property (assign,nonatomic) double brightness; 
-(void)setHue:(double)arg1 ;
-(void)setSaturation:(double)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(void)setColor:(TSUColor *)arg1 ;
-(void)setBrightness:(double)arg1 ;
@end
