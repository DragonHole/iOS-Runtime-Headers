/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/ScreenTimeUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, UIColor, NSDate, NSNumber, UIImage;

@interface STUsageItem : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	NSString* _budgetItemIdentifier;
	NSString* _categoryIdentifier;
	unsigned long long _itemType;
	UIColor* _color;
	unsigned long long _timePeriod;
	NSDate* _startDate;
	NSNumber* _totalUsage;
	NSNumber* _maxUsage;
	NSNumber* _minUsage;

}

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * budgetItemIdentifier;              //@synthesize budgetItemIdentifier=_budgetItemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * categoryIdentifier;                //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long itemType;                //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,retain) UIColor * color;                            //@synthesize color=_color - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) UIImage * image; 
@property (assign,nonatomic) unsigned long long timePeriod;              //@synthesize timePeriod=_timePeriod - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSNumber * totalUsage;                        //@synthesize totalUsage=_totalUsage - In the implementation block
@property (nonatomic,copy) NSNumber * maxUsage;                          //@synthesize maxUsage=_maxUsage - In the implementation block
@property (nonatomic,copy) NSNumber * minUsage;                          //@synthesize minUsage=_minUsage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setItemType:(unsigned long long)arg1 ;
-(NSDate *)startDate;
-(unsigned long long)itemType;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setTotalUsage:(NSNumber *)arg1 ;
-(NSNumber *)totalUsage;
-(unsigned long long)timePeriod;
-(void)setTimePeriod:(unsigned long long)arg1 ;
-(NSString *)budgetItemIdentifier;
-(void)setBudgetItemIdentifier:(NSString *)arg1 ;
-(NSNumber *)maxUsage;
-(void)setMaxUsage:(NSNumber *)arg1 ;
-(NSNumber *)minUsage;
-(void)setMinUsage:(NSNumber *)arg1 ;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(UIImage *)image;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)displayName;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
-(NSString *)categoryIdentifier;
@end
