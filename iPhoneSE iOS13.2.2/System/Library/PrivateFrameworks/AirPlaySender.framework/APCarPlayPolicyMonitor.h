/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AirPlaySender.framework/AirPlaySender
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPlaySender/AirPlaySender-Structs.h>
#import <libobjc.A.dylib/CRVehiclePolicyMonitoring.h>

@protocol OS_dispatch_queue, APCarPlayPolicyMonitorDelegate;
@class NSObject, CRVehiclePolicyMonitor, NSString;

@interface APCarPlayPolicyMonitor : NSObject <CRVehiclePolicyMonitoring> {

	NSObject*<OS_dispatch_queue> _queue;
	OpaqueFigCFWeakReferenceHolderRef _weakEndpoint;
	OpaqueFigEndpointRef _observedEndpoint;
	CRVehiclePolicyMonitor* _monitor;
	id<APCarPlayPolicyMonitorDelegate> _delegate;

}

@property (assign,nonatomic) id<APCarPlayPolicyMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<APCarPlayPolicyMonitorDelegate>)delegate;
-(void)setDelegate:(id<APCarPlayPolicyMonitorDelegate>)arg1 ;
-(id)initWithEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(void)willEnableVehicleTrackedByMonitor:(id)arg1 ;
-(void)willDisableVehicleTrackedByMonitor:(id)arg1 ;
-(void)endpointAuthenticationSucceeded;
@end
