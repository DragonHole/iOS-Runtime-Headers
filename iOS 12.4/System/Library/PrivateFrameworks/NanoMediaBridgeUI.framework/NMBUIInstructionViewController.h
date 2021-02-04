/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol NMBUIOnboardingDataSource;
@class UIImageView, UILabel, NMBUIConfigurationButton;

@interface NMBUIInstructionViewController : UIViewController {

	id<NMBUIOnboardingDataSource> _dataSource;
	UIImageView* _iconImageView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	NMBUIConfigurationButton* _confirmButton;

}
-(id)initWithDataSource:(id)arg1 ;
-(void)viewDidLoad;
-(void)_dismiss;
@end
