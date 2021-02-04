/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:26 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SKUIEditorialLinkViewDelegate;
@class NSMutableArray, UIColor, SKUIEditorialLinkLayout;

@interface SKUIEditorialLinkView : UIView {

	NSMutableArray* _buttons;
	id<SKUIEditorialLinkViewDelegate> _delegate;
	UIColor* _highlightedTextColor;
	long long _horizontalAlignment;
	SKUIEditorialLinkLayout* _layout;
	UIColor* _textColor;

}

@property (assign,nonatomic,__weak) id<SKUIEditorialLinkViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long horizontalAlignment;                                  //@synthesize horizontalAlignment=_horizontalAlignment - In the implementation block
@property (nonatomic,retain) SKUIEditorialLinkLayout * linkLayout;                           //@synthesize layout=_layout - In the implementation block
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)_linkButtonAction:(id)arg1 ;
-(void)setLinkLayout:(SKUIEditorialLinkLayout *)arg1 ;
-(SKUIEditorialLinkLayout *)linkLayout;
-(void)dealloc;
-(void)setDelegate:(id<SKUIEditorialLinkViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SKUIEditorialLinkViewDelegate>)delegate;
-(void)tintColorDidChange;
-(id)_newButton;
-(long long)horizontalAlignment;
-(void)setHorizontalAlignment:(long long)arg1 ;
@end
