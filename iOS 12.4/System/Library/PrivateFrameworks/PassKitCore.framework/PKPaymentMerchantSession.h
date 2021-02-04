/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSArray;

@interface PKPaymentMerchantSession : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _epochTimestamp;
	unsigned long long _expiresAt;
	NSString* _merchantSessionIdentifier;
	NSString* _nonce;
	NSString* _merchantIdentifier;
	NSString* _domain;
	NSString* _displayName;
	NSString* _initiativeContext;
	NSString* _initiative;
	NSData* _ampEnrollmentPinning;
	NSArray* _signedFields;
	NSData* _signature;
	NSString* _retryNonce;

}

@property (nonatomic,readonly) unsigned long long epochTimestamp;                 //@synthesize epochTimestamp=_epochTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long expiresAt;                      //@synthesize expiresAt=_expiresAt - In the implementation block
@property (nonatomic,readonly) NSString * merchantSessionIdentifier;              //@synthesize merchantSessionIdentifier=_merchantSessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * nonce;                                  //@synthesize nonce=_nonce - In the implementation block
@property (nonatomic,readonly) NSString * merchantIdentifier;                     //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * domain;                                 //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                            //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * initiativeContext;                      //@synthesize initiativeContext=_initiativeContext - In the implementation block
@property (nonatomic,readonly) NSString * initiative;                             //@synthesize initiative=_initiative - In the implementation block
@property (nonatomic,readonly) NSData * ampEnrollmentPinning;                     //@synthesize ampEnrollmentPinning=_ampEnrollmentPinning - In the implementation block
@property (nonatomic,readonly) NSArray * signedFields;                            //@synthesize signedFields=_signedFields - In the implementation block
@property (nonatomic,readonly) NSData * signature;                                //@synthesize signature=_signature - In the implementation block
@property (nonatomic,retain) NSString * retryNonce;                               //@synthesize retryNonce=_retryNonce - In the implementation block
+(id)paymentMerchantSessionWithProtobuf:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(long long)version;
-(NSArray *)signedFields;
-(NSData *)signature;
-(id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 domain:(id)arg5 displayName:(id)arg6 signature:(id)arg7 ;
-(id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 domain:(id)arg6 displayName:(id)arg7 signature:(id)arg8 ;
-(id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 ampEnrollmentPinning:(id)arg9 signedFields:(id)arg10 signature:(id)arg11 ;
-(BOOL)isEqualToPaymentMerchantSession:(id)arg1 ;
-(id)initWithMerchantIdentifier:(id)arg1 merchantSessionIdentifier:(id)arg2 nonce:(id)arg3 epochTimestamp:(unsigned long long)arg4 expiresAt:(unsigned long long)arg5 displayName:(id)arg6 initiativeContext:(id)arg7 initiative:(id)arg8 signedFields:(id)arg9 signature:(id)arg10 ;
-(id)signedData;
-(unsigned long long)epochTimestamp;
-(unsigned long long)expiresAt;
-(NSString *)merchantSessionIdentifier;
-(NSString *)initiativeContext;
-(NSString *)initiative;
-(NSData *)ampEnrollmentPinning;
-(NSString *)retryNonce;
-(void)setRetryNonce:(NSString *)arg1 ;
-(id)protobuf;
-(NSString *)nonce;
-(NSString *)merchantIdentifier;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)domain;
-(NSString *)displayName;
-(BOOL)_isModern;
-(BOOL)supportsURL:(id)arg1 ;
@end
