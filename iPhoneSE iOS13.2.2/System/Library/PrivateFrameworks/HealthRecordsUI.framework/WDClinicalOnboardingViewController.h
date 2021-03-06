/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class HRProfile, NSTimer, UISearchController, CLLocationManager, CLLocation, NSMutableOrderedSet, NSString, NSMutableDictionary, _UIContentUnavailableView, WDClinicalOnboardingNoGeoView, NSIndexPath, HRWDSpinnerView, WDClinicalSampleAccountsLoader;

@interface WDClinicalOnboardingViewController : HKTableViewController <CLLocationManagerDelegate, UISearchBarDelegate, UISearchControllerDelegate, UISearchResultsUpdating, WDUserActivityResponder> {

	HRProfile* _profile;
	long long _searchesInFlight;
	NSTimer* _searchTimer;
	UISearchController* _searchController;
	CLLocationManager* _locationManager;
	CLLocation* _location;
	BOOL _searchInFlight;
	BOOL _hasCompletedAtLeastOneFetch;
	BOOL _locationEnabled;
	NSMutableOrderedSet* _supportedSearchResults;
	NSMutableOrderedSet* _unsupportedSearchResults;
	NSString* _searchQuery;
	NSMutableDictionary* _resultsCache;
	long long _nextFrom;
	_UIContentUnavailableView* _noContentView;
	WDClinicalOnboardingNoGeoView* _noGeoView;
	NSIndexPath* _spinnerIndexPath;
	HRWDSpinnerView* _spinnerView;
	WDClinicalSampleAccountsLoader* _sampleAccountsLoader;

}

@property (nonatomic,retain) NSMutableOrderedSet * supportedSearchResults;                       //@synthesize supportedSearchResults=_supportedSearchResults - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * unsupportedSearchResults;                     //@synthesize unsupportedSearchResults=_unsupportedSearchResults - In the implementation block
@property (nonatomic,copy) NSString * searchQuery;                                               //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * resultsCache;                               //@synthesize resultsCache=_resultsCache - In the implementation block
@property (assign,nonatomic) long long nextFrom;                                                 //@synthesize nextFrom=_nextFrom - In the implementation block
@property (assign,nonatomic) BOOL searchInFlight;                                                //@synthesize searchInFlight=_searchInFlight - In the implementation block
@property (assign,nonatomic) BOOL hasCompletedAtLeastOneFetch;                                   //@synthesize hasCompletedAtLeastOneFetch=_hasCompletedAtLeastOneFetch - In the implementation block
@property (assign,nonatomic) BOOL locationEnabled;                                               //@synthesize locationEnabled=_locationEnabled - In the implementation block
@property (nonatomic,readonly) BOOL showingMainSpinner; 
@property (nonatomic,readonly) BOOL showingNoGeoView; 
@property (nonatomic,readonly) BOOL showingNoLocations; 
@property (nonatomic,readonly) BOOL couldFetchAdditionalResults; 
@property (nonatomic,readonly) BOOL hasSupportedLocations; 
@property (nonatomic,readonly) BOOL hasUnsupportedLocations; 
@property (nonatomic,readonly) BOOL hasBothSupportedAndUnsupported; 
@property (nonatomic,readonly) BOOL hasNeitherSupportedNorUnsupported; 
@property (nonatomic,readonly) BOOL wantsDefaultList; 
@property (nonatomic,retain) _UIContentUnavailableView * noContentView;                          //@synthesize noContentView=_noContentView - In the implementation block
@property (nonatomic,retain) WDClinicalOnboardingNoGeoView * noGeoView;                          //@synthesize noGeoView=_noGeoView - In the implementation block
@property (nonatomic,retain) NSIndexPath * spinnerIndexPath;                                     //@synthesize spinnerIndexPath=_spinnerIndexPath - In the implementation block
@property (nonatomic,retain) HRWDSpinnerView * spinnerView;                                      //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) WDClinicalSampleAccountsLoader * sampleAccountsLoader;              //@synthesize sampleAccountsLoader=_sampleAccountsLoader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProfile:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)loadView;
-(void)dismiss;
-(void)scrollViewDidScroll:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(BOOL)definesPresentationContext;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)didPresentSearchController:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)setNoContentView:(_UIContentUnavailableView *)arg1 ;
-(_UIContentUnavailableView *)noContentView;
-(NSString *)searchQuery;
-(void)setSearchQuery:(NSString *)arg1 ;
-(NSMutableDictionary *)resultsCache;
-(HRWDSpinnerView *)spinnerView;
-(void)setSpinnerView:(HRWDSpinnerView *)arg1 ;
-(long long)nextFrom;
-(id)searchResultAtIndexPath:(id)arg1 ;
-(BOOL)locationEnabled;
-(void)setNoGeoView:(WDClinicalOnboardingNoGeoView *)arg1 ;
-(void)_configureNavigationItems;
-(void)_configureSearchController;
-(void)_configureTableViewCells;
-(void)_cacheFeaturedBrandLogos;
-(void)_configureLocationServices;
-(BOOL)_isSimulator;
-(void)setSampleAccountsLoader:(WDClinicalSampleAccountsLoader *)arg1 ;
-(void)_suggestNewProviders;
-(void)_disableLocationAwareness;
-(void)_presentInitialResultsIfNecessary;
-(BOOL)showingNoLocations;
-(void)setLocationEnabled:(BOOL)arg1 ;
-(void)_postAWDMetricForUsingSearch;
-(BOOL)showingNoGeoView;
-(void)_cancelSearch;
-(void)_searchUsingQuery:(id)arg1 ;
-(void)setUnsupportedSearchResults:(NSMutableOrderedSet *)arg1 ;
-(void)setSupportedSearchResults:(NSMutableOrderedSet *)arg1 ;
-(BOOL)wantsDefaultList;
-(id)_cacheKeyForSearchQuery:(id)arg1 ;
-(BOOL)showingMainSpinner;
-(void)_didFetchResultsForQuery:(id)arg1 searchResultsPage:(id)arg2 error:(id)arg3 ;
-(id)_emptyMutableOrderedSet;
-(WDClinicalOnboardingNoGeoView *)noGeoView;
-(void)setNextFrom:(long long)arg1 ;
-(void)setSpinnerIndexPath:(NSIndexPath *)arg1 ;
-(void)_displayNoContentViewIfNeeded;
-(void)_searchResultsForQuery:(id)arg1 from:(long long)arg2 ;
-(BOOL)hasNeitherSupportedNorUnsupported;
-(void)setHasCompletedAtLeastOneFetch:(BOOL)arg1 ;
-(void)_presentError:(id)arg1 ;
-(id)_mutableOrderedSetWithSampleAccountsForQuery:(id)arg1 ;
-(id)_supportedProvidersFromResults:(id)arg1 ;
-(id)_unsupportedProvidersFromResults:(id)arg1 ;
-(NSMutableOrderedSet *)supportedSearchResults;
-(NSMutableOrderedSet *)unsupportedSearchResults;
-(WDClinicalSampleAccountsLoader *)sampleAccountsLoader;
-(BOOL)hasSupportedLocations;
-(BOOL)hasUnsupportedLocations;
-(void)_postAWDOnboardingMetricForType:(int)arg1 ;
-(BOOL)hasCompletedAtLeastOneFetch;
-(BOOL)hasBothSupportedAndUnsupported;
-(BOOL)couldFetchAdditionalResults;
-(NSIndexPath *)spinnerIndexPath;
-(BOOL)searchInFlight;
-(void)_postAWDMetricForTappingIntoGatewayLocationDetail;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(BOOL)hasOnlySupportedLocations;
-(BOOL)hasOnlyUnsupportedLocations;
-(void)setSearchInFlight:(BOOL)arg1 ;
@end

