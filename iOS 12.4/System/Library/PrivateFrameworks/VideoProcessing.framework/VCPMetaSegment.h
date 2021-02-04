/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPMetaSegment : NSObject {

	unsigned long long _numOfFrames;
	SCD_Struct_VC9 _timeRange;

}

@property (nonatomic,readonly) SCD_Struct_VC9 timeRange;                    //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) unsigned long long numOfFrames;              //@synthesize numOfFrames=_numOfFrames - In the implementation block
-(SCD_Struct_VC9)timeRange;
-(void)mergeSegment:(id)arg1 ;
-(unsigned long long)numOfFrames;
-(void)updateSegment:(SCD_Struct_VC6)arg1 ;
-(void)resetSegment:(SCD_Struct_VC6)arg1 ;
-(void)finalizeAtTime:(SCD_Struct_VC6)arg1 ;
-(id)init;
@end
