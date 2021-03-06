/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIImageView, UILabel;

@interface CKWhatsNewFeatureView : UIView {

	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,readonly) UIImageView * iconView;                  //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(UIImageView *)iconView;
-(UILabel *)descriptionLabel;
-(id)initWithIcon:(id)arg1 tintColor:(id)arg2 title:(id)arg3 description:(id)arg4 ;
-(double)iconViewLeadingConstant;
-(double)iconViewLeadingConstantMic;
-(double)iconViewMaxSize;
-(double)titleLabelLeadingConstant;
-(double)titleLabelLeadingConstantMic;
-(void)updateFonts;
-(id)initWithIcon:(id)arg1 title:(id)arg2 description:(id)arg3 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)viewForFirstBaselineLayout;
@end

