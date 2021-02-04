/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIStackView.h>

@class UIButton, UILabel, NSLayoutConstraint, NSMutableArray, NSString;

@interface HKElectrocardiogramInfoView : UIStackView {

	UIButton* _detailButton;
	UILabel* _titleLabel;
	UILabel* _heartRateLabel;
	UILabel* _bodyLabel;
	NSLayoutConstraint* _titleFirstBaselineConstraint;
	NSLayoutConstraint* _titleLastBaselineConstraint;
	NSLayoutConstraint* _heartRateLabelLeadingConstraint;
	NSMutableArray* _bodyFirstBaselineConstraints;
	NSMutableArray* _bodyLastBaselineConstraints;
	NSMutableArray* _regularTextConstraints;
	NSMutableArray* _accessibilityTextConstraints;

}

@property (nonatomic,retain) UILabel * titleLabel;                                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * detailButton;                                           //@synthesize detailButton=_detailButton - In the implementation block
@property (nonatomic,retain) UILabel * heartRateLabel;                                          //@synthesize heartRateLabel=_heartRateLabel - In the implementation block
@property (nonatomic,retain) UILabel * bodyLabel;                                               //@synthesize bodyLabel=_bodyLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleFirstBaselineConstraint;                 //@synthesize titleFirstBaselineConstraint=_titleFirstBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLastBaselineConstraint;                  //@synthesize titleLastBaselineConstraint=_titleLastBaselineConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heartRateLabelLeadingConstraint;              //@synthesize heartRateLabelLeadingConstraint=_heartRateLabelLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSMutableArray * bodyFirstBaselineConstraints;                     //@synthesize bodyFirstBaselineConstraints=_bodyFirstBaselineConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * bodyLastBaselineConstraints;                      //@synthesize bodyLastBaselineConstraints=_bodyLastBaselineConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * regularTextConstraints;                           //@synthesize regularTextConstraints=_regularTextConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * accessibilityTextConstraints;                     //@synthesize accessibilityTextConstraints=_accessibilityTextConstraints - In the implementation block
@property (nonatomic,retain) NSString * titleText; 
@property (nonatomic,retain) NSString * heartRateText; 
@property (nonatomic,retain) NSString * bodyText; 
-(NSString *)titleText;
-(void)_addSubviews;
-(NSMutableArray *)bodyFirstBaselineConstraints;
-(void)setBodyFirstBaselineConstraints:(NSMutableArray *)arg1 ;
-(UILabel *)heartRateLabel;
-(NSMutableArray *)regularTextConstraints;
-(NSMutableArray *)accessibilityTextConstraints;
-(NSLayoutConstraint *)titleFirstBaselineConstraint;
-(NSLayoutConstraint *)titleLastBaselineConstraint;
-(NSLayoutConstraint *)heartRateLabelLeadingConstraint;
-(NSMutableArray *)bodyLastBaselineConstraints;
-(id)_titleInfoView;
-(id)_heartRateView;
-(id)_bodyView;
-(UIButton *)detailButton;
-(void)setTitleFirstBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleLastBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setHeartRateLabelLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(NSString *)heartRateText;
-(void)setHeartRateText:(NSString *)arg1 ;
-(void)setDetailButton:(UIButton *)arg1 ;
-(void)setHeartRateLabel:(UILabel *)arg1 ;
-(void)setBodyLastBaselineConstraints:(NSMutableArray *)arg1 ;
-(void)setRegularTextConstraints:(NSMutableArray *)arg1 ;
-(void)setAccessibilityTextConstraints:(NSMutableArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(void)setBodyText:(NSString *)arg1 ;
-(NSString *)bodyText;
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
-(UILabel *)bodyLabel;
-(void)setBodyLabel:(UILabel *)arg1 ;
@end
