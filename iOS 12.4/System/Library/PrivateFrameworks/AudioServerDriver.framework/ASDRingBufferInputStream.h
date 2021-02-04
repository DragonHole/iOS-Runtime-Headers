/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <AudioServerDriver/ASDStream.h>

@protocol ASDManagedRingBuffer;
@interface ASDRingBufferInputStream : ASDStream {

	unique_ptr<ASDBufferList, std::__1::default_delete<ASDBufferList> >* _bufferList;
	id<ASDManagedRingBuffer> _ringBuffer;

}

@property (nonatomic,retain) id<ASDManagedRingBuffer> ringBuffer;              //@synthesize ringBuffer=_ringBuffer - In the implementation block
-(void)startStream;
-(/*^block*/id)readInputBlock;
-(id)initWithDirection:(unsigned)arg1 withPlugin:(id)arg2 ;
-(void)setPhysicalFormat:(id)arg1 ;
-(id<ASDManagedRingBuffer>)ringBuffer;
-(id)initWithRingBuffer:(id)arg1 withPlugin:(id)arg2 ;
-(void)setRingBuffer:(id<ASDManagedRingBuffer>)arg1 ;
-(void)stopStream;
@end
