/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDPDaemonProtocol
@required
-(void)setUserVisibleKeychainSyncEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2;
-(void)removeNonViewAwarePeersFromCircleWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)startCircleApplicationApprovalServerWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)postFollowUpWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)handleCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3;
-(void)repairCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3;
-(void)shouldPerformRepairForContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)recoverAndSynchronizeSquirrelWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3;
-(void)recoverSquirrelWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3;
-(void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 context:(id)arg3 uiProvider:(id)arg4 completion:(/*^block*/id)arg5;
-(void)finishOfflineLocalSecretChangeWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3;
-(void)generateNewRecoveryKeyWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3;
-(void)deleteRecoveryKeyWithContext:(id)arg1 uiProvider:(id)arg2 completion:(/*^block*/id)arg3;
-(void)generateRandomRecoveryKeyWithContext:(id)arg1 completion:(/*^block*/id)arg2;
-(void)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)hasLocalSecretWithCompletion:(/*^block*/id)arg1;
-(void)isUserVisibleKeychainSyncEnabledWithCompletion:(/*^block*/id)arg1;
-(void)performRecoveryWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 completion:(/*^block*/id)arg4;
-(void)clearFollowUpWithContext:(id)arg1 completion:(/*^block*/id)arg2;

@end
