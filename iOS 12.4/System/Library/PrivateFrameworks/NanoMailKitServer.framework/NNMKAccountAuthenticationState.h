/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NNMKAccountAuthenticationState : NSObject {

	NSString* _accountId;
	unsigned long long _state;

}

@property (nonatomic,copy) NSString * accountId;                    //@synthesize accountId=_accountId - In the implementation block
@property (assign,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
-(void)setAccountId:(NSString *)arg1 ;
-(NSString *)accountId;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
@end

