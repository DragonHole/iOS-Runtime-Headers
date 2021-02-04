/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariFoundation/SafariFoundation-Structs.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSString;

@interface SFAutoFillFeatureManager : NSObject <MCProfileConnectionObserver> {

	int _cachedAutoFillRestrictionValue;
	int _cachedPasswordAutoFillEffectiveValue;

}

@property (assign,nonatomic) BOOL shouldAutoFillPasswordsFromKeychain; 
@property (nonatomic,retain) NSString * preferredCredentialProviderForSaving; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const CFStringRef)autoFillPreferencesDomain;
+(BOOL)defaultValueForPasswordAndCreditCardAutoFill;
+(void)autoFillPreferencesDidChange;
+(id)sharedFeatureManager;
+(id)_syncManager;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_refreshCachedAutoFillRestrictionValues;
-(void)setShouldAutoFillPasswordsFromKeychain:(BOOL)arg1 ;
-(BOOL)shouldAutoFillPasswordsFromKeychain;
-(BOOL)shouldAutoFillPasswords;
-(id)init;
-(void)dealloc;
@end
