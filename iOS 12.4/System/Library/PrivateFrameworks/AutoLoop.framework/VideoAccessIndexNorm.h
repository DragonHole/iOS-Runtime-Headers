/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AutoLoop/AutoLoop-Structs.h>
#import <AutoLoop/VideoAccessIndex.h>

@interface VideoAccessIndexNorm : VideoAccessIndex {

	FrameTimeNormalizer* mNormalizer;

}
-(id)initFromFile:(id)arg1 pixelFormat:(unsigned)arg2 normalizer:(FrameTimeNormalizer*)arg3 ;
-(int)getFrameAtIndex:(unsigned)arg1 pixBuf:(_CVBuffer*)arg2 ;
@end

