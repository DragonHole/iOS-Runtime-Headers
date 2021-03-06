/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearField/NFTrustObject.h>
#import <libobjc.A.dylib/NFTrustLocalValidation.h>

@protocol NFTrustLocalValidation
@required
-(unsigned char)primitiveLocalValidation;

@end


@interface NFTrustLocalValidation : NFTrustObject <NFTrustLocalValidation> {

	unsigned char _primitiveLocalValidation;

}

@property (assign,nonatomic) unsigned char primitiveLocalValidation;              //@synthesize primitiveLocalValidation=_primitiveLocalValidation - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localValidationWithPassCode;
+(id)localValidationWithTouchID;
+(id)localValidationWithFaceID;
+(id)withPrimitiveLocalValidation:(unsigned char)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)primitiveLocalValidation;
-(void)setPrimitiveLocalValidation:(unsigned char)arg1 ;
@end

