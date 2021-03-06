/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthService.h>

@class CBCharacteristic;

@interface HDBatteryService : HDHealthService {

	CBCharacteristic* _batteryCharacteristic;

}

@property (nonatomic,retain) CBCharacteristic * batteryCharacteristic;              //@synthesize batteryCharacteristic=_batteryCharacteristic - In the implementation block
+(long long)serviceType;
+(id)serviceUUID;
+(id)implementedProperties;
-(void)readProperty:(id)arg1 ;
-(void)peripheral:(id)arg1 didDiscoverCharacteristic:(id)arg2 ;
-(void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 updateTime:(id)arg3 error:(id)arg4 ;
-(id)handleBatteryLevel:(id)arg1 ;
-(CBCharacteristic *)batteryCharacteristic;
-(void)setBatteryCharacteristic:(CBCharacteristic *)arg1 ;
@end

