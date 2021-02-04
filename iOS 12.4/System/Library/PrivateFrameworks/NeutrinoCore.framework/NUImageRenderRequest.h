/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NURenderRequest.h>

@protocol NURegionPolicy, NUScalePolicy, NUExtentPolicy, NUMutableImage;
@class NUColorSpace, NUPixelFormat;

@interface NUImageRenderRequest : NURenderRequest {

	NUColorSpace* _colorSpace;
	id<NURegionPolicy> _regionPolicy;
	id<NUScalePolicy> _scalePolicy;
	id<NUExtentPolicy> _extentPolicy;
	NUPixelFormat* _pixelFormat;
	id<NUMutableImage> _targetImage;
	SCD_Struct_NU5 _tileSize;
	SCD_Struct_NU7 _time;

}

@property (retain) id<NUMutableImage> targetImage;                   //@synthesize targetImage=_targetImage - In the implementation block
@property (nonatomic,retain) NUColorSpace * colorSpace;              //@synthesize colorSpace=_colorSpace - In the implementation block
@property (retain) id<NURegionPolicy> regionPolicy;                  //@synthesize regionPolicy=_regionPolicy - In the implementation block
@property (retain) id<NUScalePolicy> scalePolicy;                    //@synthesize scalePolicy=_scalePolicy - In the implementation block
@property (retain) id<NUExtentPolicy> extentPolicy;                  //@synthesize extentPolicy=_extentPolicy - In the implementation block
@property (retain) NUPixelFormat * pixelFormat;                      //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign) SCD_Struct_NU5 tileSize;                          //@synthesize tileSize=_tileSize - In the implementation block
@property (assign) SCD_Struct_NU7 time;                              //@synthesize time=_time - In the implementation block
-(NUPixelFormat *)pixelFormat;
-(SCD_Struct_NU7)time;
-(void)setTime:(SCD_Struct_NU7)arg1 ;
-(long long)mediaComponentType;
-(id<NUScalePolicy>)scalePolicy;
-(id<NUMutableImage>)targetImage;
-(void)setTargetImage:(id<NUMutableImage>)arg1 ;
-(id<NURegionPolicy>)regionPolicy;
-(id<NUExtentPolicy>)extentPolicy;
-(void)setScalePolicy:(id<NUScalePolicy>)arg1 ;
-(void)setRegionPolicy:(id<NURegionPolicy>)arg1 ;
-(void)setExtentPolicy:(id<NUExtentPolicy>)arg1 ;
-(id)initWithComposition:(id)arg1 ;
-(void)setColorSpace:(NUColorSpace *)arg1 ;
-(void)setPixelFormat:(NUPixelFormat *)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NUColorSpace *)colorSpace;
-(void)setTileSize:(SCD_Struct_NU5)arg1 ;
-(SCD_Struct_NU5)tileSize;
@end
