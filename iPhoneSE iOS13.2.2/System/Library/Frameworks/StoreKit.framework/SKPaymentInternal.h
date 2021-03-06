/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSDictionary, SKPaymentDiscount;

@interface SKPaymentInternal : NSObject <NSCopying> {

	NSString* _applicationUsername;
	NSString* _partnerIdentifier;
	NSString* _partnerTransactionIdentifier;
	NSString* _productIdentifier;
	long long _quantity;
	NSData* _requestData;
	NSDictionary* _requestParameters;
	BOOL _simulatesAskToBuyInSandbox;
	BOOL _isStoreOriginated;
	SKPaymentDiscount* _paymentDiscount;

}
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

