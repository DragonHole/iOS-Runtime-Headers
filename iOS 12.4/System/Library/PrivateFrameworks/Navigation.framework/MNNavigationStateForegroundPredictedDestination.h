/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNNavigationStateCommute.h>

@interface MNNavigationStateForegroundPredictedDestination : MNNavigationStateCommute
-(void)stopPredictingDestinations;
-(void)startPredictingDestinations;
-(void)enterState;
-(void)leaveState;
-(BOOL)requiresHighMemoryThreshold;
-(unsigned long long)desiredLocationProviderType;
-(unsigned long long)desiredResourcePolicy;
-(unsigned long long)desiredCommuteSessionState;
-(void)updateMapsActive:(BOOL)arg1 ;
-(void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2 ;
-(long long)type;
@end

