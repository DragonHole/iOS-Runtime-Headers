/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountFeatureDescriptor.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber;

@interface PKPeerPaymentAccountFeatureDescriptor : PKAccountFeatureDescriptor <NSSecureCoding> {

	NSDecimalNumber* _feePercentage;
	NSDecimalNumber* _minimumFee;
	NSDecimalNumber* _maximumFee;

}

@property (nonatomic,copy) NSDecimalNumber * feePercentage;              //@synthesize feePercentage=_feePercentage - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * minimumFee;                 //@synthesize minimumFee=_minimumFee - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * maximumFee;                 //@synthesize maximumFee=_maximumFee - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToPeerPaymentAccountFeatureDescriptor:(id)arg1 ;
-(void)setFeePercentage:(NSDecimalNumber *)arg1 ;
-(void)setMinimumFee:(NSDecimalNumber *)arg1 ;
-(void)setMaximumFee:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)feePercentage;
-(NSDecimalNumber *)minimumFee;
-(NSDecimalNumber *)maximumFee;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
@end

