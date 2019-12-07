/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAAppleIDSettingsRequest.h>

@class NSString;

@interface AAPaymentSummaryRequest : AAAppleIDSettingsRequest {

	NSString* _secondaryAuthToken;
	NSString* _heartbeatToken;

}

@property (nonatomic,copy) NSString * secondaryAuthToken;              //@synthesize secondaryAuthToken=_secondaryAuthToken - In the implementation block
@property (nonatomic,copy) NSString * heartbeatToken;                  //@synthesize heartbeatToken=_heartbeatToken - In the implementation block
+(Class)responseClass;
-(id)urlRequest;
-(id)urlString;
-(BOOL)forceGSToken;
-(NSString *)secondaryAuthToken;
-(void)setSecondaryAuthToken:(NSString *)arg1 ;
-(NSString *)heartbeatToken;
-(void)setHeartbeatToken:(NSString *)arg1 ;
@end
