/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSLayoutConstraint, UILabel, UIImageView, UIView, UIColor;

@interface ICDocCamFilterButton : UIButton {

	short _filterType;
	NSLayoutConstraint* _labelVerticalSpacingConstraint;
	UILabel* _filterNameLabel;
	UIImageView* _filterIconView;
	UIView* _backgroundView;
	NSLayoutConstraint* _iconSizeConstraint;

}

@property (assign,nonatomic,__weak) UIView * backgroundView;                                          //@synthesize backgroundView=_backgroundView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * iconSizeConstraint;                          //@synthesize iconSizeConstraint=_iconSizeConstraint - In the implementation block
@property (nonatomic,readonly) UIColor * inactiveBackgroundViewColor; 
@property (nonatomic,readonly) UIColor * inactiveTextColor; 
@property (nonatomic,readonly) UIColor * activeBackgroundViewColor; 
@property (assign,nonatomic) short filterType;                                                        //@synthesize filterType=_filterType - In the implementation block
@property (assign,nonatomic) double iconSize; 
@property (assign,nonatomic,__weak) NSLayoutConstraint * labelVerticalSpacingConstraint;              //@synthesize labelVerticalSpacingConstraint=_labelVerticalSpacingConstraint - In the implementation block
@property (assign,nonatomic,__weak) UILabel * filterNameLabel;                                        //@synthesize filterNameLabel=_filterNameLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * filterIconView;                                     //@synthesize filterIconView=_filterIconView - In the implementation block
+(id)filterButtonWithType:(short)arg1 ;
-(UIColor *)inactiveTextColor;
-(UILabel *)filterNameLabel;
-(NSLayoutConstraint *)labelVerticalSpacingConstraint;
-(UIImageView *)filterIconView;
-(UIColor *)inactiveBackgroundViewColor;
-(void)updateForAccessibilityDarkerSystemColors:(id)arg1 ;
-(id)imageForFilterType:(short)arg1 ;
-(NSLayoutConstraint *)iconSizeConstraint;
-(UIColor *)activeBackgroundViewColor;
-(void)setLabelVerticalSpacingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setFilterNameLabel:(UILabel *)arg1 ;
-(void)setFilterIconView:(UIImageView *)arg1 ;
-(void)setIconSizeConstraint:(NSLayoutConstraint *)arg1 ;
-(void)dealloc;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIView *)backgroundView;
-(void)setSelected:(BOOL)arg1 ;
-(void)setFilterType:(short)arg1 ;
-(short)filterType;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)awakeFromNib;
-(double)iconSize;
-(void)setIconSize:(double)arg1 ;
@end

