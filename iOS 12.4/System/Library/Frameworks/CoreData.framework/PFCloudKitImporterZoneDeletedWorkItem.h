/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFCloudKitImporterWorkItem.h>

@class CKRecordZoneID;

@interface PFCloudKitImporterZoneDeletedWorkItem : PFCloudKitImporterWorkItem {

	CKRecordZoneID* _deletedRecordZoneID;

}

@property (nonatomic,readonly) CKRecordZoneID * deletedRecordZoneID;              //@synthesize deletedRecordZoneID=_deletedRecordZoneID - In the implementation block
-(void)doWorkWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithDeletedRecordZoneID:(id)arg1 options:(id)arg2 metadata:(id)arg3 request:(id)arg4 ;
-(BOOL)wipeCloudMetadataFromMirroredObjects:(id*)arg1 ;
-(CKRecordZoneID *)deletedRecordZoneID;
-(void)dealloc;
-(id)description;
@end

