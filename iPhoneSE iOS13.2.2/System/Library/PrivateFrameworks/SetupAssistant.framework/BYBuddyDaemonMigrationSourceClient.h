/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BYClientMigrationSourceProtocol.h>

@protocol BYDeviceMigrationDelegate;
@class NSXPCConnection, NSString;

@interface BYBuddyDaemonMigrationSourceClient : NSObject <BYClientMigrationSourceProtocol> {

	id<BYDeviceMigrationDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                               //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<BYDeviceMigrationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInterface;
-(id)init;
-(id<BYDeviceMigrationDelegate>)delegate;
-(void)setDelegate:(id<BYDeviceMigrationDelegate>)arg1 ;
-(void)cancel;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)launchSetupForMigration;
-(void)setFileTransferTemplate:(id)arg1 ;
-(void)_connectToDaemon;
-(void)didUpdateProgress:(id)arg1 ;
-(void)didFinishWithError:(id)arg1 ;
-(void)didChangeConnectionInformation:(id)arg1 ;
-(void)registerAsUserInterfaceHost:(/*^block*/id)arg1 ;
@end

