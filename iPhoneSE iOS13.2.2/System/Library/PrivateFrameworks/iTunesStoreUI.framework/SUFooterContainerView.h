/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:18 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface SUFooterContainerView : UIView {

	UIView* _contentView;
	UIView* _footerView;
	BOOL _footerVisible;

}

@property (nonatomic,retain) UIView * contentView;                                   //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                    //@synthesize footerView=_footerView - In the implementation block
@property (assign,getter=isFooterVisible,nonatomic) BOOL footerVisible;              //@synthesize footerVisible=_footerVisible - In the implementation block
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(void)setFooterVisible:(BOOL)arg1 ;
-(BOOL)isFooterVisible;
@end

