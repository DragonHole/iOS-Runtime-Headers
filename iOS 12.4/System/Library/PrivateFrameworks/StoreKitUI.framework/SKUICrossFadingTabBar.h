/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SKUIScrollingTabBarBackgroundView, NSArray;

@interface SKUICrossFadingTabBar : UIView {

	SKUIScrollingTabBarBackgroundView* _backgroundView;
	NSArray* _tabBarButtons;

}

@property (nonatomic,readonly) SKUIScrollingTabBarBackgroundView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,copy) NSArray * tabBarButtons;                                             //@synthesize tabBarButtons=_tabBarButtons - In the implementation block
-(NSArray *)tabBarButtons;
-(void)setTabBarButtons:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(SKUIScrollingTabBarBackgroundView *)backgroundView;
@end

