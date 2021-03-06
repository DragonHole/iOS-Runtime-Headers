/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBehavior.h>

@interface ISLivePhotoHintBehavior : ISBehavior {

	BOOL _playDuringHint;
	BOOL __didFinishPreparing;
	BOOL __preparing;
	float _prerollRate;
	double __lastProgress;
	SCD_Struct_IS1 _seekTime;

}

@property (assign,setter=_setDidFinishPreparing:,nonatomic) BOOL _didFinishPreparing;                //@synthesize _didFinishPreparing=__didFinishPreparing - In the implementation block
@property (assign,setter=_setPreparing:,getter=_isPreparing,nonatomic) BOOL _preparing;              //@synthesize _preparing=__preparing - In the implementation block
@property (assign,setter=_setLastProgress:,nonatomic) double _lastProgress;                          //@synthesize _lastProgress=__lastProgress - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IS1 seekTime;                                              //@synthesize seekTime=_seekTime - In the implementation block
@property (nonatomic,readonly) float prerollRate;                                                    //@synthesize prerollRate=_prerollRate - In the implementation block
@property (nonatomic,readonly) BOOL playDuringHint;                                                  //@synthesize playDuringHint=_playDuringHint - In the implementation block
-(long long)behaviorType;
-(double)_lastProgress;
-(void)_prepareIfNeeded;
-(SCD_Struct_IS1)seekTime;
-(void)_seekToBeginning;
-(void)activeDidChange;
-(id)initWithInitialLayoutInfo:(id)arg1 seekTime:(SCD_Struct_IS1)arg2 prerollRate:(float)arg3 playDuringHint:(BOOL)arg4 ;
-(void)hintWithProgress:(float)arg1 ;
-(void)_handleDidSeekToBeginning;
-(void)_preroll;
-(void)_handleDidPreroll;
-(void)_handleDidFinishPreparing;
-(float)prerollRate;
-(BOOL)playDuringHint;
-(BOOL)_didFinishPreparing;
-(void)_setDidFinishPreparing:(BOOL)arg1 ;
-(BOOL)_isPreparing;
-(void)_setPreparing:(BOOL)arg1 ;
-(void)_setLastProgress:(double)arg1 ;
@end

