/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:44 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUQuickControlAuxiliaryView;
@class UIView;

@interface HUQuickControlAuxiliaryHostView : UIView {

	UIView*<HUQuickControlAuxiliaryView> _auxiliaryView;

}

@property (nonatomic,retain) UIView*<HUQuickControlAuxiliaryView> auxiliaryView;              //@synthesize auxiliaryView=_auxiliaryView - In the implementation block
-(void)setAuxiliaryView:(UIView*<HUQuickControlAuxiliaryView>)arg1 ;
-(UIView*<HUQuickControlAuxiliaryView>)auxiliaryView;
-(void)updateConstraints;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
