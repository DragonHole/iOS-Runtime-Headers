/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol HAPRelayActivationClientDelegate;
@interface HAPRelayActivationClient : HMFObject {

	id<HAPRelayActivationClientDelegate> _delegate;

}

@property (__weak) id<HAPRelayActivationClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)requestChallenge;
-(void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3 ;
-(void)setDelegate:(id<HAPRelayActivationClientDelegate>)arg1 ;
-(id<HAPRelayActivationClientDelegate>)delegate;
-(void)open;
-(void)close;
@end

