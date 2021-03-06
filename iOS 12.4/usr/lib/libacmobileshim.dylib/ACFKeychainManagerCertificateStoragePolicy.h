/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/ACFCertificateStoragePolicy.h>

@class NSString;

@interface ACFKeychainManagerCertificateStoragePolicy : NSObject <ACFCertificateStoragePolicy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)removeCertificateWithLabel:(id)arg1 realm:(id)arg2 ;
-(BOOL)storeCertificate:(SecCertificateRef)arg1 realm:(id)arg2 ;
-(SecCertificateRef)certificateWithLabel:(id)arg1 realm:(id)arg2 ;
-(id)keychainManager;
@end

