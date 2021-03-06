/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNTorsoprintGenerator : VNDetector {

	void* _mEspressoContext;
	void* _mEspressoPlan;
	SCD_Struct_VN32* _mEspressoNetwork;

}
+(id)configurationOptionKeysForDetectorKey;
+(CGSize)_torsoprintInputImageSize;
+(CGSize)_torsoprintDescriptorSize;
+(float)_minimumTorsoInsideInputImageThreshold;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)_calculateTorsoBBoxFromFaceBBox:(CGRect)arg1 insideImageWithSize:(CGSize)arg2 faceOrientationRelativeToUpright:(int)arg3 torsoBBox:(CGRect*)arg4 error:(id*)arg5 ;
-(void)dealloc;
@end

