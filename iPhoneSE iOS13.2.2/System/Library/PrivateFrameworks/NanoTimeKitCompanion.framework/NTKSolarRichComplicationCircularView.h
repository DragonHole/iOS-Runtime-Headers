/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKSolarRichComplicationFullColorImageView;

@interface NTKSolarRichComplicationCircularView : NTKRichComplicationCircularBaseView {

	NTKSolarRichComplicationFullColorImageView* _solarImageView;

}
-(id)init;
-(void)layoutSubviews;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)arg1 ;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateWithLocation:(id)arg1 useIdealizedTime:(BOOL)arg2 forceUpdate:(BOOL)arg3 animated:(BOOL)arg4 ;
@end
