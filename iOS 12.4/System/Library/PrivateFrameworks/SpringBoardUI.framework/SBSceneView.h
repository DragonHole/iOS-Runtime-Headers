/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:54 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>
#import <libobjc.A.dylib/SBScenePlaceholderContentViewProviderDelegate.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBScenePlaceholderContentContext, SBScenePlaceholderContentView, FBSceneHostView, SBScenePlaceholderContentViewProvider, SBSceneViewDelegate;
@class SBSceneHandle, NSString, UIView;

@interface SBSceneView : UIView <SBSceneHandleObserver, SBScenePlaceholderContentViewProviderDelegate, BSInvalidatable> {

	SBSceneHandle* _sceneHandle;
	CGSize _referenceSize;
	long long _orientation;
	long long _requestedDisplayMode;
	long long _effectiveDisplayMode;
	BOOL _invalidated;
	long long _hostingPriority;
	NSString* _hostingRequester;
	id<SBScenePlaceholderContentContext> _placeholderContentContext;
	UIView* _customContentView;
	UIView*<SBScenePlaceholderContentView> _placeholderContentView;
	UIView* _liveSnapshotView;
	UIView*<FBSceneHostView> _hostView;
	UIView* _crossfadeView;
	UIView* _backgroundView;
	BOOL _placeholderContentEnabled;
	id<SBScenePlaceholderContentViewProvider> _placeholderContentProvider;
	id<SBSceneViewDelegate> _delegate;

}

@property (nonatomic,readonly) long long hostingPriority;                                                       //@synthesize hostingPriority=_hostingPriority - In the implementation block
@property (nonatomic,copy,readonly) NSString * hostingRequester;                                                //@synthesize hostingRequester=_hostingRequester - In the implementation block
@property (nonatomic,readonly) SBSceneHandle * sceneHandle;                                                     //@synthesize sceneHandle=_sceneHandle - In the implementation block
@property (nonatomic,readonly) CGSize referenceSize;                                                            //@synthesize referenceSize=_referenceSize - In the implementation block
@property (nonatomic,readonly) long long orientation;                                                           //@synthesize orientation=_orientation - In the implementation block
@property (nonatomic,retain) id<SBScenePlaceholderContentViewProvider> placeholderContentProvider;              //@synthesize placeholderContentProvider=_placeholderContentProvider - In the implementation block
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext;                    //@synthesize placeholderContentContext=_placeholderContentContext - In the implementation block
@property (assign,nonatomic) BOOL placeholderContentEnabled;                                                    //@synthesize placeholderContentEnabled=_placeholderContentEnabled - In the implementation block
@property (nonatomic,readonly) long long displayMode;                                                           //@synthesize requestedDisplayMode=_requestedDisplayMode - In the implementation block
@property (nonatomic,readonly) long long effectiveDisplayMode;                                                  //@synthesize effectiveDisplayMode=_effectiveDisplayMode - In the implementation block
@property (assign,nonatomic,__weak) id<SBSceneViewDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * customContentView;                                                        //@synthesize customContentView=_customContentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDisplayModeAnimationFactory;
-(CGSize)referenceSize;
-(void)sceneHandle:(id)arg1 didCreateScene:(id)arg2 ;
-(void)sceneHandle:(id)arg1 didDestroyScene:(id)arg2 ;
-(void)sceneHandle:(id)arg1 didUpdateContentState:(long long)arg2 ;
-(id)initWithSceneHandle:(id)arg1 referenceSize:(CGSize)arg2 orientation:(long long)arg3 hostRequester:(id)arg4 ;
-(void)_enableHostingIfPossible;
-(void)_disableHosting;
-(long long)effectiveDisplayMode;
-(void)_transitionFromDisplayMode:(long long)arg1 showingView:(id)arg2 toDisplayMode:(long long)arg3 showingView:(id)arg4 withAnimationFactory:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_reloadPlaceholderContentIfNecessary;
-(void)_evaluateEffectiveDisplayModeWithAnimationFactory:(id)arg1 completion:(/*^block*/id)arg2 ;
-(SBSceneHandle *)sceneHandle;
-(NSString *)hostingRequester;
-(void)_configureSceneSnapshotContext:(id)arg1 ;
-(void)_clearSnapshotViews;
-(void)_hotSwapPlaceholderContentView;
-(void)_hotSwapLiveSnapshotView;
-(BOOL)_shouldObserveSceneHostContentState;
-(void)_recheckLiveContentDependencies;
-(void)_configureViewForEffectiveDisplayMode:(long long)arg1 ;
-(id)_viewForDisplayMode:(long long)arg1 ;
-(long long)_bestDisplayModeLessThanMode:(long long)arg1 ;
-(BOOL)_addContentLikeViewToHeierarchyForTransitionIfPossible:(id)arg1 ;
-(BOOL)_shouldViewBeInHeirarchyForTransition:(id)arg1 ;
-(void)_configurePlaceholderContentView;
-(void)_configureLiveSnapshotView;
-(void)_configureHostView;
-(id)newSnapshot;
-(void)_configureBackgroundColorForLiveSnapshot:(BOOL)arg1 ;
-(void)_configureSceneLiveHostView:(id)arg1 ;
-(void)placeholderContentViewProviderContentDidUpdate:(id)arg1 ;
-(id)initWithSceneHandle:(id)arg1 referenceSize:(CGSize)arg2 orientation:(long long)arg3 ;
-(void)setCustomContentView:(UIView *)arg1 ;
-(void)setPlaceholderContentProvider:(id<SBScenePlaceholderContentViewProvider>)arg1 ;
-(void)setPlaceholderContentContext:(id<SBScenePlaceholderContentContext>)arg1 ;
-(void)setPlaceholderContentEnabled:(BOOL)arg1 ;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_representsTranslucentContent;
-(void)_updateReferenceSize:(CGSize)arg1 andOrientation:(long long)arg2 ;
-(void)_containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1 ;
-(id<SBScenePlaceholderContentViewProvider>)placeholderContentProvider;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(BOOL)placeholderContentEnabled;
-(long long)hostingPriority;
-(void)_refresh;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setDelegate:(id<SBSceneViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<SBSceneViewDelegate>)delegate;
-(UIView *)customContentView;
-(UIView *)backgroundView;
-(void)invalidate;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(long long)displayMode;
-(long long)orientation;
@end
