/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@class ShotflowDetectorANFDv2, VNFaceBBoxAligner;

@interface VNANFDMultiDetector : VNEspressoModelFileBasedDetector {

	ShotflowDetectorANFDv2* _mMultiHeadedANFDDetector;
	VNFaceBBoxAligner* _faceBBoxAligner;

}
+(id)configurationOptionKeysForDetectorKey;
+(Class)detectorClass;
+(float)faceDetectorChunkAspectRatio;
+(id)detectedObjectClassToRequestClass;
+(id)detectedObjectRequestClassToRequestInfo;
+(id)detectedAnimalObjectClassToAnimalName;
+(id)knownAnimalIdentifiers;
+(void)_printDebugInfo:(id)arg1 detectedObjectsRaw:(id)arg2 faceDetectorBGRAImage:(CVBufferRef)arg3 tempImage:(vImage_Buffer*)arg4 ;
-(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(id)_alignFace:(id)arg1 imageBuffer:(id)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
@end
