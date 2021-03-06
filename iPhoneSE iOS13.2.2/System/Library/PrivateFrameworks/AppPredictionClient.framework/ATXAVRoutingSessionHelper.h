/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVRoutingSessionManager, ATXAVRouteInfo;

@interface ATXAVRoutingSessionHelper : NSObject {

	float _threshold;
	AVRoutingSessionManager* _avRoutingSessionManager;
	ATXAVRouteInfo* _internalPredictedRouteInfo;

}

@property (nonatomic,readonly) float acceptThreshod; 
@property (nonatomic,readonly) ATXAVRouteInfo * predictedRouteInfo; 
-(id)init;
-(id)initWithAcceptThreshold:(float)arg1 avRoutingSessionManager:(id)arg2 ;
-(ATXAVRouteInfo *)predictedRouteInfo;
-(float)acceptThreshod;
-(id)_predictedRouteInfoWithAcceptThreshold:(float)arg1 prefersLikelyDestinationsOverCurrentRoutingSession:(BOOL)arg2 ;
-(id)_predictedRouteWithAcceptThreshold:(float)arg1 ;
-(id)_selectedOrPendingRoute;
-(id)_filterTopRouteFromRoutes:(id)arg1 withAcceptThreshold:(float)arg2 ;
-(id)_atxAVRouteInfoWithRoute:(id)arg1 ;
@end

