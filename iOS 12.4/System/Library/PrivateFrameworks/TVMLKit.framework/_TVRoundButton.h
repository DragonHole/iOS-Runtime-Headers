/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVButton.h>

@class CALayer;

@interface _TVRoundButton : TVButton {

	CALayer* _imageMask;
	/*^block*/id _updateFloatingViewFocusStateBlock;
	BOOL _shouldPunchThroughImage;

}

@property (assign,nonatomic) BOOL shouldPunchThroughImage;              //@synthesize shouldPunchThroughImage=_shouldPunchThroughImage - In the implementation block
+(id)_buttonContentWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3 ;
-(void)_updateBackgroundColorForState:(unsigned long long)arg1 ;
-(void)_updateFocusStateWithCoordinator:(id)arg1 ;
-(void)_updateFloaingViewFocusState:(BOOL)arg1 coordinator:(id)arg2 ;
-(void)_imageViewDidLoadImage:(id)arg1 ;
-(void)_updateFloatingViewFocusStateIfNeeded;
-(void)_updateImageMask;
-(BOOL)shouldPunchThroughImage;
-(void)setShouldPunchThroughImage:(BOOL)arg1 ;
-(void)dealloc;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(void)setBounds:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setAccessoryView:(id)arg1 ;
-(void)setImageView:(id)arg1 ;
-(void)setTextContentView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 blurEffectStyle:(long long)arg2 blurEnabled:(BOOL)arg3 ;
@end
