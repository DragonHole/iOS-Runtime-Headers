/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSXPCConnection;

@interface WLDaemonConnection : NSObject {

	NSLock* _daemonLock;
	NSXPCConnection* _daemonConn;
	/*^block*/id _interruptionHandler;

}

@property (nonatomic,copy) id interruptionHandler;              //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
-(id)init;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)interruptionHandler;
-(id)daemonWithErrorHandler:(/*^block*/id)arg1 ;
-(id)daemonConnection;
-(void)invalidateDaemonConnection;
@end
