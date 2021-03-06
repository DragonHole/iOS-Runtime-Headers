/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTPersistenceDelegate <NSObject>
@optional
-(void)persistenceStore:(id)arg1 failedWithError:(id)arg2;
-(void)persistenceMigrator:(id)arg1 didStartMigratingStore:(id)arg2 withModelProvider:(id)arg3;
-(void)persistenceMigrator:(id)arg1 didFinishMigratingStore:(id)arg2 withModelProvider:(id)arg3;
-(BOOL)backupPersistenceStore:(id)arg1 error:(id*)arg2;
-(BOOL)importSourceStore:(id)arg1 sourceCoordinator:(id)arg2 destinationStore:(id)arg3 destinationCoordinator:(id)arg4 managedObjectModel:(id)arg5 configuration:(id)arg6 error:(id*)arg7;
-(void)persistenceManager:(id)arg1 didFinishSetup:(BOOL)arg2;
-(void)persistenceStore:(id)arg1 encounteredCriticalError:(id)arg2;
-(void)persistenceStore:(id)arg1 willBeginMirroringWithOptions:(id)arg2;
-(BOOL)purgeExpiredRecordsFromPersistenceStore:(id)arg1 withContext:(id)arg2 error:(id*)arg3;

@required
-(BOOL)persistenceMirroringManagerDidFinishZonePurge:(id)arg1 store:(id)arg2 context:(id)arg3 error:(id*)arg4;
-(id)mirroringOptionsForStoreWithType:(unsigned long long)arg1;
-(BOOL)store:(id)arg1 validateAppleIDs:(id)arg2;
-(BOOL)prepareStore:(id)arg1 withContext:(id)arg2 error:(id*)arg3;
-(id)appleIDsForStore:(id)arg1;
-(void)persistenceManagerWillStartResetSync:(id)arg1 userInfo:(id)arg2 context:(id)arg3;
-(void)persistenceManagerDidFinishResetSync:(id)arg1 userInfo:(id)arg2;
-(id)optionsForStoreWithType:(unsigned long long)arg1 error:(id*)arg2;
-(id)remoteServerOptionsForStoreWithType:(unsigned long long)arg1;

@end

