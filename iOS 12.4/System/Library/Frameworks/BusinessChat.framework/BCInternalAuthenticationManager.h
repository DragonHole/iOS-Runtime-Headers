/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BCInternalAuthenticationRequest, ACAccount, ACAccountStore, NSString;

@interface BCInternalAuthenticationManager : NSObject {

	BCInternalAuthenticationRequest* _authenticationRequest;
	ACAccount* _account;
	ACAccountStore* _accountStore;

}

@property (nonatomic,retain) ACAccount * account;                                                  //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                                        //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) BCInternalAuthenticationRequest * authenticationRequest;              //@synthesize authenticationRequest=_authenticationRequest - In the implementation block
@property (nonatomic,copy,readonly) NSString * username; 
@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * middleName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) NSString * action; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) BOOL isUserSignedIn; 
-(id)personIdentifier;
-(id)deviceSerialNumber;
-(NSString *)middleName;
-(NSString *)firstName;
-(NSString *)lastName;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(ACAccountStore *)accountStore;
-(BCInternalAuthenticationRequest *)authenticationRequest;
-(id)initWithAuthenticationRequest:(id)arg1 ;
-(void)setAuthenticationRequest:(BCInternalAuthenticationRequest *)arg1 ;
-(id)altPersonIdentifier;
-(id)globalAuthToken;
-(id)labelCategory;
-(BOOL)isUserSignedIn;
-(void)fetchCredentials:(/*^block*/id)arg1 ;
-(long long)state;
-(NSString *)title;
-(NSString *)subtitle;
-(NSString *)action;
-(NSString *)username;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
@end

