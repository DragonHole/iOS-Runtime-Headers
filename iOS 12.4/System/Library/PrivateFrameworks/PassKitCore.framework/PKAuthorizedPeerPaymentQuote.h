/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKPeerPaymentQuote, PKContact, NSData, NSDictionary;

@interface PKAuthorizedPeerPaymentQuote : NSObject <NSSecureCoding> {

	PKPeerPaymentQuote* _peerPaymentQuote;
	PKContact* _contact;
	NSData* _transactionData;
	NSDictionary* _certificates;

}

@property (nonatomic,readonly) PKPeerPaymentQuote * peerPaymentQuote;              //@synthesize peerPaymentQuote=_peerPaymentQuote - In the implementation block
@property (nonatomic,retain) PKContact * contact;                                  //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) NSData * transactionData;                           //@synthesize transactionData=_transactionData - In the implementation block
@property (nonatomic,readonly) NSDictionary * certificates;                        //@synthesize certificates=_certificates - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithQuote:(id)arg1 transactionData:(id)arg2 certificates:(id)arg3 ;
-(PKPeerPaymentQuote *)peerPaymentQuote;
-(NSData *)transactionData;
-(void)setContact:(PKContact *)arg1 ;
-(PKContact *)contact;
-(NSDictionary *)certificates;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

