/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKProtobufPayment, NSString;

@interface PKProtobufRemotePaymentResponse : PBCodable <NSCopying> {

	PKProtobufPayment* _payment;
	NSString* _remotePaymentRequestIdentifier;

}

@property (nonatomic,readonly) BOOL hasPayment; 
@property (nonatomic,retain) PKProtobufPayment * payment;                            //@synthesize payment=_payment - In the implementation block
@property (nonatomic,readonly) BOOL hasRemotePaymentRequestIdentifier; 
@property (nonatomic,retain) NSString * remotePaymentRequestIdentifier;              //@synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRemotePaymentRequestIdentifier:(NSString *)arg1 ;
-(BOOL)hasRemotePaymentRequestIdentifier;
-(NSString *)remotePaymentRequestIdentifier;
-(BOOL)hasPayment;
-(PKProtobufPayment *)payment;
-(void)setPayment:(PKProtobufPayment *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
@end

