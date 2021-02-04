/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:30 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@protocol CAMApertureButtonDelegate;
@class UIImageView, UILabel, NSNumberFormatter, NSString;

@interface CAMApertureButton : UIButton <CAMAccessibilityHUDImageProvider> {

	BOOL _shouldShowApertureValue;
	BOOL __rightToLeftFormatting;
	id<CAMApertureButtonDelegate> _delegate;
	double _apertureValue;
	long long _expansionDirection;
	long long _layoutStyle;
	long long _orientation;
	UIImageView* __circleOutlineView;
	UILabel* __symbolLabel;
	UILabel* __valueLabel;
	UIImageView* __circleBackgroundView;
	NSNumberFormatter* __decimalFormatter;
	NSNumberFormatter* __wholeNumberFormatter;
	double __cachedSpaceWidth;
	double __cachedSymbolLabelWidth;
	double __cachedValueLabelWidth;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (nonatomic,readonly) UIImageView * _circleOutlineView;                                           //@synthesize _circleOutlineView=__circleOutlineView - In the implementation block
@property (nonatomic,readonly) UILabel * _symbolLabel;                                                     //@synthesize _symbolLabel=__symbolLabel - In the implementation block
@property (nonatomic,readonly) UILabel * _valueLabel;                                                      //@synthesize _valueLabel=__valueLabel - In the implementation block
@property (nonatomic,retain) UIImageView * _circleBackgroundView;                                          //@synthesize _circleBackgroundView=__circleBackgroundView - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * _decimalFormatter;                                      //@synthesize _decimalFormatter=__decimalFormatter - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * _wholeNumberFormatter;                                  //@synthesize _wholeNumberFormatter=__wholeNumberFormatter - In the implementation block
@property (getter=_isRightToLeftFormatting,nonatomic,readonly) BOOL _rightToLeftFormatting;                //@synthesize _rightToLeftFormatting=__rightToLeftFormatting - In the implementation block
@property (nonatomic,readonly) double _cachedSpaceWidth;                                                   //@synthesize _cachedSpaceWidth=__cachedSpaceWidth - In the implementation block
@property (nonatomic,readonly) double _cachedSymbolLabelWidth;                                             //@synthesize _cachedSymbolLabelWidth=__cachedSymbolLabelWidth - In the implementation block
@property (assign,setter=_setCachedValueLabelWidth:,nonatomic) double _cachedValueLabelWidth;              //@synthesize _cachedValueLabelWidth=__cachedValueLabelWidth - In the implementation block
@property (assign,nonatomic,__weak) id<CAMApertureButtonDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double apertureValue;                                                         //@synthesize apertureValue=_apertureValue - In the implementation block
@property (assign,nonatomic) BOOL shouldShowApertureValue;                                                 //@synthesize shouldShowApertureValue=_shouldShowApertureValue - In the implementation block
@property (assign,nonatomic) long long expansionDirection;                                                 //@synthesize expansionDirection=_expansionDirection - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic) long long layoutStyle;                                                        //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                                              //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,nonatomic) long long orientation;                                                        //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(void)setExpansionDirection:(long long)arg1 ;
-(id)imageForAccessibilityHUD;
-(double)apertureValue;
-(void)setApertureValue:(double)arg1 ;
-(void)setShouldShowApertureValue:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_circleImageWithColor:(id)arg1 ;
-(void)_updateColorsAnimated:(BOOL)arg1 ;
-(BOOL)shouldShowApertureValue;
-(void)_updateValueLabel;
-(UILabel *)_valueLabel;
-(void)_updateSymbolLabelOrientationAnimated:(BOOL)arg1 ;
-(NSNumberFormatter *)_wholeNumberFormatter;
-(NSNumberFormatter *)_decimalFormatter;
-(double)_cachedValueLabelWidth;
-(void)_setCachedValueLabelWidth:(double)arg1 ;
-(UIImageView *)_circleOutlineView;
-(UILabel *)_symbolLabel;
-(UIImageView *)_circleBackgroundView;
-(BOOL)_wantsBackgroundForLayoutStyle:(long long)arg1 ;
-(void)set_circleBackgroundView:(UIImageView *)arg1 ;
-(double)_cachedSymbolLabelWidth;
-(double)_cachedSpaceWidth;
-(long long)expansionDirection;
-(UIEdgeInsets)_expansionInsets;
-(BOOL)_isRightToLeftFormatting;
-(void)setShouldShowApertureValue:(BOOL)arg1 ;
-(void)setDelegate:(id<CAMApertureButtonDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)isActive;
-(id<CAMApertureButtonDelegate>)delegate;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)_updateBackgroundView;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
@end
