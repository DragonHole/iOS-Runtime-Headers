/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class UILabel, UIImageView;

@interface PKPaymentSetupTableViewCell : PKTableViewCell {

	UILabel* _betaLabel;
	BOOL _thumbnailImageViewHasBorder;
	BOOL _showBetaBadge;
	UIImageView* _thumbnailImageView;

}

@property (nonatomic,readonly) UIImageView * thumbnailImageView;              //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (assign,nonatomic) BOOL thumbnailImageViewHasBorder;                //@synthesize thumbnailImageViewHasBorder=_thumbnailImageViewHasBorder - In the implementation block
@property (assign,nonatomic) BOOL showBetaBadge;                              //@synthesize showBetaBadge=_showBetaBadge - In the implementation block
+(CGSize)defaultImageViewSize;
-(UIImageView *)thumbnailImageView;
-(void)setShowBetaBadge:(BOOL)arg1 ;
-(void)setThumbnailImageViewHasBorder:(BOOL)arg1 ;
-(void)setThumbnailImageHasBorder:(BOOL)arg1 ;
-(BOOL)thumbnailImageViewHasBorder;
-(BOOL)showBetaBadge;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

