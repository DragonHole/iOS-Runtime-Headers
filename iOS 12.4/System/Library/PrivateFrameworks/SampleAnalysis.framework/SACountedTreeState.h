/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SampleAnalysis/SACountedTreeNode.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>

@class SATimestamp, SAWaitInfo, NSString;

@interface SACountedTreeState : SACountedTreeNode <SAJSONSerialization> {

	int _pid;
	unsigned _microstackshotState;
	SATimestamp* _startTimestamp;
	unsigned long long _threadId;
	SAWaitInfo* _waitInfo;
	unsigned long long _state;

}

@property (readonly) SATimestamp * startTimestamp;                  //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (readonly) int pid;                                       //@synthesize pid=_pid - In the implementation block
@property (readonly) unsigned long long threadId;                   //@synthesize threadId=_threadId - In the implementation block
@property (readonly) SAWaitInfo * waitInfo;                         //@synthesize waitInfo=_waitInfo - In the implementation block
@property (readonly) unsigned long long state;                      //@synthesize state=_state - In the implementation block
@property (readonly) unsigned microstackshotState;                  //@synthesize microstackshotState=_microstackshotState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)treeCountedStateWithWaitInfo:(id)arg1 state:(unsigned long long)arg2 microstackshotState:(unsigned)arg3 pid:(int)arg4 threadId:(unsigned long long)arg5 startSampleIndex:(unsigned long long)arg6 startTimestamp:(id)arg7 sampleCount:(unsigned long long)arg8 ;
+(void)writeJSONDictionaryEntriesToStream:(id)arg1 microstackshotState:(unsigned)arg2 primaryMicrostackshotState:(unsigned)arg3 includeIdleAndBattery:(BOOL)arg4 ;
-(int)pid;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(unsigned long long)threadId;
-(SAWaitInfo *)waitInfo;
-(id)initWithWaitInfo:(id)arg1 state:(unsigned long long)arg2 microstackshotState:(unsigned)arg3 pid:(int)arg4 threadId:(unsigned long long)arg5 startSampleIndex:(unsigned long long)arg6 startTimestamp:(id)arg7 sampleCount:(unsigned long long)arg8 ;
-(unsigned)microstackshotState;
-(unsigned long long)state;
-(SATimestamp *)startTimestamp;
@end
