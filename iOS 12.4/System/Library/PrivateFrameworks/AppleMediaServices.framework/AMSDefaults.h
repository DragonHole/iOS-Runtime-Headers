/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@interface AMSDefaults : NSObject
+(BOOL)useNewCookieStorage;
+(BOOL)migratedToNewCookieStorage;
+(void)setMigratedToNewCookieStorage:(BOOL)arg1 ;
+(void)_setValue:(id)arg1 forKey:(id)arg2 ;
+(long long)reversePushEnabled;
+(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
+(void)_setInteger:(long long)arg1 forKey:(id)arg2 ;
+(double)_randomDouble;
+(id)_valueForKey:(id)arg1 ;
+(id)defaultPaymentPassIdentifier;
+(void)setDefaultPaymentPassIdentifier:(id)arg1 ;
+(BOOL)disableHARLogging;
+(id)deviceOfferEligibility;
+(void)setDeviceOfferEligibility:(id)arg1 ;
+(void)setDidRetrieveDeviceOffers:(BOOL)arg1 ;
+(BOOL)didRetrieveDeviceOffers;
+(id)deviceOffersSerialNumber;
+(BOOL)shouldSampleWithPercentageValue:(id)arg1 sessionDurationValue:(id)arg2 identifier:(id)arg3 ;
+(BOOL)includeFullResponseInHARLogging;
+(BOOL)includeFullRequestInHARLogging;
+(BOOL)allowUpsellEnrollmentForAppliedAccounts;
+(id)metricsCanaryIdentifier;
+(void)setMescalCertExpiration:(id)arg1 ;
+(id)mescalCertExpiration;
+(BOOL)ignoreServerTrustEvaluation;
+(BOOL)ss_ignoreServerTrustEvaluation;
+(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
+(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
+(id)_valueForKey:(id)arg1 domain:(CFStringRef)arg2 ;
+(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 domain:(CFStringRef)arg3 ;
+(void)_setValue:(id)arg1 forKey:(id)arg2 domain:(CFStringRef)arg3 ;
+(void)_setBool:(BOOL)arg1 forKey:(id)arg2 domain:(CFStringRef)arg3 ;
+(BOOL)shouldSampleWithPercentage:(double)arg1 sessionDuration:(double)arg2 identifier:(id)arg3 ;
+(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(CFStringRef)arg3 ;
+(BOOL)alwaysSendCacheBuster;
+(BOOL)alwaysSendGUID;
+(id)bagURLCookies;
+(long long)cardEnrollmentAutomatic;
+(long long)cardEnrollmentManual;
+(long long)cardEnrollmentSilent;
+(long long)cardEnrollmentUpsell;
+(id)extendedBiometricACLVersion;
+(long long)forceLoadUrlMetrics;
+(id)metricsTimingWindowStartTime;
+(BOOL)perfomedDeviceOfferSetup;
+(id)primaryBiometricACLVersion;
+(BOOL)showSandboxAccountUI;
+(id)storefrontSuffixes;
+(void)setAllowUpsellEnrollmentForAppliedAccounts:(BOOL)arg1 ;
+(void)setAlwaysSendCacheBuster:(BOOL)arg1 ;
+(void)setAlwaysSendGUID:(BOOL)arg1 ;
+(void)setBagURLCookies:(id)arg1 ;
+(void)setCardEnrollmentAutomatic:(long long)arg1 ;
+(void)setCardEnrollmentManual:(long long)arg1 ;
+(void)setCardEnrollmentSilent:(long long)arg1 ;
+(void)setCardEnrollmentUpsell:(long long)arg1 ;
+(void)setDisableHARLogging:(BOOL)arg1 ;
+(void)setExtendedBiometricACLVersion:(id)arg1 ;
+(void)setForceLoadUrlMetrics:(long long)arg1 ;
+(void)setIgnoreServerTrustEvaluation:(BOOL)arg1 ;
+(void)setIncludeFullRequestInHARLogging:(BOOL)arg1 ;
+(void)setIncludeFullResponseInHARLogging:(BOOL)arg1 ;
+(void)setMetricsCanaryIdentifier:(id)arg1 ;
+(void)setMetricsTimingWindowStartTime:(id)arg1 ;
+(void)setPerfomedDeviceOfferSetup:(BOOL)arg1 ;
+(void)setPrimaryBiometricACLVersion:(id)arg1 ;
+(void)setReversePushEnabled:(long long)arg1 ;
+(void)setShowSandboxAccountUI:(BOOL)arg1 ;
+(void)setStorefrontSuffixes:(id)arg1 ;
@end
