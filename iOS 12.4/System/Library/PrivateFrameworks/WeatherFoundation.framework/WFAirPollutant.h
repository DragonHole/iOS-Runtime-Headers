/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSString;

@interface WFAirPollutant : NSObject <NSSecureCoding> {

	BOOL _isPrimary;
	NSLocale* _locale;
	NSString* _localizedName;
	NSString* _localizedDescription;
	double _concentration;

}

@property (copy) NSLocale * locale;                            //@synthesize locale=_locale - In the implementation block
@property (copy) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (assign) double concentration;                       //@synthesize concentration=_concentration - In the implementation block
@property (assign) BOOL isPrimary;                             //@synthesize isPrimary=_isPrimary - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(void)setIsPrimary:(BOOL)arg1 ;
-(void)setConcentration:(double)arg1 ;
-(double)concentration;
-(BOOL)isPrimary;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedDescription;
-(NSString *)localizedName;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
@end
