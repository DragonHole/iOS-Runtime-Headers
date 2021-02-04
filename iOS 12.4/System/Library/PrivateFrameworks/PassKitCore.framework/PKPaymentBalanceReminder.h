/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:38 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber;

@interface PKPaymentBalanceReminder : NSObject <NSSecureCoding> {

	BOOL _enabled;
	NSDecimalNumber* _threshold;

}

@property (nonatomic,retain) NSDecimalNumber * threshold;                //@synthesize threshold=_threshold - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setThreshold:(NSDecimalNumber *)arg1 ;
-(NSDecimalNumber *)threshold;
-(id)initWithThreshold:(id)arg1 isEnabled:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
@end
