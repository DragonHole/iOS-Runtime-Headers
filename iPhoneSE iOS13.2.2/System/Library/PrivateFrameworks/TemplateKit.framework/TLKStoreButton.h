/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TemplateKit/TemplateKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class TLKLabel, UIView, TLKProminenceView, NSString;

@interface TLKStoreButton : UIButton {

	BOOL _isEmphasized;
	TLKLabel* _label;
	UIView* _backgroundView;
	TLKProminenceView* _highlightView;

}

@property (retain) TLKLabel * label;                               //@synthesize label=_label - In the implementation block
@property (retain) UIView * backgroundView;                        //@synthesize backgroundView=_backgroundView - In the implementation block
@property (retain) TLKProminenceView * highlightView;              //@synthesize highlightView=_highlightView - In the implementation block
@property (assign) BOOL isEmphasized;                              //@synthesize isEmphasized=_isEmphasized - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)label;
-(CGSize)intrinsicContentSize;
-(UIView *)backgroundView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(TLKProminenceView *)highlightView;
-(void)didMoveToWindow;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setHighlightView:(TLKProminenceView *)arg1 ;
-(BOOL)isEmphasized;
-(void)setIsEmphasized:(BOOL)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
@end
