/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _NMRIDSMessageHandler : NSObject {

	unsigned short _messageType;
	id _target;
	SEL _action;

}

@property (assign,nonatomic) unsigned short messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (assign,nonatomic,__weak) id target;                        //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                              //@synthesize action=_action - In the implementation block
-(void)setMessageType:(unsigned short)arg1 ;
-(unsigned short)messageType;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
@end
