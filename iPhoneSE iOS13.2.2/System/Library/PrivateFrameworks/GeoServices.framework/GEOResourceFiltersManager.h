/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOResourceFiltersManagerDelegate;
#import <GeoServices/GeoServices-Structs.h>
@class GEOResourceManifestConfiguration, GEOActiveResourceFilters, NSSet;

@interface GEOResourceFiltersManager : NSObject {

	GEOResourceManifestConfiguration* _configuration;
	GEOActiveResourceFilters* _activeFilters;
	os_unfair_lock_s _lock;
	id<GEOResourceFiltersManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<GEOResourceFiltersManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSSet * activeScales; 
@property (nonatomic,readonly) NSSet * activeScenarios; 
-(id)init;
-(id<GEOResourceFiltersManagerDelegate>)delegate;
-(void)setDelegate:(id<GEOResourceFiltersManagerDelegate>)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_writeToDisk;
-(NSSet *)activeScales;
-(void)_activateFilters:(/*^block*/id)arg1 setValueBlock:(/*^block*/id)arg2 ;
-(void)_deactivateFilters:(/*^block*/id)arg1 ;
-(NSSet *)activeScenarios;
-(void)activateScale:(int)arg1 ;
-(void)deactivateScale:(int)arg1 ;
-(void)activateScenario:(int)arg1 ;
-(void)deactivateScenario:(int)arg1 ;
@end
