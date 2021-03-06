/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@class UIView, UIActivityIndicatorView, UILabel, NSString;

@interface WDSpinnerTableViewCell : UITableViewCell {

	UIView* _contentContainerView;
	UIActivityIndicatorView* _spinner;
	UILabel* _waitingReasonLabel;

}

@property (retain) UIView * contentContainerView;                   //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (retain) UIActivityIndicatorView * spinner;               //@synthesize spinner=_spinner - In the implementation block
@property (retain) UILabel * waitingReasonLabel;                    //@synthesize waitingReasonLabel=_waitingReasonLabel - In the implementation block
@property (nonatomic,retain) NSString * waitingReason; 
+(id)defaultReuseIdentifier;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setupConstraints;
-(void)setupSubviews;
-(UIView *)contentContainerView;
-(void)setContentContainerView:(UIView *)arg1 ;
-(UILabel *)waitingReasonLabel;
-(void)setWaitingReasonLabel:(UILabel *)arg1 ;
-(void)setWaitingReason:(NSString *)arg1 ;
-(NSString *)waitingReason;
@end

