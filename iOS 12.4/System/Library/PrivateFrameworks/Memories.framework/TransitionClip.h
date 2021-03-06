/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/KonaClip.h>

@class NSDictionary, NSString;

@interface TransitionClip : KonaClip {

	BOOL _forcedNoOverlap;
	NSDictionary* _transitionEffectSettings;

}

@property (nonatomic,retain) NSString * transitionName; 
@property (assign,nonatomic) int transitionDirection; 
@property (nonatomic,readonly) int overlapType; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) BOOL forcedNoOverlap;                               //@synthesize forcedNoOverlap=_forcedNoOverlap - In the implementation block
@property (assign,nonatomic) int audioEnabledType; 
@property (assign,nonatomic) float effectRangeBias; 
@property (nonatomic,copy) NSDictionary * transitionEffectSettings;              //@synthesize transitionEffectSettings=_transitionEffectSettings - In the implementation block
@property (nonatomic,readonly) SCD_Struct_Mi11 effectRange; 
+(int)overlapTypeForName:(id)arg1 ;
-(void)setTransitionDirection:(int)arg1 ;
-(NSString *)transitionName;
-(int)clipType;
-(int)transitionEatLeft;
-(int)transitionEatRight;
-(BOOL)audioEnabled;
-(int)biasedDuration;
-(void)setTransitionName:(NSString *)arg1 ;
-(int)overlapType;
-(void)setTransitionEffectSettings:(NSDictionary *)arg1 ;
-(void)setEffectRangeBias:(float)arg1 ;
-(NSDictionary *)transitionEffectSettings;
-(void)setForcedNoOverlap:(BOOL)arg1 ;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(BOOL)forcedNoOverlap;
-(void)setTransitionEatLeft:(int)arg1 ;
-(void)setTransitionEatRight:(int)arg1 ;
-(BOOL)overlapIsCurrentlyForced;
-(float)effectRangeBias;
-(int)biasedStartOffset;
-(void)setAudioEnabledType:(int)arg1 ;
-(int)audioEnabledType;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(id)transitionIDFromName:(id)arg1 ;
-(SCD_Struct_Mi11)effectRange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(int)transitionDirection;
@end

