/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MessageSecurity.framework/MessageSecurity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageSecurity/MessageSecurity-Structs.h>
#import <libobjc.A.dylib/MSCMSAttributeCoder.h>

@interface MSCMSEncryptionKeyPreferenceAttribute : NSObject <MSCMSAttributeCoder> {

	SecCertificateRef _encryptionCertificate;

}

@property (readonly) SecCertificateRef encryptionCertificate;              //@synthesize encryptionCertificate=_encryptionCertificate - In the implementation block
-(id)initWithEmailAddress:(id)arg1 ;
-(id)initWithCertificate:(SecCertificateRef)arg1 ;
-(id)initWithIdentity:(SecIdentityRef)arg1 ;
-(id)encodeAttributeWithError:(id*)arg1 ;
-(id)initWithAttribute:(id)arg1 error:(id*)arg2 ;
-(SecCertificateRef)encryptionCertificate;
-(void)dealloc;
@end

