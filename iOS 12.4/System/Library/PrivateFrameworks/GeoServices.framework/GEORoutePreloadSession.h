/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class GEOComposedRoute;


@protocol GEORoutePreloadSession <NSObject>
@property (nonatomic,readonly) GEOComposedRoute * route; 
@property (__weak) id<GEORoutePreloadSessionDelegate> delegate; 
@property (assign,nonatomic) unsigned long long networkQuality; 
@property (nonatomic,readonly) NSObject*<OS_os_log> preloaderLog; 
@required
-(NSObject*<OS_os_log>)preloaderLog;
-(void)beginLoading;
-(BOOL)isSufficientlyLoaded;
-(BOOL)minimalDebuggingEnabled;
-(BOOL)fullDebuggingEnabled;
-(BOOL)loggingEnabled;
-(void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned)arg2 andZoom:(unsigned)arg3;
-(int)preloadStateForTile:(const GEOTileKey*)arg1;
-(void)getPreloadSetCoordinates:(SCD_Struct_GE30*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3;
-(void)updateWithRouteMatch:(id)arg1;
-(void)setTraits:(id)arg1;
-(GEOComposedRoute *)route;
-(unsigned long long)networkQuality;
-(void)setNetworkQuality:(unsigned long long)arg1;
-(void)tearDown;
-(void)setDelegate:(id)arg1;
-(id<GEORoutePreloadSessionDelegate>)delegate;
-(void)stop;
-(void)start;
-(void)stopLoading;

@end

