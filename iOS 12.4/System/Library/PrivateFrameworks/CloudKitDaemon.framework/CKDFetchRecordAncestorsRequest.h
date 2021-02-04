/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDFetchRecordAncestorsRequest : CKDURLRequest {

	/*^block*/id _ancestorFetchedBlock;
	/*^block*/id _shareRecordFetchedBlock;
	NSArray* _recordIDs;
	NSMutableDictionary* _recordIDByRequestID;

}

@property (nonatomic,retain) NSArray * recordIDs;                                    //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordIDByRequestID;              //@synthesize recordIDByRequestID=_recordIDByRequestID - In the implementation block
@property (nonatomic,copy) id ancestorFetchedBlock;                                  //@synthesize ancestorFetchedBlock=_ancestorFetchedBlock - In the implementation block
@property (nonatomic,copy) id shareRecordFetchedBlock;                               //@synthesize shareRecordFetchedBlock=_shareRecordFetchedBlock - In the implementation block
-(NSArray *)recordIDs;
-(id)initWithRecordIDs:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(id)zoneIDsToLock;
-(void)setAncestorFetchedBlock:(id)arg1 ;
-(void)setShareRecordFetchedBlock:(id)arg1 ;
-(id)ancestorFetchedBlock;
-(id)shareRecordFetchedBlock;
-(NSMutableDictionary *)recordIDByRequestID;
-(void)setRecordIDByRequestID:(NSMutableDictionary *)arg1 ;
-(int)operationType;
@end
