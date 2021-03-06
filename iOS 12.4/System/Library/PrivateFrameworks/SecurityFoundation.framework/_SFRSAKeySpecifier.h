/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SecurityFoundation/_SFAsymmetricKeySpecifier.h>

@interface _SFRSAKeySpecifier : _SFAsymmetricKeySpecifier {

	id _rsaKeySpecifierInternal;

}

@property (assign,nonatomic) long long bitSize; 
+(Class)keyClass;
+(BOOL)supportsSecureCoding;
-(long long)bitSize;
-(void)setBitSize:(long long)arg1 ;
-(id)initWithBitSize:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

