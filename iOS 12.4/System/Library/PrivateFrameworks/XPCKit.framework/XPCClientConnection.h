/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_dispatch_queue, XPCClientConnectionDelegate;
@class NSString, NSObject;

@interface XPCClientConnection : NSObject {

	NSString* _serviceName;
	NSObject*<OS_xpc_object> _connection;
	NSObject*<OS_dispatch_queue> _queue;
	id<XPCClientConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) id<XPCClientConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleConnectionEvent:(id)arg1 ;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(void)_handleIncomingMessage:(id)arg1 ;
-(void)_reallySendMessage:(id)arg1 handler:(/*^block*/id)arg2 sequence:(unsigned long long)arg3 retryCount:(unsigned long long)arg4 ;
-(void)sendMessage:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)initWithServiceName:(id)arg1 delegate:(id)arg2 ;
-(id)debugDescription;
-(id<XPCClientConnectionDelegate>)delegate;
@end

