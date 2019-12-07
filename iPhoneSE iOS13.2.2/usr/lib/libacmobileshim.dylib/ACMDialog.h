/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class NSString;

@interface ACMDialog : UIViewController {

	long long _savedStatusBarStyle;

}

@property (readonly) long long statusBarStyle; 
@property (assign) long long savedStatusBarStyle;                 //@synthesize savedStatusBarStyle=_savedStatusBarStyle - In the implementation block
@property (readonly) NSString * backgroundImageName; 
+(id)dialog;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(long long)statusBarStyle;
-(long long)modalTransitionStyle;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(NSString *)backgroundImageName;
-(void)applicationWillEnterForeground;
-(void)applicationDidEnterBackground;
-(void)setSavedStatusBarStyle:(long long)arg1 ;
-(long long)savedStatusBarStyle;
-(void)disableControls:(BOOL)arg1 ;
-(void)showWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideWithParentViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)shouldManuallyChangeStatusBarStyle;
@end
