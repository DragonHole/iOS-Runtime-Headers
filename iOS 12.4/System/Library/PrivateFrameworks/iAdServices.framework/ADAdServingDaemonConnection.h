/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADAdServingDaemonConnectionDelegate, OS_dispatch_queue;
@class NSMutableArray, NSObject, NSXPCConnection;

@interface ADAdServingDaemonConnection : NSObject {

	id<ADAdServingDaemonConnectionDelegate> _delegate;
	NSMutableArray* _performWhenConnectedBlocks;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSXPCConnection* _adServingDaemonConnection;

}

@property (nonatomic,retain) NSMutableArray * performWhenConnectedBlocks;                          //@synthesize performWhenConnectedBlocks=_performWhenConnectedBlocks - In the implementation block
@property (assign,nonatomic) NSObject*<OS_dispatch_queue> connectionQueue;                         //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * adServingDaemonConnection;                          //@synthesize adServingDaemonConnection=_adServingDaemonConnection - In the implementation block
@property (assign,nonatomic,__weak) id<ADAdServingDaemonConnectionDelegate> delegate; 
-(NSXPCConnection *)adServingDaemonConnection;
-(NSMutableArray *)performWhenConnectedBlocks;
-(void)_considerConnectingToAdServingDaemon;
-(void)setAdServingDaemonConnection:(NSXPCConnection *)arg1 ;
-(void)setPerformWhenConnectedBlocks:(NSMutableArray *)arg1 ;
-(id)rpcProxy;
-(void)considerConnectingToAdServingDaemon;
-(void)performWhenConnected:(/*^block*/id)arg1 ;
-(id)rpcProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ADAdServingDaemonConnectionDelegate>)arg1 ;
-(id<ADAdServingDaemonConnectionDelegate>)delegate;
-(void)invalidate;
-(id)initWithDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
