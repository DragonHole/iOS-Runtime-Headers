/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/PKSpendingSummaryFetcherObserver.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/PKSpendingSingleSummaryViewControllerDelegate.h>

@protocol OS_dispatch_source, PKSpendingSummaryViewControllerDelegate;
@class PKPaymentPass, PKAccount, PKSpendingSummaryFetcher, NSCalendar, NSArray, NSString, UIBarButtonItem, UIScrollView, NSMutableSet, NSMutableDictionary, NSIndexSet, PKSpendingSummaryFooterContainer, NSObject;

@interface PKSpendingSummaryViewController : UIViewController <PKSpendingSummaryFetcherObserver, UIScrollViewDelegate, PKSpendingSingleSummaryViewControllerDelegate> {

	PKPaymentPass* _paymentPass;
	PKAccount* _account;
	PKSpendingSummaryFetcher* _summaryFetcher;
	NSCalendar* _currentCalendar;
	NSArray* _weeks;
	NSArray* _months;
	NSString* _navTitle;
	NSArray* _currentDataSet;
	unsigned long long _currentSummaryType;
	unsigned long long _numberOfItems;
	double _currentWidth;
	double _currentHeight;
	BOOL _transitioningMode;
	BOOL _isScrolling;
	BOOL _isDragging;
	BOOL _navigationBarOpaque;
	BOOL _hasPrefetchedLeft;
	BOOL _hasPrefetchedRight;
	UIBarButtonItem* _changeModeButton;
	UIScrollView* _scrollView;
	double _collectionViewVerticalOffset;
	CGRect _previousBounds;
	NSArray* _currentMonthTransactions;
	NSMutableSet* _unusedVCs;
	NSArray* _summaryVCs;
	NSMutableDictionary* _indicesToVCMapping;
	NSMutableDictionary* _nonVisibleIndicesToVCMapping;
	NSIndexSet* _visibleIndices;
	unsigned long long _primaryIndex;
	PKSpendingSummaryFooterContainer* _footerView;
	NSMutableDictionary* _pendingCollectionViewUpdates;
	BOOL _isLowEndDevice;
	NSObject*<OS_dispatch_source> _scrollTimer;
	os_unfair_lock_s _lockUpdate;
	NSMutableDictionary* _pendingUpdates;
	unsigned long long _selectionType;
	id<PKSpendingSummaryViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKSpendingSummaryViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)pkui_prefersNavigationBarShadowHidden;
-(id)initWithPaymentPass:(id)arg1 account:(id)arg2 fetcher:(id)arg3 weeks:(id)arg4 months:(id)arg5 type:(unsigned long long)arg6 unit:(unsigned long long)arg7 currentMonthTransactions:(id)arg8 upcomingScheduledPayments:(id)arg9 ;
-(void)_changeMode;
-(void)_updateScrollViewContentSize;
-(double)_startOfItemAtIndex:(unsigned long long)arg1 ;
-(void)_loadSummariesForContentOffset:(CGPoint)arg1 ;
-(void)_layoutCollectionViews;
-(double)_yPositionForNonPrimaryVCs;
-(void)_performModeChange;
-(void)_reloadDataForVCAtIndex:(unsigned long long)arg1 swap:(BOOL)arg2 ;
-(void)_updatePrimaryViewScrolling;
-(id)_dequeueVCForIndex:(unsigned long long)arg1 ;
-(void)_reloadPendingVCs;
-(BOOL)_canReloadVCs;
-(id)_dequeueNonVisibleVCForIndex:(unsigned long long)arg1 ;
-(double)_transitionProgress;
-(id)_visibileIndicesAtContentOffset:(CGPoint)arg1 ;
-(void)_retireVCForIndex:(unsigned long long)arg1 ;
-(void)_updateAlphaAndFooterDuringTransition;
-(unsigned long long)_indexAtContentOffset:(CGPoint)arg1 ;
-(void)_switchPrimaryIndexToIndex:(unsigned long long)arg1 ;
-(void)_scrollViewStoppedScrolling;
-(id)_recoverUnusedVC;
-(double)_endOfItemAtIndex:(unsigned long long)arg1 ;
-(void)_updateNavBarContent;
-(void)invalidatedSpendingSummaryOfType:(unsigned long long)arg1 startingWithDate:(id)arg2 ;
-(void)invalidatedSummariesAvailable;
-(void)spendingSingleSummaryViewController:(id)arg1 scrollViewDidScroll:(id)arg2 ;
-(void)spendingSingleSummaryViewController:(id)arg1 changedSelection:(unsigned long long)arg2 ;
-(unsigned long long)_primaryIndexAtOffset:(CGPoint)arg1 ;
-(double)pkui_preferredNavigationBarBackgroundOpacity;
-(void)dealloc;
-(void)setDelegate:(id<PKSpendingSummaryViewControllerDelegate>)arg1 ;
-(id<PKSpendingSummaryViewControllerDelegate>)delegate;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
@end

