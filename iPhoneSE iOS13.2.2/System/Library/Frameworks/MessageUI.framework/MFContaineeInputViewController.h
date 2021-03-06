/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIInputViewController.h>

@class UIViewController, NSLayoutConstraint;

@interface MFContaineeInputViewController : UIInputViewController {

	BOOL _allowsSelfSizing;
	UIViewController* _contentViewController;
	NSLayoutConstraint* _heightConstraint;

}

@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * heightConstraint;                 //@synthesize heightConstraint=_heightConstraint - In the implementation block
@property (assign,nonatomic) BOOL allowsSelfSizing;                                 //@synthesize allowsSelfSizing=_allowsSelfSizing - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(UIViewController *)contentViewController;
-(void)viewDidLayoutSubviews;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setAllowsSelfSizing:(BOOL)arg1 ;
-(BOOL)allowsSelfSizing;
-(void)_updateContentViewControllerHeight;
@end

