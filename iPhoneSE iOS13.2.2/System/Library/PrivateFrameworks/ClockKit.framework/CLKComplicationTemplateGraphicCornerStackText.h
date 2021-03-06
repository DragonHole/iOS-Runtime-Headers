/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerStackText : CLKComplicationTemplate {

	CLKTextProvider* _innerTextProvider;
	CLKTextProvider* _outerTextProvider;

}

@property (nonatomic,copy) CLKTextProvider * innerTextProvider;              //@synthesize innerTextProvider=_innerTextProvider - In the implementation block
@property (nonatomic,copy) CLKTextProvider * outerTextProvider;              //@synthesize outerTextProvider=_outerTextProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(CLKTextProvider *)outerTextProvider;
-(void)setOuterTextProvider:(CLKTextProvider *)arg1 ;
-(CLKTextProvider *)innerTextProvider;
-(void)setInnerTextProvider:(CLKTextProvider *)arg1 ;
@end

