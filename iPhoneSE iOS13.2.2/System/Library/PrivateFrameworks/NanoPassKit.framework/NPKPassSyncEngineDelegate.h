/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NPKPassSyncEngineDelegate <NSObject>
@optional
-(void)passSyncEngineStateChanged:(id)arg1;
-(void)passSyncEngineEncounteredUnexpectedEvent:(id)arg1;
-(void)passSyncEngine:(id)arg1 receivedStateChangeProcessed:(id)arg2 changeAccepted:(BOOL)arg3;
-(void)passSyncEngine:(id)arg1 finishedProcessingChange:(id)arg2;

@required
-(void)passSyncEngine:(id)arg1 sendStateChange:(id)arg2;
-(void)passSyncEngine:(id)arg1 sendStateChangeProcessedWithUUID:(id)arg2 changeAccepted:(BOOL)arg3 fullPassRequired:(BOOL)arg4;
-(void)passSyncEngine:(id)arg1 sendReconciledStateUnrecognizedWithHash:(id)arg2 currentPassSyncState:(id)arg3;
-(void)passSyncEngine:(id)arg1 sendProposedReconciledState:(id)arg2;
-(void)passSyncEngine:(id)arg1 sendReconciledStateAcceptedWithHash:(id)arg2;
-(void)passSyncEngine:(id)arg1 requestsAddPassData:(id)arg2 forSyncStateItem:(id)arg3 completion:(/*^block*/id)arg4;
-(void)passSyncEngine:(id)arg1 requestsUpdatePassData:(id)arg2 forSyncStateItem:(id)arg3 baseManifestHashForPartialUpdate:(id)arg4 remoteAssetsForPartialUpdate:(id)arg5 completion:(/*^block*/id)arg6;
-(void)passSyncEngine:(id)arg1 requestsRemovePassWithUniqueID:(id)arg2 completion:(/*^block*/id)arg3;

@end

