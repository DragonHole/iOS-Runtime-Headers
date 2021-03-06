/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AutoLoop/AutoLoop-Structs.h>
#import <AutoLoop/VideoReader.h>

@interface VideoReaderRand : VideoReader {

	vector<CMTime, std::__1::allocator<CMTime> >* _frameTimes;
	int _lastFrameDex;
	int _numFrames;

}
-(int)indexForTime:(SCD_Struct_Pr1)arg1 ;
-(id)initFromFile:(id)arg1 withParams:(id)arg2 ;
-(id)initFromFile:(id)arg1 frameTimes:(const vector<CMTime, std::__1::allocator<CMTime> >*)arg2 ;
-(int)getFrameAtTime:(SCD_Struct_Pr1)arg1 frame:(opaqueCMSampleBuffer*)arg2 rawFrameIndex:(unsigned*)arg3 ;
-(int)reset;
@end

