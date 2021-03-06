/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTMovieCompositionItem.h>

@interface JTStillCompositionItem : JTMovieCompositionItem
-(id)initWithClip:(id)arg1 timeScale:(int)arg2 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JT6)arg1 paddedFromTime:(SCD_Struct_JT6)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_JT16)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_JT16)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_JT6)arg1 ;
-(BOOL)needSilenceAtEnd;
@end

