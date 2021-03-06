/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface RedEyeChannel : CIFilter {

	CIImage* inputImage;
	NSNumber* inputChannel;
	NSNumber* inputParam1;
	NSNumber* inputParam2;
	NSNumber* inputParam3;
	NSNumber* inputParam4;

}
-(id)outputImage;
-(id)filterNameForChannel:(int)arg1 ;
-(id)parameterNamesForChannel:(int)arg1 ;
@end

