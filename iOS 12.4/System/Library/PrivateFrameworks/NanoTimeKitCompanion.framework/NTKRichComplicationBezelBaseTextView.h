/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:24 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKRichComplicationBezelView.h>

@protocol NTKColoringView;
@class UIView;

@interface NTKRichComplicationBezelBaseTextView : NTKRichComplicationBezelView {

	UIView*<NTKColoringView> _label;
	double _labelRotationInDegree;
	double _labelScale;

}
-(void)_setEditingTransitionFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 type:(long long)arg4 ;
-(void)_editingDidEnd;
-(void)_transitToHighlightState:(BOOL)arg1 fraction:(double)arg2 ;
-(id)_createLabelViewWithFont:(id)arg1 ;
-(void)_setWhistlerAnalogEditingTransitonFraction:(double)arg1 direction:(long long)arg2 position:(long long)arg3 ;
-(void)_layoutLabel;
-(id)init;
-(void)layoutSubviews;
-(id)label;
-(void)setForegroundColor:(id)arg1 ;
-(id)_labelFont;
@end

