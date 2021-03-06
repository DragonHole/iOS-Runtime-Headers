/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, CIVector, NSNumber;

@interface RAWRadialLensCorrectionRB : RAWFilter {

	CIImage* inputImage;
	CIVector* inputScalesR;
	CIVector* inputScalesB;
	id inputColorSpace;
	NSNumber* inputDraftMode;
	NSNumber* inputLDCExecuteFlags;
	NSNumber* inputVersion;
	CIImage* mapImg;

}
+(id)customAttributes;
-(BOOL)makeMapImages;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)outputImage;
@end

