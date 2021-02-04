/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MRNowPlayingClientState.h>

@protocol OS_dispatch_queue;
@class _MRPlaybackQueueProtobuf, NSArray, NSObject, NSMutableDictionary, NSMutableArray, NSOperationQueue, _MRNowPlayingPlayerPathProtobuf, MRPlaybackQueueSubscriptionController;

@interface MRNowPlayingPlayerClientRequests : NSObject <MRNowPlayingClientState> {

	_MRPlaybackQueueProtobuf* _playbackQueue;
	unsigned _playbackState;
	NSArray* _supportedCommands;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _responseQueue;
	NSMutableDictionary* _playbackQueueCompletions;
	NSMutableArray* _supportedCommandsCompletions;
	NSMutableArray* _playbackStateCompletions;
	NSMutableDictionary* _transactionCallbacks;
	NSMutableDictionary* _transactions;
	NSOperationQueue* _enquedNowPlayingInfoRequests;
	NSOperationQueue* _enquedNowPlayingInfoAssetRequests;
	_MRNowPlayingPlayerPathProtobuf* _playerPath;
	MRPlaybackQueueSubscriptionController* _subscriptionController;

}

@property (nonatomic,readonly) _MRNowPlayingPlayerPathProtobuf * playerPath;                                //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) MRPlaybackQueueSubscriptionController * subscriptionController;              //@synthesize subscriptionController=_subscriptionController - In the implementation block
@property (assign,nonatomic) unsigned playbackState; 
@property (nonatomic,copy) _MRPlaybackQueueProtobuf * playbackQueue; 
@property (nonatomic,retain) NSArray * supportedCommands; 
-(void)setPlaybackQueue:(_MRPlaybackQueueProtobuf *)arg1 ;
-(id)initWithPlayerPath:(id)arg1 ;
-(void)handlePlaybackStateRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)handleSupportedCommandsRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)restoreNowPlayingClientState;
-(void)receiveTransaction:(unsigned long long)arg1 fromMessage:(id)arg2 ;
-(void)addPlaybackQueueCompletion:(/*^block*/id)arg1 forRequest:(id)arg2 ;
-(void)removePlaybackQueueCompletionForRequest:(id)arg1 ;
-(void)enqueuePlaybackQueueRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateContentItems:(id)arg1 ;
-(void)updateContentItemArtwork:(id)arg1 ;
-(void)_registerDefaultCallbacks;
-(void)_handleEnqueuedPlaybackQueueRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updatePlaybackQueue:(id)arg1 ;
-(id)_transactionDestintationForName:(unsigned long long)arg1 ;
-(void)_handleTransactionPackets:(id)arg1 packets:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)transactionCallbacksForName:(unsigned long long)arg1 ;
-(void)addTransactionCallback:(/*^block*/id)arg1 forName:(unsigned long long)arg2 ;
-(NSArray *)supportedCommands;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(_MRPlaybackQueueProtobuf *)playbackQueue;
-(_MRNowPlayingPlayerPathProtobuf *)playerPath;
-(MRPlaybackQueueSubscriptionController *)subscriptionController;
-(unsigned)playbackState;
-(void)setPlaybackState:(unsigned)arg1 ;
-(void)dealloc;
-(id)debugDescription;
@end
