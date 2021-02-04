/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INPriceRangeExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSString;

@interface INPriceRange : NSObject <INPriceRangeExport, NSCopying, NSSecureCoding> {

	NSDecimalNumber* _minimumPrice;
	NSDecimalNumber* _maximumPrice;
	NSString* _currencyCode;

}

@property (nonatomic,readonly) NSDecimalNumber * minimumPrice;              //@synthesize minimumPrice=_minimumPrice - In the implementation block
@property (nonatomic,readonly) NSDecimalNumber * maximumPrice;              //@synthesize maximumPrice=_maximumPrice - In the implementation block
@property (nonatomic,readonly) NSString * currencyCode;                     //@synthesize currencyCode=_currencyCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_priceWithPriceRangeValue:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSString *)currencyCode;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSDecimalNumber *)maximumPrice;
-(NSDecimalNumber *)minimumPrice;
-(id)initWithRangeBetweenPrice:(id)arg1 andPrice:(id)arg2 currencyCode:(id)arg3 ;
-(id)initWithMinimumPrice:(id)arg1 currencyCode:(id)arg2 ;
-(id)initWithMaximumPrice:(id)arg1 currencyCode:(id)arg2 ;
-(id)initWithPrice:(id)arg1 currencyCode:(id)arg2 ;
-(id)_formattedStringWithLocale:(id)arg1 componentsFormatString:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
