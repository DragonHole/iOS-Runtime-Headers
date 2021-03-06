/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSXPCListenerDelegate;
@class NSObject, NSString, NSXPCListenerEndpoint;

@interface NSXPCListener : NSObject {

	void* _xconnection;
	NSObject*<OS_dispatch_queue> _userQueue;
	void* reserved0;
	id<NSXPCListenerDelegate> _delegate;
	NSString* _serviceName;
	unsigned long long _state;
	id _reserved1;
	id _reserved2;

}

@property (assign) id<NSXPCListenerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (retain,readonly) NSXPCListenerEndpoint * endpoint; 
+(id)anonymousListener;
+(void)enableTransactions;
+(id)serviceListener;
+(id)_UUID;
-(id)_initShared;
-(void)dealloc;
-(id)description;
-(void)setDelegate:(id<NSXPCListenerDelegate>)arg1 ;
-(id<NSXPCListenerDelegate>)delegate;
-(void)invalidate;
-(void)stop;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)_setQueue:(id)arg1 ;
-(void)resume;
-(id)_queue;
-(id)serviceName;
-(id)initWithServiceName:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg1 ;
-(void)suspend;
-(id)_xpcConnection;
-(NSXPCListenerEndpoint *)endpoint;
@end

