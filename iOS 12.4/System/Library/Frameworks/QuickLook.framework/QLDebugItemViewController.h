/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemViewController.h>

@class UITextView, NSMutableDictionary, NSLayoutConstraint;

@interface QLDebugItemViewController : QLItemViewController {

	BOOL _constraintsSetUp;
	UITextView* _logTextView;
	NSMutableDictionary* _selectorToCount;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(BOOL)canEnterFullScreen;
-(BOOL)canPinchToDismiss;
-(void)_addLog:(id)arg1 logLevel:(unsigned long long)arg2 ;
-(void)_encounterMethodCall:(SEL)arg1 ;
-(void)previewIsAppearingWithProgress:(double)arg1 ;
-(void)previewWillFinishAppearing;
-(void)_encounterMethodCall:(SEL)arg1 animatedValue:(unsigned long long)arg2 ;
-(id)_attributesForLogLevel:(unsigned long long)arg1 ;
-(BOOL)canSwipeToDismiss;
@end

