/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class CUTCheckpointRange;

@interface APSIncomingMessageCheckpointTrace : CUTCheckpointTrace {

	CUTCheckpointRange* _sendToClient;
	CUTCheckpointRange* _storeInMessageStore;

}

@property (nonatomic,readonly) CUTCheckpointRange * sendToClient;                     //@synthesize sendToClient=_sendToClient - In the implementation block
@property (nonatomic,readonly) CUTCheckpointRange * storeInMessageStore;              //@synthesize storeInMessageStore=_storeInMessageStore - In the implementation block
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(CUTCheckpointRange *)storeInMessageStore;
-(CUTCheckpointRange *)sendToClient;
-(id)init;
-(void)dealloc;
@end

