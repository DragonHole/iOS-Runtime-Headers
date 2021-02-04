/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:10 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCTextJitterBuffer : NSObject {

	tagVCTextJitterBufferConfiguration _configuration;
	BOOL _resetRequested;
	id _delegate;
	JitterPreloadQueue_tRef _preloadQueue;
	JitterQueue_tRef _jitterQueue;
	NSObject*<OS_dispatch_source> _heartbeat;
	unsigned _lastSequenceNumber;
	BOOL _firstFrameReceived;

}
-(tagAudioPacket*)allocTextPacket;
-(void)releaseTextPacket:(tagAudioPacket*)arg1 ;
-(void)enqueuePacket:(tagAudioPacket*)arg1 ;
-(tagAudioFrame*)allocTextFrame;
-(BOOL)startHeartbeat;
-(void)stopHeartbeat;
-(void)heartbeat;
-(void)jitterQueuePushPacket:(tagAudioPacket*)arg1 ;
-(void)releaseTextFrame:(tagAudioFrame*)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)stop;
-(id)initWithConfiguration:(tagVCTextJitterBufferConfiguration*)arg1 ;
-(BOOL)start;
@end
