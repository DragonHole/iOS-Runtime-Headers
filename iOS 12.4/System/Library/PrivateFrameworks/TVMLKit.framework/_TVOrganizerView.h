/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVFocusRedirectView.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class UIView, UIColor, NSArray, NSDictionary, NSString;

@interface _TVOrganizerView : _TVFocusRedirectView <TVAppTemplateImpressionable> {

	UIView* _lastFocusedView;
	UIView* _rightColumnDivider;
	UIView* _leftColumnDivider;
	double _showcaseFactor;
	BOOL _columnDividersEnabled;
	BOOL _remembersLastFocusedItem;
	UIView* _backgroundImageView;
	double _columnDividerPadding;
	UIColor* _columnDividerColor;
	NSArray* _components;
	NSDictionary* _divsByPosition;
	NSDictionary* _divSizesByPosition;

}

@property (nonatomic,copy) NSDictionary * divsByPosition;                            //@synthesize divsByPosition=_divsByPosition - In the implementation block
@property (nonatomic,copy) NSDictionary * divSizesByPosition;                        //@synthesize divSizesByPosition=_divSizesByPosition - In the implementation block
@property (nonatomic,retain) UIView * backgroundImageView;                           //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) double columnDividerPadding;                            //@synthesize columnDividerPadding=_columnDividerPadding - In the implementation block
@property (assign,nonatomic) BOOL columnDividersEnabled;                             //@synthesize columnDividersEnabled=_columnDividersEnabled - In the implementation block
@property (nonatomic,retain) UIColor * columnDividerColor;                           //@synthesize columnDividerColor=_columnDividerColor - In the implementation block
@property (assign,nonatomic) BOOL remembersLastFocusedItem;                          //@synthesize remembersLastFocusedItem=_remembersLastFocusedItem - In the implementation block
@property (nonatomic,copy) NSArray * components;                                     //@synthesize components=_components - In the implementation block
@property (assign,nonatomic,__weak) UIView * preferredFocusedComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setComponents:(NSArray *)arg1 ;
-(UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1 ;
-(void)setComponentsNeedUpdate;
-(void)setPreferredFocusedComponent:(UIView *)arg1 ;
-(NSDictionary *)divsByPosition;
-(void)setDivSizesByPosition:(NSDictionary *)arg1 ;
-(long long)_positionFromView:(id)arg1 ;
-(void)setDivsByPosition:(NSDictionary *)arg1 ;
-(NSDictionary *)divSizesByPosition;
-(CGSize)_contentSizeThatFits:(CGSize)arg1 ;
-(UIView *)preferredFocusedComponent;
-(void)setRemembersLastFocusedItem:(BOOL)arg1 ;
-(void)setColumnDividerPadding:(double)arg1 ;
-(void)setColumnDividersEnabled:(BOOL)arg1 ;
-(double)columnDividerPadding;
-(BOOL)columnDividersEnabled;
-(UIColor *)columnDividerColor;
-(void)setColumnDividerColor:(UIColor *)arg1 ;
-(BOOL)remembersLastFocusedItem;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(BOOL)canBecomeFocused;
-(double)cornerRadius;
-(UIView *)backgroundImageView;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSArray *)components;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(void)setBackgroundImageView:(UIView *)arg1 ;
@end
