/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXMediaComponentView.h>
#import <libobjc.A.dylib/SXDragManagerDataSource.h>

@class SXDragManager;

@interface SXGalleryComponentView : SXMediaComponentView <SXDragManagerDataSource> {

	SXDragManager* _dragManager;

}

@property (nonatomic,retain) SXDragManager * dragManager;              //@synthesize dragManager=_dragManager - In the implementation block
-(id)hostingView;
-(void)forceImageViewFullscreen:(id)arg1 ;
-(id)imageViewForLocation:(CGPoint)arg1 ;
-(id)viewForDragManager:(id)arg1 ;
-(id)dragManager:(id)arg1 dragableAtLocation:(CGPoint)arg2 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 mediaSharingPolicyProvider:(id)arg7 ;
-(void)setDragManager:(SXDragManager *)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(SXDragManager *)dragManager;
@end
