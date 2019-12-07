/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol FCCKDatabaseMigrator, FCCKZonePruningAssistant;
@class FCCKPrivateDatabase, CKRecordZoneID, NSMutableSet, NSMutableArray;

@interface FCCKDatabaseZoneMigrationOperation : FCOperation {

	FCCKPrivateDatabase* _database;
	CKRecordZoneID* _recordZoneID;
	id<FCCKDatabaseMigrator> _migrator;
	id<FCCKZonePruningAssistant> _pruningAssistant;
	/*^block*/id _migrationCompletionHandler;
	NSMutableSet* _createdZones;
	NSMutableArray* _resultZoneIDsEligibleForDeletion;
	NSMutableArray* _resultRecordIDsEligibleForDeletion;

}

@property (nonatomic,retain) NSMutableSet * createdZones;                                      //@synthesize createdZones=_createdZones - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultZoneIDsEligibleForDeletion;                //@synthesize resultZoneIDsEligibleForDeletion=_resultZoneIDsEligibleForDeletion - In the implementation block
@property (nonatomic,retain) NSMutableArray * resultRecordIDsEligibleForDeletion;              //@synthesize resultRecordIDsEligibleForDeletion=_resultRecordIDsEligibleForDeletion - In the implementation block
@property (nonatomic,retain) FCCKPrivateDatabase * database;                                   //@synthesize database=_database - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * recordZoneID;                                      //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,retain) id<FCCKDatabaseMigrator> migrator;                                //@synthesize migrator=_migrator - In the implementation block
@property (nonatomic,retain) id<FCCKZonePruningAssistant> pruningAssistant;                    //@synthesize pruningAssistant=_pruningAssistant - In the implementation block
@property (nonatomic,copy) id migrationCompletionHandler;                                      //@synthesize migrationCompletionHandler=_migrationCompletionHandler - In the implementation block
-(void)setDatabase:(FCCKPrivateDatabase *)arg1 ;
-(FCCKPrivateDatabase *)database;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(CKRecordZoneID *)recordZoneID;
-(id<FCCKDatabaseMigrator>)migrator;
-(void)setMigrator:(id<FCCKDatabaseMigrator>)arg1 ;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)prepareOperation;
-(void)setCreatedZones:(NSMutableSet *)arg1 ;
-(void)setResultZoneIDsEligibleForDeletion:(NSMutableArray *)arg1 ;
-(void)setResultRecordIDsEligibleForDeletion:(NSMutableArray *)arg1 ;
-(void)_migrateEntireZoneWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_migrateIndividualRecordsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)migrationCompletionHandler;
-(NSMutableArray *)resultZoneIDsEligibleForDeletion;
-(NSMutableArray *)resultRecordIDsEligibleForDeletion;
-(void)_migrateAndUpdateRecords:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_gatherRecordsToMigrateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_migrateRecordIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_pruneRecords:(id)arg1 ;
-(void)_continueGatheringRecordsWithPreviousServerChangeToken:(id)arg1 recordsAlreadyFetched:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)_shouldStopGatheringAfterFetchingRecords:(id)arg1 cumulativeRecords:(id)arg2 ;
-(id<FCCKZonePruningAssistant>)pruningAssistant;
-(id)_uncreatedZonesInRecords:(id)arg1 ;
-(void)_saveMigratedRecords:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_createZones:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_migrateRecords:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_migratedRecord:(id)arg1 error:(id*)arg2 ;
-(NSMutableSet *)createdZones;
-(void)setPruningAssistant:(id<FCCKZonePruningAssistant>)arg1 ;
-(void)setMigrationCompletionHandler:(id)arg1 ;
@end
