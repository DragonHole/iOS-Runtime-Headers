/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentBackgroundDownloadRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSData;

@interface PKPaymentDeviceCheckinDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding> {

	NSString* _region;
	NSUUID* _identifier;
	NSData* _responseData;

}

@property (nonatomic,retain) NSString * region;                  //@synthesize region=_region - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSData * responseData;              //@synthesize responseData=_responseData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSString *)region;
-(NSData *)responseData;
-(void)setResponseData:(NSData *)arg1 ;
-(void)setRegion:(NSString *)arg1 ;
@end
