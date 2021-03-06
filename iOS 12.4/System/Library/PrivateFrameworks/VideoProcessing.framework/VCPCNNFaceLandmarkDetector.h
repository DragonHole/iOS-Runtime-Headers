/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSMutableArray;

@interface VCPCNNFaceLandmarkDetector : NSObject {

	NSMutableArray* _landmarks;

}
+(id)detector;
-(id)landmarks;
-(int)analyzeFrame:(CVBufferRef)arg1 withFaceBounds:(CGRect)arg2 ;
-(float*)getInputBuffer;
-(int)computeLandmarks:(float*)arg1 ;
@end

