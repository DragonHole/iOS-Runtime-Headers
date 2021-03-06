/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NRPBSwitchRecord : PBCodable <NSCopying> {

	double _dateTimeInterval;
	NSData* _deviceIDBytes;
	int _switchIndex;
	SCD_Struct_NR9 _has;

}

@property (nonatomic,readonly) BOOL hasDeviceIDBytes; 
@property (nonatomic,retain) NSData * deviceIDBytes;                //@synthesize deviceIDBytes=_deviceIDBytes - In the implementation block
@property (assign,nonatomic) BOOL hasDateTimeInterval; 
@property (assign,nonatomic) double dateTimeInterval;               //@synthesize dateTimeInterval=_dateTimeInterval - In the implementation block
@property (assign,nonatomic) BOOL hasSwitchIndex; 
@property (assign,nonatomic) int switchIndex;                       //@synthesize switchIndex=_switchIndex - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSwitchIndex:(int)arg1 ;
-(void)setDateTimeInterval:(double)arg1 ;
-(void)setHasDateTimeInterval:(BOOL)arg1 ;
-(BOOL)hasDateTimeInterval;
-(double)dateTimeInterval;
-(void)setDeviceIDBytes:(NSData *)arg1 ;
-(NSData *)deviceIDBytes;
-(BOOL)hasDeviceIDBytes;
-(void)setHasSwitchIndex:(BOOL)arg1 ;
-(BOOL)hasSwitchIndex;
-(int)switchIndex;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

