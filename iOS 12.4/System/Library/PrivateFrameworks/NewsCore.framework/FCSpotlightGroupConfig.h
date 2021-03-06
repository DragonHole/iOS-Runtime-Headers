/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCGroupConfig.h>

@protocol FCSpotlightItemStyleProviding;
@class NSString, NSDate, FCColorGradient, FCColor;

@interface FCSpotlightGroupConfig : FCGroupConfig {

	NSString* _spotlightArticleID;
	NSDate* _publishDate;
	id<FCSpotlightItemStyleProviding> _spotlightItemStyle;

}

@property (nonatomic,copy,readonly) NSString * spotlightArticleID;                                     //@synthesize spotlightArticleID=_spotlightArticleID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * publishDate;                                              //@synthesize publishDate=_publishDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * spotlightCallToActionTitle; 
@property (nonatomic,copy,readonly) NSString * spotlightEyebrowTitle; 
@property (nonatomic,copy,readonly) id<FCSpotlightItemStyleProviding> spotlightItemStyle;              //@synthesize spotlightItemStyle=_spotlightItemStyle - In the implementation block
@property (nonatomic,readonly) FCColorGradient * sauceColorGradient; 
@property (nonatomic,readonly) FCColor * cardBackgroundColor; 
-(NSDate *)publishDate;
-(FCColor *)cardBackgroundColor;
-(NSString *)spotlightCallToActionTitle;
-(NSString *)spotlightEyebrowTitle;
-(FCColorGradient *)sauceColorGradient;
-(NSString *)spotlightArticleID;
-(id<FCSpotlightItemStyleProviding>)spotlightItemStyle;
-(id)initWithDictionary:(id)arg1 ;
@end

