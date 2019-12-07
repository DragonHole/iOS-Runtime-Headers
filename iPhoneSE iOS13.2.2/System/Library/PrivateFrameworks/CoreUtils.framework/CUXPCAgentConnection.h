/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CUXPCAgent, NSObject, NSXPCConnection;

@interface CUXPCAgentConnection : NSObject {

	CUXPCAgent* _agent;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCConnection* _xpcCnx;

}
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(void)connectionInvalidated;
@end
