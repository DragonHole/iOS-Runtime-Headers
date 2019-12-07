/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:30 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIView.h>

@class AKPageController, AKMainEventHandler, UIScrollView;

@interface AKOverlayView : UIView {

	BOOL _isObserving;
	BOOL _deferWasMovedToSuperviewUntilMoveToWindow;
	BOOL _scrollViewIsInLiveMagnify;
	AKPageController* _pageController;
	AKMainEventHandler* _mainEventHandler;
	UIScrollView* _observedScrollView;

}

@property (__weak) AKPageController * pageController;                           //@synthesize pageController=_pageController - In the implementation block
@property (__weak) AKMainEventHandler * mainEventHandler;                       //@synthesize mainEventHandler=_mainEventHandler - In the implementation block
@property (assign) BOOL isObserving;                                            //@synthesize isObserving=_isObserving - In the implementation block
@property (assign) BOOL deferWasMovedToSuperviewUntilMoveToWindow;              //@synthesize deferWasMovedToSuperviewUntilMoveToWindow=_deferWasMovedToSuperviewUntilMoveToWindow - In the implementation block
@property (retain) UIScrollView * observedScrollView;                           //@synthesize observedScrollView=_observedScrollView - In the implementation block
@property (assign) BOOL scrollViewIsInLiveMagnify;                              //@synthesize scrollViewIsInLiveMagnify=_scrollViewIsInLiveMagnify - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)willMoveToSuperview:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_scrollViewDidEndDragging:(id)arg1 ;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(void)delete:(id)arg1 ;
-(BOOL)isObserving;
-(void)_scrollViewDidEndDecelerating:(id)arg1 ;
-(id)initWithPageController:(id)arg1 ;
-(AKMainEventHandler *)mainEventHandler;
-(void)setMainEventHandler:(AKMainEventHandler *)arg1 ;
-(void)duplicate:(id)arg1 ;
-(void)updateLayers;
-(void)editTextAnnotation:(id)arg1 ;
-(void)_teardownObservation;
-(void)_willRemoveFromOldSuperview;
-(void)_wasMovedToNewSuperview;
-(void)setDeferWasMovedToSuperviewUntilMoveToWindow:(BOOL)arg1 ;
-(BOOL)deferWasMovedToSuperviewUntilMoveToWindow;
-(void)_updateLayersUsingScrollView;
-(void)_postScrollViewRectChangedNotification;
-(void)_updateLayersUsingScrollViewWithForcedUpdate:(BOOL)arg1 ;
-(UIScrollView *)observedScrollView;
-(BOOL)scrollViewIsInLiveMagnify;
-(void)setIsObserving:(BOOL)arg1 ;
-(void)setObservedScrollView:(UIScrollView *)arg1 ;
-(void)_willStartLiveMagnify:(id)arg1 ;
-(void)_willEndLiveMagnify:(id)arg1 ;
-(void)_scrollViewDidEndAnimation:(id)arg1 ;
-(void)_scrollViewDidScrollToTop:(id)arg1 ;
-(void)_setupObservation;
-(void)setScrollViewIsInLiveMagnify:(BOOL)arg1 ;
-(void)_postScrollViewScrollOrMagnifyEndNotification;
@end
