/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI/NewsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol UIScrollViewDelegate;
@class NUArticleExcerptTraits, UIImageView, UILabel, WKWebView, NUArticleExcerptReadMoreButton, UIScrollView, UIView, NFMultiDelegate, NSString;

@interface NUArticleExcerptView : UIView <UIScrollViewDelegate> {

	NUArticleExcerptTraits* _traits;
	UIImageView* _headlineImageView;
	UILabel* _headlineTitleLabel;
	UILabel* _headlineDateLabel;
	WKWebView* _excerptWebView;
	NUArticleExcerptReadMoreButton* _readMoreButton;
	id<UIScrollViewDelegate> _delegate;
	UIScrollView* _imageScrollView;
	UIScrollView* _contentScrollView;
	UIView* _hairlineSeparatorView;
	UIView* _contentView;
	NFMultiDelegate* _multiDelegate;

}

@property (nonatomic,readonly) UIView * hairlineSeparatorView;                               //@synthesize hairlineSeparatorView=_hairlineSeparatorView - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                         //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) NFMultiDelegate * multiDelegate;                              //@synthesize multiDelegate=_multiDelegate - In the implementation block
@property (nonatomic,copy) NUArticleExcerptTraits * traits;                                  //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) UIImageView * headlineImageView;                              //@synthesize headlineImageView=_headlineImageView - In the implementation block
@property (nonatomic,readonly) UILabel * headlineTitleLabel;                                 //@synthesize headlineTitleLabel=_headlineTitleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * headlineDateLabel;                                  //@synthesize headlineDateLabel=_headlineDateLabel - In the implementation block
@property (nonatomic,readonly) WKWebView * excerptWebView;                                   //@synthesize excerptWebView=_excerptWebView - In the implementation block
@property (nonatomic,readonly) NUArticleExcerptReadMoreButton * readMoreButton;              //@synthesize readMoreButton=_readMoreButton - In the implementation block
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * imageScrollView;                               //@synthesize imageScrollView=_imageScrollView - In the implementation block
@property (nonatomic,readonly) UIScrollView * contentScrollView;                             //@synthesize contentScrollView=_contentScrollView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)webViewConfiguration;
-(void)setTraits:(NUArticleExcerptTraits *)arg1 ;
-(UIScrollView *)imageScrollView;
-(WKWebView *)excerptWebView;
-(NFMultiDelegate *)multiDelegate;
-(UIImageView *)headlineImageView;
-(UILabel *)headlineTitleLabel;
-(UILabel *)headlineDateLabel;
-(UIView *)hairlineSeparatorView;
-(NUArticleExcerptReadMoreButton *)readMoreButton;
-(void)dealloc;
-(void)setDelegate:(id<UIScrollViewDelegate>)arg1 ;
-(UIView *)contentView;
-(void)layoutSubviews;
-(id<UIScrollViewDelegate>)delegate;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(UIScrollView *)contentScrollView;
-(id)initWithTraits:(id)arg1 ;
-(NUArticleExcerptTraits *)traits;
@end
