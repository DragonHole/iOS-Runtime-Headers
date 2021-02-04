/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:02 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMRemoteLoginMessage.h>

@interface HMDRemoteLoginAuthenticationRequest : HMRemoteLoginMessage {

	unsigned long long _targetedAccountType;

}

@property (assign,nonatomic) unsigned long long targetedAccountType;              //@synthesize targetedAccountType=_targetedAccountType - In the implementation block
+(id)messageName;
+(id)objWithDict:(id)arg1 ;
+(id)objWithMessage:(id)arg1 ;
+(id)xpcMessageName;
+(BOOL)supportsSecureCoding;
-(id)messageName;
-(void)setTargetedAccountType:(unsigned long long)arg1 ;
-(id)messagePayload;
-(id)xpcMessageName;
-(unsigned long long)targetedAccountType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
