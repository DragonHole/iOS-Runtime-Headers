/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateSaveRecordsOperation : FCCKPrivateDatabaseOperation {

	NSArray* _recordsToSave;
	long long _savePolicy;
	/*^block*/id _saveRecordsCompletionBlock;
	NSArray* _resultSavedRecords;

}

@property (nonatomic,retain) NSArray * resultSavedRecords;              //@synthesize resultSavedRecords=_resultSavedRecords - In the implementation block
@property (nonatomic,copy) NSArray * recordsToSave;                     //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (assign,nonatomic) long long savePolicy;                      //@synthesize savePolicy=_savePolicy - In the implementation block
@property (nonatomic,copy) id saveRecordsCompletionBlock;               //@synthesize saveRecordsCompletionBlock=_saveRecordsCompletionBlock - In the implementation block
-(void)setSavePolicy:(long long)arg1 ;
-(NSArray *)recordsToSave;
-(void)setRecordsToSave:(NSArray *)arg1 ;
-(long long)savePolicy;
-(BOOL)validateOperation;
-(void)performOperation;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setSaveRecordsCompletionBlock:(id)arg1 ;
-(id)saveRecordsCompletionBlock;
-(NSArray *)resultSavedRecords;
-(void)setResultSavedRecords:(NSArray *)arg1 ;
@end

