/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOETATrafficUpdateRequester : NSObject
-(void)cancelRequest:(id)arg1 ;
-(void)sendETATrafficUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 finishedHandler:(/*^block*/id)arg4 ;
-(void)sendConditionalETATrafficUpdateRequest:(id)arg1 timeWindowDuration:(double)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 willSendRequestHandler:(/*^block*/id)arg5 finishedHandler:(/*^block*/id)arg6 ;
@end

