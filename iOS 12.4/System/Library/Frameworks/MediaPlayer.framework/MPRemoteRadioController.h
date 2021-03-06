/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPServiceRadioController.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSXPCListener, RadioAvailabilityController, RadioRecentStationsController, NSString;

@interface MPRemoteRadioController : NSObject <MPServiceRadioController, NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableSet* _connections;
	BOOL _hasRefreshedStations;
	NSXPCListener* _listener;
	RadioAvailabilityController* _availabilityController;
	RadioRecentStationsController* _recentStationsController;

}

@property (nonatomic,readonly) RadioAvailabilityController * availabilityController;                  //@synthesize availabilityController=_availabilityController - In the implementation block
@property (nonatomic,readonly) RadioRecentStationsController * recentStationsController;              //@synthesize recentStationsController=_recentStationsController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)serviceRadioControllerGetRecentStationGroupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)serviceRadioControllerGetRadioAvailabilityWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_radioAvailabilityControllerRadioAvailableDidChangeNotification:(id)arg1 ;
-(void)_recentStationsControllerDidChangeStationsNotification:(id)arg1 ;
-(void)_playActivityReportingControllerDidFlushEventsNotification:(id)arg1 ;
-(void)_removeConnection:(id)arg1 ;
-(void)_addConnection:(id)arg1 ;
-(void)_handleRecentStationsControllerDidChange;
-(RadioAvailabilityController *)availabilityController;
-(RadioRecentStationsController *)recentStationsController;
-(id)init;
-(void)dealloc;
-(void)start;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

