/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSString, NSNumber, NSDate;

@interface MCCertificatePayload : MCPayload {

	NSData* _certificatePersistentID;
	NSString* _installedOnDeviceID;
	NSNumber* _isIdentity;
	NSNumber* _isRoot;
	NSNumber* _expiryInterval;
	NSString* _certSubject;
	NSString* _certIssuer;

}

@property (nonatomic,copy) NSString * installedOnDeviceID;                  //@synthesize installedOnDeviceID=_installedOnDeviceID - In the implementation block
@property (nonatomic,retain) NSData * certificatePersistentID;              //@synthesize certificatePersistentID=_certificatePersistentID - In the implementation block
@property (nonatomic,readonly) BOOL isRoot; 
@property (nonatomic,readonly) BOOL isFullyTrustedRootCert; 
@property (nonatomic,readonly) BOOL isIdentity; 
@property (nonatomic,retain,readonly) NSDate * expiry; 
@property (nonatomic,readonly) BOOL isSigned; 
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(NSData *)certificatePersistentID;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(SecIdentityRef)copyIdentityFromKeychain;
-(id)certificateSubject;
-(id)issuer;
-(NSString *)installedOnDeviceID;
-(BOOL)isFullyTrustedRootCert;
-(void)setCertificatePersistentID:(NSData *)arg1 ;
-(void)setInstalledOnDeviceID:(NSString *)arg1 ;
-(BOOL)isIdentity;
-(BOOL)isRoot;
-(SecCertificateRef)copyCertificate;
-(BOOL)isSigned;
-(NSDate *)expiry;
-(id)description;
-(id)title;
@end

