/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKCloudZoneSyncDelegate.h>

@class NSSet, CKContainer, CRKFileBasedKeyedDataStore, CRKCloudZoneSyncEngine, CKRecordZoneID;

@interface CRKCloudSchemaBuilder : NSObject <CRKCloudZoneSyncDelegate> {

	NSSet* _cloudStoringClasses;
	CKContainer* _container;
	CRKFileBasedKeyedDataStore* _store;
	CRKCloudZoneSyncEngine* _syncEngine;
	CKRecordZoneID* _zoneId;

}

@property (nonatomic,retain) NSSet * cloudStoringClasses;                      //@synthesize cloudStoringClasses=_cloudStoringClasses - In the implementation block
@property (nonatomic,retain) CKContainer * container;                          //@synthesize container=_container - In the implementation block
@property (nonatomic,retain) CRKFileBasedKeyedDataStore * store;               //@synthesize store=_store - In the implementation block
@property (nonatomic,retain) CRKCloudZoneSyncEngine * syncEngine;              //@synthesize syncEngine=_syncEngine - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneId;                          //@synthesize zoneId=_zoneId - In the implementation block
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(CRKFileBasedKeyedDataStore *)store;
-(void)setStore:(CRKFileBasedKeyedDataStore *)arg1 ;
-(CRKCloudZoneSyncEngine *)syncEngine;
-(void)cleanupWithCompletion:(/*^block*/id)arg1 ;
-(CKRecordZoneID *)zoneId;
-(NSSet *)cloudStoringClasses;
-(id)skeletonRecordsForClass:(Class)arg1 ;
-(BOOL)cleanupFiles;
-(void)cleanupRecordZoneWithCompletion:(/*^block*/id)arg1 ;
-(void)processRemoteDelta:(id)arg1 fromZoneSyncEngine:(id)arg2 ;
-(void)didReceiveCloudError:(id)arg1 fromZoneSyncEngine:(id)arg2 ;
-(id)initWithCloudSyncingClasses:(id)arg1 container:(id)arg2 store:(id)arg3 ;
-(void)buildSchemaWithCompletion:(/*^block*/id)arg1 ;
-(void)setCloudStoringClasses:(NSSet *)arg1 ;
-(void)setSyncEngine:(CRKCloudZoneSyncEngine *)arg1 ;
-(void)setZoneId:(CKRecordZoneID *)arg1 ;
@end

