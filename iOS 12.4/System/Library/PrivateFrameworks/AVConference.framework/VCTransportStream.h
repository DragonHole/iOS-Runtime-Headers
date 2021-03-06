/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCTransportStream : NSObject {

	unsigned _transportSessionID;
	int _vtpReceiveSocket;
	int _vtpCancelSocket;
	tagVCMediaQueueRef _mediaQueue;

}

@property (assign,nonatomic) tagVCMediaQueueRef mediaQueue;              //@synthesize mediaQueue=_mediaQueue - In the implementation block
-(void)setMediaQueue:(tagVCMediaQueueRef)arg1 ;
-(tagVCMediaQueueRef)mediaQueue;
-(id)initWithTransportSessionID:(unsigned)arg1 options:(id)arg2 ;
-(int)VCTransportStreamSendPacket:(SCD_Struct_VC138*)arg1 ;
-(void)VCTransportStreamUnblock;
-(int)receivePacket:(SCD_Struct_VC138*)arg1 ;
-(void)dealloc;
@end

