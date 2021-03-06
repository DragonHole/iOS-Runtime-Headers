/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEORoutePreloadSession.h>

@protocol GEORoutePreloadSessionDelegate;
@class GEOComposedRoute, NSMutableDictionary, GEOApplicationAuditToken, NSString;

@interface GEORoutePreloader : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadSession> {

	GEOComposedRoute* _route;
	NSMutableDictionary* _tileSetStyles;
	BOOL _loggingEnabled;
	BOOL _minimalDebuggingEnabled;
	BOOL _fullDebuggingEnabled;
	BOOL _enabled;
	BOOL _paused;
	double _currentRoutePosition;
	int _downloadState;
	/*^block*/id _batteryHandler;
	unsigned long long _networkQuality;
	id<GEORoutePreloadSessionDelegate> _delegate;
	/*^block*/id _tileKeyIsDownloadedPredicate;
	double _stepSizeInMeters;
	GEOOnce_s _didTearDown;
	GEOApplicationAuditToken* _auditToken;

}

@property (nonatomic,readonly) GEOComposedRoute * route;                                      //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) unsigned long long networkQuality;                               //@synthesize networkQuality=_networkQuality - In the implementation block
@property (nonatomic,copy) id batteryHandler;                                                 //@synthesize batteryHandler=_batteryHandler - In the implementation block
@property (nonatomic,copy,readonly) id tileKeyIsDownloadedPredicate;                          //@synthesize tileKeyIsDownloadedPredicate=_tileKeyIsDownloadedPredicate - In the implementation block
@property (nonatomic,readonly) GEOApplicationAuditToken * auditToken;                         //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<GEORoutePreloadSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> preloaderLog; 
+(id)preloaderForRoute:(id)arg1 auditToken:(id)arg2 ;
+(id)preloaderForRoute:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<GEORoutePreloadSessionDelegate>)delegate;
-(void)setDelegate:(id<GEORoutePreloadSessionDelegate>)arg1 ;
-(GEOApplicationAuditToken *)auditToken;
-(void)stop;
-(void)start;
-(void)_start;
-(void)stopLoading;
-(void)setTraits:(id)arg1 ;
-(void)tearDown;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(id)initWithRoute:(id)arg1 auditToken:(id)arg2 loggingEnabled:(BOOL)arg3 minimalDebugging:(BOOL)arg4 fullDebugging:(BOOL)arg5 batteryHandler:(/*^block*/id)arg6 ;
-(void)reachabilityChanged:(id)arg1 ;
-(void)performTearDown;
-(NSObject*<OS_os_log>)preloaderLog;
-(void)_cancelPreloadTasks;
-(void)beginLoading;
-(void)_retryFailuresWithErrorsReset:(BOOL)arg1 ;
-(void)tilesChanged;
-(BOOL)isSufficientlyLoaded;
-(BOOL)minimalDebuggingEnabled;
-(BOOL)fullDebuggingEnabled;
-(BOOL)loggingEnabled;
-(void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned)arg2 andZoom:(unsigned)arg3 ;
-(int)preloadStateForTile:(const GEOTileKey*)arg1 ;
-(void)getPreloadSetCoordinates:(SCD_Struct_GE32*)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long*)arg3 ;
-(void)updateWithRouteMatch:(id)arg1 ;
-(GEOComposedRoute *)route;
-(unsigned long long)networkQuality;
-(void)setNetworkQuality:(unsigned long long)arg1 ;
-(id)initWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(/*^block*/id)arg5 ;
-(id)batteryHandler;
-(void)setBatteryHandler:(id)arg1 ;
-(id)tileKeyIsDownloadedPredicate;
@end

