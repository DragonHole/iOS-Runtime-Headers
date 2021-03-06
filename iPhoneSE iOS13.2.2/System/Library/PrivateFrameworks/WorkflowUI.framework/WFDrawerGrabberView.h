/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, _UIGrabber, WFDrawerController;

@interface WFDrawerGrabberView : UIView {

	NSArray* _accessibilityCustomActions;
	_UIGrabber* _grabber;
	WFDrawerController* _drawerController;

}

@property (assign,nonatomic,__weak) WFDrawerController * drawerController;              //@synthesize drawerController=_drawerController - In the implementation block
-(id)init;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityActivate;
-(id)accessibilityCustomActions;
-(WFDrawerController *)drawerController;
-(void)setDrawerController:(WFDrawerController *)arg1 ;
-(BOOL)accessibilityCollapseDrawer;
-(BOOL)accessibilityExpandDrawer;
@end

