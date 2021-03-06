/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNPostalAddress;

@interface PKPhysicalCardAction : NSObject <NSSecureCoding> {

	unsigned long long _actionType;
	NSString* _activationCode;
	unsigned long long _reason;
	NSString* _artworkIdentifier;
	CNPostalAddress* _shippingAddress;

}

@property (nonatomic,readonly) unsigned long long actionType;              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy) NSString * activationCode;                      //@synthesize activationCode=_activationCode - In the implementation block
@property (assign,nonatomic) unsigned long long reason;                    //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy) NSString * artworkIdentifier;                   //@synthesize artworkIdentifier=_artworkIdentifier - In the implementation block
@property (nonatomic,copy) CNPostalAddress * shippingAddress;              //@synthesize shippingAddress=_shippingAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)artworkIdentifier;
-(BOOL)isEqualToPhysicalCardAction:(id)arg1 ;
-(id)_shippingAddressJSONRepresentation;
-(id)jsonRepresentation;
-(NSString *)activationCode;
-(id)initWithActionType:(unsigned long long)arg1 ;
-(unsigned long long)actionType;
-(void)setReason:(unsigned long long)arg1 ;
-(CNPostalAddress *)shippingAddress;
-(void)setArtworkIdentifier:(NSString *)arg1 ;
-(void)setShippingAddress:(CNPostalAddress *)arg1 ;
-(void)setActivationCode:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)reason;
@end

