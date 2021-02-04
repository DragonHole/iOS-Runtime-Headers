/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID, NSData;

@interface _HDAssociationInsertionJournalEntry : HDJournalEntry {

	BOOL _enforceSameSource;
	NSUUID* _parentUUID;
	NSData* _childUUIDsData;
	long long _provenance;

}

@property (nonatomic,readonly) NSUUID * parentUUID;                  //@synthesize parentUUID=_parentUUID - In the implementation block
@property (nonatomic,readonly) NSData * childUUIDsData;              //@synthesize childUUIDsData=_childUUIDsData - In the implementation block
@property (nonatomic,readonly) long long provenance;                 //@synthesize provenance=_provenance - In the implementation block
@property (nonatomic,readonly) BOOL enforceSameSource;               //@synthesize enforceSameSource=_enforceSameSource - In the implementation block
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)initWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 enforceSameSource:(BOOL)arg4 ;
-(BOOL)enforceSameSource;
-(NSUUID *)parentUUID;
-(NSData *)childUUIDsData;
-(long long)provenance;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
