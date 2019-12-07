/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:27 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDPeriodicActivityDelegate.h>

@protocol OS_dispatch_queue;
@class NSNumber, HDPeriodicActivity, NSObject, HDHealthRecordsProfileExtension, HDProfile, NSString;

@interface HDClinicalAnalyticsManager : NSObject <HDPeriodicActivityDelegate> {

	NSNumber* _overriddenSubmitsAnalytics;
	HDPeriodicActivity* _periodicActivity;
	NSObject*<OS_dispatch_queue> _queue;
	HDHealthRecordsProfileExtension* _profileExtension;
	HDProfile* _profile;

}

@property (nonatomic,__weak,readonly) HDHealthRecordsProfileExtension * profileExtension;              //@synthesize profileExtension=_profileExtension - In the implementation block
@property (nonatomic,__weak,readonly) HDProfile * profile;                                             //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_predicateForContentAnalyticMedicalRecordTypes;
+(Class)_medicalRecordEntityClassForDataTypeCode:(long long)arg1 ;
-(HDProfile *)profile;
-(void)triggerClinicalContentAnalyticsForReason:(long long)arg1 options:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetClinicalContentAnalyticsAnchorsWithCompletion:(/*^block*/id)arg1 ;
-(void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2 ;
-(void)performPeriodicActivity:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)periodicActivityRequiresProtectedData:(id)arg1 ;
-(HDHealthRecordsProfileExtension *)profileExtension;
-(id)initWithProfileExtension:(id)arg1 ;
-(void)_queue_didTriggerClinicalAnalyticsForReason:(long long)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(void)_queue_triggerClinicalContentAnalyticsWithOptions:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_clinicalAnalyticsKeyValueDomain;
-(BOOL)_queue_submitsAnalytics;
-(id)_queue_fetchRecordsForContentAnalyticsWithStartAnchor:(long long)arg1 limitCount:(long long)arg2 finalAnchor:(long long*)arg3 error:(id*)arg4 ;
-(id)_medicalRecordForObjectID:(long long)arg1 dataTypeCode:(long long)arg2 error:(id*)arg3 ;
-(void)setSubmitsAnalytics:(BOOL)arg1 ;
@end
