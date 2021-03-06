/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject {

	TSDImageAdjustments* mImageAdjustments;

}
-(id)init;
-(void)dealloc;
-(id)initWithImageAdjustments:(id)arg1 ;
-(CGImageRef)newFilteredImageForImage:(CGImageRef)arg1 enhancedImage:(CGImage*)arg2 ;
-(CGImageRef)p_newImageFromCIImage:(id)arg1 underlyingImage:(CGImageRef)arg2 ;
@end

