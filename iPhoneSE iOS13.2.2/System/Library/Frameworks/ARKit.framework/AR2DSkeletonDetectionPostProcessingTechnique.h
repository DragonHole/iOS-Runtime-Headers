/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:24 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARImageBasedTechnique.h>

@protocol OS_dispatch_queue;
@class AR2DSkeletonDetectionPostProcessGPU, NSObject, AR2DSkeletonRawEspressoResult;

@interface AR2DSkeletonDetectionPostProcessingTechnique : ARImageBasedTechnique {

	AR2DSkeletonDetectionPostProcessGPU* _postProcessorGPU;
	SkeletonJointFilter<float>* _extrapolationFilter2D;
	SkeletonJointFilter<float>* _extrapolationFilter2DForLiftingData;
	NSObject*<OS_dispatch_queue> _processingQueue;
	AR2DSkeletonRawEspressoResult* _previousRawEspressoResult;

}

@property (nonatomic,retain) AR2DSkeletonRawEspressoResult * previousRawEspressoResult;              //@synthesize previousRawEspressoResult=_previousRawEspressoResult - In the implementation block
-(id)init;
-(id)processData:(id)arg1 ;
-(double)requiredTimeInterval;
-(AR2DSkeletonRawEspressoResult *)previousRawEspressoResult;
-(void)setPreviousRawEspressoResult:(AR2DSkeletonRawEspressoResult *)arg1 ;
@end

