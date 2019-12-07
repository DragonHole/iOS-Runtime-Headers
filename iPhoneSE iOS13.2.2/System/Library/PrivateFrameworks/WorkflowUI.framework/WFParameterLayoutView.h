/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@protocol WFParameterLayoutViewDelegate;
@class UIColor;

@interface WFParameterLayoutView : UIView {

	BOOL _selectable;
	BOOL _highlighted;
	id<WFParameterLayoutViewDelegate> _delegate;
	UIColor* _normalBackgroundColor;
	UIColor* _highlightedBackgroundColor;

}

@property (assign,getter=isSelectable,nonatomic) BOOL selectable;                            //@synthesize selectable=_selectable - In the implementation block
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted;                        //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic,__weak) id<WFParameterLayoutViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * normalBackgroundColor;                                //@synthesize normalBackgroundColor=_normalBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * highlightedBackgroundColor;                           //@synthesize highlightedBackgroundColor=_highlightedBackgroundColor - In the implementation block
-(id<WFParameterLayoutViewDelegate>)delegate;
-(void)setDelegate:(id<WFParameterLayoutViewDelegate>)arg1 ;
-(BOOL)isSelectable;
-(id)accessibilityElements;
-(BOOL)isHighlighted;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)unhighlight;
-(void)highlight;
-(UIColor *)highlightedBackgroundColor;
-(void)setHighlightedBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)normalBackgroundColor;
-(void)setNormalBackgroundColor:(UIColor *)arg1 ;
-(void)setSelectable:(BOOL)arg1 ;
-(void)updateBackgroundColor;
-(void)fadeOutHighlight;
@end
