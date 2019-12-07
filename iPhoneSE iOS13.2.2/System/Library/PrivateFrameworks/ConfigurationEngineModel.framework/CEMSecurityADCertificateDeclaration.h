/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMSecurityADCertificateDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadCertServer;
	NSString* _payloadCertTemplate;
	NSString* _payloadDescription;
	NSNumber* _payloadCertificateRenewalTimeInterval;
	NSString* _payloadCertificateAuthority;
	NSString* _payloadCertificateAcquisitionMechanism;
	NSNumber* _payloadAllowAllAppsAccess;
	NSNumber* _payloadPromptForCredentials;
	NSNumber* _payloadKeyIsExtractable;
	NSNumber* _payloadKeysize;
	NSNumber* _payloadEnableAutoRenewal;

}

@property (nonatomic,copy) NSString * payloadCertServer;                                   //@synthesize payloadCertServer=_payloadCertServer - In the implementation block
@property (nonatomic,copy) NSString * payloadCertTemplate;                                 //@synthesize payloadCertTemplate=_payloadCertTemplate - In the implementation block
@property (nonatomic,copy) NSString * payloadDescription;                                  //@synthesize payloadDescription=_payloadDescription - In the implementation block
@property (nonatomic,copy) NSNumber * payloadCertificateRenewalTimeInterval;               //@synthesize payloadCertificateRenewalTimeInterval=_payloadCertificateRenewalTimeInterval - In the implementation block
@property (nonatomic,copy) NSString * payloadCertificateAuthority;                         //@synthesize payloadCertificateAuthority=_payloadCertificateAuthority - In the implementation block
@property (nonatomic,copy) NSString * payloadCertificateAcquisitionMechanism;              //@synthesize payloadCertificateAcquisitionMechanism=_payloadCertificateAcquisitionMechanism - In the implementation block
@property (nonatomic,copy) NSNumber * payloadAllowAllAppsAccess;                           //@synthesize payloadAllowAllAppsAccess=_payloadAllowAllAppsAccess - In the implementation block
@property (nonatomic,copy) NSNumber * payloadPromptForCredentials;                         //@synthesize payloadPromptForCredentials=_payloadPromptForCredentials - In the implementation block
@property (nonatomic,copy) NSNumber * payloadKeyIsExtractable;                             //@synthesize payloadKeyIsExtractable=_payloadKeyIsExtractable - In the implementation block
@property (nonatomic,copy) NSNumber * payloadKeysize;                                      //@synthesize payloadKeysize=_payloadKeysize - In the implementation block
@property (nonatomic,copy) NSNumber * payloadEnableAutoRenewal;                            //@synthesize payloadEnableAutoRenewal=_payloadEnableAutoRenewal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withCertServer:(id)arg2 withCertTemplate:(id)arg3 withDescription:(id)arg4 withCertificateRenewalTimeInterval:(id)arg5 withCertificateAuthority:(id)arg6 withCertificateAcquisitionMechanism:(id)arg7 withAllowAllAppsAccess:(id)arg8 withPromptForCredentials:(id)arg9 withKeyIsExtractable:(id)arg10 withKeysize:(id)arg11 withEnableAutoRenewal:(id)arg12 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withCertServer:(id)arg2 withCertTemplate:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)payloadDescription;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadDescription:(NSString *)arg1 ;
-(void)setPayloadKeysize:(NSNumber *)arg1 ;
-(void)setPayloadKeyIsExtractable:(NSNumber *)arg1 ;
-(void)setPayloadAllowAllAppsAccess:(NSNumber *)arg1 ;
-(NSNumber *)payloadKeysize;
-(NSNumber *)payloadKeyIsExtractable;
-(NSNumber *)payloadAllowAllAppsAccess;
-(void)setPayloadCertServer:(NSString *)arg1 ;
-(void)setPayloadCertTemplate:(NSString *)arg1 ;
-(void)setPayloadCertificateRenewalTimeInterval:(NSNumber *)arg1 ;
-(void)setPayloadCertificateAuthority:(NSString *)arg1 ;
-(void)setPayloadCertificateAcquisitionMechanism:(NSString *)arg1 ;
-(void)setPayloadPromptForCredentials:(NSNumber *)arg1 ;
-(void)setPayloadEnableAutoRenewal:(NSNumber *)arg1 ;
-(NSString *)payloadCertServer;
-(NSString *)payloadCertTemplate;
-(NSNumber *)payloadCertificateRenewalTimeInterval;
-(NSString *)payloadCertificateAuthority;
-(NSString *)payloadCertificateAcquisitionMechanism;
-(NSNumber *)payloadPromptForCredentials;
-(NSNumber *)payloadEnableAutoRenewal;
@end
