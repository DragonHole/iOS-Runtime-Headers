/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAFamilyRequest.h>

@class ACAccount;

@interface FAFamilyRequest : AAFamilyRequest {

	ACAccount* _appleAccount;

}

@property (nonatomic,retain) ACAccount * appleAccount;              //@synthesize appleAccount=_appleAccount - In the implementation block
-(id)_queryString;
-(id)_endpoint;
-(id)urlRequest;
-(id)initWithGrandSlamSigner:(id)arg1 ;
-(ACAccount *)appleAccount;
-(void)URLRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_baseURLForEndpoint:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_configureRequest:(id)arg1 includePayload:(BOOL)arg2 ;
-(void)_decoratedURLWithCompletion:(/*^block*/id)arg1 ;
-(void)setAppleAccount:(ACAccount *)arg1 ;
@end

