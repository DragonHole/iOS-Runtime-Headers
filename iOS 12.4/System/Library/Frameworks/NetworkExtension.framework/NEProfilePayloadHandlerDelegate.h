/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEProfilePayloadHandlerDelegate
@required
-(BOOL)setAppLayerVPNRuleSettings:(id)arg1 withAppIdentifier:(id)arg2;
-(id)getCertificates;
-(id)getPendingCertificateUUIDs:(id)arg1;
-(id)getPendingCertificateInfo:(id)arg1;
-(id)getConfigurationIdentifier;
-(BOOL)setPayloadInfoIdentity:(id)arg1;
-(BOOL)setPayloadInfoCommon:(id)arg1 payloadOrganization:(id)arg2;
-(BOOL)setProfileInfo:(id)arg1;
-(BOOL)setAppLayerVPNUUID:(id)arg1 andSafariDomains:(id)arg2;
-(BOOL)setCertificates:(id)arg1;

@end
