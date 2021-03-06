/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:48 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CUMobileDevice, CUMobileDeviceDiscovery;

@interface CUMobileDeviceMonitorContext : NSObject {

	CUMobileDevice* _device;
	CUMobileDeviceDiscovery* _discovery;

}

@property (nonatomic,retain) CUMobileDevice * device;                          //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) CUMobileDeviceDiscovery * discovery;              //@synthesize discovery=_discovery - In the implementation block
-(CUMobileDevice *)device;
-(void)setDevice:(CUMobileDevice *)arg1 ;
-(CUMobileDeviceDiscovery *)discovery;
-(void)setDiscovery:(CUMobileDeviceDiscovery *)arg1 ;
@end

