/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface BSActionListenerToken : NSObject {

	unsigned _port;
	NSObject*<OS_xpc_object> _endpoint;

}

@property (assign,nonatomic) unsigned port;                                  //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
-(id)initWithPort:(unsigned)arg1 endpoint:(id)arg2 ;
-(void)setPort:(unsigned)arg1 ;
-(void)setEndpoint:(NSObject*<OS_xpc_object>)arg1 ;
-(void)dealloc;
-(unsigned)port;
-(NSObject*<OS_xpc_object>)endpoint;
@end
