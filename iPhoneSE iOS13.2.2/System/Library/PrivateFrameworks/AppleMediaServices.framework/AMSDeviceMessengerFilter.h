/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount;

@interface AMSDeviceMessengerFilter : NSObject {

	ACAccount* _account;
	long long _deviceType;
	long long _messageType;

}

@property (assign,nonatomic) long long messageType;              //@synthesize messageType=_messageType - In the implementation block
@property (nonatomic,retain) ACAccount * account;                //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) long long deviceType;               //@synthesize deviceType=_deviceType - In the implementation block
-(long long)deviceType;
-(ACAccount *)account;
-(void)setAccount:(ACAccount *)arg1 ;
-(long long)messageType;
-(void)setMessageType:(long long)arg1 ;
-(void)setDeviceType:(long long)arg1 ;
-(BOOL)matchesMessage:(id)arg1 ;
@end
