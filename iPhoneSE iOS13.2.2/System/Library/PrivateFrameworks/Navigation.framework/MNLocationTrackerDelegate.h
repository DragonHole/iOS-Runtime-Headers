/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNLocationTrackerDelegate <NSObject>
@optional
-(void)locationTracker:(id)arg1 didChangeState:(int)arg2;
-(void)locationTrackerDidEnterPreArrivalState:(id)arg1;
-(void)locationTrackerDidArrive:(id)arg1;
-(void)locationTrackerDidTimeoutInArrivalRegion:(id)arg1;
-(void)locationTracker:(id)arg1 didUpdateMatchedLocation:(id)arg2;
-(void)locationTracker:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
-(void)locationTracker:(id)arg1 didUpdateETAForRoute:(id)arg2;
-(void)locationTrackerWillReroute:(id)arg1;
-(void)locationTracker:(id)arg1 didSuppressReroute:(id)arg2;
-(void)locationTrackerDidCancelReroute:(id)arg1;
-(void)locationTracker:(id)arg1 didReroute:(id)arg2 newAlternateRoutes:(id)arg3 rerouteReason:(unsigned long long)arg4 request:(id)arg5 response:(id)arg6;
-(void)locationTracker:(id)arg1 didFailRerouteWithError:(id)arg2;
-(void)locationTracker:(id)arg1 didUpdateAlternateRoutes:(id)arg2;
-(void)locationTracker:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3 request:(id)arg4 response:(id)arg5;
-(void)locationTracker:(id)arg1 receivedTrafficIncidentAlert:(id)arg2 responseCallback:(/*^block*/id)arg3;
-(void)locationTracker:(id)arg1 invalidatedTrafficIncidentAlert:(id)arg2;
-(void)locationTracker:(id)arg1 updatedTrafficIncidentAlert:(id)arg2;

@end
