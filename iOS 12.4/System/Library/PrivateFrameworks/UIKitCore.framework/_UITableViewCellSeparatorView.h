/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView, UIVisualEffect, UIVisualEffectView;

@interface _UITableViewCellSeparatorView : UIView {

	BOOL _drawsWithVibrantLightMode;
	UIView* _backgroundView;
	UIView* _overlayView;
	UIVisualEffect* _separatorEffect;
	UIVisualEffectView* _effectView;

}

@property (assign,nonatomic) BOOL drawsWithVibrantLightMode;                //@synthesize drawsWithVibrantLightMode=_drawsWithVibrantLightMode - In the implementation block
@property (nonatomic,retain) UIVisualEffect * separatorEffect;              //@synthesize separatorEffect=_separatorEffect - In the implementation block
-(void)layoutSubviews;
-(UIVisualEffect *)separatorEffect;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(void)setDrawsWithVibrantLightMode:(BOOL)arg1 ;
-(BOOL)drawsWithVibrantLightMode;
@end

