/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:45 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel, UIVisualEffectView, NSArray, NSString;

@interface HUCameraBadgeView : UIView {

	unsigned long long _style;
	unsigned long long _size;
	UILabel* _label;
	UIVisualEffectView* _blurEffectView;
	UIVisualEffectView* _vibrancyEffectView;
	NSArray* _staticConstraints;
	NSArray* _labelConstraints;

}

@property (nonatomic,readonly) unsigned long long size;                              //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) UILabel * label;                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * blurEffectView;                  //@synthesize blurEffectView=_blurEffectView - In the implementation block
@property (nonatomic,readonly) UIVisualEffectView * vibrancyEffectView;              //@synthesize vibrancyEffectView=_vibrancyEffectView - In the implementation block
@property (nonatomic,retain) NSArray * staticConstraints;                            //@synthesize staticConstraints=_staticConstraints - In the implementation block
@property (nonatomic,retain) NSArray * labelConstraints;                             //@synthesize labelConstraints=_labelConstraints - In the implementation block
@property (assign,nonatomic) unsigned long long style;                               //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * labelText; 
+(BOOL)requiresConstraintBasedLayout;
-(NSString *)labelText;
-(NSArray *)labelConstraints;
-(void)setLabelConstraints:(NSArray *)arg1 ;
-(UIVisualEffectView *)blurEffectView;
-(void)setLabelText:(NSString *)arg1 ;
-(NSArray *)staticConstraints;
-(void)setStaticConstraints:(NSArray *)arg1 ;
-(UIVisualEffectView *)vibrancyEffectView;
-(void)_applyStyle;
-(unsigned long long)size;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)updateConstraints;
-(id)initWithSize:(unsigned long long)arg1 ;
-(UILabel *)label;
@end

