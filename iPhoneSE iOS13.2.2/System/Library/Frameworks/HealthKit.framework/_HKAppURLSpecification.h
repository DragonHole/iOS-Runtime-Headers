/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _HKAppURLSpecification : NSObject
+(BOOL)isClinicalOnboardingURL:(id)arg1 ;
+(BOOL)isClinicalLoginRedirectURL:(id)arg1 ;
+(BOOL)parseClinicalOnboardingURL:(id)arg1 resultHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(BOOL)parseClinicalLoginRedirectURL:(id)arg1 resultHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(BOOL)isAtrialFibrillationEventURL:(id)arg1 ;
+(BOOL)isViewHealthRecordsURL:(id)arg1 ;
+(BOOL)isHealthRecordsProviderSearchURL:(id)arg1 ;
@end

