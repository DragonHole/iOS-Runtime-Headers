/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SAOutputStream.h>

@class NSMutableData;

@interface SAMutableDataOutputStream : SAOutputStream {

	NSMutableData* _outputData;

}

@property (nonatomic,readonly) NSMutableData * outputData;              //@synthesize outputData=_outputData - In the implementation block
-(long long)write:(const char*)arg1 maxLength:(unsigned long long)arg2 ;
-(BOOL)hasSpaceAvailable;
-(int)printWithFormat:(const char*)arg1 ;
-(id)initWithMutableData:(id)arg1 ;
-(NSMutableData *)outputData;
-(int)appendData:(id)arg1 ;
@end

