/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PULivePhotoTrimScrubberDelegate <NSObject>
@optional
-(void)trimScrubber:(id)arg1 didChangeLoupeRect:(CGRect)arg2;
-(void)trimScrubberAssetDurationDidChange:(id)arg1;
-(BOOL)trimScrubber:(id)arg1 canBeginInteractivelyEditingElement:(long long)arg2;
-(void)trimScrubber:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2;
-(void)trimScrubber:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2 successful:(BOOL)arg3;
-(void)trimScrubber:(id)arg1 didChangeTimeForElement:(long long)arg2;

@end

