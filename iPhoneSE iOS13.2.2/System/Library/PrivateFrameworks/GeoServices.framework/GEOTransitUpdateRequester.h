/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:43 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class geo_isolater, NSHashTable;

@interface GEOTransitUpdateRequester : NSObject {

	geo_isolater* _isolater;
	NSHashTable* _pendingRequests;

}
+(id)sharedRequester;
-(id)init;
-(void)cancelTransitRouteUpdateRequest:(id)arg1 ;
-(void)startTransitRouteUpdateRequest:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3 queue:(id)arg4 networkActivity:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(BOOL)_finishRequest:(id)arg1 ;
@end

