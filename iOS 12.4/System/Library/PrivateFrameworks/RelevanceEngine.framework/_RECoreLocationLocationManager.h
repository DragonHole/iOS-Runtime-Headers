/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RELocationManager.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue;
@class CLLocation, NSLock, CLLocationManager, NSObject, NSString;

@interface _RECoreLocationLocationManager : RELocationManager <CLLocationManagerDelegate> {

	CLLocation* _currentLocation;
	NSLock* _locationAccessLock;
	/*^block*/id _handler;
	CLLocationManager* _locationManager;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _resumedQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)currentLocation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_updateLocation:(id)arg1 ;
-(void)stopLocationUpdates;
-(void)startLocationUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)_notifyUpdateHandlersWithError:(id)arg1 ;
-(id)init;
@end
