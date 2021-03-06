/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommonUtilities/CUTCheckpointTrace.h>

@class APSOutgoingMessageCheckpointTrace;

@interface IDSAggregateMessageSendCheckpointTrace : CUTCheckpointTrace {

	APSOutgoingMessageCheckpointTrace* _apsMessageTrace;

}

@property (nonatomic,retain) APSOutgoingMessageCheckpointTrace * apsMessageTrace;              //@synthesize apsMessageTrace=_apsMessageTrace - In the implementation block
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(APSOutgoingMessageCheckpointTrace *)apsMessageTrace;
-(void)setApsMessageTrace:(APSOutgoingMessageCheckpointTrace *)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 ;
@end

