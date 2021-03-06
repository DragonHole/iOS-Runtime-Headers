/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:00 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/CRKCloudOperation.h>
#import <libobjc.A.dylib/CRKCloudResetable.h>

@class NSSet;

@interface CRKCloudModifyRecordsOperation : CRKCloudOperation <CRKCloudResetable> {

	BOOL _atomic;
	NSSet* _recordsToSave;
	NSSet* _recordIdsToDelete;

}

@property (nonatomic,readonly) NSSet * recordsToSave;                    //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,readonly) NSSet * recordIdsToDelete;                //@synthesize recordIdsToDelete=_recordIdsToDelete - In the implementation block
@property (getter=isAtomic,nonatomic,readonly) BOOL atomic;              //@synthesize atomic=_atomic - In the implementation block
-(void)main;
-(NSSet *)recordsToSave;
-(BOOL)isAtomic;
-(id)initWithDatabase:(id)arg1 ;
-(id)resetOperation;
-(id)initWithDatabase:(id)arg1 recordsToSave:(id)arg2 recordIdsToDelete:(id)arg3 isAtomic:(BOOL)arg4 ;
-(NSSet *)recordIdsToDelete;
@end

