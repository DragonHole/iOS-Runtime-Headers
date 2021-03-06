/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class NSString, UILabel, NSLayoutConstraint;

@interface WDMedicalRecordSpacerTextCell : UITableViewCell {

	BOOL _useTallTopPadding;
	NSString* _title;
	UILabel* _titleLabel;
	NSLayoutConstraint* _topConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topConstraint;              //@synthesize topConstraint=_topConstraint - In the implementation block
@property (nonatomic,retain) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) BOOL useTallTopPadding;                          //@synthesize useTallTopPadding=_useTallTopPadding - In the implementation block
+(id)defaultReuseIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UILabel *)titleLabel;
-(NSLayoutConstraint *)topConstraint;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_setupSubviews;
-(void)setTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setUseTallTopPadding:(BOOL)arg1 ;
-(BOOL)useTallTopPadding;
@end

