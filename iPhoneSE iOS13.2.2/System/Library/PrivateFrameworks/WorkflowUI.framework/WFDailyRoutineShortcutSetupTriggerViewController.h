/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBWelcomeController.h>

@protocol WFDailyRoutineShortcutSetupTriggerViewControllerDelegate;
@class WFDailyRoutineShortcutSetupTriggerBuilder;

@interface WFDailyRoutineShortcutSetupTriggerViewController : OBWelcomeController {

	id<WFDailyRoutineShortcutSetupTriggerViewControllerDelegate> _delegate;
	WFDailyRoutineShortcutSetupTriggerBuilder* _trigger;

}

@property (assign,nonatomic,__weak) id<WFDailyRoutineShortcutSetupTriggerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupTriggerBuilder * trigger;                                     //@synthesize trigger=_trigger - In the implementation block
-(id<WFDailyRoutineShortcutSetupTriggerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFDailyRoutineShortcutSetupTriggerViewControllerDelegate>)arg1 ;
-(WFDailyRoutineShortcutSetupTriggerBuilder *)trigger;
-(id)initWithTrigger:(id)arg1 ;
-(void)didSelectAddTriggerButton;
-(void)didSelectSkipButton;
@end

