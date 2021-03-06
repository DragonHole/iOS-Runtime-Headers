/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMStillImageCaptureResolvedSettings : NSObject {

	BOOL _HDREnabled;
	BOOL _portraitEffectEnabled;

}

@property (getter=isHDREnabled,nonatomic,readonly) BOOL HDREnabled;                                    //@synthesize HDREnabled=_HDREnabled - In the implementation block
@property (getter=isPortraitEffectEnabled,nonatomic,readonly) BOOL portraitEffectEnabled;              //@synthesize portraitEffectEnabled=_portraitEffectEnabled - In the implementation block
-(BOOL)isPortraitEffectEnabled;
-(id)initWithHDREnabled:(BOOL)arg1 portraitEffectEnabled:(BOOL)arg2 ;
-(BOOL)isHDREnabled;
@end

