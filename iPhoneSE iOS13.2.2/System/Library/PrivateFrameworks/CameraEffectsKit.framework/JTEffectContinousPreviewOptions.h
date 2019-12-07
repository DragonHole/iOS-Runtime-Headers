/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface JTEffectContinousPreviewOptions : NSObject <NSCopying> {

	BOOL _loopAnimation;
	BOOL _useCameraAsBackground;
	unsigned long long _preferredUpdatesPerSecond;
	SCD_Struct_JT6 _effectAnimationDuration;

}

@property (assign,nonatomic) SCD_Struct_JT6 effectAnimationDuration;                    //@synthesize effectAnimationDuration=_effectAnimationDuration - In the implementation block
@property (assign,nonatomic) BOOL loopAnimation;                                        //@synthesize loopAnimation=_loopAnimation - In the implementation block
@property (assign,nonatomic) unsigned long long preferredUpdatesPerSecond;              //@synthesize preferredUpdatesPerSecond=_preferredUpdatesPerSecond - In the implementation block
@property (assign,nonatomic) BOOL useCameraAsBackground;                                //@synthesize useCameraAsBackground=_useCameraAsBackground - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFrameRate:(unsigned long long)arg1 ;
-(id)initForLiveCameraWithFrameRate:(unsigned long long)arg1 ;
-(SCD_Struct_JT6)effectAnimationDuration;
-(void)setEffectAnimationDuration:(SCD_Struct_JT6)arg1 ;
-(BOOL)loopAnimation;
-(void)setLoopAnimation:(BOOL)arg1 ;
-(unsigned long long)preferredUpdatesPerSecond;
-(void)setPreferredUpdatesPerSecond:(unsigned long long)arg1 ;
-(BOOL)useCameraAsBackground;
-(void)setUseCameraAsBackground:(BOOL)arg1 ;
@end
