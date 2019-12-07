/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:05 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UISwipeActionPullViewDelegate.h>

@class NSIndexPath, UIView, UIContextualAction, UISwipeActionController, UISwipeActionPullView, NSDictionary, NSString;

@interface UISwipeOccurrence : NSObject <UISwipeActionPullViewDelegate> {

	unsigned _actionExecutionCounter;
	struct {
		unsigned isTransitioning : 1;
		unsigned didNotifyWillFinish : 1;
		unsigned didNotifyDidFinish : 1;
	}  _flags;
	double _swipedViewRestingOffset;
	BOOL _hasAmbiguousIndexPath;
	BOOL _active;
	BOOL _shouldReenableUserInteraction;
	NSIndexPath* _indexPath;
	long long _direction;
	double _offset;
	long long _state;
	double _velocity;
	unsigned long long _configuredDirection;
	UIView* _swipedView;
	UIContextualAction* _currentAction;
	UISwipeActionController* _controller;
	UISwipeActionPullView* _leadingPullView;
	UISwipeActionPullView* _trailingPullView;
	NSDictionary* _swipeDirectionToPullView;
	UIEdgeInsets _extraInsets;
	SCD_Struct_UI109 _currentSwipeInfo;

}

@property (nonatomic,copy) NSIndexPath * indexPath;                                                   //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,readonly) double velocity;                                                       //@synthesize velocity=_velocity - In the implementation block
@property (getter=_hasAmbiguousIndexPath,nonatomic,readonly) BOOL hasAmbiguousIndexPath;              //@synthesize hasAmbiguousIndexPath=_hasAmbiguousIndexPath - In the implementation block
@property (assign,nonatomic) unsigned long long configuredDirection;                                  //@synthesize configuredDirection=_configuredDirection - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI109 currentSwipeInfo;                                       //@synthesize currentSwipeInfo=_currentSwipeInfo - In the implementation block
@property (assign,nonatomic) UIEdgeInsets extraInsets;                                                //@synthesize extraInsets=_extraInsets - In the implementation block
@property (nonatomic,retain) UIView * swipedView;                                                     //@synthesize swipedView=_swipedView - In the implementation block
@property (nonatomic,retain) UIContextualAction * currentAction;                                      //@synthesize currentAction=_currentAction - In the implementation block
@property (assign,nonatomic) BOOL active;                                                             //@synthesize active=_active - In the implementation block
@property (assign,nonatomic) BOOL shouldReenableUserInteraction;                                      //@synthesize shouldReenableUserInteraction=_shouldReenableUserInteraction - In the implementation block
@property (assign,nonatomic,__weak) UISwipeActionController * controller;                             //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) UISwipeActionPullView * leadingPullView;                                 //@synthesize leadingPullView=_leadingPullView - In the implementation block
@property (nonatomic,retain) UISwipeActionPullView * trailingPullView;                                //@synthesize trailingPullView=_trailingPullView - In the implementation block
@property (nonatomic,retain) NSDictionary * swipeDirectionToPullView;                                 //@synthesize swipeDirectionToPullView=_swipeDirectionToPullView - In the implementation block
@property (nonatomic,readonly) long long direction;                                                   //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) double offset;                                                           //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) long long state;                                                       //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSIndexPath *)indexPath;
-(long long)state;
-(void)setActive:(BOOL)arg1 ;
-(void)setOffset:(double)arg1 ;
-(long long)direction;
-(double)offset;
-(double)velocity;
-(BOOL)active;
-(void)updateLayout;
-(void)setController:(UISwipeActionController *)arg1 ;
-(UISwipeActionController *)controller;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(UIContextualAction *)currentAction;
-(void)updateOffsetWithSwipeInfo:(SCD_Struct_UI109)arg1 isTracking:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)resetAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setHasAmbiguousIndexPath;
-(void)_transitionToState:(long long)arg1 ;
-(void)_forceTeardown;
-(id)initWithController:(id)arg1 indexPath:(id)arg2 ;
-(void)updateSwipedView;
-(SCD_Struct_UI108)prepareWithSwipeDirection:(unsigned long long)arg1 configuration:(id)arg2 ;
-(BOOL)shouldDismissWithTouchLocation:(CGPoint)arg1 ;
-(BOOL)_hasAmbiguousIndexPath;
-(void)beginSwipe;
-(void)performPrimaryActionWithSwipeInfo:(SCD_Struct_UI109)arg1 ;
-(CGRect)swipedViewRestingFrame;
-(id)_pullViewForSwipeDirection:(unsigned long long)arg1 ;
-(UISwipeActionPullView *)leadingPullView;
-(UISwipeActionPullView *)trailingPullView;
-(void)_resetPullViewsImmediately;
-(void)_updatePullView:(id)arg1 ;
-(void)setShouldReenableUserInteraction:(BOOL)arg1 ;
-(void)endSwipe;
-(void)_resetItemWithSwipeInfo:(SCD_Struct_UI109)arg1 animated:(BOOL)arg2 deletion:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_moveItemWithSwipeInfo:(SCD_Struct_UI109)arg1 completion:(/*^block*/id)arg2 ;
-(double)_extraOffsetForOffset:(double)arg1 withDirection:(unsigned long long)arg2 ;
-(BOOL)shouldReenableUserInteraction;
-(void)_updateLayoutUsingCurrentSwipeInfo:(BOOL)arg1 ;
-(void)setSwipedView:(UIView *)arg1 ;
-(void)_performSwipeAction:(id)arg1 inPullView:(id)arg2 swipeInfo:(SCD_Struct_UI109)arg3 ;
-(unsigned long long)_swipeDirectionForPullView:(id)arg1 ;
-(void)_executeLifecycleForPerformedAction:(id)arg1 sourceView:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(UIEdgeInsets)extraInsets;
-(void)_createPullViewsIfNeeded;
-(NSDictionary *)swipeDirectionToPullView;
-(void)setSwipeDirectionToPullView:(NSDictionary *)arg1 ;
-(CGRect)_frameForPullView:(id)arg1 inSwipedItem:(id)arg2 withContainer:(id)arg3 ;
-(SCD_Struct_UI109)currentSwipeInfo;
-(id)_actionView;
-(void)swipeActionPullView:(id)arg1 tappedAction:(id)arg2 ;
-(double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1 ;
-(id)actionView;
-(id)lockActionViewForAnimation;
-(void)unlockActionViewForAnimation:(id)arg1 ;
-(unsigned long long)configuredDirection;
-(void)setConfiguredDirection:(unsigned long long)arg1 ;
-(void)setCurrentSwipeInfo:(SCD_Struct_UI109)arg1 ;
-(void)setExtraInsets:(UIEdgeInsets)arg1 ;
-(UIView *)swipedView;
-(void)setCurrentAction:(UIContextualAction *)arg1 ;
-(void)setLeadingPullView:(UISwipeActionPullView *)arg1 ;
-(void)setTrailingPullView:(UISwipeActionPullView *)arg1 ;
@end
