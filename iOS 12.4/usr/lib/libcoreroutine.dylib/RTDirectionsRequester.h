/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTDirectionsRequester : NSObject
+(int)geoTransportTypeForRTTransportType:(int)arg1 ;
+(NSArray*)routeForGEORoute:(id)arg1 ;
-(void)routesFromSource:(id)arg1 toDestination:(id)arg2 transportType:(int)arg3 maxRouteCount:(unsigned)arg4 handler:(/*^block*/id)arg5 ;
@end

