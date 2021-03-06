/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWNode.h>

@class BWMotionDataPreserver;

@interface BWFrameRateGovernorNode : BWNode {

	SCD_Struct_BW2 _lastEmittedPTS;
	SCD_Struct_BW2 _lastEmittedStreamingFrameDuration;
	int _activeBracketSequenceRate;
	BWMotionDataPreserver* _motionDataPreserver;
	BOOL _dropsStillBracketFramesToMaintainConsistentFrameRate;
	BOOL _preservesMotionDataFromDroppedStillBracketFrames;

}
+(void)initialize;
-(id)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)setDropsStillBracketFramesToMaintainConsistentFrameRate:(BOOL)arg1 ;
-(void)setPreservesMotionDataFromDroppedStillBracketFrames:(BOOL)arg1 ;
-(BOOL)dropsStillBracketFramesToMaintainConsistentFrameRate;
-(BOOL)preservesMotionDataFromDroppedStillBracketFrames;
-(id)init;
-(void)dealloc;
-(id)nodeType;
@end

