/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, PLCloudPhotoLibraryBatchContainer, NSMutableSet;

@interface PLCloudPhotoLibraryBatchManager : NSObject {

	NSMutableArray* _batches;
	PLCloudPhotoLibraryBatchContainer* _currentBatch;
	BOOL _wasDrained;
	NSMutableSet* _masterHistory;
	unsigned long long _resourceBudget;

}
-(id)drainBatches;
-(long long)currentBatchCount;
-(BOOL)isAboveMaximumResourceBudget;
-(void)addRecord:(id)arg1 ignoreBatchSize:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)reset;
-(void)addRecord:(id)arg1 ;
@end

