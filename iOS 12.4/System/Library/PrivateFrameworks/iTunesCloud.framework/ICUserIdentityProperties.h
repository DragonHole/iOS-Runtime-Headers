/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ICDelegateToken, NSNumber, NSDate;

@interface ICUserIdentityProperties : NSObject <NSMutableCopying, NSCopying, NSSecureCoding> {

	NSString* _alternateDSID;
	NSString* _carrierBundleDeviceIdentifier;
	BOOL _cloudBackupEnabled;
	BOOL _delegated;
	ICDelegateToken* _delegateToken;
	NSNumber* _dsid;
	NSString* _firstName;
	NSString* _iCloudPersonID;
	NSString* _lastName;
	BOOL _managedAppleID;
	BOOL _sandboxed;
	NSString* _storefrontIdentifier;
	BOOL _subscriptionStatusEnabled;
	NSString* _username;
	NSDate* _ageVerificationExpirationDate;

}

@property (assign,getter=isCloudBackupEnabled,nonatomic) BOOL cloudBackupEnabled;                              //@synthesize cloudBackupEnabled=_cloudBackupEnabled - In the implementation block
@property (setter=setICloudPersonID:,nonatomic,copy) NSString * iCloudPersonID;                                //@synthesize iCloudPersonID=_iCloudPersonID - In the implementation block
@property (nonatomic,copy,readonly) NSString * alternateDSID; 
@property (nonatomic,copy,readonly) NSString * carrierBundleDeviceIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * DSID;                                                           //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID;                                    //@synthesize managedAppleID=_managedAppleID - In the implementation block
@property (getter=isSandboxed,nonatomic,readonly) BOOL sandboxed;                                              //@synthesize sandboxed=_sandboxed - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontIdentifier; 
@property (getter=isSubscriptionStatusEnabled,nonatomic,readonly) BOOL subscriptionStatusEnabled;              //@synthesize subscriptionStatusEnabled=_subscriptionStatusEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSDate * ageVerificationExpirationDate; 
@property (getter=isDelegated,nonatomic,readonly) BOOL delegated;                                              //@synthesize delegated=_delegated - In the implementation block
@property (nonatomic,copy,readonly) ICDelegateToken * delegateToken;                                           //@synthesize delegateToken=_delegateToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setICloudPersonID:(NSString *)arg1 ;
-(BOOL)isSubscriptionStatusEnabled;
-(NSString *)carrierBundleDeviceIdentifier;
-(NSString *)iCloudPersonID;
-(NSDate *)ageVerificationExpirationDate;
-(ICDelegateToken *)delegateToken;
-(BOOL)isCloudBackupEnabled;
-(NSString *)storefrontIdentifier;
-(BOOL)isDelegated;
-(NSString *)firstName;
-(NSString *)lastName;
-(BOOL)isSandboxed;
-(void)setCloudBackupEnabled:(BOOL)arg1 ;
-(NSNumber *)DSID;
-(NSString *)alternateDSID;
-(BOOL)isManagedAppleID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)username;
@end
