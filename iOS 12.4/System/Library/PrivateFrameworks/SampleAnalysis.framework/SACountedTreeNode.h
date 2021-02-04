/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SACountedTreeNode : NSObject {

	unsigned long long _sampleCount;
	unsigned long long _startSampleIndex;

}

@property (assign) unsigned long long sampleCount;                   //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign) unsigned long long startSampleIndex;              //@synthesize startSampleIndex=_startSampleIndex - In the implementation block
+(id)stackNodeWithStartSampleIndex:(unsigned long long)arg1 sampleCount:(unsigned long long)arg2 ;
-(void)setStartSampleIndex:(unsigned long long)arg1 ;
-(unsigned long long)startSampleIndex;
-(id)initWithStartSampleIndex:(unsigned long long)arg1 sampleCount:(unsigned long long)arg2 ;
-(unsigned long long)sampleCount;
-(void)setSampleCount:(unsigned long long)arg1 ;
@end
