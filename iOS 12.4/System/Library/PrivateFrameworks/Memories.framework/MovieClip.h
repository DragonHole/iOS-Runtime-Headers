/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/KonaClip.h>

@interface MovieClip : KonaClip
+(id)movieClipWithURL:(id)arg1 ;
+(id)movieClipWithURL:(id)arg1 avAsset:(id)arg2 ;
+(BOOL)audioEnabledByDefault;
-(double)aspectRatio;
-(int)clipType;
-(BOOL)hasAudioCharacteristic;
-(BOOL)isFreezeFrame;
-(int)rawSourceDuration;
-(BOOL)hasVisualCharacteristic;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 applyAnamorphic:(BOOL)arg3 ;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(void)clearFreezeFrame;
-(void)initializeFromURL:(id)arg1 asset:(id)arg2 ;
-(float)speed;
@end

