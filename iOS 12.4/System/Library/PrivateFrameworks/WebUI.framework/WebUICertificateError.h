/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebUI/WebUI-Structs.h>
@interface WebUICertificateError : NSObject
+(BOOL)promptForCertificateTrust:(SecTrustRef)arg1 host:(id)arg2 ;
+(BOOL)userAllowsCertificateTrust:(SecTrustRef)arg1 host:(id)arg2 ;
+(BOOL)trustIncludesRevokedCertificate:(SecTrustRef)arg1 ;
+(id)newAlertToListPossibleClientSideCertificatesWithContext:(id)arg1 ;
+(BOOL)proceedWithClientCertificateIdentity:(SecIdentityRef)arg1 context:(id)arg2 ;
+(BOOL)isServerCertificateError:(long long)arg1 ;
+(BOOL)isClientCertificateError:(long long)arg1 ;
+(id)newAlertToHandleClientSideCertificateErrorCode:(long long)arg1 context:(id)arg2 ;
+(BOOL)userAllowsCertificateTrust:(SecTrustRef)arg1 host:(id)arg2 shouldPrompt:(BOOL)arg3 ;
+(void)permanentlyAllowCertificateTrust:(SecTrustRef)arg1 host:(id)arg2 ;
+(BOOL)canAuthenticateAgainstProtectionSpace:(id)arg1 ;
@end
