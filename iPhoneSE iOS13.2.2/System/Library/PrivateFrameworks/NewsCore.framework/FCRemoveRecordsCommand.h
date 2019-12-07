/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:49 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCCommand.h>

@class NSArray;

@interface FCRemoveRecordsCommand : FCCommand {

	NSArray* _recordIDs;

}

@property (nonatomic,copy) NSArray * recordIDs;              //@synthesize recordIDs=_recordIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(NSArray *)recordIDs;
-(id)initWithRecordIDs:(id)arg1 ;
-(void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3 ;
-(BOOL)canCoalesceWithCommand:(id)arg1 ;
-(void)coalesceWithCommand:(id)arg1 ;
-(void)handleRecordIDsFromStream:(id)arg1 internalPrivateDataContext:(id)arg2 delegate:(id)arg3 qualityOfService:(long long)arg4 ;
-(void)handleBatchOfRecordIDs:(id)arg1 internalPrivateDataContext:(id)arg2 qualityOfService:(long long)arg3 completion:(/*^block*/id)arg4 ;
@end
