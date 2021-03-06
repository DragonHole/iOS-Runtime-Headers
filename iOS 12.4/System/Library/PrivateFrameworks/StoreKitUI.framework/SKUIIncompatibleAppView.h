/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:31 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSMutableArray, UIImageView, UILabel, NSString, UIImage;

@interface SKUIIncompatibleAppView : UIView {

	NSMutableArray* _buttons;
	UIImageView* _iconView;
	UILabel* _messageLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIImage * iconImage; 
-(void)setIconImage:(UIImage *)arg1 ;
-(void)removeButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(id)addButtonWithTitle:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(UIImage *)iconImage;
@end

