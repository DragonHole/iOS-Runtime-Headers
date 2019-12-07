/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:46 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOLogMsgStateDeviceBase : PBCodable <NSCopying> {

	int _deviceBatteryState;
	int _deviceInterfaceOrientation;
	BOOL _deviceInVehicle;
	SCD_Struct_GE85 _flags;

}

@property (assign,nonatomic) BOOL hasDeviceInterfaceOrientation; 
@property (assign,nonatomic) int deviceInterfaceOrientation; 
@property (assign,nonatomic) BOOL hasDeviceBatteryState; 
@property (assign,nonatomic) int deviceBatteryState; 
@property (assign,nonatomic) BOOL hasDeviceInVehicle; 
@property (assign,nonatomic) BOOL deviceInVehicle; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(int)deviceInterfaceOrientation;
-(void)setDeviceInterfaceOrientation:(int)arg1 ;
-(void)setHasDeviceInterfaceOrientation:(BOOL)arg1 ;
-(BOOL)hasDeviceInterfaceOrientation;
-(id)deviceInterfaceOrientationAsString:(int)arg1 ;
-(int)StringAsDeviceInterfaceOrientation:(id)arg1 ;
-(int)deviceBatteryState;
-(void)setDeviceBatteryState:(int)arg1 ;
-(void)setHasDeviceBatteryState:(BOOL)arg1 ;
-(BOOL)hasDeviceBatteryState;
-(id)deviceBatteryStateAsString:(int)arg1 ;
-(int)StringAsDeviceBatteryState:(id)arg1 ;
-(BOOL)deviceInVehicle;
-(void)setDeviceInVehicle:(BOOL)arg1 ;
-(void)setHasDeviceInVehicle:(BOOL)arg1 ;
-(BOOL)hasDeviceInVehicle;
@end
