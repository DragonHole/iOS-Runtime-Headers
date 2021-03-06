/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKDecimalPrecisionRule.h>

@class NSString;

@interface HKStaticDecimalPrecisionRule : NSObject <HKDecimalPrecisionRule> {

	long long _decimalPrecision;

}

@property (assign,nonatomic) long long decimalPrecision;              //@synthesize decimalPrecision=_decimalPrecision - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)decimalPrecision;
-(void)setDecimalPrecision:(long long)arg1 ;
-(id)numberFormatter;
-(id)initWithDecimalPrecision:(long long)arg1 ;
-(long long)decimalPrecisionForValue:(double)arg1 ;
-(long long)maximumDecimalPrecision;
-(long long)minimumDecimalPrecision;
@end

