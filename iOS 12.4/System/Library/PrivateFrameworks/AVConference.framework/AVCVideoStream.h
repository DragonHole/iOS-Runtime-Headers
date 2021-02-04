/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCMediaStreamDelegate.h>

@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, AVCMediaStreamConfig, VCVideoStream, NSDictionary, NSObject, NSString;

@interface AVCVideoStream : NSObject <VCMediaStreamDelegate> {

	AVConferenceXPCClient* _connection;
	AVCMediaStreamConfig* _configuration;
	id _delegate;
	VCVideoStream* _opaqueStream;
	long long _streamToken;
	NSDictionary* _capabilities;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSDictionary * capabilities;                                      //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) AVCMediaStreamConfig * configuration;                             //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) long long direction; 
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec; 
@property (nonatomic,readonly) long long streamToken;                                          //@synthesize streamToken=_streamToken - In the implementation block
@property (assign,nonatomic) id<AVCVideoStreamDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)extractClientDownlinkQualityInfoDictionary:(id)arg1 ;
+(id)extractClientUplinkQualityInfoDictionary:(id)arg1 ;
+(id)capabilities;
-(void)refreshLoggingParameters;
-(void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidStop:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg1 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(BOOL)arg2 error:(id)arg3 dictionary:(id)arg4 ;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(void)terminateSession;
-(id)initWithLocalAddress:(id)arg1 networkSockets:(id)arg2 IDSDestination:(id)arg3 callID:(id)arg4 error:(id*)arg5 ;
-(id)getStats;
-(NSDictionary *)capabilities;
-(long long)streamToken;
-(id)initWithIDSDestination:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(id)initWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(BOOL)configure:(id)arg1 error:(id*)arg2 ;
-(void)updateVideoConfiguration:(id)arg1 ;
-(void)requestLastDecodedFrame;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(BOOL)isRTCPEnabled;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(BOOL)isRTPTimeOutEnabled;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(BOOL)isRTCPTimeOutEnabled;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(double)rtpTimeOutIntervalSec;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(double)rtcpTimeOutIntervalSec;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(double)rtcpSendIntervalSec;
-(void)setCapabilities:(NSDictionary *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<AVCVideoStreamDelegate>)arg1 ;
-(id<AVCVideoStreamDelegate>)delegate;
-(void)stop;
-(AVCMediaStreamConfig *)configuration;
-(void)setConfiguration:(AVCMediaStreamConfig *)arg1 ;
-(void)start;
-(long long)direction;
-(void)resume;
-(void)setDirection:(long long)arg1 ;
-(void)pause;
@end
