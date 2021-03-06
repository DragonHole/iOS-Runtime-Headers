/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOServiceRequester.h>
#import <libobjc.A.dylib/_GEODirectionsRequesterServerProxy.h>

@class NSString;

@interface _GEODirectionsRequesterServerLocalProxy : GEOServiceRequester <_GEODirectionsRequesterServerProxy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelRequest:(id)arg1 ;
-(id)_validateResponse:(id)arg1 ;
-(void)startRequest:(id)arg1 auditToken:(id)arg2 isDoomRequest:(BOOL)arg3 requestPriority:(id)arg4 finished:(/*^block*/id)arg5 networkActivity:(/*^block*/id)arg6 error:(/*^block*/id)arg7 ;
@end

