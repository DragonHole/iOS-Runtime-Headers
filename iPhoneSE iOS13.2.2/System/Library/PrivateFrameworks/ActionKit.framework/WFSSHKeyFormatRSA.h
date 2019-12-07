/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/WFSSHKeyFormat.h>

@class NSString;

@interface WFSSHKeyFormatRSA : NSObject <WFSSHKeyFormat>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultKeySize;
+(id)localizedDisplayName;
+(id)possibleKeySizes;
+(id)privateKeyType;
+(id)publicKeyType;
+(id)privateKeySpecifier;
+(id)publicKeySpecifier;
+(id)keyPairFromPrivateKey:(id)arg1 comment:(id)arg2 error:(id*)arg3 ;
+(id)generateKeyPairWithKeySize:(unsigned long long)arg1 comment:(id)arg2 ;
+(id)pkcs1FromRSAKey:(CCRSACryptorRef)arg1 ;
+(id)sshPublicKeyFromRSAKey:(CCRSACryptorRef)arg1 ;
@end
