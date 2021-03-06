/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PVImageBufferImpl.h>

@class NSString;

@interface PVCGImageBufferImpl : NSObject <PVImageBufferImpl> {

	CGImageRef _image;
	HGRef<HGCVPixelBuffer>* _generatedPixelBuffer;
	HGRef<HGBitmap>* _generatedBitmap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGSize)size;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(CGImageRef)cgImage;
-(BOOL)canCreateCVPixelBuffer;
-(BOOL)cvPixelBufferRequiresCopy;
-(BOOL)canCreateHGBitmap;
-(HGRef<HGCVPixelBuffer>*)cvPixelBufferWithColorSpace:(id)arg1 ;
-(HGRef<HGBitmap>*)hgBitmapWithColorSpace:(id)arg1 ;
@end

