/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CFXEffectMessagesStickerUtilities : NSObject
+(id)animatedPreviewsDirectory;
+(id)animatedPreviewFileNameForOverlayID:(id)arg1 ;
+(void)cacheAnimatedStickerPreviewsForOverlayTypeId:(id)arg1 previewDuration:(double)arg2 previewFrameRate:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(id)overlayIDFromAnimatedPreviewFileName:(id)arg1 ;
+(long long)numberOfStickersForEffectTypeId:(id)arg1 ;
+(id)stickerPropertiesForIndex:(long long)arg1 forEffectTypeId:(id)arg2 ;
@end
