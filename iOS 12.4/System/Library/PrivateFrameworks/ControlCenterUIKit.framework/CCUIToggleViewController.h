/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@class UIImageView, UIImage, UIColor, CCUICAPackageDescription, NSString, CCUIToggleModule;

@interface CCUIToggleViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController> {

	UIImageView* _glyphImageView;
	UIImage* _glyphImage;
	UIImage* _selectedGlyphImage;
	UIColor* _selectedColor;
	CCUICAPackageDescription* _glyphPackageDescription;
	NSString* _glyphState;
	CCUIToggleModule* _module;

}

@property (assign,nonatomic,__weak) CCUIToggleModule * module;                     //@synthesize module=_module - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
-(CCUIToggleModule *)module;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
-(void)reconfigureView;
-(void)setModule:(CCUIToggleModule *)arg1 ;
-(double)preferredExpandedContentHeight;
-(BOOL)shouldFinishTransitionToExpandedContentModule;
-(void)refreshState;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

