/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNEspressoModelFileBasedDetector.h>

@interface VNSaliencyHeatmapBoundingBoxGenerator : VNEspressoModelFileBasedDetector
+(id)calculateSaliencyBoundingBoxesForDetectorType:(id)arg1 pixelBuffer:(CVBufferRef)arg2 configurationOptions:(id)arg3 requestRevision:(unsigned long long)arg4 regionOfInterest:(CGRect)arg5 warningRecorder:(id)arg6 error:(id*)arg7 ;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(id)configurationOptionKeysForDetectorKey;
+(id)keyForDetectorWithConfigurationOptions:(id)arg1 ;
-(id)_observationsForOneComponent32FloatPixelBuffer:(CVBufferRef)arg1 options:(id)arg2 regionOfInterest:(CGRect)arg3 error:(id*)arg4 ;
-(CVBufferRef)_createScaledOneComponent32FloatPixelBufferFromImageBuffer:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
@end

