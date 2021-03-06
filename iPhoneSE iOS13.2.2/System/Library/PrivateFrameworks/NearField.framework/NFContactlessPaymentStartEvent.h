/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NFApplet;

@interface NFContactlessPaymentStartEvent : NSObject <NSSecureCoding> {

	NSString* _appletIdentifier;
	NSString* _keyIdentifier;
	unsigned short _selectStatus;
	unsigned short _paymentMode;
	NFApplet* _applet;
	NSString* _spIdentifier;

}

@property (nonatomic,readonly) NFApplet * applet;                        //@synthesize applet=_applet - In the implementation block
@property (nonatomic,readonly) NSString * keyIdentifier; 
@property (nonatomic,readonly) unsigned short selectStatus;              //@synthesize selectStatus=_selectStatus - In the implementation block
@property (nonatomic,readonly) unsigned short paymentMode;               //@synthesize paymentMode=_paymentMode - In the implementation block
@property (nonatomic,readonly) NSString * spIdentifier;                  //@synthesize spIdentifier=_spIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)keyIdentifier;
-(unsigned short)paymentMode;
-(NFApplet *)applet;
-(id)asDictionary;
-(id)appletIdentifier;
-(void)_setApplet:(id)arg1 ;
-(void)setKeyIdentifier:(NSString *)arg1 ;
-(unsigned short)selectStatus;
-(NSString *)spIdentifier;
@end

