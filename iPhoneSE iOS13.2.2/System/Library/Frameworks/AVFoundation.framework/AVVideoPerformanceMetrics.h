/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVVideoPerformanceMetricsInternal;

@interface AVVideoPerformanceMetrics : NSObject {

	AVVideoPerformanceMetricsInternal* _performanceMetricsInternal;

}

@property (nonatomic,readonly) unsigned long long totalNumberOfVideoFrames; 
@property (nonatomic,readonly) unsigned long long numberOfDroppedVideoFrames; 
@property (nonatomic,readonly) unsigned long long numberOfCorruptedVideoFrames; 
@property (nonatomic,readonly) unsigned long long numberOfDisplayCompositedVideoFrames; 
@property (nonatomic,readonly) unsigned long long numberOfNonDisplayCompositedVideoFrames; 
@property (nonatomic,readonly) double totalFrameDelay; 
-(id)init;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)numberOfDisplayCompositedVideoFrames;
-(unsigned long long)totalNumberOfVideoFrames;
-(unsigned long long)numberOfDroppedVideoFrames;
-(unsigned long long)numberOfCorruptedVideoFrames;
-(double)totalFrameDelay;
-(unsigned long long)numberOfNonDisplayCompositedVideoFrames;
@end
