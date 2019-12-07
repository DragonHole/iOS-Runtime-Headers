/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol NUSurfaceStorage;
@class NUGLContext, NUPixelFormat, NUColorSpace;

@interface NUGLLayer : CALayer {

	NUGLContext* _context;
	id<NUSurfaceStorage> _drawingStorage;
	id<NUSurfaceStorage> _displayStorage;
	NUPixelFormat* _pixelFormat;
	NUColorSpace* _colorSpace;

}

@property (nonatomic,readonly) NUPixelFormat * pixelFormat;              //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (nonatomic,readonly) NUColorSpace * colorSpace;                //@synthesize colorSpace=_colorSpace - In the implementation block
-(id)init;
-(void)dealloc;
-(void)reset:(id)arg1 ;
-(NUColorSpace *)colorSpace;
-(NUPixelFormat *)pixelFormat;
-(void)display;
-(BOOL)contentsAreFlipped;
-(void)layerDidBecomeVisible:(BOOL)arg1 ;
-(void)draw:(id)arg1 ;
-(void)_updateDisplay:(id)arg1 ;
-(void)_resetContents;
-(void)_ensureDrawingStorageOfSize:(SCD_Struct_NU1)arg1 format:(id)arg2 ;
-(void)_drawInTexture:(id)arg1 context:(id)arg2 ;
-(void)_updateDisplayWithIdentifier:(id)arg1 ;
@end
