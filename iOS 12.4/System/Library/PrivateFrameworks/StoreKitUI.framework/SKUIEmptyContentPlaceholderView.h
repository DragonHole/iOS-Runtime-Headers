/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIButton, UIImage, NSString;

@interface SKUIEmptyContentPlaceholderView : UIView {

	UIEdgeInsets _imageInsets;
	UIImageView* _imageView;
	UILabel* _label;
	UIButton* _signInButton;

}

@property (nonatomic,retain) UIImage * placeholderImage; 
@property (assign,nonatomic) UIEdgeInsets placeholderImageInsets;              //@synthesize imageInsets=_imageInsets - In the implementation block
@property (nonatomic,copy) NSString * placeholderMessage; 
@property (nonatomic,readonly) UILabel * placeholderMessageLabel; 
@property (assign,nonatomic) BOOL showsSignInButton; 
@property (nonatomic,readonly) UIButton * signInButton; 
-(NSString *)placeholderMessage;
-(void)setPlaceholderMessage:(NSString *)arg1 ;
-(UILabel *)placeholderMessageLabel;
-(UIButton *)signInButton;
-(void)maskPlaceholdersInBackdropView:(id)arg1 ;
-(void)setPlaceholderImageInsets:(UIEdgeInsets)arg1 ;
-(void)setShowsSignInButton:(BOOL)arg1 ;
-(BOOL)showsSignInButton;
-(UIEdgeInsets)placeholderImageInsets;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)placeholderImage;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
@end

