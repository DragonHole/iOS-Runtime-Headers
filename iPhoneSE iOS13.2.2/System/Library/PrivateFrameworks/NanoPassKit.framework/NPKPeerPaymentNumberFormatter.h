/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumberFormatter, NSString;

@interface NPKPeerPaymentNumberFormatter : NSObject {

	NSNumberFormatter* _decimalNumberFormatter;
	NSNumberFormatter* _nonDecimalNumberFormatter;
	NSString* _currencyCode;

}

@property (nonatomic,copy) NSString * currencyCode;              //@synthesize currencyCode=_currencyCode - In the implementation block
-(id)init;
-(id)currencySymbol;
-(NSString *)currencyCode;
-(id)stringFromNumber:(id)arg1 ;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(id)initWithCurrencyCode:(id)arg1 ;
@end

