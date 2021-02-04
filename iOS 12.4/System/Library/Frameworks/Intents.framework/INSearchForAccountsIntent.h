/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchForAccountsIntentExport.h>

@class INSpeakableString, NSString;

@interface INSearchForAccountsIntent : INIntent <INSearchForAccountsIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * accountNickname; 
@property (nonatomic,readonly) long long accountType; 
@property (nonatomic,copy,readonly) INSpeakableString * organizationName; 
@property (nonatomic,readonly) long long requestedBalanceType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dictionaryRepresentation;
-(id)_typedBackingStore;
-(id)_metadata;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(void)setParametersByName:(id)arg1 ;
-(INSpeakableString *)accountNickname;
-(void)setAccountNickname:(INSpeakableString *)arg1 ;
-(void)setRequestedBalanceType:(long long)arg1 ;
-(long long)requestedBalanceType;
-(id)initWithAccountNickname:(id)arg1 accountType:(long long)arg2 organizationName:(id)arg3 requestedBalanceType:(long long)arg4 ;
-(id)verb;
-(void)setOrganizationName:(INSpeakableString *)arg1 ;
-(id)parametersByName;
-(long long)_intentCategory;
-(INSpeakableString *)organizationName;
-(void)setDomain:(id)arg1 ;
-(void)_setMetadata:(id)arg1 ;
-(long long)accountType;
-(void)setAccountType:(long long)arg1 ;
-(id)domain;
@end
