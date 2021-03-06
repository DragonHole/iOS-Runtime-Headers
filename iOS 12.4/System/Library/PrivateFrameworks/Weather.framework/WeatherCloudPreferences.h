/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Weather/WeatherCloudPersistenceDelegate.h>

@protocol SynchronizedDefaultsDelegate, WeatherPreferencesPersistence;
@class WeatherPreferences, NSString;

@interface WeatherCloudPreferences : NSObject <WeatherCloudPersistenceDelegate> {

	id<SynchronizedDefaultsDelegate> _syncDelegate;
	id<WeatherPreferencesPersistence> _cloudStore;
	WeatherPreferences* _localPreferences;

}

@property (retain) id<WeatherPreferencesPersistence> cloudStore;                                //@synthesize cloudStore=_cloudStore - In the implementation block
@property (retain) WeatherPreferences * localPreferences;                                       //@synthesize localPreferences=_localPreferences - In the implementation block
@property (assign,nonatomic,__weak) id<SynchronizedDefaultsDelegate> syncDelegate;              //@synthesize syncDelegate=_syncDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)forceSync;
-(void)_synchronize:(BOOL)arg1 ;
-(void)setSyncDelegate:(id<SynchronizedDefaultsDelegate>)arg1 ;
-(id)initWithLocalPreferences:(id)arg1 persistence:(id)arg2 ;
-(void)setLocalPreferences:(WeatherPreferences *)arg1 ;
-(void)setCloudStore:(id<WeatherPreferencesPersistence>)arg1 ;
-(void)cloudCitiesChangedExternally:(id)arg1 ;
-(BOOL)legacyCloudCity:(id)arg1 isEqualToALCity:(id)arg2 ;
-(id)cloudCityFromALCity:(id)arg1 name:(id)arg2 ;
-(id)cloudCitiesFromLegacyCloudCities:(id)arg1 ;
-(WeatherPreferences *)localPreferences;
-(id)cloudCityRepresentationsFromLegacyRepresentations;
-(id)reconcileCloudCities:(id)arg1 withLocal:(id)arg2 isInitialSync:(BOOL)arg3 ;
-(BOOL)areCloudCities:(id)arg1 equalToLocalCities:(id)arg2 ;
-(void)updateLocalStoreWithRemoteChanges:(id)arg1 ;
-(void)saveCitiesToCloud:(id)arg1 ;
-(id<SynchronizedDefaultsDelegate>)syncDelegate;
-(id)citiesByEnforcingSizeLimitOnResults:(id)arg1 ;
-(id)prepareLocalCitiesForReconciliation:(id)arg1 isInitialSync:(BOOL)arg2 ;
-(id)cloudRepresentationFromCities:(id)arg1 ;
-(BOOL)shouldWriteCitiesToCloud:(id)arg1 ;
-(void)setCloudStoreCities:(id)arg1 ;
-(void)cloudPersistenceDidSynchronize:(id)arg1 ;
-(id)initWithLocalPreferences:(id)arg1 ;
-(id<WeatherPreferencesPersistence>)cloudStore;
@end

