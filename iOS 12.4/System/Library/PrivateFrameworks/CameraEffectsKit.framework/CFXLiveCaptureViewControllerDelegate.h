/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CFXLiveCaptureViewControllerDelegate <NSObject>
@required
-(void)liveCaptureViewController:(id)arg1 didRenderFrame:(id)arg2;
-(void)liveCaptureViewController:(id)arg1 livePreviewTappedAtNormalizedPoint:(CGPoint)arg2;
-(void)liveCaptureViewController:(id)arg1 livePreviewPannedAtNormalizedPoint:(CGPoint)arg2 gesture:(id)arg3;
-(void)liveCaptureViewController:(id)arg1 livePreviewPinchedAtNormalizedCenterPoint:(CGPoint)arg2 gesture:(id)arg3;
-(void)liveCaptureViewController:(id)arg1 livePreviewRotatedAtNormalizedCenterPoint:(CGPoint)arg2 gesture:(id)arg3;
-(void)liveCaptureViewController:(id)arg1 livePreviewDoubleTappedAtNormalizedCenterPoint:(CGPoint)arg2 gesture:(id)arg3;

@end
