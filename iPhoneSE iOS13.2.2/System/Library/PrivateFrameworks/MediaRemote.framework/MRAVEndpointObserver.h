/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRAVRoutingDiscoverySession, NSArray, NSString, MRAVEndpoint;

@interface MRAVEndpointObserver : NSObject {

	MRAVRoutingDiscoverySession* _discoverySession;
	NSArray* _endpoints;
	/*^block*/id _endpointChangedCallback;
	BOOL _didBegin;
	NSString* _outputDeviceUID;
	MRAVEndpoint* _endpoint;

}

@property (nonatomic,copy) id endpointChangedCallback; 
@property (nonatomic,readonly) NSString * outputDeviceUID;              //@synthesize outputDeviceUID=_outputDeviceUID - In the implementation block
@property (nonatomic,readonly) MRAVEndpoint * endpoint;                 //@synthesize endpoint=_endpoint - In the implementation block
-(MRAVEndpoint *)endpoint;
-(void)end;
-(void)begin;
-(id)discoveredEndpoints;
-(NSString *)outputDeviceUID;
-(id)initWithOutputDeviceUID:(id)arg1 ;
-(id)_initializeDiscoverySession;
-(void)_handleOutputContextDidChangeNotification;
-(void)_reevaluateEndpoint;
-(void)_handleEndpointsDidChange:(id)arg1 ;
-(id)_endpointContainingOutputDevice:(id)arg1 ;
-(void)setEndpointChangedCallback:(id)arg1 ;
-(id)endpointChangedCallback;
@end

