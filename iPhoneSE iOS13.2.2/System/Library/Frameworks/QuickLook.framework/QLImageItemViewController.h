/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:23 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLScrollableContentItemViewController.h>
#import <libobjc.A.dylib/QLAnimationTimerObserver.h>

@class UIImageView, QLAnimatedImage, NSString;

@interface QLImageItemViewController : QLScrollableContentItemViewController <QLAnimationTimerObserver> {

	UIImageView* _imageView;
	QLAnimatedImage* _animatedImage;
	double _initialTimeStamp;
	double _currentPlaybackTime;
	CGSize _imageSize;
	BOOL _imageIsAnimated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGSize)imageSize;
-(long long)preferredWhitePointAdaptivityStyle;
-(id)draggableView;
-(void)animationTimerFired:(double)arg1 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
@end
