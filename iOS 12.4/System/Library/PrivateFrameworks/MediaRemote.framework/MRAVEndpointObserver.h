/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
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
-(NSString *)outputDeviceUID;
-(id)initWithOutputDeviceUID:(id)arg1 ;
-(id)_initializeDiscoverySession;
-(void)_handleOutputContextDidChangeNotification;
-(void)_reevaluateEndpoint;
-(void)_handleEndpointsDidChange:(id)arg1 ;
-(id)_endpointContainingOutputDevice:(id)arg1 ;
-(id)discoveredEndpoints;
-(void)setEndpointChangedCallback:(id)arg1 ;
-(id)endpointChangedCallback;
-(void)begin;
-(void)end;
-(MRAVEndpoint *)endpoint;
@end

