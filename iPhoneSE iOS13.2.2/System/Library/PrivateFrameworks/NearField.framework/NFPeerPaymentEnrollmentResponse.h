/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary;

@interface NFPeerPaymentEnrollmentResponse : NSObject <NSSecureCoding> {

	NSData* _prePeerPaymentCertificate;
	NSDictionary* _certificate;

}

@property (nonatomic,readonly) NSData * prePeerPaymentCertificate;              //@synthesize prePeerPaymentCertificate=_prePeerPaymentCertificate - In the implementation block
@property (nonatomic,readonly) NSDictionary * certificate;                      //@synthesize certificate=_certificate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)certificate;
-(NSData *)prePeerPaymentCertificate;
@end

