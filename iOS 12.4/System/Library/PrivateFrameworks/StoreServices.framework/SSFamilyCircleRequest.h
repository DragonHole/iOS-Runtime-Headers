/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString;

@interface SSFamilyCircleRequest : SSRequest <SSXPCCoding> {

	long long _authenticationPromptStyle;
	BOOL _fetchITunesAccountNames;

}

@property (assign,nonatomic) long long authenticationPromptStyle;              //@synthesize authenticationPromptStyle=_authenticationPromptStyle - In the implementation block
@property (assign,nonatomic) BOOL fetchITunesAccountNames;                     //@synthesize fetchITunesAccountNames=_fetchITunesAccountNames - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(long long)authenticationPromptStyle;
-(BOOL)fetchITunesAccountNames;
-(void)setFetchITunesAccountNames:(BOOL)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setAuthenticationPromptStyle:(long long)arg1 ;
-(void)startWithResponseBlock:(/*^block*/id)arg1 ;
@end

