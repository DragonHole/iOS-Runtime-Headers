/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/ENAccountKey.h>

@class IDSMPFullAccountIdentityCluster, IDSMPFullAccountIdentity, IDSMPFullServiceIdentityAdmin, IDSMPFullServiceIdentitySigning, IDSPublicAccountIdentity, NSString;

@interface IDSAccountIdentity : NSObject <ENAccountKey> {

	IDSMPFullAccountIdentityCluster* _identityCluster;

}

@property (nonatomic,readonly) IDSMPFullAccountIdentityCluster * identityCluster;              //@synthesize identityCluster=_identityCluster - In the implementation block
@property (nonatomic,readonly) IDSMPFullAccountIdentity * accountIdentity; 
@property (nonatomic,readonly) IDSMPFullServiceIdentityAdmin * adminIdentity; 
@property (nonatomic,readonly) IDSMPFullServiceIdentitySigning * signingIdentity; 
@property (nonatomic,readonly) IDSPublicAccountIdentity * accountPublicKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(IDSMPFullAccountIdentity *)accountIdentity;
-(IDSMPFullServiceIdentityAdmin *)adminIdentity;
-(IDSMPFullServiceIdentitySigning *)signingIdentity;
-(id)initWithFullCluster:(id)arg1 ;
-(IDSMPFullAccountIdentityCluster *)identityCluster;
-(IDSPublicAccountIdentity *)accountPublicKey;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
