/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ICStoreRequestContext;

@interface ICMusicSubscriptionStatusRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allowsFallbackToExpiredStatus;
	BOOL _allowsFallbackToStatusNeedingReload;
	BOOL _shouldIgnoreCache;
	long long _carrierBundleProvisioningStyle;
	long long _reason;
	long long _maximumRetryCount;
	ICStoreRequestContext* _storeRequestContext;

}

@property (assign,nonatomic) BOOL allowsFallbackToExpiredStatus;                     //@synthesize allowsFallbackToExpiredStatus=_allowsFallbackToExpiredStatus - In the implementation block
@property (assign,nonatomic) BOOL allowsFallbackToStatusNeedingReload;               //@synthesize allowsFallbackToStatusNeedingReload=_allowsFallbackToStatusNeedingReload - In the implementation block
@property (assign,nonatomic) long long carrierBundleProvisioningStyle;               //@synthesize carrierBundleProvisioningStyle=_carrierBundleProvisioningStyle - In the implementation block
@property (assign,nonatomic) long long reason;                                       //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) long long maximumRetryCount;                            //@synthesize maximumRetryCount=_maximumRetryCount - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreCache;                                 //@synthesize shouldIgnoreCache=_shouldIgnoreCache - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * storeRequestContext;              //@synthesize storeRequestContext=_storeRequestContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)carrierBundleProvisioningStyle;
-(BOOL)allowsFallbackToExpiredStatus;
-(BOOL)allowsFallbackToStatusNeedingReload;
-(id)initWithStoreRequestContext:(id)arg1 ;
-(void)setReason:(long long)arg1 ;
-(void)setCarrierBundleProvisioningStyle:(long long)arg1 ;
-(void)setMaximumRetryCount:(long long)arg1 ;
-(void)setAllowsFallbackToExpiredStatus:(BOOL)arg1 ;
-(void)setAllowsFallbackToStatusNeedingReload:(BOOL)arg1 ;
-(ICStoreRequestContext *)storeRequestContext;
-(void)setStoreRequestContext:(ICStoreRequestContext *)arg1 ;
-(BOOL)shouldIgnoreCache;
-(void)setShouldIgnoreCache:(BOOL)arg1 ;
-(long long)maximumRetryCount;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)reason;
@end

