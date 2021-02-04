/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/CLKComplicationTemplate.h>

@class CLKComplicationTemplateGraphicCircular, CLKTextProvider;

@interface CLKComplicationTemplateGraphicBezelCircularText : CLKComplicationTemplate {

	CLKComplicationTemplateGraphicCircular* _circularTemplate;
	CLKTextProvider* _textProvider;

}

@property (nonatomic,copy) CLKComplicationTemplateGraphicCircular * circularTemplate;              //@synthesize circularTemplate=_circularTemplate - In the implementation block
@property (nonatomic,copy) CLKTextProvider * textProvider;                                         //@synthesize textProvider=_textProvider - In the implementation block
-(void)_enumerateTextProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateEmbeddedTemplateKeysWithBlock:(/*^block*/id)arg1 ;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
-(void)setCircularTemplate:(CLKComplicationTemplateGraphicCircular *)arg1 ;
-(CLKTextProvider *)textProvider;
-(CLKComplicationTemplateGraphicCircular *)circularTemplate;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
@end
