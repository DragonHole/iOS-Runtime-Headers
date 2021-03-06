/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <SOS/SOS-Structs.h>
@class SOSLegacyContactsManager, NSArray, HKHealthStore, NSObject, FKFriendsManager;

@interface SOSContactsManager : NSObject {

	int _healthContactsNotificationToken;
	SOSLegacyContactsManager* _legacyContactsManager;
	NSArray* _medicalIDEmergencyContacts;
	HKHealthStore* _healthStore;
	NSObject*<OS_dispatch_semaphore> _medicalIDContactsInitialStateSemaphore;
	NSObject*<OS_dispatch_semaphore> _friendsManagerContactsInitialStateSemaphore;
	FKFriendsManager* _friendsManager;
	opaque_pthread_mutex_t _medicalIDEmergencyContactsMutex;
	opaque_pthread_mutex_t _friendsManagerContactsMutex;

}

@property (nonatomic,retain) HKHealthStore * healthStore;                                                               //@synthesize healthStore=_healthStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> medicalIDContactsInitialStateSemaphore;                   //@synthesize medicalIDContactsInitialStateSemaphore=_medicalIDContactsInitialStateSemaphore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> friendsManagerContactsInitialStateSemaphore;              //@synthesize friendsManagerContactsInitialStateSemaphore=_friendsManagerContactsInitialStateSemaphore - In the implementation block
@property (nonatomic,retain) NSArray * medicalIDEmergencyContacts;                                                      //@synthesize medicalIDEmergencyContacts=_medicalIDEmergencyContacts - In the implementation block
@property (assign,nonatomic) opaque_pthread_mutex_t medicalIDEmergencyContactsMutex;                                    //@synthesize medicalIDEmergencyContactsMutex=_medicalIDEmergencyContactsMutex - In the implementation block
@property (assign,nonatomic) opaque_pthread_mutex_t friendsManagerContactsMutex;                                        //@synthesize friendsManagerContactsMutex=_friendsManagerContactsMutex - In the implementation block
@property (nonatomic,retain) FKFriendsManager * friendsManager;                                                         //@synthesize friendsManager=_friendsManager - In the implementation block
@property (nonatomic,readonly) BOOL SOSContactsExist; 
@property (nonatomic,readonly) SOSLegacyContactsManager * legacyContactsManager; 
+(id)contactStore;
+(BOOL)authorizedToUseContactStore;
+(void)preloadContactStoreIfNecessary;
-(SOSLegacyContactsManager *)legacyContactsManager;
-(id)_userDefaults;
-(NSArray *)medicalIDEmergencyContacts;
-(HKHealthStore *)healthStore;
-(void)setHealthStore:(HKHealthStore *)arg1 ;
-(void)_medicalContactsDidChange;
-(void)fetchMedicalIDEmergencyContacts;
-(void)setMedicalIDEmergencyContacts:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)medicalIDContactsInitialStateSemaphore;
-(void)_medicalIDEmergencyContactsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_isEmergencyNumber:(id)arg1 ;
-(void)SOSContactsWithTimeout:(double)arg1 andCompletion:(/*^block*/id)arg2 ;
-(id)SOSContactDestinations;
-(FKFriendsManager *)friendsManager;
-(id)SOSFriends;
-(id)SOSDestinationsForFriend:(id)arg1 ;
-(id)_contactFromFriend:(id)arg1 ;
-(BOOL)addSOSFriend:(id)arg1 destinationNumber:(id)arg2 error:(id*)arg3 ;
-(id)phoneNumbersToMessage;
-(void)_waitForFriendsManagerInitialState;
-(void)_waitForMedicalIDInitialState;
-(BOOL)SOSContactsExist;
-(id)SOSFriendsDestinations;
-(id)SOSFormattedDestinationForFriend:(id)arg1 withDestinationNumber:(id)arg2 ;
-(BOOL)addContactAsSOSFriend:(id)arg1 destinationNumber:(id)arg2 error:(id*)arg3 ;
-(void)removeSOSFriend:(id)arg1 destinationNumber:(id)arg2 ;
-(BOOL)hasValidContactsToMessage;
-(void)contactStoreDidChange;
-(void)setMedicalIDContactsInitialStateSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)friendsManagerContactsInitialStateSemaphore;
-(void)setFriendsManagerContactsInitialStateSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(opaque_pthread_mutex_t)medicalIDEmergencyContactsMutex;
-(void)setMedicalIDEmergencyContactsMutex:(opaque_pthread_mutex_t)arg1 ;
-(opaque_pthread_mutex_t)friendsManagerContactsMutex;
-(void)setFriendsManagerContactsMutex:(opaque_pthread_mutex_t)arg1 ;
-(void)setFriendsManager:(FKFriendsManager *)arg1 ;
-(id)init;
-(void)dealloc;
@end

