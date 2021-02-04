/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>
#import <libobjc.A.dylib/STContentPrivacyViewModelCoordinator.h>
@class STContentPrivacyViewModel;


@protocol STContentPrivacyViewModelCoordinator <NSObject>
@property (nonatomic,readonly) STContentPrivacyViewModel * viewModel; 
@required
-(STContentPrivacyViewModel *)viewModel;
-(void)saveRestrictionValue:(id)arg1 forItem:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)saveContentPrivacyEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2;
-(void)saveValuesForRestrictions:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end


@protocol RMPersistenceControllerProtocol;
@class STContentPrivacyViewModel, NSString, NSNumber, NSManagedObjectID, NSMutableDictionary, NSArray;

@interface STContentPrivacyViewModelCoordinator : NSObject <NSFetchedResultsControllerDelegate, STContentPrivacyViewModelCoordinator> {

	BOOL _isLocalDevice;
	STContentPrivacyViewModel* _viewModel;
	id<RMPersistenceControllerProtocol> _persistenceController;
	NSString* _organizationIdentifier;
	NSNumber* _userDSID;
	NSString* _userName;
	NSManagedObjectID* _userObjectID;
	NSMutableDictionary* _configurationPayloadsByType;
	NSArray* _fetchedResultsControllers;
	unsigned long long _numExpectedChanges;

}

@property (nonatomic,retain) STContentPrivacyViewModel * viewModel;                                    //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) id<RMPersistenceControllerProtocol> persistenceController;              //@synthesize persistenceController=_persistenceController - In the implementation block
@property (nonatomic,copy) NSString * organizationIdentifier;                                          //@synthesize organizationIdentifier=_organizationIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * userDSID;                                                        //@synthesize userDSID=_userDSID - In the implementation block
@property (nonatomic,copy) NSString * userName;                                                        //@synthesize userName=_userName - In the implementation block
@property (nonatomic,copy) NSManagedObjectID * userObjectID;                                           //@synthesize userObjectID=_userObjectID - In the implementation block
@property (assign,nonatomic) BOOL isLocalDevice;                                                       //@synthesize isLocalDevice=_isLocalDevice - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * configurationPayloadsByType;                        //@synthesize configurationPayloadsByType=_configurationPayloadsByType - In the implementation block
@property (nonatomic,retain) NSArray * fetchedResultsControllers;                                      //@synthesize fetchedResultsControllers=_fetchedResultsControllers - In the implementation block
@property (assign) unsigned long long numExpectedChanges;                                              //@synthesize numExpectedChanges=_numExpectedChanges - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)userName;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(BOOL)isLocalDevice;
-(void)setIsLocalDevice:(BOOL)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(STContentPrivacyViewModel *)viewModel;
-(void)setViewModel:(STContentPrivacyViewModel *)arg1 ;
-(id)valueForRestriction:(id)arg1 ;
-(id<RMPersistenceControllerProtocol>)persistenceController;
-(void)saveRestrictionValue:(id)arg1 forItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)saveContentPrivacyEnabled:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSNumber *)userDSID;
-(void)setUserDSID:(NSNumber *)arg1 ;
-(id)_valuesByRestriction;
-(id)_visibleRestrictions;
-(void)loadViewModelWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_registerForPersistenceStoreNotifications;
-(id)_remoteDeviceRestrictions;
-(id)_localDeviceRestrictions;
-(NSMutableDictionary *)configurationPayloadsByType;
-(id)_valueForWebFilterState;
-(id)_valueForMCFeature:(id)arg1 ;
-(id)_valueForSBCapability:(id)arg1 ;
-(id)_valueInConfiguration:(id)arg1 keyPath:(id)arg2 ;
-(void)setFetchedResultsControllers:(NSArray *)arg1 ;
-(NSArray *)fetchedResultsControllers;
-(unsigned long long)numExpectedChanges;
-(void)setNumExpectedChanges:(unsigned long long)arg1 ;
-(void)reloadViewModelForRemoteChanges;
-(NSString *)organizationIdentifier;
-(id)_identifierForConfigurationType:(id)arg1 ;
-(NSManagedObjectID *)userObjectID;
-(void)setUserObjectID:(NSManagedObjectID *)arg1 ;
-(id)_activationIdentifier;
-(void)setConfigurationPayloadsByType:(NSMutableDictionary *)arg1 ;
-(id)_getSettingsRestrictionsEnabledWithContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setSettingsRestrictionsEnabled:(BOOL)arg1 error:(id*)arg2 ;
-(void)_setValue:(id)arg1 forSBCapability:(id)arg2 ;
-(void)_setValue:(id)arg1 forMCFeature:(id)arg2 ;
-(id)_createUnrestrictedConfiguration:(id)arg1 ;
-(void)_updateConfiguration:(id)arg1 keyPath:(id)arg2 value:(id)arg3 ;
-(BOOL)_rebuildActivationInContext:(id)arg1 withNewConfigurations:(id)arg2 error:(id*)arg3 ;
-(id)_restrictionsForWebFilterState:(unsigned long long)arg1 ;
-(void)saveValuesForRestrictions:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithPersistenceController:(id)arg1 organizationIdentifier:(id)arg2 userDSID:(id)arg3 userName:(id)arg4 ;
-(void)setOrganizationIdentifier:(NSString *)arg1 ;
@end
