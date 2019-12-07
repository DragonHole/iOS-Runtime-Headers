/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Settings/PrivacySettingsUI.framework/PrivacySettingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrivacySettingsUI/PUILocationServicesListController.h>

@class RTRoutineManager;

@interface PUILocationSystemServicesListController : PUILocationServicesListController {

	RTRoutineManager* _routineManager;

}

@property (nonatomic,retain) RTRoutineManager * routineManager;              //@synthesize routineManager=_routineManager - In the implementation block
+(int)systemServicesLocationUsage;
+(id)locationBasedAlertBundles;
+(id)homeKitBundlesForSystemVersion:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)specifiers;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
-(void)stopLocationStatusUpdates;
-(void)startLocationStatusUpdates;
-(id)_locationBasedAlertBundles;
-(id)_homeKitBundles;
-(void)updateCoreRoutineSigLocationSpecifier;
-(void)_performLocationBasedAlertsConsistencyCheck;
-(void)_performHomeKitConsistencyCheck;
-(id)_productImprovementByBundlePath;
-(void)_setLocationBasedAlertsAuthorized:(id)arg1 ;
-(id)_areLocationBasedAlertsAuthorized;
-(void)_setHomeKitAuthorized:(id)arg1 ;
-(id)_isHomeKitAuthorized;
-(id)coreRoutineEnabledStatus:(id)arg1 ;
-(void)_setAddressCorrectionAuthorizationStatus:(id)arg1 specifier:(id)arg2 ;
-(id)_readAddressCorrectionAuthorizationStatus:(id)arg1 ;
-(void)setStatusEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isStatusEnabled:(id)arg1 ;
-(void)_showAddressCorrectionPage;
@end
