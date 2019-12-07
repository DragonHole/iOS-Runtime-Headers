/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLChangeBatch;

@interface PLCloudPhotoLibraryBatchContainer : NSObject {

	BOOL _wasSplit;
	BOOL _reachedMinSplit;
	BOOL _wasFixed;
	CPLChangeBatch* _batch;
	unsigned long long _retryCount;

}

@property (nonatomic,retain) CPLChangeBatch * batch;                     //@synthesize batch=_batch - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) BOOL wasSplit;                              //@synthesize wasSplit=_wasSplit - In the implementation block
@property (assign,nonatomic) BOOL reachedMinSplit;                       //@synthesize reachedMinSplit=_reachedMinSplit - In the implementation block
@property (assign,nonatomic) BOOL wasFixed;                              //@synthesize wasFixed=_wasFixed - In the implementation block
-(id)init;
-(id)description;
-(unsigned long long)count;
-(CPLChangeBatch *)batch;
-(void)setBatch:(CPLChangeBatch *)arg1 ;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(void)addRecord:(id)arg1 ;
-(void)incrementRetryCount;
-(id)lastAddedRecord;
-(id)batchesSplitForError;
-(BOOL)wasSplit;
-(void)setWasSplit:(BOOL)arg1 ;
-(BOOL)reachedMinSplit;
-(void)setReachedMinSplit:(BOOL)arg1 ;
-(BOOL)wasFixed;
-(void)setWasFixed:(BOOL)arg1 ;
@end
