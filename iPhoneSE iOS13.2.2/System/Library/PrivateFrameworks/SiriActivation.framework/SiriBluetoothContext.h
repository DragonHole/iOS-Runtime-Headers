/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriActivation/SiriContext.h>

@class NSNumber, NSString;

@interface SiriBluetoothContext : SiriContext {

	NSNumber* _isTemporaryDevice;
	NSNumber* _isEyesFree;
	NSString* _address;

}

@property (nonatomic,readonly) NSString * address;              //@synthesize address=_address - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)address;
-(BOOL)isEyesFree;
-(BOOL)isTemporaryDevice;
-(id)initWithBluetoothDevice:(id)arg1 ;
@end

