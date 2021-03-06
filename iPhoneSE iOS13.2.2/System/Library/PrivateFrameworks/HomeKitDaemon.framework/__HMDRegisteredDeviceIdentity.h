/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/__HMDRegisteredIdentity.h>

@class HMDDevice;

@interface __HMDRegisteredDeviceIdentity : __HMDRegisteredIdentity {

	HMDDevice* _device;

}

@property (readonly) HMDDevice * device;              //@synthesize device=_device - In the implementation block
-(id)initWithIdentity:(id)arg1 ;
-(HMDDevice *)device;
-(id)initWithIdentity:(id)arg1 device:(id)arg2 ;
@end

