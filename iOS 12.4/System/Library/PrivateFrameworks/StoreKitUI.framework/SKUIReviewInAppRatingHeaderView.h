/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIImageView, UILabel, SKUIStarRatingControl;

@interface SKUIReviewInAppRatingHeaderView : UIView {

	BOOL _completed;
	NSString* _title;
	NSString* _message;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	SKUIStarRatingControl* _ratingView;
	CGSize _contentSize;

}

@property (nonatomic,copy) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * message;                                //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                          //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) SKUIStarRatingControl * ratingView;              //@synthesize ratingView=_ratingView - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                              //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) BOOL completed;                                  //@synthesize completed=_completed - In the implementation block
-(BOOL)completed;
-(UILabel *)messageLabel;
-(id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3 ;
-(id)_messageLabelFont;
-(SKUIStarRatingControl *)ratingView;
-(void)setCompletedWithRating:(long long)arg1 ;
-(void)setRatingView:(SKUIStarRatingControl *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(id)_titleLabelFont;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)titleLabel;
-(UIImageView *)imageView;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(CGSize)contentSize;
-(CGSize)intrinsicContentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
@end
