/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEORouteSet;

@interface GEOLazyRouteSetIterator : NSObject {

	GEORouteSet* _routeSet;
	unsigned long long _contingencyRouteIndex;

}
-(id)initWithRouteSet:(id)arg1 ;
-(id)nextLazyRoute;
-(void)setContingencyRouteIndex:(unsigned long long)arg1 ;
-(void)dealloc;
@end

