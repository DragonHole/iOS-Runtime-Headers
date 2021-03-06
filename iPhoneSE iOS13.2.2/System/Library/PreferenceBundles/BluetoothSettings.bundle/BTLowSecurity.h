/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:45 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILabel, NSArray;

@interface BTLowSecurity : PSTableCell {

	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;               //@synthesize bodyLabel=_bodyLabel - In the implementation block
+(long long)cellStyle;
-(UILabel *)titleLabel;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(void)updateConstraints;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
-(BOOL)isiPhone;
@end

