/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NRNSXPCConnectionProtocol.h>

@protocol OS_dispatch_queue;
@class NRMockClientNSXPCConnection, NRMockNSXPCListener, NSObject, NSXPCInterface, NSString;

@interface NRMockServerNSXPCConnection : NSObject <NRNSXPCConnectionProtocol> {

	NRMockClientNSXPCConnection* _clientConnection;
	NRMockNSXPCListener* _listener;
	id _synchronousRemoteObjectProxy;
	id _remoteObjectProxy;
	BOOL _invalidated;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCInterface* _exportedInterface;
	id _exportedObject;
	/*^block*/id _invalidationHandler;
	/*^block*/id _interruptionHandler;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) BOOL invalidated;                                  //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSXPCInterface * exportedInterface;                  //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) id exportedObject;                                   //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface; 
@property (nonatomic,retain,readonly) id remoteObjectProxy; 
@property (nonatomic,copy) id interruptionHandler;                                //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,retain,readonly) NSString * processName; 
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(NSXPCInterface *)remoteObjectInterface;
-(void)runCompletionBlock:(/*^block*/id)arg1 ;
-(id)remoteObjectProxyAsync:(BOOL)arg1 ;
-(id)initWithListener:(id)arg1 clientConnection:(id)arg2 ;
-(id)valueForEntitlement:(id)arg1 ;
-(id)exportedObject;
-(void)dealloc;
-(void)invalidate;
-(void)_invalidate;
-(NSXPCInterface *)exportedInterface;
-(id)initWithMachServiceName:(id)arg1 options:(unsigned long long)arg2 ;
-(void)_setQueue:(id)arg1 ;
-(void)setInterruptionHandler:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(void)resume;
-(id)remoteObjectProxy;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)setExportedObject:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)suspend;
-(NSString *)processName;
-(int)processIdentifier;
-(BOOL)invalidated;
@end
