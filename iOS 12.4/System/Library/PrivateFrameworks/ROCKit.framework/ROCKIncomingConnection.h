/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface ROCKIncomingConnection : NSObject {

	NSObject*<OS_xpc_object> _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)connectionWithXPCConnection:(id)arg1 handlerQueue:(id)arg2 xpcHandler:(/*^block*/id)arg3 ;
-(NSObject*<OS_xpc_object>)xpcConnection;
-(void)setXpcConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(id)initWithXPCConnection:(id)arg1 handlerQueue:(id)arg2 xpcHandler:(/*^block*/id)arg3 ;
@end

