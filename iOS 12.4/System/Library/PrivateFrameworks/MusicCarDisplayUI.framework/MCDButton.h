/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@class CALayer;

@interface MCDButton : UIButton {

	CALayer* _focusColorLayer;
	BOOL _showBezelInTouch;
	BOOL _hideBezelInKnob;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL showBezelInTouch;                        //@synthesize showBezelInTouch=_showBezelInTouch - In the implementation block
@property (assign,nonatomic) BOOL hideBezelInKnob;                         //@synthesize hideBezelInKnob=_hideBezelInKnob - In the implementation block
+(id)buttonWithType:(long long)arg1 ;
-(void)_updateButtonStyle;
-(id)tintColorForUnhighlightedTextLabel;
-(BOOL)showBezelInTouch;
-(id)colorForKnobFocusLayer;
-(id)colorForKnobFocusLayerSelected;
-(BOOL)shouldUpdateButtonOpacityForKnobUnfocused;
-(void)updateButtonOpacityForKnobUnfocused;
-(id)colorForKnobContentSelected;
-(id)colorForKnobFocused;
-(id)colorForTouchContentSelected;
-(id)colorForTouchFocusLayerSelected;
-(id)colorForTouchFocusLayer;
-(void)setShowBezelInTouch:(BOOL)arg1 ;
-(id)_buttonBackGroundColorTouch;
-(BOOL)hideBezelInKnob;
-(void)setHideBezelInKnob:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setHidden:(BOOL)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)canBecomeFocused;
-(void)setSelected:(BOOL)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
@end
