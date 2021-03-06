/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
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
-(void)setDiscovery:(CUMobileDeviceDiscovery *)arg1 ;
-(CUMobileDeviceDiscovery *)discovery;
-(CUMobileDevice *)device;
-(void)setDevice:(CUMobileDevice *)arg1 ;
@end

