/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@interface SBMoveFloatingConfigurationFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	long long _fromFloatingConfiguration;
	long long _toFloatingConfiguration;

}
-(id)transitionWillBegin;
-(id)layoutSettings;
-(BOOL)isIndexVisible:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(long long)liveContentRasterizationStyle;
-(BOOL)shouldPerformCrossfadeForReduceMotion;
-(BOOL)wantsResignActiveAssertion;
-(long long)keyboardSuppressionMode;
-(id)initWithTransitionID:(id)arg1 fromFloatingConfiguration:(long long)arg2 toFloatingConfiguration:(long long)arg3 ;
@end
