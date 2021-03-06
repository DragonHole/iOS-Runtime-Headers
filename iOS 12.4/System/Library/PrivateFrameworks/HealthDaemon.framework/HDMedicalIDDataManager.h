/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:37 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class HDProfile, FKFriendsManager, NSObject;

@interface HDMedicalIDDataManager : NSObject {

	HDProfile* _profile;
	FKFriendsManager* _sosFriendsManager;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) HDProfile * profile;                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) FKFriendsManager * sosFriendsManager;              //@synthesize sosFriendsManager=_sosFriendsManager - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
-(id)initWithProfile:(id)arg1 ;
-(HDProfile *)profile;
-(BOOL)_migrateMedicalIDLocationIfNecessary:(id*)arg1 ;
-(id)_medicalIDURL;
-(id)_unarchiveMedicalIDDataWithRawData:(id)arg1 ;
-(BOOL)updateMedicalIDData:(id)arg1 error:(id*)arg2 ;
-(id)medicalIDDataCreateIfNecessary:(BOOL)arg1 ;
-(void)_updateShowMedicalIdOnWatch:(BOOL)arg1 ;
-(id)_medicalIDURLWithDirectoryPath:(id)arg1 ;
-(id)medicalIDEmergencyContacts;
-(BOOL)deleteMedicalIDDataWithError:(id*)arg1 ;
-(BOOL)obliterateMedicalIDDataWithReason:(id)arg1 error:(id*)arg2 ;
-(void)badgeHealthAppForEmergencyContactConsolidationWithCompletion:(/*^block*/id)arg1 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(FKFriendsManager *)sosFriendsManager;
-(void)setSosFriendsManager:(FKFriendsManager *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

