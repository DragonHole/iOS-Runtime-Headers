/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFocusAnimationCoordinator, NSHashTable, NSNumber;

@interface _UIFocusAnimationCoordinatorManager : NSObject {

	UIFocusAnimationCoordinator* _activeFocusAnimationCoordinator;
	NSHashTable* _unfocusingItems;
	double _lastFocusUpdateTime;
	UIFocusAnimationCoordinator* _lastFocusingItemAnimationCoordinator;
	NSNumber* _inheritedAnimationCoordinatorActiveAnimation;

}

@property (nonatomic,readonly) NSHashTable * unfocusingItems;                                                 //@synthesize unfocusingItems=_unfocusingItems - In the implementation block
@property (assign,nonatomic) double lastFocusUpdateTime;                                                      //@synthesize lastFocusUpdateTime=_lastFocusUpdateTime - In the implementation block
@property (nonatomic,retain) UIFocusAnimationCoordinator * activeFocusAnimationCoordinator;                   //@synthesize activeFocusAnimationCoordinator=_activeFocusAnimationCoordinator - In the implementation block
@property (nonatomic,retain) UIFocusAnimationCoordinator * lastFocusingItemAnimationCoordinator;              //@synthesize lastFocusingItemAnimationCoordinator=_lastFocusingItemAnimationCoordinator - In the implementation block
@property (nonatomic,retain) NSNumber * inheritedAnimationCoordinatorActiveAnimation;                         //@synthesize inheritedAnimationCoordinatorActiveAnimation=_inheritedAnimationCoordinatorActiveAnimation - In the implementation block
-(id)init;
-(UIFocusAnimationCoordinator *)activeFocusAnimationCoordinator;
-(void)_performDelayedFocusingAnimationIfNecessary;
-(void)setInheritedAnimationCoordinatorActiveAnimation:(NSNumber *)arg1 ;
-(void)setActiveFocusAnimationCoordinator:(UIFocusAnimationCoordinator *)arg1 ;
-(NSHashTable *)unfocusingItems;
-(double)lastFocusUpdateTime;
-(void)setLastFocusUpdateTime:(double)arg1 ;
-(void)setLastFocusingItemAnimationCoordinator:(UIFocusAnimationCoordinator *)arg1 ;
-(UIFocusAnimationCoordinator *)lastFocusingItemAnimationCoordinator;
-(id)willUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 fromItem:(id)arg2 ;
-(NSNumber *)inheritedAnimationCoordinatorActiveAnimation;
@end

