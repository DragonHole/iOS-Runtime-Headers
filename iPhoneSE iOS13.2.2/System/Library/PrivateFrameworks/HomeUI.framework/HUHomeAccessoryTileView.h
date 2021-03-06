/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, HUGridServiceCell;

@interface HUHomeAccessoryTileView : UIView {

	UIImageView* _homeView;
	HUGridServiceCell* _tileView;

}

@property (nonatomic,readonly) UIImageView * homeView;                       //@synthesize homeView=_homeView - In the implementation block
@property (nonatomic,readonly) HUGridServiceCell * tileView;                 //@synthesize tileView=_tileView - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> item; 
@property (nonatomic,readonly) double aspectRatio; 
-(HFItem*<HFServiceLikeItem>)item;
-(double)aspectRatio;
-(void)layoutSubviews;
-(id)initWithItem:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 item:(id)arg2 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(HUGridServiceCell *)tileView;
-(UIImageView *)homeView;
@end

