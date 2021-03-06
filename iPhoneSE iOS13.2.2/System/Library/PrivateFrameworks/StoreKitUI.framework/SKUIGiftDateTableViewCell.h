/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIView, UIImageView, UILabel, NSString;

@interface SKUIGiftDateTableViewCell : UITableViewCell {

	UIView* _bottomBorderView;
	BOOL _checked;
	UIImageView* _checkmarkView;
	UILabel* _dateLabel;
	UILabel* _labelLabel;
	UILabel* _placeholderLabel;
	UIView* _topBorderView;
	BOOL _leftToRight;

}

@property (assign,nonatomic) BOOL leftToRight;                           //@synthesize leftToRight=_leftToRight - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked;              //@synthesize checked=_checked - In the implementation block
@property (nonatomic,copy) NSString * dateString; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSString * placeholder; 
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(id)_newLabel;
-(NSString *)placeholder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLeftToRight:(BOOL)arg1 ;
-(BOOL)leftToRight;
-(void)setChecked:(BOOL)arg1 ;
-(id)_labelColor;
-(BOOL)isChecked;
-(void)setDateString:(NSString *)arg1 ;
-(NSString *)dateString;
@end

