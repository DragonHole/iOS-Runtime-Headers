/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBSwitcherModifier, SBAppLayout, SBSwitcherToActiveFloatingSwitcherModifier, NSArray;

@interface SBAppExposeToActiveFloatingSwitcherModifier : SBTransitionSwitcherModifier {

	unsigned long long _direction;
	SBSwitcherModifier* _multitaskingModifier;
	SBAppLayout* _activeAppLayout;
	SBSwitcherToActiveFloatingSwitcherModifier* _switcherToActiveFloatingAppModifier;
	NSArray* _appLayoutsPriorToTransitionFromAppExpose;

}
-(CGRect)frameForIndex:(unsigned long long)arg1 ;
-(id)handleEvent:(id)arg1 ;
-(double)scaleForIndex:(unsigned long long)arg1 ;
-(double)opacityForIndex:(unsigned long long)arg1 ;
-(BOOL)_isIndexFullScreenAppLayout:(unsigned long long)arg1 ;
-(double)_unselectedCardScale;
-(id)topMostAppLayouts;
-(id)handleMainTransitionEvent:(id)arg1 ;
-(BOOL)_isEffectivelyActiveFloatingApp;
-(id)initWithTransitionID:(id)arg1 direction:(unsigned long long)arg2 multitaskingModifier:(id)arg3 activeAppLayout:(id)arg4 switcherToActiveFloatingAppModifier:(id)arg5 ;
@end
