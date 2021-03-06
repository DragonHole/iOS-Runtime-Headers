/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DonationAgentProtocol;
@class CNPromise;

@interface _CNDonationAgentXPCMethodScope : NSObject {

	id<DonationAgentProtocol> _proxy;
	CNPromise* _promise;

}

@property (nonatomic,readonly) id<DonationAgentProtocol> proxy;              //@synthesize proxy=_proxy - In the implementation block
@property (nonatomic,readonly) CNPromise * promise;                          //@synthesize promise=_promise - In the implementation block
-(id)initWithConnection:(id)arg1 promise:(id)arg2 proxy:(id)arg3 ;
-(id)initWithPromise:(id)arg1 proxy:(id)arg2 ;
-(CNPromise *)promise;
-(id)init;
-(id<DonationAgentProtocol>)proxy;
@end

