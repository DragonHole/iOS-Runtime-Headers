/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class NSData;

@interface AVCameraCalibrationDataInternal : NSObject {

	SCD_Struct_AV65 intrinsicMatrix;
	CGSize intrinsicMatrixReferenceDimensions;
	SCD_Struct_AV66 extrinsicMatrix;
	float pixelSize;
	NSData* lensDistortionCoefficients;
	NSData* inverseLensDistortionCoefficients;
	CGPoint lensDistortionCenter;
	NSData* lensDistortionLookupTable;
	NSData* inverseLensDistortionLookupTable;

}
@end

