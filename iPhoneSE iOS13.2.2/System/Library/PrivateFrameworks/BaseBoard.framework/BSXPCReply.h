/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:38 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface BSXPCReply : NSObject {

	NSObject*<OS_xpc_object> _reply;
	int _sent;

}
+(id)replyForMessage:(id)arg1 ;
+(id)messageWithReply:(id)arg1 ;
-(id)message;
-(id)_initWithReply:(id)arg1 ;
-(id)initWithReply:(id)arg1 ;
-(id)initForMessage:(id)arg1 ;
-(void)sendReply:(/*^block*/id)arg1 ;
-(long long)messageKind;
@end
