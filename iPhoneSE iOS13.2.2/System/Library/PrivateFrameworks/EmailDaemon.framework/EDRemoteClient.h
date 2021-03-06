/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmailDaemon/EmailDaemon-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>
#import <libobjc.A.dylib/EMDaemonInterfaceXPC.h>

@protocol EMVIPManagerInterface;
@class EDAccountRepository, EDMailboxRepository, EDMessageRepository, EDOutgoingMessageRepository, EDFetchController, EDSearchableIndex, EDInteractionLogger, EDActivityRegistry, NSXPCConnection, EDDaemonInterfaceFactory, EDClientState, NSString;

@interface EDRemoteClient : NSObject <EFLoggable, EMDaemonInterfaceXPC> {

	os_unfair_lock_s _lock;
	EDAccountRepository* _accountRepository;
	EDMailboxRepository* _mailboxRepository;
	EDMessageRepository* _messageRepository;
	EDOutgoingMessageRepository* _outgoingMessageRepository;
	EDFetchController* _fetchController;
	EDSearchableIndex* _searchableIndex;
	EDInteractionLogger* _interactionLogger;
	id<EMVIPManagerInterface> _vipManagerInterface;
	EDActivityRegistry* _activityRegistry;
	NSXPCConnection* _clientConnection;
	EDDaemonInterfaceFactory* _daemonInterfaceFactory;
	EDClientState* _clientState;

}

@property (nonatomic,readonly) NSXPCConnection * clientConnection;                                   //@synthesize clientConnection=_clientConnection - In the implementation block
@property (nonatomic,readonly) EDDaemonInterfaceFactory * daemonInterfaceFactory;                    //@synthesize daemonInterfaceFactory=_daemonInterfaceFactory - In the implementation block
@property (nonatomic,readonly) EDAccountRepository * accountRepository;                              //@synthesize accountRepository=_accountRepository - In the implementation block
@property (nonatomic,retain) EDClientState * clientState;                                            //@synthesize clientState=_clientState - In the implementation block
@property (nonatomic,readonly) EDFetchController * fetchController;                                  //@synthesize fetchController=_fetchController - In the implementation block
@property (nonatomic,readonly) EDMailboxRepository * mailboxRepository;                              //@synthesize mailboxRepository=_mailboxRepository - In the implementation block
@property (nonatomic,readonly) EDMessageRepository * messageRepository;                              //@synthesize messageRepository=_messageRepository - In the implementation block
@property (nonatomic,readonly) EDOutgoingMessageRepository * outgoingMessageRepository;              //@synthesize outgoingMessageRepository=_outgoingMessageRepository - In the implementation block
@property (nonatomic,readonly) EDSearchableIndex * searchableIndex;                                  //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (nonatomic,readonly) EDInteractionLogger * interactionLogger;                              //@synthesize interactionLogger=_interactionLogger - In the implementation block
@property (nonatomic,readonly) EDActivityRegistry * activityRegistry;                                //@synthesize activityRegistry=_activityRegistry - In the implementation block
@property (nonatomic,readonly) id<EMVIPManagerInterface> vipManagerInterface;                        //@synthesize vipManagerInterface=_vipManagerInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)log;
-(EDSearchableIndex *)searchableIndex;
-(void)setClientState:(EDClientState *)arg1 ;
-(EDClientState *)clientState;
-(NSXPCConnection *)clientConnection;
-(void)test_tearDown;
-(void)getMessageRepositoryInterface:(/*^block*/id)arg1 ;
-(void)getOutgoingMessageRepositoryInterface:(/*^block*/id)arg1 ;
-(void)getAccountRepositoryInterface:(/*^block*/id)arg1 ;
-(void)getFetchControllerInterface:(/*^block*/id)arg1 ;
-(void)getMailboxRepositoryInterface:(/*^block*/id)arg1 ;
-(void)getClientStateInterface:(/*^block*/id)arg1 ;
-(void)getSearchableIndexInterface:(/*^block*/id)arg1 ;
-(void)getInteractionLoggerInterface:(/*^block*/id)arg1 ;
-(void)getVIPManagerInterface:(/*^block*/id)arg1 ;
-(void)getActivityRegistryInterface:(/*^block*/id)arg1 ;
-(void)debugStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)launchForEarlyRecovery:(/*^block*/id)arg1 ;
-(EDMessageRepository *)messageRepository;
-(EDOutgoingMessageRepository *)outgoingMessageRepository;
-(EDMailboxRepository *)mailboxRepository;
-(EDAccountRepository *)accountRepository;
-(EDFetchController *)fetchController;
-(EDInteractionLogger *)interactionLogger;
-(EDActivityRegistry *)activityRegistry;
-(EDDaemonInterfaceFactory *)daemonInterfaceFactory;
-(id<EMVIPManagerInterface>)vipManagerInterface;
-(id)initWithConnection:(id)arg1 daemonInterfaceFactory:(id)arg2 ;
@end

