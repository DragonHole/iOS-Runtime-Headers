/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface FZf7GLuluME5TMqw : NSObject {

	NSData* _hostChallenge;
	NSData* _challengeResponse;
	NSString* _seid;
	NSData* _nonce;

}

@property (nonatomic,copy) NSData * hostChallenge;                  //@synthesize hostChallenge=_hostChallenge - In the implementation block
@property (nonatomic,copy) NSData * challengeResponse;              //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (nonatomic,copy) NSString * seid;                         //@synthesize seid=_seid - In the implementation block
@property (nonatomic,copy) NSData * nonce;                          //@synthesize nonce=_nonce - In the implementation block
-(NSData *)nonce;
-(void)setNonce:(NSData *)arg1 ;
-(void)setSeid:(NSString *)arg1 ;
-(void)setHostChallenge:(NSData *)arg1 ;
-(void)setChallengeResponse:(NSData *)arg1 ;
-(NSData *)challengeResponse;
-(NSData *)hostChallenge;
-(NSString *)seid;
@end

