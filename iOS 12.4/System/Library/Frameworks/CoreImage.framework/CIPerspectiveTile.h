/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIPerspectiveTile : CIFilter {

	CIImage* inputImage;
	CIVector* inputTopLeft;
	CIVector* inputTopRight;
	CIVector* inputBottomRight;
	CIVector* inputBottomLeft;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputTopLeft; 
@property (nonatomic,retain) CIVector * inputTopRight; 
@property (nonatomic,retain) CIVector * inputBottomRight; 
@property (nonatomic,retain) CIVector * inputBottomLeft; 
+(id)customAttributes;
-(CIVector *)inputTopLeft;
-(void)setInputTopLeft:(CIVector *)arg1 ;
-(CIVector *)inputTopRight;
-(void)setInputTopRight:(CIVector *)arg1 ;
-(CIVector *)inputBottomRight;
-(void)setInputBottomRight:(CIVector *)arg1 ;
-(CIVector *)inputBottomLeft;
-(void)setInputBottomLeft:(CIVector *)arg1 ;
-(id)_kernel;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end
