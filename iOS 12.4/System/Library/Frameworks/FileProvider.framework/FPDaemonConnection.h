/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FPDDaemon, OS_dispatch_queue, OS_dispatch_source;
@class NSXPCConnection, NSObject, NSMutableDictionary;

@interface FPDaemonConnection : NSObject {

	NSXPCConnection*<FPDDaemon> _connectionQueueConnection;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSMutableDictionary* _getAttributeConnections;
	NSObject*<OS_dispatch_source> _getAttributeConnectionsIdleCleanupTimer;
	unsigned _user;

}

@property (nonatomic,retain) NSXPCConnection*<FPDDaemon> connectionQueueConnection;              //@synthesize connectionQueueConnection=_connectionQueueConnection - In the implementation block
@property (nonatomic,readonly) NSXPCConnection*<FPDDaemon> connection; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                       //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (assign,nonatomic) unsigned user;                                                      //@synthesize user=_user - In the implementation block
+(id)connectionForUser:(unsigned)arg1 ;
+(id)newXPCConnection;
+(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
+(id)sharedConnection;
-(void)fetchSupportedServicesForDocumentAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)wakeUpForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)evictItemAtURL:(id)arg1 evenIfEnumeratingFP:(BOOL)arg2 andClearACLForConsumer:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateLastUsedDateForFileURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)providersCompletionHandler:(/*^block*/id)arg1 ;
-(void)setConnectionQueueConnection:(NSXPCConnection*<FPDDaemon>)arg1 ;
-(void)extendSandboxForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)startProvidingItemAtURL:(id)arg1 fromProviderID:(id)arg2 forConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)fetchRemoteFileProviderWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchRemoteServiceEndpointCreatingProviderWithIdentifier:(id)arg1 itemURL:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)extendBookmarkForFileURL:(id)arg1 toConsumerID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)bookmarkableStringFromDocumentURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dumpStateTo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)extendSandboxAndCreatePlaceholderForFileURL:(id)arg1 fromProviderID:(id)arg2 toConsumerID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)bookmarkableStringFromDocumentURL:(id)arg1 error:(id*)arg2 ;
-(void)documentURLFromBookmarkableString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)documentURLFromBookmarkableString:(id)arg1 error:(id*)arg2 ;
-(void)unobserveWithToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)valuesForAttributes:(id)arg1 forItemAtURL:(id)arg2 error:(id*)arg3 ;
-(NSXPCConnection*<FPDDaemon>)connectionQueueConnection;
-(unsigned)user;
-(void)setUser:(unsigned)arg1 ;
-(id)initWithUser:(unsigned)arg1 ;
-(NSXPCConnection*<FPDDaemon>)connection;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

