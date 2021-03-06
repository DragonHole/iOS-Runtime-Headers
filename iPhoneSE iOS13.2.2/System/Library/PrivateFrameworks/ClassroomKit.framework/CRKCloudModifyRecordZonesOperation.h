/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:59 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/CRKCloudOperation.h>
#import <libobjc.A.dylib/CRKCloudResetable.h>

@class NSSet;

@interface CRKCloudModifyRecordZonesOperation : CRKCloudOperation <CRKCloudResetable> {

	NSSet* _zonesToSave;
	NSSet* _zoneIdsToDelete;

}

@property (nonatomic,readonly) NSSet * zonesToSave;                  //@synthesize zonesToSave=_zonesToSave - In the implementation block
@property (nonatomic,readonly) NSSet * zoneIdsToDelete;              //@synthesize zoneIdsToDelete=_zoneIdsToDelete - In the implementation block
-(void)main;
-(id)initWithDatabase:(id)arg1 ;
-(NSSet *)zonesToSave;
-(id)resetOperation;
-(id)initWithDatabase:(id)arg1 zonesToSave:(id)arg2 zoneIdsToDelete:(id)arg3 ;
-(NSSet *)zoneIdsToDelete;
@end

