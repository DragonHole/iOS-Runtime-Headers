/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:34 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/ControlCenter/Bundles/AccessibilityTextSizeModule.bundle/AccessibilityTextSizeModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@protocol AXCCIconViewControllerDelegate;
@class UIImage, UIImageView, UITapGestureRecognizer;

@interface AXCCIconViewController : UIViewController {

	UIImage* _image;
	UIImageView* _glyphImageView;
	UITapGestureRecognizer* _tapRecognizer;
	id<AXCCIconViewControllerDelegate> _iconDelegate;

}

@property (assign,nonatomic,__weak) id<AXCCIconViewControllerDelegate> iconDelegate;              //@synthesize iconDelegate=_iconDelegate - In the implementation block
-(id)initWithImage:(id)arg1 ;
-(void)loadView;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(void)setIconDelegate:(id<AXCCIconViewControllerDelegate>)arg1 ;
-(id<AXCCIconViewControllerDelegate>)iconDelegate;
@end
