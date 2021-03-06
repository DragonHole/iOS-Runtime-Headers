/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIReductionFilter.h>

@class CIImage, NSNumber;

@interface CIKMeans : CIReductionFilter {

	CIImage* inputMeans;
	NSNumber* inputCount;
	NSNumber* inputPasses;
	NSNumber* inputPerceptual;

}

@property (nonatomic,retain) CIImage * inputMeans; 
@property (nonatomic,copy) NSNumber * inputCount; 
@property (nonatomic,copy) NSNumber * inputPasses; 
@property (nonatomic,copy) NSNumber * inputPerceptual; 
+(id)customAttributes;
-(void)setInputCount:(NSNumber *)arg1 ;
-(id)_combine:(id)arg1 ;
-(id)_kernelKmeans;
-(NSNumber *)inputPasses;
-(void)setInputPasses:(NSNumber *)arg1 ;
-(CIImage *)inputMeans;
-(void)setInputMeans:(CIImage *)arg1 ;
-(NSNumber *)inputPerceptual;
-(void)setInputPerceptual:(NSNumber *)arg1 ;
-(NSNumber *)inputCount;
-(id)outputImage;
@end

