/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CITemperatureAndTint : CIFilter {

	CIImage* inputImage;
	CIVector* inputNeutral;
	CIVector* inputTargetNeutral;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputNeutral; 
@property (nonatomic,retain) CIVector * inputTargetNeutral; 
+(id)customAttributes;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIVector *)inputNeutral;
-(void)setInputNeutral:(CIVector *)arg1 ;
-(CIVector *)inputTargetNeutral;
-(void)setInputTargetNeutral:(CIVector *)arg1 ;
@end
