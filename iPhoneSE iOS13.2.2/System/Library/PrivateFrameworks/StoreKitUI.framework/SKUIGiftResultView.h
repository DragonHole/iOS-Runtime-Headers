/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UIImageView, SKUIGiftItemView, UILabel, UIImage, NSString;

@interface SKUIGiftResultView : UIView {

	UIButton* _giftAgainButton;
	UIImageView* _imageView;
	SKUIGiftItemView* _itemView;
	UILabel* _titleLabel;

}

@property (nonatomic,readonly) UIButton * giftAgainButton;              //@synthesize giftAgainButton=_giftAgainButton - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) SKUIGiftItemView * itemView;               //@synthesize itemView=_itemView - In the implementation block
@property (nonatomic,copy) NSString * title; 
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setItemView:(SKUIGiftItemView *)arg1 ;
-(UIButton *)giftAgainButton;
-(SKUIGiftItemView *)itemView;
@end

