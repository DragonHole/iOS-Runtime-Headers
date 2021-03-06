/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKIdentity;

@interface BKMatchResultInfo : NSObject {

	BOOL _unlocked;
	BOOL _credentialAdded;
	BKIdentity* _identity;
	long long _lockoutState;

}

@property (nonatomic,retain) BKIdentity * identity;               //@synthesize identity=_identity - In the implementation block
@property (assign,nonatomic) long long lockoutState;              //@synthesize lockoutState=_lockoutState - In the implementation block
@property (assign,nonatomic) BOOL unlocked;                       //@synthesize unlocked=_unlocked - In the implementation block
@property (assign,nonatomic) BOOL credentialAdded;                //@synthesize credentialAdded=_credentialAdded - In the implementation block
-(BOOL)unlocked;
-(void)setUnlocked:(BOOL)arg1 ;
-(long long)lockoutState;
-(id)initWithServerIdentity:(id)arg1 details:(id)arg2 ;
-(void)setLockoutState:(long long)arg1 ;
-(BOOL)credentialAdded;
-(void)setCredentialAdded:(BOOL)arg1 ;
-(BKIdentity *)identity;
-(void)setIdentity:(BKIdentity *)arg1 ;
@end

