/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BCCloudDataSyncManagerDelegate <NSObject>
@optional
-(void)syncManager:(id)arg1 fetchedAllRecordsInZone:(id)arg2;

@required
-(id)entityName;
-(void)syncManager:(id)arg1 startSyncToCKWithCompletion:(/*^block*/id)arg2;
-(void)signalSyncToCKForSyncManager:(id)arg1;
-(void)syncManager:(id)arg1 removeCloudDataForIDs:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncManager:(id)arg1 updateSyncGenerationFromCloudData:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncManager:(id)arg1 resolveConflictsForRecords:(id)arg2 completion:(/*^block*/id)arg3;
-(void)syncManager:(id)arg1 failedRecordIDs:(id)arg2 completion:(/*^block*/id)arg3;

@end

