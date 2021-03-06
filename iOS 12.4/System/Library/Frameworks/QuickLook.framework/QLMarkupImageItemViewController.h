/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLMarkupItemViewController.h>

@class UIScrollView;

@interface QLMarkupImageItemViewController : QLMarkupItemViewController {

	UIScrollView* _scrollView;
	BOOL _isVisible;

}
+(id)supportedContentTypes;
+(Class)transformerClass;
+(BOOL)shouldBeRemoteForContentType:(id)arg1 ;
-(UIEdgeInsets)customEdgeInsets;
-(UIEdgeInsets)customSketchOverlayInsets;
-(void)transitionWillFinish:(BOOL)arg1 didComplete:(BOOL)arg2 ;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(id)parallaxView;
-(id)scrollView;
-(CGSize)imageSize;
@end

