/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PASampleTaskData;

@interface PATimestampIndexedSampleTask : NSObject {

	unsigned long long _lastTimestampIndex;
	PASampleTaskData* _sampleTask;

}

@property (assign) unsigned long long lastTimestampIndex;              //@synthesize lastTimestampIndex=_lastTimestampIndex - In the implementation block
@property (readonly) PASampleTaskData * sampleTask;                    //@synthesize sampleTask=_sampleTask - In the implementation block
-(id)initWithSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(unsigned long long)lastTimestampIndex;
-(void)setLastTimestampIndex:(unsigned long long)arg1 ;
-(PASampleTaskData *)sampleTask;
-(id)debugDescription;
@end

