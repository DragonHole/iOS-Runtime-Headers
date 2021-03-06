/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class NSDictionary, AASigningSession, ACAccount;

@interface AASetupAssistantCreateRequest : AARequest {

	NSDictionary* appleIDParameters;
	AASigningSession* signingSession;
	ACAccount* _account;

}
+(Class)responseClass;
-(id)urlRequest;
-(id)urlString;
-(id)initWithAccount:(id)arg1 withAppleIDParameters:(id)arg2 signingSession:(id)arg3 ;
-(id)bodyDictionary;
@end

