/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/WFWiFiGasProxy.h>

@class NSString;

@interface WFGasQueryProxy : NSObject <WFWiFiGasProxy> {

	WiFiDeviceClientRef _device;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) WiFiDeviceClientRef device;              //@synthesize device=_device - In the implementation block
-(WiFiDeviceClientRef)device;
-(void)setDevice:(WiFiDeviceClientRef)arg1 ;
-(void)gasQueryForRecords:(id)arg1 request:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_processGasResults:(id)arg1 error:(int)arg2 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end

