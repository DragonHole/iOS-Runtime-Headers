/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AccessoryHID.framework/AccessoryHID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessoryHID/AccessoryHIDXPCClientProtocol.h>

@protocol AccessoryHIDClientProtocol, AccessoryHIDXPCServerProtocol;
@class NSXPCConnection, NSMutableDictionary, NSString;

@interface AccessoryHIDClient : NSObject <AccessoryHIDXPCClientProtocol> {

	id<AccessoryHIDClientProtocol> _delegate;
	NSXPCConnection* _serverConnection;
	id<AccessoryHIDXPCServerProtocol> _remoteObject;
	NSMutableDictionary* _registeredHIDDescriptors;

}

@property (nonatomic,retain) NSXPCConnection * serverConnection;                          //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) id<AccessoryHIDXPCServerProtocol> remoteObject;              //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * registeredHIDDescriptors;              //@synthesize registeredHIDDescriptors=_registeredHIDDescriptors - In the implementation block
@property (assign,nonatomic,__weak) id<AccessoryHIDClientProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRemoteObject:(id<AccessoryHIDXPCServerProtocol>)arg1 ;
-(id<AccessoryHIDXPCServerProtocol>)remoteObject;
-(NSXPCConnection *)serverConnection;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(void)registerHIDDescriptor:(id)arg1 componentID:(unsigned short)arg2 dictionary:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)unregisterHIDDescriptor:(id)arg1 componentID:(unsigned short)arg2 withReply:(/*^block*/id)arg3 ;
-(void)unregisterAllDescriptors:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)inReport:(id)arg1 componentID:(unsigned short)arg2 report:(id)arg3 withReply:(/*^block*/id)arg4 ;
-(void)getReportResponse:(id)arg1 componentID:(unsigned short)arg2 reportType:(unsigned char)arg3 reportID:(unsigned char)arg4 report:(id)arg5 withReply:(/*^block*/id)arg6 ;
-(NSMutableDictionary *)registeredHIDDescriptors;
-(void)setRegisteredHIDDescriptors:(NSMutableDictionary *)arg1 ;
-(void)sendOutReport:(id)arg1 fromUUID:(id)arg2 ;
-(void)sendGetReportForType:(id)arg1 andID:(id)arg2 fromUUID:(id)arg3 ;
-(void)hidDescriptor:(id)arg1 active:(BOOL)arg2 ;
-(void)connectToServer;
-(void)dealloc;
-(void)setDelegate:(id<AccessoryHIDClientProtocol>)arg1 ;
-(id<AccessoryHIDClientProtocol>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end
