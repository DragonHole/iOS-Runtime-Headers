/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:40 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetDebugging.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <libobjc.A.dylib/WGWidgetDiscoveryObserving.h>
#import <libobjc.A.dylib/WGWidgetHostingViewControllerDelegate.h>
#import <libobjc.A.dylib/WGWidgetListItemViewControllerDelegate.h>
#import <libobjc.A.dylib/WGWidgetExtensionVisibilityProviding.h>

@protocol WGWidgetListViewControllerDelegate;
@class WGWidgetDiscoveryController, UIStackView, NSMutableDictionary, NSArray, NSString, UIScrollView;

@interface WGWidgetListViewController : UIViewController <WGWidgetDebugging, UIScrollViewDelegate, WGWidgetDiscoveryObserving, WGWidgetHostingViewControllerDelegate, WGWidgetListItemViewControllerDelegate, WGWidgetExtensionVisibilityProviding> {

	WGWidgetDiscoveryController* _discoveryController;
	UIStackView* _stackView;
	NSMutableDictionary* _cancelTouchesAssertionsByWidgetID;
	NSMutableDictionary* _widgetIDsToItemVCs;
	CGSize _maxVisibleContentSize;
	BOOL _shouldBlurContent;
	id<WGWidgetListViewControllerDelegate> _delegate;
	NSArray* _previouslyVisibleWidgetIDs;

}

@property (assign,nonatomic,__weak) id<WGWidgetListViewControllerDelegatePrivate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=_group,nonatomic,readonly) NSString * group; 
@property (setter=_setPreviouslyVisibleWidgetIDs:,getter=_previouslyVisibleWidgetIDs,nonatomic,retain) NSArray * previouslyVisibleWidgetIDs;              //@synthesize previouslyVisibleWidgetIDs=_previouslyVisibleWidgetIDs - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetListViewControllerDelegate> delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * widgetListView; 
@property (nonatomic,readonly) unsigned long long widgetCount; 
@property (assign,nonatomic) BOOL shouldBlurContent;                                                                                                      //@synthesize shouldBlurContent=_shouldBlurContent - In the implementation block
-(CGSize)maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2 ;
-(void)remoteViewControllerDidDisconnectForWidget:(id)arg1 ;
-(void)remoteViewControllerViewDidAppearForWidget:(id)arg1 ;
-(void)remoteViewControllerViewDidHideForWidget:(id)arg1 ;
-(void)brokenViewDidAppearForWidget:(id)arg1 ;
-(void)widget:(id)arg1 didChangeLargestSupportedDisplayMode:(long long)arg2 ;
-(UIEdgeInsets)marginInsetsForWidget:(id)arg1 ;
-(BOOL)managingContainerIsVisibleForWidget:(id)arg1 ;
-(CGRect)visibleFrameForWidget:(id)arg1 ;
-(BOOL)isWidgetExtensionVisible:(id)arg1 ;
-(void)orderOfVisibleWidgetsDidChange:(id)arg1 ;
-(void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_invalidateAllCancelTouchesAssertions;
-(id)_scrollViewIfLoaded;
-(void)_updateBackgroundViewForPlatter:(id)arg1 ;
-(id)_listItemViewControllerForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(UIScrollView *)widgetListView;
-(/*^block*/id)_insert:(BOOL)arg1 listItem:(id)arg2 withOrderedIdentifiers:(id)arg3 animated:(BOOL)arg4 ;
-(unsigned long long)_insertionIndexofListItem:(id)arg1 intoWidgetViews:(id)arg2 withOrderedIdentifiers:(id)arg3 ;
-(/*^block*/id)_beginInsertion:(BOOL)arg1 ofListItem:(id)arg2 withOrderedIdentifiers:(id)arg3 removingViewIfPossible:(BOOL)arg4 ;
-(id)_scrollViewLoadingIfNecessary:(BOOL)arg1 ;
-(BOOL)shouldBlurContent;
-(id)visibleWidgetIdentifiers;
-(id)_repopulateStackViewWithWidgetIdentifiers:(id)arg1 ;
-(id)_platterViewAtLocation:(CGPoint)arg1 ;
-(void)_cancelTouchesForWidget:(id)arg1 ;
-(void)_configureStackView;
-(void)_repopulateStackView;
-(void)_invokeBlockWithPlatterViewsVisibleInBounds:(/*^block*/id)arg1 ;
-(void)_invokeBlock:(/*^block*/id)arg1 withPlatterViewsPassingTest:(/*^block*/id)arg2 ;
-(id)_platterViewForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(BOOL)arg2 ;
-(id)_widgetIdentifiersForPlatterViewsVisibleInBounds;
-(void)_setPreviouslyVisibleWidgetIDs:(id)arg1 ;
-(id)_previouslyVisibleWidgetIDs;
-(void)_updateWidgetViewStateWithPreviouslyVisibleWidgetIdentifiers:(id)arg1 ;
-(void)_invokeBlockWithPlatterViewsVisibleInRect:(CGRect)arg1 block:(/*^block*/id)arg2 ;
-(void)_cancelTouchesForHitWidgetIfNecessary;
-(CGRect)_visibleContentFrameForBounds:(CGRect)arg1 withContentOccludingInsets:(UIEdgeInsets)arg2 ;
-(CGSize)_maxVisibleContentSize;
-(id)widgetListItemViewController:(id)arg1 widgetHostWithIdentifier:(id)arg2 ;
-(id)initWithWidgetDiscoveryController:(id)arg1 ;
-(unsigned long long)widgetCount;
-(void)setShouldBlurContent:(BOOL)arg1 ;
-(id)_group;
-(void)dealloc;
-(void)setDelegate:(id<WGWidgetListViewControllerDelegatePrivate>)arg1 ;
-(id<WGWidgetListViewControllerDelegatePrivate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
@end
