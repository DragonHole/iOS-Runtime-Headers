/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifier.h>
#import <libobjc.A.dylib/SBHomeGestureDockSwitcherModifierDelegate.h>

@class SBHomeGestureDockSwitcherModifier, NSString;

@interface SBExternalHomeGestureFloatingSwitcherModifier : SBGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate> {

	SBHomeGestureDockSwitcherModifier* _dockModifier;
	long long _initialFloatingConfiguration;
	long long _interfaceOrientation;
	BOOL _stashed;
	CGRect _stashedContainerViewBounds;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)handleGestureEvent:(id)arg1 ;
-(void)didMoveToParentModifier:(id)arg1 ;
-(CGRect)containerViewBounds;
-(long long)layoutUpdateMode;
-(BOOL)isFloatingDockGesturePossible;
-(long long)currentFinalDestination;
-(id)initWithGestureID:(id)arg1 initialFloatingConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3 ;
-(void)_updateForGestureDidBeginOrChangeWithEvent:(id)arg1 ;
@end

