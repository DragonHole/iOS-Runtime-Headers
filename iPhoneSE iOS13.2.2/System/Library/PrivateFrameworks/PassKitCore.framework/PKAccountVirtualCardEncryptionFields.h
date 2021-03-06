/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:02 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSData, NSString;

@interface PKAccountVirtualCardEncryptionFields : NSObject {

	NSData* _publicCertificate;
	NSString* _encryptionVersion;
	os_unfair_lock_s _lock;

}
-(id)init;
-(id)dictionaryRepresentation;
-(void)prepareCertificateWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareOneTimeCertificateWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

