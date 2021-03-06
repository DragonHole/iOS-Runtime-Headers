/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/BurstClipStyle.h>

@class NSString;

@interface BurstClipStylePhoto : BurstClipStyle {

	int _transitionFrameDuration;
	NSString* _transitionName;

}

@property (nonatomic,copy) NSString * transitionName;                  //@synthesize transitionName=_transitionName - In the implementation block
@property (assign,nonatomic) int transitionFrameDuration;              //@synthesize transitionFrameDuration=_transitionFrameDuration - In the implementation block
-(BOOL)isSupported;
-(double)minimumDuration;
-(NSString *)transitionName;
-(double)idealDuration;
-(void)setTransitionName:(NSString *)arg1 ;
-(id)containedClipsWithInTransition:(id)arg1 outTransition:(id)arg2 ;
-(unsigned long long)numberOfAvailableClips;
-(unsigned long long)_minimumNumberOfContainedClips;
-(unsigned long long)_idealNumberOfContainedClips;
-(double)idealContainedClipDuration;
-(double)maximumContainedClipDuration;
-(id)containedClipsWithoutTransitions;
-(unsigned long long)_maximumNumberOfContainedClips;
-(double)minimumContainedClipDuration;
-(void)adjustDurationsOfClips:(id)arg1 withInTransition:(id)arg2 outTransition:(id)arg3 ;
-(int)transitionFrameDuration;
-(void)setTransitionFrameDuration:(int)arg1 ;
-(double)maximumDuration;
@end

