/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@class UIColor, UIView, UIImageView, UIVisualEffectView, NSString;

@interface PKNavigationController : UINavigationController <UINavigationControllerDelegate> {

	UIColor* _barBackgroundColor;
	long long _shadowStyle;
	BOOL _hasExplicitlyDefinedSupportedInterfaceOrientations;
	unsigned long long _explicitlyDefinedSupportedInterfaceOrientations;
	double _navigationBarOpacity;
	UIView* _backgroundView;
	UIImageView* _wallpaperView;
	UIVisualEffectView* _blurView;
	UIColor* _defaultBarItemTintColor;

}

@property (nonatomic,retain) UIColor * defaultBarItemTintColor;              //@synthesize defaultBarItemTintColor=_defaultBarItemTintColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBarBackgroundColor:(id)arg1 barShadowStyle:(long long)arg2 ;
-(void)setNeedsNavigationBarUpdate;
-(void)_applyShadowStyleForViewController:(id)arg1 ;
-(void)_updateWithWallpaperImage:(id)arg1 ;
-(void)_updateBarAppearanceForViewController:(id)arg1 ;
-(void)setupBackgroundViewWithBlurEffect:(long long)arg1 ;
-(void)setupWallpaper;
-(UIColor *)defaultBarItemTintColor;
-(void)setDefaultBarItemTintColor:(UIColor *)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)setSupportedInterfaceOrientations:(unsigned long long)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
@end

