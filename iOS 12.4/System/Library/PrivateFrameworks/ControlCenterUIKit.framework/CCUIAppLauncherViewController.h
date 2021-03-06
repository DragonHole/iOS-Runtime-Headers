/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/CCUIMenuModuleViewController.h>

@class SBFApplication, SCUIAssetProvider, CCUIAppLauncherModule;

@interface CCUIAppLauncherViewController : CCUIMenuModuleViewController {

	SBFApplication* _application;
	SCUIAssetProvider* _assetProvider;
	CCUIAppLauncherModule* _module;

}

@property (assign,nonatomic,__weak) CCUIAppLauncherModule * module;              //@synthesize module=_module - In the implementation block
-(CCUIAppLauncherModule *)module;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(void)_updateApplicationShortcutsActions;
-(void)_addActionForShortcutItem:(id)arg1 ;
-(void)_activateApplicationForShortcutItem:(id)arg1 ;
-(void)setModule:(CCUIAppLauncherModule *)arg1 ;
-(void)didBeginInteraction;
-(void)viewDidLoad;
@end

