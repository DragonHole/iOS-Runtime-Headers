/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SKUITrendingSearchPageViewDelegate;
@class SKUITrendingSearchPage, SKUITrendingSearchView;

@interface SKUITrendingSearchPageView : UIView {

	id<SKUITrendingSearchPageViewDelegate> _delegate;
	SKUITrendingSearchPage* _page;
	SKUITrendingSearchView* _trendingSearchView;

}

@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (assign,nonatomic,__weak) id<SKUITrendingSearchPageViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUITrendingSearchPage * page;                                       //@synthesize page=_page - In the implementation block
-(void)_buttonAction:(id)arg1 ;
-(void)setDelegate:(id<SKUITrendingSearchPageViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SKUITrendingSearchPageViewDelegate>)delegate;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(SKUITrendingSearchPage *)page;
-(void)setPage:(SKUITrendingSearchPage *)arg1 ;
@end

