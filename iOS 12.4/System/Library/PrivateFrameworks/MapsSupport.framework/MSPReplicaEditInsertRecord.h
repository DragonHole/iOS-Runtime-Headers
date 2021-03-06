/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPReplicaEdit.h>

@protocol MSPReplicaRecord;
@interface MSPReplicaEditInsertRecord : MSPReplicaEdit {

	id<MSPReplicaRecord> _recordWithInformationToInsert;

}

@property (nonatomic,readonly) id<MSPReplicaRecord> recordWithInformationToInsert;              //@synthesize recordWithInformationToInsert=_recordWithInformationToInsert - In the implementation block
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
-(id)_initWithRecordToInsert:(id)arg1 identifier:(id)arg2 ;
-(id<MSPReplicaRecord>)recordWithInformationToInsert;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

