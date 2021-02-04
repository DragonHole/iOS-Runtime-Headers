/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteManagement/RemoteManagement-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMRemoteManagementScreenTimeNumberOfLimits : PBCodable <NSCopying> {

	unsigned long long _numberOfAppLimits;
	unsigned long long _numberOfCategoryLimits;
	unsigned long long _timestamp;
	SCD_Struct_RM1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfAppLimits; 
@property (assign,nonatomic) unsigned long long numberOfAppLimits;                   //@synthesize numberOfAppLimits=_numberOfAppLimits - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfCategoryLimits; 
@property (assign,nonatomic) unsigned long long numberOfCategoryLimits;              //@synthesize numberOfCategoryLimits=_numberOfCategoryLimits - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasNumberOfAppLimits:(BOOL)arg1 ;
-(BOOL)hasNumberOfAppLimits;
-(void)setHasNumberOfCategoryLimits:(BOOL)arg1 ;
-(BOOL)hasNumberOfCategoryLimits;
-(unsigned long long)numberOfAppLimits;
-(unsigned long long)numberOfCategoryLimits;
-(void)setNumberOfAppLimits:(unsigned long long)arg1 ;
-(void)setNumberOfCategoryLimits:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(id)dictionaryRepresentation;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
