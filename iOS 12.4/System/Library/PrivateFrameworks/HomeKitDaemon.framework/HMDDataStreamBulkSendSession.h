/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMDDataStreamBulkSendSession.h>

@protocol HMDDataStreamBulkSendSession <NSObject>
@property (readonly) BOOL hasMoreData; 
@required
-(void)cancelWithReason:(unsigned short)arg1;
-(BOOL)hasMoreData;
-(void)read:(/*^block*/id)arg1;

@end


@protocol OS_dispatch_queue;
@class HMDDataStreamBulkSendProtocol, NSNumber, NSObject, NSMutableArray, NSError, NSString;

@interface HMDDataStreamBulkSendSession : NSObject <HMDDataStreamBulkSendSession> {

	BOOL _isClosed;
	BOOL _hasReceivedEof;
	HMDDataStreamBulkSendProtocol* _bulkSendProtocol;
	NSNumber* _sessionIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _activeReadHandler;
	NSMutableArray* _pendingReads;
	NSError* _receivedFailure;

}

@property (nonatomic,copy) id activeReadHandler;                                                     //@synthesize activeReadHandler=_activeReadHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingReads;                                          //@synthesize pendingReads=_pendingReads - In the implementation block
@property (nonatomic,retain) NSError * receivedFailure;                                              //@synthesize receivedFailure=_receivedFailure - In the implementation block
@property (nonatomic,__weak,readonly) HMDDataStreamBulkSendProtocol * bulkSendProtocol;              //@synthesize bulkSendProtocol=_bulkSendProtocol - In the implementation block
@property (nonatomic,readonly) NSNumber * sessionIdentifier;                                         //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) BOOL hasMoreData; 
-(NSMutableArray *)pendingReads;
-(void)setPendingReads:(NSMutableArray *)arg1 ;
-(void)cancelWithReason:(unsigned short)arg1 ;
-(BOOL)hasMoreData;
-(void)read:(/*^block*/id)arg1 ;
-(void)asyncHandleRemoteCloseWithError:(id)arg1 ;
-(id)initWithProtocol:(id)arg1 sessionIdentifier:(id)arg2 queue:(id)arg3 ;
-(NSError *)receivedFailure;
-(void)asyncHandleIncomingPackets:(id)arg1 isEof:(BOOL)arg2 ;
-(HMDDataStreamBulkSendProtocol *)bulkSendProtocol;
-(void)setReceivedFailure:(NSError *)arg1 ;
-(void)_closeSession;
-(id)activeReadHandler;
-(void)setActiveReadHandler:(id)arg1 ;
-(void)_pumpReadDataIfPossible;
-(void)dealloc;
-(NSNumber *)sessionIdentifier;
-(NSObject*<OS_dispatch_queue>)queue;
@end
