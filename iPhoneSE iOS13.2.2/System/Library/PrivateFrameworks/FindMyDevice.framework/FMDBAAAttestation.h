/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface FMDBAAAttestation : NSObject <NSSecureCoding> {

	NSData* _attestation;
	NSData* _signature;

}

@property (nonatomic,retain) NSData * attestation;              //@synthesize attestation=_attestation - In the implementation block
@property (nonatomic,retain) NSData * signature;                //@synthesize signature=_signature - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(void)setAttestation:(NSData *)arg1 ;
-(NSData *)attestation;
-(id)initWithAttestation:(id)arg1 signature:(id)arg2 ;
@end

