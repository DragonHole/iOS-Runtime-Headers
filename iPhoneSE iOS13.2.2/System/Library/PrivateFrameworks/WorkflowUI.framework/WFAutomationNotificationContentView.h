/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIStackView, WFRowOfIconsView, UILabel;

@interface WFAutomationNotificationContentView : UIView {

	UIStackView* _stackView;
	WFRowOfIconsView* _actionIconsView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,readonly) UIStackView * stackView;                         //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,readonly) WFRowOfIconsView * actionIconsView;              //@synthesize actionIconsView=_actionIconsView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * descriptionLabel;                      //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)titleLabel;
-(UIStackView *)stackView;
-(UILabel *)descriptionLabel;
-(void)updateUIFromNotification:(id)arg1 ;
-(WFRowOfIconsView *)actionIconsView;
@end

