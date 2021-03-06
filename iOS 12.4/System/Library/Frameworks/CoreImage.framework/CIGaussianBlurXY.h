/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:36 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIGaussianBlurXY : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSigmaX;
	NSNumber* inputSigmaY;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSigmaX; 
@property (nonatomic,retain) NSNumber * inputSigmaY; 
+(id)customAttributes;
-(NSNumber *)inputSigmaX;
-(void)setInputSigmaX:(NSNumber *)arg1 ;
-(NSNumber *)inputSigmaY;
-(void)setInputSigmaY:(NSNumber *)arg1 ;
-(BOOL)_isIdentity;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(id)outputImage;
@end

