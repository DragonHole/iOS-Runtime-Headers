/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIPageCurlWithShadowTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputBacksideImage;
	CIVector* inputExtent;
	NSNumber* inputTime;
	NSNumber* inputAngle;
	NSNumber* inputRadius;
	NSNumber* inputShadowSize;
	NSNumber* inputShadowAmount;
	CIVector* inputShadowExtent;

}
+(id)customAttributes;
-(id)_CIPageCurlWithShadowTransition;
-(id)_CIPageCurlNoShadowTransition;
-(id)outputImage;
@end

