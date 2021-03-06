/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/SecurityFoundation-Structs.h>
#import <libobjc.A.dylib/SFKeychainItemAttributes.h>

@class NSString, _SFAsymmetricKeySpecifier;

@interface SFIdentityAttributes : NSObject <SFKeychainItemAttributes> {

	id _identityAttributesInternal;
	NSString* _privateKeyDomain;

}

@property (nonatomic,copy) NSString * identityName; 
@property (nonatomic,copy,readonly) _SFAsymmetricKeySpecifier * keySpecifier; 
@property (nonatomic,readonly) BOOL hasCertificate; 
@property (nonatomic,copy,readonly) NSString * privateKeyDomain;                           //@synthesize privateKeyDomain=_privateKeyDomain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * localizedLabel; 
@property (nonatomic,copy) NSString * localizedDescription; 
@property (nonatomic,copy,readonly) NSString * persistentIdentifier; 
+(BOOL)supportsSecureCoding;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)localizedLabel;
-(void)setLocalizedLabel:(NSString *)arg1 ;
-(void)setIdentityName:(NSString *)arg1 ;
-(NSString *)identityName;
-(_SFAsymmetricKeySpecifier *)keySpecifier;
-(NSString *)privateKeyDomain;
-(void)setKeySpecifier:(_SFAsymmetricKeySpecifier *)arg1 ;
-(BOOL)hasCertificate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
@end

