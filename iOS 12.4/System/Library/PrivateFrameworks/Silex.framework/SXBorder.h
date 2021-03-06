/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>

@class SXStrokeStyle;

@interface SXBorder : SXJSONObject

@property (nonatomic,readonly) SXStrokeStyle * all; 
@property (nonatomic,readonly) SXStrokeStyle * top; 
@property (nonatomic,readonly) SXStrokeStyle * bottom; 
@property (nonatomic,readonly) SXStrokeStyle * left; 
@property (nonatomic,readonly) SXStrokeStyle * right; 
-(SXStrokeStyle *)right;
-(SXStrokeStyle *)left;
-(SXStrokeStyle *)bottom;
-(SXStrokeStyle *)top;
-(SXStrokeStyle *)all;
-(id)defaultStrokeStyle;
-(BOOL)shouldBeDotted;
-(BOOL)isSolid;
@end

