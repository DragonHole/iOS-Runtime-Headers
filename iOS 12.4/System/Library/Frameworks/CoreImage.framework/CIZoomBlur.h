/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIZoomBlur : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputAmount; 
+(id)customAttributes;
-(CIVector *)inputCenter;
-(id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3 ;
-(id)_kernelNew;
-(void)setInputCenter:(CIVector *)arg1 ;
-(BOOL)_isIdentity;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)outputImage;
@end

