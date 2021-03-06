/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol HFTemperatureFormatter <NSObject,NSCopying>
@property (assign,nonatomic) BOOL inputIsCelsius; 
@property (nonatomic,copy) NSString * fallbackTemperatureString; 
@property (assign,nonatomic) unsigned long long maximumFractionDigits; 
@property (assign,nonatomic) unsigned long long minimumFractionDigits; 
@optional
-(unsigned long long)minimumFractionDigits;
-(void)setMinimumFractionDigits:(unsigned long long)arg1;

@required
-(void)setMaximumFractionDigits:(unsigned long long)arg1;
-(void)setInputIsCelsius:(BOOL)arg1;
-(BOOL)inputIsCelsius;
-(NSString *)fallbackTemperatureString;
-(void)setFallbackTemperatureString:(id)arg1;
-(unsigned long long)maximumFractionDigits;

@end

