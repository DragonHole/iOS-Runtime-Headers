/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKDisbursementVoucherRequest : PKPeerPaymentWebServiceRequest {

	unsigned long long _disbursementSource;
	unsigned long long _disbursementTarget;
	NSString* _teamIdentifier;
	NSString* _bundleIdentifier;

}

@property (assign,nonatomic) unsigned long long disbursementSource;              //@synthesize disbursementSource=_disbursementSource - In the implementation block
@property (assign,nonatomic) unsigned long long disbursementTarget;              //@synthesize disbursementTarget=_disbursementTarget - In the implementation block
@property (nonatomic,copy) NSString * teamIdentifier;                            //@synthesize teamIdentifier=_teamIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(unsigned long long)disbursementSource;
-(unsigned long long)disbursementTarget;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithDisbursementSource:(unsigned long long)arg1 disbursementTarget:(unsigned long long)arg2 teamIdentifier:(id)arg3 bundleIdentifier:(id)arg4 ;
-(void)setDisbursementSource:(unsigned long long)arg1 ;
-(void)setDisbursementTarget:(unsigned long long)arg1 ;
-(void)setTeamIdentifier:(NSString *)arg1 ;
-(NSString *)teamIdentifier;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

