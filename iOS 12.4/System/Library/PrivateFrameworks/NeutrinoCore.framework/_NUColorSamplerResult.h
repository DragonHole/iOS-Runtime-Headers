/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/NUColorSamplerResult.h>

@class NSString;

@interface _NUColorSamplerResult : _NURenderResult <NUColorSamplerResult> {

	CGColorRef _color;
	SCD_Struct_NU5 _point;

}

@property (assign) SCD_Struct_NU5 point;                            //@synthesize point=_point - In the implementation block
@property (nonatomic,retain) CGColorRef color;                      //@synthesize color=_color - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(SCD_Struct_NU5)point;
-(CGColorRef)color;
-(void)setColor:(CGColorRef)arg1 ;
-(void)setPoint:(SCD_Struct_NU5)arg1 ;
@end
