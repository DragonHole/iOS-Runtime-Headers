/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HMBLocalZoneID;
@class NSUUID;

@interface HMBLocalSQLContextRowZone : HMFObject {

	id<HMBLocalZoneID> _identifier;
	unsigned long long _zoneRow;
	NSUUID* _replication;

}

@property (assign,nonatomic) unsigned long long zoneRow;                 //@synthesize zoneRow=_zoneRow - In the implementation block
@property (nonatomic,retain) id<HMBLocalZoneID> identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUUID * replication;                       //@synthesize replication=_replication - In the implementation block
-(id)init;
-(id)description;
-(id)debugDescription;
-(id<HMBLocalZoneID>)identifier;
-(void)setIdentifier:(id<HMBLocalZoneID>)arg1 ;
-(unsigned long long)zoneRow;
-(id)initWithZoneRow:(unsigned long long)arg1 ;
-(id)initWithZoneRow:(unsigned long long)arg1 name:(id)arg2 token:(id)arg3 ;
-(void)setZoneRow:(unsigned long long)arg1 ;
-(NSUUID *)replication;
-(void)setReplication:(NSUUID *)arg1 ;
@end

