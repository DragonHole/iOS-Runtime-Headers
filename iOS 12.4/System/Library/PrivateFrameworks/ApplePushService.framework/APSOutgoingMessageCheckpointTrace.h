/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class CUTCheckpointRange;

@interface APSOutgoingMessageCheckpointTrace : CUTCheckpointTrace {

	CUTCheckpointRange* _sendToDaemon;
	CUTCheckpointRange* _messageOnQueue;
	CUTCheckpointRange* _waitForACK;

}

@property (nonatomic,readonly) CUTCheckpointRange * sendToDaemon;                //@synthesize sendToDaemon=_sendToDaemon - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * messageOnQueue;              //@synthesize messageOnQueue=_messageOnQueue - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * waitForACK;                  //@synthesize waitForACK=_waitForACK - In the implementation block
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(CUTCheckpointRange *)sendToDaemon;
-(CUTCheckpointRange *)messageOnQueue;
-(CUTCheckpointRange *)waitForACK;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(void)dealloc;
@end

