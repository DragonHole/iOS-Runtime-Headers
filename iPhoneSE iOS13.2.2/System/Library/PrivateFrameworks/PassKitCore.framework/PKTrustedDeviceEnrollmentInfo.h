/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKTrustedDeviceEnrollmentInfo : NSObject <NSSecureCoding> {

	BOOL _supportsAccessExpressMode;
	NSString* _deviceName;
	NSString* _deviceSerialNumber;
	NSString* _deviceUDID;
	NSString* _productType;
	NSString* _secureElementIdentifier;

}

@property (nonatomic,retain) NSString * deviceName;                           //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * deviceSerialNumber;                   //@synthesize deviceSerialNumber=_deviceSerialNumber - In the implementation block
@property (nonatomic,retain) NSString * deviceUDID;                           //@synthesize deviceUDID=_deviceUDID - In the implementation block
@property (nonatomic,retain) NSString * productType;                          //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) NSString * secureElementIdentifier;              //@synthesize secureElementIdentifier=_secureElementIdentifier - In the implementation block
@property (assign,nonatomic) BOOL supportsAccessExpressMode;                  //@synthesize supportsAccessExpressMode=_supportsAccessExpressMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)deviceName;
-(NSString *)productType;
-(void)setProductType:(NSString *)arg1 ;
-(NSString *)secureElementIdentifier;
-(void)setSecureElementIdentifier:(NSString *)arg1 ;
-(NSString *)deviceSerialNumber;
-(void)setDeviceSerialNumber:(NSString *)arg1 ;
-(void)setDeviceUDID:(NSString *)arg1 ;
-(void)setSupportsAccessExpressMode:(BOOL)arg1 ;
-(NSString *)deviceUDID;
-(BOOL)supportsAccessExpressMode;
@end

