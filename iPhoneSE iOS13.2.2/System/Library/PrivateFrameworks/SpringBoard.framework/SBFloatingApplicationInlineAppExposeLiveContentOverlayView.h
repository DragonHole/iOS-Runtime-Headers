/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBFloatingApplicationLiveContentOverlayView.h>

@class SBInlineAppExposeContainerViewController, NSString, UIView;

@interface SBFloatingApplicationInlineAppExposeLiveContentOverlayView : NSObject <SBFloatingApplicationLiveContentOverlayView> {

	SBInlineAppExposeContainerViewController* _inlineAppExposeContainerViewController;

}

@property (nonatomic,readonly) SBInlineAppExposeContainerViewController * inlineAppExposeContainerViewController;              //@synthesize inlineAppExposeContainerViewController=_inlineAppExposeContainerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * contentOverlayView; 
-(void)invalidate;
-(id)contentViewController;
-(UIView *)contentOverlayView;
-(void)noteKeyboardFocusDidChangeToSceneID:(id)arg1 ;
-(long long)rasterizationStyle;
-(void)disableAsynchronousRenderingForNextCommit;
-(void)setUsesBrightSceneViewBackgroundMaterial:(BOOL)arg1 ;
-(void)setStatusBarHidden:(BOOL)arg1 nubViewHidden:(BOOL)arg2 animator:(/*^block*/id)arg3 ;
-(void)setHomeGrabberHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setRasterizationStyle:(long long)arg1 withMinificationFilterEnabled:(BOOL)arg2 ;
-(void)setLiveContentRasterizationDisabled:(BOOL)arg1 ;
-(SBInlineAppExposeContainerViewController *)inlineAppExposeContainerViewController;
-(void)configureWithWorkspaceEntity:(id)arg1 referenceFrame:(CGRect)arg2 interfaceOrientation:(long long)arg3 ;
@end
