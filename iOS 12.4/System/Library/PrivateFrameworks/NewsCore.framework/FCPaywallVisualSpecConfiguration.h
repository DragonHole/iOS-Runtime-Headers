/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FCMultiResolutionImage, FCColor;

@interface FCPaywallVisualSpecConfiguration : NSObject <NSCopying> {

	FCMultiResolutionImage* _multiResolutionImage;
	double _gradientPercentHeight;
	long long _textTopPadding;
	FCColor* _backgroundColor;

}

@property (nonatomic,retain) FCMultiResolutionImage * multiResolutionImage;              //@synthesize multiResolutionImage=_multiResolutionImage - In the implementation block
@property (nonatomic,retain) FCColor * backgroundColor;                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) double gradientPercentHeight;                               //@synthesize gradientPercentHeight=_gradientPercentHeight - In the implementation block
@property (assign,nonatomic) long long textTopPadding;                                   //@synthesize textTopPadding=_textTopPadding - In the implementation block
+(id)defaultPaywallVisualSpecConfiguration;
+(id)defaultMagazineFeedPaywallVisualSpecConfigurationSmall;
+(id)defaultMagazineFeedPaywallVisualSpecConfigurationMedium;
+(id)defaultMagazineFeedPaywallVisualSpecConfigurationLarge;
-(id)initWithConfigDictionary:(id)arg1 ;
-(id)initWithMultiResolutionImage:(id)arg1 gradientPercentHeight:(double)arg2 textTopPadding:(long long)arg3 backgroundColor:(id)arg4 ;
-(FCMultiResolutionImage *)multiResolutionImage;
-(double)gradientPercentHeight;
-(long long)textTopPadding;
-(void)setMultiResolutionImage:(FCMultiResolutionImage *)arg1 ;
-(void)setGradientPercentHeight:(double)arg1 ;
-(void)setTextTopPadding:(long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBackgroundColor:(FCColor *)arg1 ;
-(FCColor *)backgroundColor;
@end

