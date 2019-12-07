/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface _LSValidationToken : NSObject <NSSecureCoding> {

	NSData* _payload;
	NSData* _nonce;
	NSData* _HMAC;
	id _owner;

}

@property (assign,nonatomic,__weak) id owner;              //@synthesize owner=_owner - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)HMACWithPayload:(id)arg1 nonce:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setOwner:(id)arg1 ;
-(id)owner;
-(id)initWithPayload:(id)arg1 ;
-(BOOL)isCorrectForPayload:(id)arg1 ;
@end
