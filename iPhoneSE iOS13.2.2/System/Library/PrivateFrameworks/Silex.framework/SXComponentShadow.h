/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>

@class SXConvertiblePoint, UIColor;

@interface SXComponentShadow : SXJSONObject

@property (nonatomic,readonly) SXConvertibleValue radius; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) SXConvertiblePoint * offset; 
@property (nonatomic,readonly) UIColor * color; 
-(UIColor *)color;
-(SXConvertiblePoint *)offset;
-(double)opacity;
-(SXConvertibleValue)radius;
@end

