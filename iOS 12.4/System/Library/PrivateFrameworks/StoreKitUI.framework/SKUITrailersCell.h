/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface SKUITrailersCell : UICollectionViewCell {

	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) CGRect imageFrame; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(NSString *)title;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)prepareForReuse;
-(CGRect)imageFrame;
@end
