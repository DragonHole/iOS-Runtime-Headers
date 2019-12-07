/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTPlatform : NSObject
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)currentPlatform;
+(BOOL)version:(SCD_Struct_RT4)arg1 equalToVersion:(SCD_Struct_RT4)arg2 ;
+(BOOL)version:(SCD_Struct_RT4)arg1 noGreaterThanVersion:(SCD_Struct_RT4)arg2 ;
+(BOOL)operatingSystemNoGreaterThanVersion:(SCD_Struct_RT4)arg1 ;
+(BOOL)operatingSystemAtLeastVersion:(SCD_Struct_RT4)arg1 ;
+(BOOL)version:(SCD_Struct_RT4)arg1 atLeastVersion:(SCD_Struct_RT4)arg2 ;
+(SCD_Struct_RT4)operatingSystemVersionFromString:(id)arg1 ;
-(id)systemVersion;
-(id)serialNumber;
-(id)productType;
-(id)deviceClass;
-(id)buildVersion;
-(BOOL)internalInstall;
-(BOOL)paired;
-(BOOL)supportsMultiUser;
-(BOOL)supportsCoreRoutineCapability;
-(id)userAssignedDeviceName;
-(id)systemModel;
-(BOOL)iPhonePlatform;
-(BOOL)watchPlatform;
-(BOOL)macOSPlatform;
-(BOOL)simulatorPlatform;
-(BOOL)usesTSCForClustering;
-(BOOL)lowEndHardware;
-(unsigned long long)deviceMemorySize;
-(BOOL)iPhoneDevice;
-(BOOL)supportsPairedDevice;
-(BOOL)supportsScenarioTriggers;
@end
