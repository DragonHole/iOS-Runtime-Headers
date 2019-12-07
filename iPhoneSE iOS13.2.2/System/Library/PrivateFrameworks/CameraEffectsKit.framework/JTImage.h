/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, PVImageBuffer;

@interface JTImage : NSObject {

	UIImage* _image;
	PVImageBuffer* _pvImageBuffer;

}

@property (nonatomic,readonly) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) PVImageBuffer * pvImageBuffer;              //@synthesize pvImageBuffer=_pvImageBuffer - In the implementation block
+(id)jtImageWithUIImage:(id)arg1 ;
-(UIImage *)image;
-(id)initWithUIImage:(id)arg1 ;
-(id)initWithPVImage:(id)arg1 ;
-(id)bluredImageWithFlippedXAxis:(BOOL)arg1 ;
-(PVImageBuffer *)pvImageBuffer;
-(BOOL)hasPVImageBufferAndCanCreateCVPixelBufferWithoutCopy;
@end
