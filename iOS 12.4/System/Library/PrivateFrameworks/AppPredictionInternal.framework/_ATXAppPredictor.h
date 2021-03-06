/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
@class NSObject, NSDictionary, NSArray, NSString, _ATXAppLaunchLocation, _APRParzenModel, _ATXAppDailyDose, _ATXRecentInstallCache, _ATXAppLaunchMonitor, APRAppIntentMonitor, _ATXAppInstallMonitor, ATXBBNotificationManager, ATXMagicalMomentsUpdateMonitor, ATXMagicalMomentsNowPlayingUpdateMonitor, NSUserDefaults, ATXAppPredictionBlacklist, ATXActionPredictionBlacklist, ATXMediaApplications, _ATXAppInfoManager, ATXAppLaunchMicroLocation;

@interface _ATXAppPredictor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSDictionary* _dayZeroParameters;
	NSDictionary* _dayZeroIntentParameters;
	NSDictionary* _sasBundleScoreBoost;
	NSArray* _interpreters;
	NSArray* _finalSubScores;
	NSArray* _abGroupIdentifiers;
	NSString* _dayZeroABGroupIdentifier;
	NSString* _dayZeroIntentABGroupIdentifier;
	_ATXAppLaunchLocation* _appLaunchLocation;
	_APRParzenModel* _appSiriKitIntentParzen;
	_APRParzenModel* _appNonSiriKitIntentParzen;
	_ATXAppDailyDose* _appDailyDose;
	_ATXRecentInstallCache* _recentInstallCache;
	_ATXAppLaunchMonitor* _appLaunchMonitor;
	APRAppIntentMonitor* _appIntentMonitor;
	_ATXAppInstallMonitor* _appInstallMonitor;
	ATXBBNotificationManager* _notificationManager;
	ATXMagicalMomentsUpdateMonitor* _mmPredictionMonitor;
	ATXMagicalMomentsNowPlayingUpdateMonitor* _mmNowPlayingPredictionMonitor;
	AB _appLaunchAndInstallMonitorsInitialized;
	NSUserDefaults* _userDefaults;
	ATXAppPredictionBlacklist* _appPredictionBlacklist;
	ATXActionPredictionBlacklist* _actionPredictionBlacklist;
	ATXMediaApplications* _mediaApps;
	_ATXAppInfoManager* _appInfoManager;
	ATXAppLaunchMicroLocation* _microLocation;

}

@property (nonatomic,retain) NSArray * abGroupIdentifiers;              //@synthesize abGroupIdentifiers=_abGroupIdentifiers - In the implementation block
+(void)removeOldLaunchInfoFrom:(id)arg1 appLaunchHistogram:(id)arg2 spotlightLaunchHistogram:(id)arg3 unlockTimeHistogram:(id)arg4 dayOfWeekHistogram:(id)arg5 airplaneModeLaunchHistogram:(id)arg6 trendingLaunchHistogram:(id)arg7 wifiLaunchHistogram:(id)arg8 coreMotionLaunchHistogram:(id)arg9 appIntentLaunchHistogram:(id)arg10 appIntentUnlockTimeHistogram:(id)arg11 appIntentDayOfWeekHistogram:(id)arg12 appIntentAirplaneModeLaunchHistogram:(id)arg13 appIntentTrendingLaunchHistogram:(id)arg14 appIntentWifiHistogram:(id)arg15 appIntentCoreMotionLaunchHistogram:(id)arg16 appForAllIntentsLaunchHistogram:(id)arg17 appForAllIntentsUnlockTimeHistogram:(id)arg18 appForAllIntentsDayOfWeekHistogram:(id)arg19 appForAllIntentsAirplaneModeLaunchHistogram:(id)arg20 appForAllIntentsTrendingLaunchHistogram:(id)arg21 appForAllIntentsWifiHistogram:(id)arg22 appForAllIntentsCoreMotionLaunchHistogram:(id)arg23 launchSequenceManager:(id)arg24 bundleIdTable:(id)arg25 aprExplicitConfirmsHistogram:(id)arg26 aprExplicitRejectsHistogram:(id)arg27 aprImplicitConfirmsHistogram:(id)arg28 aprImplicitRejectsHistogram:(id)arg29 aprSiriKitIntentsHistogram:(id)arg30 aprNonSiriKitIntentsHistogram:(id)arg31 actionConfirmsHistogram:(id)arg32 actionRejectsHistogram:(id)arg33 heuristicConfirmsHistogram:(id)arg34 heuristicRejectsHistogram:(id)arg35 appIntentPartOfWeekHistogram:(id)arg36 ;
+(double)time:(double)arg1 toAccuracyInSeconds:(double)arg2 ;
+(float)_computeL2DistanceFromBundleId:(id)arg1 to:(const float*)arg2 app2vecMapping:(id)arg3 ;
+(BOOL)_predictNextAppLaunchEmbedding:(id)arg1 into:(float*)arg2 ;
+(id)recreateSharedInstanceWithCurrentABGroup;
+(id)getParseTreeForConsumerSubType:(unsigned char)arg1 ;
+(id)sharedInstance;
-(void)train;
-(void)updateLaunchHistoryFromDuet;
-(id)_appPredictionsSeedAppsGivenSBAppList:(id)arg1 consumerSubType:(unsigned char)arg2 ;
-(id)_phoneAppsForWatchBundleIds:(id)arg1 ;
-(id)_appsToPredictWithConsumerSubType:(unsigned char)arg1 intent:(id)arg2 candidateBundleIdentifiers:(id)arg3 allSBApps:(id)arg4 appPredictionBlacklist:(id)arg5 digitalHealthBlacklist:(id)arg6 ;
-(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)_evalFeaturesForApps:(id)arg1 consumerSubType:(unsigned char)arg2 intent:(id)arg3 scoreLogger:(id)arg4 ;
-(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)_evalFeaturesForAppForAllIntents:(id)arg1 scoreLogger:(id)arg2 ;
-(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)_evalFeaturesForAppIntents:(id)arg1 scoreLogger:(id)arg2 ;
-(unordered_map<NSString *, const ATXPredictionItem *, ATXNSStringHash, ATXNSStringEqual, std::__1::allocator<std::__1::pair<NSString *const, const ATXPredictionItem *> > >*)_createMapOfKeyToItemForPredictionItems:(const vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg1 ;
-(void)_copyValidScoreInputsFromPredictionItem:(const ATXPredictionItem*)arg1 toPredictionItem:(ATXPredictionItem*)arg2 ;
-(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)_evalFeaturesForActions:(id)arg1 scoreLogger:(id)arg2 ;
-(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)_getPredictionForItems:(id)arg1 consumerSubType:(unsigned char)arg2 intent:(id)arg3 scoreLogger:(id)arg4 ;
-(void)setupScoreLogger:(id)arg1 forConsumerSubType:(unsigned char)arg2 ;
-(double)predictionScoreForItem:(const ATXPredictionItem*)arg1 consumerSubType:(unsigned char)arg2 ;
-(double)_predictionScoreForItem:(const ATXPredictionItem*)arg1 consumerSubType:(unsigned char)arg2 scoreLogger:(id)arg3 intentType:(id)arg4 ;
-(id)subscoresForInputScores:(id)arg1 consumerSubType:(unsigned char)arg2 intentType:(id)arg3 ;
-(void)_updateFromAsset;
-(void)_updateFromZeroDayAsset;
-(void)_addZeroDayAppIntentKeysToBundleIdTable:(id)arg1 ;
-(void)iterZeroDayAppIntentKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_updateFromZeroDayIntentAsset;
-(void)_updateFromAppPreferencePredictorAsset;
-(BOOL)_initAppLaunchAndInstallMonitors;
-(void)_setActionBlacklist:(id)arg1 ;
-(id)appLaunchMonitor;
-(id)appIntentMonitor;
-(void)resetRecentInstallCache;
-(id)appInstallMonitor;
-(id)predictWithLimit:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 intent:(id)arg3 candidateBundleIdentifiers:(id)arg4 candidateActiontypes:(id)arg5 scoreLogger:(id)arg6 ;
-(id)predictWithLimit:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 intent:(id)arg3 candidateBundleIdentifiers:(id)arg4 candidateActiontypes:(id)arg5 scoreLogger:(id)arg6 predictionItemsToKeep:(vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> >*)arg7 ;
-(id)getPredictionModelDetails;
-(id)getABGroups;
-(void)receiveFeedbackForConsumerType:(unsigned long long)arg1 consumerSubType:(unsigned char)arg2 atxResponse:(id)arg3 aprResponse:(id)arg4 engagementType:(unsigned long long)arg5 engagedBundleId:(id)arg6 bundleIdsShown:(id)arg7 ;
-(id)serializeState;
-(void)restoreSerializedState:(id)arg1 ;
-(NSArray *)abGroupIdentifiers;
-(void)setAbGroupIdentifiers:(NSArray *)arg1 ;
-(id)initInternal;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

