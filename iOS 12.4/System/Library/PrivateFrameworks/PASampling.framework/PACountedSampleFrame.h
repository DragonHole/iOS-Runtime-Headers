/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PACountedFrame.h>

@class PASampleFrame;

@interface PACountedSampleFrame : PACountedFrame {

	PASampleFrame* _sampleFrame;

}

@property (readonly) PASampleFrame * sampleFrame;              //@synthesize sampleFrame=_sampleFrame - In the implementation block
-(PASampleFrame *)sampleFrame;
-(id)initWithSampleFrame:(id)arg1 ;
-(id)debugDescription;
@end
