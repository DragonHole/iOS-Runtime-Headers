/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UISplitViewController.h>

@protocol PSSplitViewControllerNavigationDelegate;
@class PSRootController;

@interface PSSplitViewController : UISplitViewController {

	id<PSSplitViewControllerNavigationDelegate> _navigationDelegate;
	PSRootController* _containerNavigationController;

}

@property (nonatomic,retain) PSRootController * containerNavigationController;                                   //@synthesize containerNavigationController=_containerNavigationController - In the implementation block
@property (assign,nonatomic,__weak) id<PSSplitViewControllerNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(void)popRecursivelyToRootController;
-(PSRootController *)containerNavigationController;
-(void)setupControllerForToolbar:(id)arg1 ;
-(void)showInitialViewController:(id)arg1 ;
-(void)setContainerNavigationController:(PSRootController *)arg1 ;
-(id<PSSplitViewControllerNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<PSSplitViewControllerNavigationDelegate>)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setViewControllers:(id)arg1 ;
-(id)childViewControllerForStatusBarStyle;
@end

