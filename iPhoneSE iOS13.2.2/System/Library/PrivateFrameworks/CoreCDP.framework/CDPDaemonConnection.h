/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:21 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, NSLock, NSXPCListenerEndpoint;

@interface CDPDaemonConnection : NSObject {

	NSXPCConnection* _conn;
	NSLock* _connLock;
	NSXPCListenerEndpoint* _daemonXPCEndpoint;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * daemonXPCEndpoint;              //@synthesize daemonXPCEndpoint=_daemonXPCEndpoint - In the implementation block
-(id)init;
-(id)connection;
-(id)daemon;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousDaemonWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setDaemonXPCEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(NSXPCListenerEndpoint *)daemonXPCEndpoint;
@end

