/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UITextView, SBMainScreenActiveInterfaceOrientationWindow;

@interface SBLogWindowController : UIViewController {

	UITextView* _logTextView;
	SBMainScreenActiveInterfaceOrientationWindow* _logWindow;

}

@property (nonatomic,retain) SBMainScreenActiveInterfaceOrientationWindow * logWindow;              //@synthesize logWindow=_logWindow - In the implementation block
@property (nonatomic,retain) UITextView * logTextView;                                              //@synthesize logTextView=_logTextView - In the implementation block
+(id)sharedInstance;
+(id)sharedInstanceIfAvailable;
-(void)show;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)hide;
-(UITextView *)logTextView;
-(void)setLogTextView:(UITextView *)arg1 ;
-(SBMainScreenActiveInterfaceOrientationWindow *)logWindow;
-(void)setLogWindow:(SBMainScreenActiveInterfaceOrientationWindow *)arg1 ;
@end

