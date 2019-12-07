/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class CUIShapeEffectPreset;

@interface _CUIThemeEffectRendition : CUIThemeRendition {

	const cuieffectdata* effectData;
	CUIShapeEffectPreset* _effectPreset;
	float _minimumShadowSpread;

}
-(void)dealloc;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)effectPreset;
-(void)_setStructuredThemeStore:(id)arg1 ;
@end
