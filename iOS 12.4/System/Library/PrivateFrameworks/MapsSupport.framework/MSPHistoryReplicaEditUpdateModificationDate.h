/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPReplicaEdit.h>

@class NSDate;

@interface MSPHistoryReplicaEditUpdateModificationDate : MSPReplicaEdit {

	NSDate* _modificationDate;

}

@property (nonatomic,readonly) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
-(id)_initWithIdentifierOfAffectedRecord:(id)arg1 ;
-(id)_initToMoveRecordWithIdentifier:(id)arg1 toModificationDate:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)modificationDate;
@end

