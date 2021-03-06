/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CSWallpaperViewProviding <NSObject>
@required
-(void)wallpaperClientWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
-(void)wallpaperClientWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
-(void)wallpaperClientDidRotateFromInterfaceOrientation:(long long)arg1;
-(id)createCoverSheetWallpaperView;
-(id)suspendWallpaperAnimationForReason:(id)arg1;
-(id)createCoverSheetWallpaperViewWithTransformOptions:(unsigned long long)arg1;

@end

