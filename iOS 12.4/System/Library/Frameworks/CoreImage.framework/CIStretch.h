/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIStretch : CIFilter {

	CIImage* inputImage;
	CIVector* inputPoint;
	CIVector* inputSize;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputPoint; 
@property (nonatomic,retain) CIVector * inputSize; 
+(id)customAttributes;
-(CIVector *)inputPoint;
-(CGRect)computeDOD:(vec4)arg1 ;
-(void)setInputSize:(CIVector *)arg1 ;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputSize;
-(void)setDefaults;
-(void)setInputPoint:(CIVector *)arg1 ;
-(id)outputImage;
@end
