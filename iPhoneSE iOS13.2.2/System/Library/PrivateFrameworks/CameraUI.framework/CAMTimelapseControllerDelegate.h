/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMTimelapseControllerDelegate <NSObject>
@required
-(void)timelapseController:(id)arg1 startedWithCaptureOrientation:(long long)arg2;
-(void)timelapseControllerStopped:(id)arg1;
-(void)timelapseController:(id)arg1 generatedPlaceholderResult:(id)arg2 withThumbnailImage:(id)arg3 forAssetUUID:(id)arg4 inCaptureSession:(unsigned short)arg5;
-(void)timelapseController:(id)arg1 persistedPlaceholderResult:(id)arg2 error:(id)arg3;

@end

