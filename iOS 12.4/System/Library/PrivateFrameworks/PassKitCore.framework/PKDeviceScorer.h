/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CdQwUTvJnDEPQgR8, NSMutableDictionary, PKDSPContext;

@interface PKDeviceScorer : NSObject {

	CdQwUTvJnDEPQgR8* _scorer;
	NSMutableDictionary* _scoreCompletions;
	double _deviceScoreTimeout;
	PKDSPContext* _context;

}

@property (assign,nonatomic) double deviceScoreTimeout;                  //@synthesize deviceScoreTimeout=_deviceScoreTimeout - In the implementation block
@property (nonatomic,copy,readonly) PKDSPContext * context;              //@synthesize context=_context - In the implementation block
+(BOOL)deviceScoringSupported;
-(id)_createScorer;
-(void)_getScoreWithNonce:(id)arg1 cryptogram:(id)arg2 challengeResponse:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 nonce:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)peerPaymentDeviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(double)deviceScoreTimeout;
-(void)setDeviceScoreTimeout:(double)arg1 ;
-(id)init;
-(PKDSPContext *)context;
-(id)initWithContext:(id)arg1 ;
@end

