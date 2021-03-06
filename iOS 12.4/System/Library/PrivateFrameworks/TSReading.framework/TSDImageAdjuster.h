/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TSReading/TSReading-Structs.h>
@class TSDImageAdjustments;

@interface TSDImageAdjuster : NSObject {

	TSDImageAdjustments* mImageAdjustments;

}
-(id)initWithImageAdjustments:(id)arg1 ;
-(CGImageRef)newFilteredImageForImage:(CGImageRef)arg1 enhancedImage:(CGImage*)arg2 ;
-(CGImageRef)p_newImageFromCIImage:(id)arg1 underlyingImage:(CGImageRef)arg2 ;
-(id)init;
-(void)dealloc;
@end

