/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVTransportControlsViewDelegate.h>
#import <AVKit/AVRoutePickerViewInternalDelegate.h>
#import <AVKit/AVScrollViewObserverDelegate.h>
#import <AVKit/AVPlayerViewControllerContentViewDelegate.h>

@class AVPlayerController, AVPictureInPictureController, AVVolumeController, AVNowPlayingInfoController, AVSecondScreenContentViewConnection, AVPlayerViewController, AVPlaybackControlsView, AVTurboModePlaybackControlsPlaceholderView, AVObservationController, AVPlayerControllerTimeResolver, AVTimeFormatter, UIAlertController, AVRouteDetectorCoordinator, NSTimer, UIViewPropertyAnimator, AVScrollViewObserver, AVPlaybackControlsVisibilityControllerItem, NSArray, NSString;

@interface AVPlaybackControlsController : NSObject <AVTransportControlsViewDelegate, AVRoutePickerViewInternalDelegate, AVScrollViewObserverDelegate, AVPlayerViewControllerContentViewDelegate> {

	BOOL _playerViewControllerIsBeingTransitionedWithResizing;
	BOOL _playerViewControllerIsPresentingFullScreen;
	BOOL _playerViewControllerIsPresentedFullScreen;
	BOOL _playerViewControllerHasInvalidViewControllerHierarchy;
	BOOL _entersFullScreenWhenPlaybackBegins;
	BOOL _allowsEnteringFullScreen;
	BOOL _showsMinimalPlaybackControlsWhenEmbeddedInline;
	BOOL _inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
	BOOL _volumeControlsCanShowSlider;
	BOOL _showsPictureInPictureButton;
	BOOL _showsPlaybackControls;
	BOOL _showsPlaybackControlsWhenInline;
	BOOL _requiresLinearPlayback;
	BOOL _updatesNowPlayingInfoCenter;
	BOOL _showsDoneButtonWhenFullScreen;
	BOOL _playbackControlsIncludeTransportControls;
	BOOL _playbackControlsIncludeDisplayModeControls;
	BOOL _playbackControlsIncludeVolumeControls;
	BOOL _playbackControlsIncludeStartContentTransitionButtons;
	BOOL _startLeftwardContentTransitionButtonEnabled;
	BOOL _startRightwardContentTransitionButtonEnabled;
	BOOL _showsLoadingIndicator;
	BOOL _prefersVolumeSliderExpanded;
	BOOL _includesVideoGravityButton;
	BOOL _hasStartedUpdates;
	BOOL _coveringWindow;
	BOOL _contentViewBeingScrolledOrOffScreen;
	BOOL _hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
	BOOL _hasBecomeReadyToPlay;
	BOOL _multipleRoutesDetected;
	BOOL _resumingUpdates;
	BOOL _playbackSuspendedForScrubbing;
	BOOL _hasSeekableLiveStreamingContent;
	BOOL _scrubbingOrSeeking;
	BOOL _shouldIgnoreTimeResolverUpdates;
	BOOL _videoScaled;
	AVPlayerController* _playerController;
	long long _preferredUnobscuredArea;
	/*^block*/id _playButtonHandlerForLazyPlayerLoading;
	AVPictureInPictureController* _pictureInPictureController;
	AVVolumeController* _volumeController;
	AVNowPlayingInfoController* _nowPlayingInfoControllerIfLoaded;
	AVSecondScreenContentViewConnection* _secondScreenConnection;
	AVPlayerViewController* _playerViewController;
	AVPlaybackControlsView* _playbackControlsView;
	AVTurboModePlaybackControlsPlaceholderView* _turboModePlaybackControlsPlaceholderView;
	AVObservationController* _observationController;
	AVObservationController* _playbackControlsObservationController;
	AVPlayerControllerTimeResolver* _timeResolver;
	AVTimeFormatter* _elapsedTimeFormatter;
	AVTimeFormatter* _remainingTimeFormatter;
	UIAlertController* _routePickerAlertController;
	AVRouteDetectorCoordinator* _routeDetectorCoordinator;
	id _AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
	NSTimer* _loadingIndicatorTimer;
	UIViewPropertyAnimator* _collapseExpandSliderAnimator;
	AVScrollViewObserver* _scrollViewObserver;
	AVPlaybackControlsVisibilityControllerItem* _playbackControlsContainerVisibilityItem;
	AVPlaybackControlsVisibilityControllerItem* _volumeControlsContainerVisibilityItem;
	AVPlaybackControlsVisibilityControllerItem* _turboModePlaybackControlsVisibilityItem;
	NSArray* _allVisibilityControllerItems;
	long long _preferredPlaybackControlsLoadedStatus;
	double _loadingIndicatorTimerDelay;
	long long _timeControlStatus;
	long long _videoGravityButtonType;
	NSString* _uniqueIdentifer;
	CGRect _playbackViewFrame;

}

@property (nonatomic,__weak,readonly) AVPlayerViewController * playerViewController;                                                               //@synthesize playerViewController=_playerViewController - In the implementation block
@property (nonatomic,retain) AVPlaybackControlsView * playbackControlsView;                                                                        //@synthesize playbackControlsView=_playbackControlsView - In the implementation block
@property (assign,nonatomic,__weak) AVTurboModePlaybackControlsPlaceholderView * turboModePlaybackControlsPlaceholderView;                         //@synthesize turboModePlaybackControlsPlaceholderView=_turboModePlaybackControlsPlaceholderView - In the implementation block
@property (nonatomic,retain) AVNowPlayingInfoController * nowPlayingInfoControllerIfLoaded;                                                        //@synthesize nowPlayingInfoControllerIfLoaded=_nowPlayingInfoControllerIfLoaded - In the implementation block
@property (nonatomic,readonly) AVObservationController * observationController;                                                                    //@synthesize observationController=_observationController - In the implementation block
@property (nonatomic,retain) AVObservationController * playbackControlsObservationController;                                                      //@synthesize playbackControlsObservationController=_playbackControlsObservationController - In the implementation block
@property (nonatomic,retain) AVPlayerControllerTimeResolver * timeResolver;                                                                        //@synthesize timeResolver=_timeResolver - In the implementation block
@property (nonatomic,readonly) AVTimeFormatter * elapsedTimeFormatter;                                                                             //@synthesize elapsedTimeFormatter=_elapsedTimeFormatter - In the implementation block
@property (nonatomic,readonly) AVTimeFormatter * remainingTimeFormatter;                                                                           //@synthesize remainingTimeFormatter=_remainingTimeFormatter - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * routePickerAlertController;                                                                //@synthesize routePickerAlertController=_routePickerAlertController - In the implementation block
@property (nonatomic,retain) AVRouteDetectorCoordinator * routeDetectorCoordinator;                                                                //@synthesize routeDetectorCoordinator=_routeDetectorCoordinator - In the implementation block
@property (nonatomic,retain) id AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;                                                          //@synthesize AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver=_AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * loadingIndicatorTimer;                                                                               //@synthesize loadingIndicatorTimer=_loadingIndicatorTimer - In the implementation block
@property (assign,nonatomic,__weak) UIViewPropertyAnimator * collapseExpandSliderAnimator;                                                         //@synthesize collapseExpandSliderAnimator=_collapseExpandSliderAnimator - In the implementation block
@property (nonatomic,retain) AVScrollViewObserver * scrollViewObserver;                                                                            //@synthesize scrollViewObserver=_scrollViewObserver - In the implementation block
@property (nonatomic,readonly) AVPlaybackControlsVisibilityControllerItem * playbackControlsContainerVisibilityItem;                               //@synthesize playbackControlsContainerVisibilityItem=_playbackControlsContainerVisibilityItem - In the implementation block
@property (nonatomic,readonly) AVPlaybackControlsVisibilityControllerItem * volumeControlsContainerVisibilityItem;                                 //@synthesize volumeControlsContainerVisibilityItem=_volumeControlsContainerVisibilityItem - In the implementation block
@property (nonatomic,readonly) AVPlaybackControlsVisibilityControllerItem * turboModePlaybackControlsVisibilityItem;                               //@synthesize turboModePlaybackControlsVisibilityItem=_turboModePlaybackControlsVisibilityItem - In the implementation block
@property (nonatomic,readonly) NSArray * allVisibilityControllerItems;                                                                             //@synthesize allVisibilityControllerItems=_allVisibilityControllerItems - In the implementation block
@property (nonatomic,readonly) BOOL showsMediaSelectionButton; 
@property (nonatomic,readonly) BOOL showsSkipButtons; 
@property (nonatomic,readonly) BOOL showsStartContentTransitionButtons; 
@property (nonatomic,readonly) BOOL showsProminentPlayButton; 
@property (nonatomic,readonly) BOOL playButtonsShowPauseGlyph; 
@property (nonatomic,readonly) BOOL prominentPlayButtonCanShowPauseGlyph; 
@property (nonatomic,readonly) BOOL showsRoutePickerView; 
@property (nonatomic,readonly) BOOL includesDoneButton; 
@property (nonatomic,readonly) BOOL includesFullScreenButton; 
@property (nonatomic,readonly) BOOL showsTransportControls; 
@property (nonatomic,readonly) BOOL canShowLoadingIndicator; 
@property (getter=isSeekingEnabled,nonatomic,readonly) BOOL seekingEnabled; 
@property (assign,nonatomic) BOOL showsLoadingIndicator;                                                                                           //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (assign,nonatomic) BOOL prefersVolumeSliderExpanded;                                                                                     //@synthesize prefersVolumeSliderExpanded=_prefersVolumeSliderExpanded - In the implementation block
@property (assign,nonatomic) BOOL includesVideoGravityButton;                                                                                      //@synthesize includesVideoGravityButton=_includesVideoGravityButton - In the implementation block
@property (assign,nonatomic) BOOL hasStartedUpdates;                                                                                               //@synthesize hasStartedUpdates=_hasStartedUpdates - In the implementation block
@property (nonatomic,readonly) BOOL needsTimeResolver; 
@property (assign,getter=isCoveringWindow,nonatomic) BOOL coveringWindow;                                                                          //@synthesize coveringWindow=_coveringWindow - In the implementation block
@property (getter=isFullScreen,nonatomic,readonly) BOOL fullScreen; 
@property (assign,getter=isContentViewBeingScrolledOrOffScreen,nonatomic) BOOL contentViewBeingScrolledOrOffScreen;                                //@synthesize contentViewBeingScrolledOrOffScreen=_contentViewBeingScrolledOrOffScreen - In the implementation block
@property (assign,nonatomic) long long preferredPlaybackControlsLoadedStatus;                                                                      //@synthesize preferredPlaybackControlsLoadedStatus=_preferredPlaybackControlsLoadedStatus - In the implementation block
@property (assign,nonatomic) BOOL hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;                                                          //@synthesize hasPlaybackBegunSincePlayerControllerBecameReadyToPlay=_hasPlaybackBegunSincePlayerControllerBecameReadyToPlay - In the implementation block
@property (assign,nonatomic) BOOL hasBecomeReadyToPlay;                                                                                            //@synthesize hasBecomeReadyToPlay=_hasBecomeReadyToPlay - In the implementation block
@property (assign,nonatomic) BOOL multipleRoutesDetected;                                                                                          //@synthesize multipleRoutesDetected=_multipleRoutesDetected - In the implementation block
@property (nonatomic,readonly) double minimumTime; 
@property (nonatomic,readonly) double maximumTime; 
@property (nonatomic,readonly) double targetTime; 
@property (nonatomic,readonly) double currentTime; 
@property (assign,nonatomic) double loadingIndicatorTimerDelay;                                                                                    //@synthesize loadingIndicatorTimerDelay=_loadingIndicatorTimerDelay - In the implementation block
@property (assign,getter=isResumingUpdates,nonatomic) BOOL resumingUpdates;                                                                        //@synthesize resumingUpdates=_resumingUpdates - In the implementation block
@property (assign,getter=isPlaybackSuspendedForScrubbing,nonatomic) BOOL playbackSuspendedForScrubbing;                                            //@synthesize playbackSuspendedForScrubbing=_playbackSuspendedForScrubbing - In the implementation block
@property (assign,nonatomic) long long timeControlStatus;                                                                                          //@synthesize timeControlStatus=_timeControlStatus - In the implementation block
@property (assign,nonatomic) BOOL hasSeekableLiveStreamingContent;                                                                                 //@synthesize hasSeekableLiveStreamingContent=_hasSeekableLiveStreamingContent - In the implementation block
@property (assign,getter=isScrubbingOrSeeking,nonatomic) BOOL scrubbingOrSeeking;                                                                  //@synthesize scrubbingOrSeeking=_scrubbingOrSeeking - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreTimeResolverUpdates;                                                                                 //@synthesize shouldIgnoreTimeResolverUpdates=_shouldIgnoreTimeResolverUpdates - In the implementation block
@property (assign,nonatomic) long long videoGravityButtonType;                                                                                     //@synthesize videoGravityButtonType=_videoGravityButtonType - In the implementation block
@property (assign,nonatomic) CGRect playbackViewFrame;                                                                                             //@synthesize playbackViewFrame=_playbackViewFrame - In the implementation block
@property (assign,getter=isVideoScaled,nonatomic) BOOL videoScaled;                                                                                //@synthesize videoScaled=_videoScaled - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifer;                                                                                         //@synthesize uniqueIdentifer=_uniqueIdentifer - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerController * playerController;                                                                         //@synthesize playerController=_playerController - In the implementation block
@property (assign,nonatomic) BOOL playerViewControllerIsBeingTransitionedWithResizing;                                                             //@synthesize playerViewControllerIsBeingTransitionedWithResizing=_playerViewControllerIsBeingTransitionedWithResizing - In the implementation block
@property (assign,nonatomic) BOOL playerViewControllerIsPresentingFullScreen;                                                                      //@synthesize playerViewControllerIsPresentingFullScreen=_playerViewControllerIsPresentingFullScreen - In the implementation block
@property (assign,nonatomic) BOOL playerViewControllerIsPresentedFullScreen;                                                                       //@synthesize playerViewControllerIsPresentedFullScreen=_playerViewControllerIsPresentedFullScreen - In the implementation block
@property (assign,nonatomic) BOOL playerViewControllerHasInvalidViewControllerHierarchy;                                                           //@synthesize playerViewControllerHasInvalidViewControllerHierarchy=_playerViewControllerHasInvalidViewControllerHierarchy - In the implementation block
@property (assign,nonatomic) BOOL entersFullScreenWhenPlaybackBegins;                                                                              //@synthesize entersFullScreenWhenPlaybackBegins=_entersFullScreenWhenPlaybackBegins - In the implementation block
@property (nonatomic,readonly) BOOL shouldEnterFullScreenWhenPlaybackBegins; 
@property (assign,nonatomic) long long preferredUnobscuredArea;                                                                                    //@synthesize preferredUnobscuredArea=_preferredUnobscuredArea - In the implementation block
@property (assign,nonatomic) BOOL allowsEnteringFullScreen;                                                                                        //@synthesize allowsEnteringFullScreen=_allowsEnteringFullScreen - In the implementation block
@property (assign,nonatomic) BOOL showsMinimalPlaybackControlsWhenEmbeddedInline;                                                                  //@synthesize showsMinimalPlaybackControlsWhenEmbeddedInline=_showsMinimalPlaybackControlsWhenEmbeddedInline - In the implementation block
@property (assign,nonatomic) BOOL inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;                                                       //@synthesize inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused=_inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused - In the implementation block
@property (assign,nonatomic) BOOL volumeControlsCanShowSlider;                                                                                     //@synthesize volumeControlsCanShowSlider=_volumeControlsCanShowSlider - In the implementation block
@property (assign,nonatomic) BOOL showsPictureInPictureButton;                                                                                     //@synthesize showsPictureInPictureButton=_showsPictureInPictureButton - In the implementation block
@property (assign,nonatomic) BOOL showsPlaybackControls;                                                                                           //@synthesize showsPlaybackControls=_showsPlaybackControls - In the implementation block
@property (assign,nonatomic) BOOL showsPlaybackControlsWhenInline;                                                                                 //@synthesize showsPlaybackControlsWhenInline=_showsPlaybackControlsWhenInline - In the implementation block
@property (assign,nonatomic) BOOL requiresLinearPlayback;                                                                                          //@synthesize requiresLinearPlayback=_requiresLinearPlayback - In the implementation block
@property (assign,nonatomic) BOOL updatesNowPlayingInfoCenter;                                                                                     //@synthesize updatesNowPlayingInfoCenter=_updatesNowPlayingInfoCenter - In the implementation block
@property (assign,nonatomic) BOOL showsDoneButtonWhenFullScreen;                                                                                   //@synthesize showsDoneButtonWhenFullScreen=_showsDoneButtonWhenFullScreen - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsIncludeTransportControls;                                                                        //@synthesize playbackControlsIncludeTransportControls=_playbackControlsIncludeTransportControls - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsIncludeDisplayModeControls;                                                                      //@synthesize playbackControlsIncludeDisplayModeControls=_playbackControlsIncludeDisplayModeControls - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsIncludeVolumeControls;                                                                           //@synthesize playbackControlsIncludeVolumeControls=_playbackControlsIncludeVolumeControls - In the implementation block
@property (assign,nonatomic) BOOL playbackControlsIncludeStartContentTransitionButtons;                                                            //@synthesize playbackControlsIncludeStartContentTransitionButtons=_playbackControlsIncludeStartContentTransitionButtons - In the implementation block
@property (nonatomic,copy) id playButtonHandlerForLazyPlayerLoading;                                                                               //@synthesize playButtonHandlerForLazyPlayerLoading=_playButtonHandlerForLazyPlayerLoading - In the implementation block
@property (assign,getter=isStartLeftwardContentTransitionButtonEnabled,nonatomic) BOOL startLeftwardContentTransitionButtonEnabled;                //@synthesize startLeftwardContentTransitionButtonEnabled=_startLeftwardContentTransitionButtonEnabled - In the implementation block
@property (assign,getter=isStartRightwardContentTransitionButtonEnabled,nonatomic) BOOL startRightwardContentTransitionButtonEnabled;              //@synthesize startRightwardContentTransitionButtonEnabled=_startRightwardContentTransitionButtonEnabled - In the implementation block
@property (nonatomic,retain) AVPictureInPictureController * pictureInPictureController;                                                            //@synthesize pictureInPictureController=_pictureInPictureController - In the implementation block
@property (nonatomic,readonly) AVVolumeController * volumeController;                                                                              //@synthesize volumeController=_volumeController - In the implementation block
@property (nonatomic,retain) AVSecondScreenContentViewConnection * secondScreenConnection;                                                         //@synthesize secondScreenConnection=_secondScreenConnection - In the implementation block
@property (nonatomic,readonly) BOOL tapGestureRecognizersCanReceiveTouches; 
@property (nonatomic,readonly) BOOL entersFullScreenWhenTapped; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingFullScreen;
+(id)keyPathsForValuesAffectingIncludesDoneButton;
+(id)keyPathsForValuesAffectingIncludesFullScreenButton;
+(id)keyPathsForValuesAffectingShowsRoutePickerView;
+(id)keyPathsForValuesAffectingShowsProminentPlayButton;
+(id)keyPathsForValuesAffectingProminentPlayButtonCanShowPauseGlyph;
+(id)keyPathsForValuesAffectingShowsTransportControls;
+(id)keyPathsForValuesAffectingShouldEnterFullScreenWhenPlaybackBegins;
+(id)keyPathsForValuesAffectingShowsMediaSelectionButton;
+(id)keyPathsForValuesAffectingCurrentTime;
+(id)keyPathsForValuesAffectingMinimumTime;
+(id)keyPathsForValuesAffectingMaximumTime;
+(id)keyPathsForValuesAffectingSeekingEnabled;
+(id)keyPathsForValuesAffectingShowsSkipButtons;
+(id)keyPathsForValuesAffectingShowsStartContentTransitionsButtons;
+(id)keyPathsForValuesAffectingCanShowLoadingIndicator;
+(id)keyPathsForValuesAffectingPlayButtonsShowPauseGlyph;
+(id)keyPathsForValuesAffectingNeedsTimeResolver;
-(long long)timeControlStatus;
-(BOOL)multipleRoutesDetected;
-(AVPictureInPictureController *)pictureInPictureController;
-(AVVolumeController *)volumeController;
-(void)setMultipleRoutesDetected:(BOOL)arg1 ;
-(BOOL)isVideoScaled;
-(void)setVideoScaled:(BOOL)arg1 ;
-(void)scrollViewObserverValuesDidChange:(id)arg1 ;
-(AVObservationController *)observationController;
-(AVSecondScreenContentViewConnection *)secondScreenConnection;
-(void)setSecondScreenConnection:(AVSecondScreenContentViewConnection *)arg1 ;
-(BOOL)allowsEnteringFullScreen;
-(void)setAllowsEnteringFullScreen:(BOOL)arg1 ;
-(BOOL)showsMinimalPlaybackControlsWhenEmbeddedInline;
-(void)setShowsMinimalPlaybackControlsWhenEmbeddedInline:(BOOL)arg1 ;
-(BOOL)playbackControlsIncludeTransportControls;
-(BOOL)playbackControlsIncludeDisplayModeControls;
-(BOOL)volumeControlsCanShowSlider;
-(void)setVolumeControlsCanShowSlider:(BOOL)arg1 ;
-(void)setEntersFullScreenWhenPlaybackBegins:(BOOL)arg1 ;
-(id)playButtonHandlerForLazyPlayerLoading;
-(void)setPlayButtonHandlerForLazyPlayerLoading:(id)arg1 ;
-(BOOL)updatesNowPlayingInfoCenter;
-(BOOL)entersFullScreenWhenPlaybackBegins;
-(BOOL)playbackControlsIncludeVolumeControls;
-(BOOL)entersFullScreenWhenTapped;
-(long long)preferredUnobscuredArea;
-(void)setPreferredUnobscuredArea:(long long)arg1 ;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(double)targetTime;
-(long long)playerViewControllerContentViewPreferredPlaybackControlsLoadedStatus:(id)arg1 ;
-(void)playerViewControllerContentView:(id)arg1 willLoadPlaybackControlsView:(id)arg2 ;
-(void)playerViewControllerContentView:(id)arg1 willLoadTurboModePlaceholderView:(id)arg2 ;
-(BOOL)playerViewControllerContentViewIsPlayingOnSecondScreen:(id)arg1 ;
-(void)playerViewControllerContentViewDidLayoutSubviews:(id)arg1 ;
-(void)playerViewControllerContentViewDidMoveToSuperviewOrWindow:(id)arg1 ;
-(BOOL)playerViewControllerContentViewShouldApplyAutomaticVideoGravity:(id)arg1 ;
-(UIEdgeInsets)playerViewControllerContentViewEdgeInsetsForLetterboxedVideo:(id)arg1 ;
-(void)playerViewControllerContentViewDidChangeVideoGravity:(id)arg1 ;
-(BOOL)playerViewControllerContentViewHasActiveTransition:(id)arg1 ;
-(BOOL)playerViewControllerContentViewIsBeingTransitionedFromFullScreen:(id)arg1 ;
-(unsigned long long)overrideRouteSharingPolicyForRoutePickerView:(id)arg1 ;
-(id)overrideRoutingContextUIDForRoutePickerView:(id)arg1 ;
-(void)routePickerViewWillBeginPresentingRoutes:(id)arg1 ;
-(void)routePickerViewDidEndPresentingRoutes:(id)arg1 ;
-(void)transportControlsNeedsLayoutIfNeeded:(id)arg1 ;
-(void)transportControls:(id)arg1 scrubberDidBeginScrubbing:(id)arg2 ;
-(void)transportControls:(id)arg1 scrubberDidScrub:(id)arg2 ;
-(void)transportControls:(id)arg1 scrubberDidEndScrubbing:(id)arg2 ;
-(id)initWithPlayerViewController:(id)arg1 ;
-(void)startUpdatesIfNeeded;
-(void)setPrefersVolumeSliderExpanded:(BOOL)arg1 ;
-(void)setPlayerViewControllerIsBeingTransitionedWithResizing:(BOOL)arg1 ;
-(void)setShowsPlaybackControlsWhenInline:(BOOL)arg1 ;
-(void)setContentViewBeingScrolledOrOffScreen:(BOOL)arg1 ;
-(BOOL)includesDoneButton;
-(BOOL)includesFullScreenButton;
-(BOOL)showsRoutePickerView;
-(BOOL)showsProminentPlayButton;
-(BOOL)prominentPlayButtonCanShowPauseGlyph;
-(BOOL)showsTransportControls;
-(BOOL)shouldEnterFullScreenWhenPlaybackBegins;
-(BOOL)showsMediaSelectionButton;
-(BOOL)isSeekingEnabled;
-(BOOL)showsSkipButtons;
-(BOOL)showsStartContentTransitionButtons;
-(BOOL)canShowLoadingIndicator;
-(BOOL)playButtonsShowPauseGlyph;
-(BOOL)needsTimeResolver;
-(BOOL)tapGestureRecognizersCanReceiveTouches;
-(void)playbackControlsViewDidLoad:(id)arg1 ;
-(void)turboModePlaybackControlsPlaceholderViewDidLoad:(id)arg1 ;
-(void)secondScreenConnectionDidBecomeActive:(id)arg1 ;
-(void)secondScreenConnectionDidResignActive:(id)arg1 ;
-(void)handleVolumeChange:(id)arg1 ;
-(void)handleCurrentRouteSupportsVolumeControlChanged:(id)arg1 ;
-(void)volumeSliderValueDidChange:(id)arg1 ;
-(void)volumeButtonTapTriggered:(id)arg1 ;
-(void)volumeButtonLongPressTriggered:(id)arg1 ;
-(void)volumeButtonPanChanged:(id)arg1 ;
-(BOOL)_prefersVolumeSliderExpandedAutomatically;
-(void)_showOrHideVolumeSlider;
-(void)_updateVolumeButtonGlyph;
-(id)_volumeButtonMicaPackageState;
-(void)_updateVolumeSliderValueWithSystemVolume:(float)arg1 animated:(BOOL)arg2 ;
-(void)prominentPlayButtonTouchUpInside:(id)arg1 ;
-(void)skipButtonTouchUpInside:(id)arg1 ;
-(void)skipButtonLongPressTriggered:(id)arg1 ;
-(void)skipButtonLongPressEnded:(id)arg1 ;
-(void)skipButtonForcePressChanged:(id)arg1 ;
-(void)startContentTransitionButtonTouchUpInside:(id)arg1 ;
-(void)_bindEnabledStateOfControls:(id)arg1 toKeyPath:(id)arg2 ;
-(void)_bindInclusionOfControlItems:(id)arg1 toKeyPath:(id)arg2 ;
-(BOOL)_hasVisibilityControllerItemThatPrefersVisible;
-(void)_observeBoolForKeyPath:(id)arg1 usingKeyValueObservationController:(id)arg2 observationHandler:(/*^block*/id)arg3 ;
-(void)_seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3 ;
-(void)_updatePlaybackControlsVisibleAndObservingUpdates;
-(void)_startObservingForPlaybackViewUpdates;
-(void)_startObservingPotentiallyUnimplementedPlayerControllerProperties;
-(void)_updateSkipButtonsEnableLongPress;
-(void)_updateContainerInclusion;
-(void)_updateOrCreateTimeResolverIfNeeded;
-(void)_updateScrubberAndTimeLabels;
-(void)_updateVideoGravityButtonType;
-(void)_updateHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(BOOL)arg1 playing:(BOOL)arg2 userDidEndTappingProminentPlayButton:(BOOL)arg3 ;
-(void)_updatePrefersInspectionSuspended;
-(void)_updateNowPlayingInfoCenter;
-(void)_updatePreferredPlaybackControlsLoadedStatusNotifyingContentViewOfChanges:(BOOL)arg1 ;
-(void)_updateIsBeingScrolledOrOffScreen;
-(void)_updateEdgeInsetsForLetterboxedContentInContentView:(id)arg1 ;
-(void)_updateSecondScreenConnectionReadyToConnect;
-(BOOL)playerViewControllerIsBeingTransitionedWithResizing;
-(BOOL)playerViewControllerIsPresentingFullScreen;
-(void)setPlayerViewControllerIsPresentingFullScreen:(BOOL)arg1 ;
-(BOOL)playerViewControllerIsPresentedFullScreen;
-(void)setPlayerViewControllerIsPresentedFullScreen:(BOOL)arg1 ;
-(BOOL)playerViewControllerHasInvalidViewControllerHierarchy;
-(void)setPlayerViewControllerHasInvalidViewControllerHierarchy:(BOOL)arg1 ;
-(BOOL)inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
-(void)setInlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused:(BOOL)arg1 ;
-(BOOL)showsPictureInPictureButton;
-(void)setShowsPictureInPictureButton:(BOOL)arg1 ;
-(BOOL)showsPlaybackControlsWhenInline;
-(BOOL)showsDoneButtonWhenFullScreen;
-(void)setShowsDoneButtonWhenFullScreen:(BOOL)arg1 ;
-(BOOL)playbackControlsIncludeStartContentTransitionButtons;
-(void)setPlaybackControlsIncludeStartContentTransitionButtons:(BOOL)arg1 ;
-(BOOL)isStartLeftwardContentTransitionButtonEnabled;
-(void)setStartLeftwardContentTransitionButtonEnabled:(BOOL)arg1 ;
-(BOOL)isStartRightwardContentTransitionButtonEnabled;
-(void)setStartRightwardContentTransitionButtonEnabled:(BOOL)arg1 ;
-(void)setPictureInPictureController:(AVPictureInPictureController *)arg1 ;
-(AVNowPlayingInfoController *)nowPlayingInfoControllerIfLoaded;
-(void)setNowPlayingInfoControllerIfLoaded:(AVNowPlayingInfoController *)arg1 ;
-(AVPlaybackControlsView *)playbackControlsView;
-(void)setPlaybackControlsView:(AVPlaybackControlsView *)arg1 ;
-(AVTurboModePlaybackControlsPlaceholderView *)turboModePlaybackControlsPlaceholderView;
-(void)setTurboModePlaybackControlsPlaceholderView:(AVTurboModePlaybackControlsPlaceholderView *)arg1 ;
-(AVObservationController *)playbackControlsObservationController;
-(void)setPlaybackControlsObservationController:(AVObservationController *)arg1 ;
-(AVPlayerControllerTimeResolver *)timeResolver;
-(void)setTimeResolver:(AVPlayerControllerTimeResolver *)arg1 ;
-(AVTimeFormatter *)elapsedTimeFormatter;
-(AVTimeFormatter *)remainingTimeFormatter;
-(UIAlertController *)routePickerAlertController;
-(void)setRoutePickerAlertController:(UIAlertController *)arg1 ;
-(AVRouteDetectorCoordinator *)routeDetectorCoordinator;
-(void)setRouteDetectorCoordinator:(AVRouteDetectorCoordinator *)arg1 ;
-(id)AVRouteDetectorCoordinatorMultipleRoutesDetectedObserver;
-(void)setAVRouteDetectorCoordinatorMultipleRoutesDetectedObserver:(id)arg1 ;
-(NSTimer *)loadingIndicatorTimer;
-(void)setLoadingIndicatorTimer:(NSTimer *)arg1 ;
-(UIViewPropertyAnimator *)collapseExpandSliderAnimator;
-(void)setCollapseExpandSliderAnimator:(UIViewPropertyAnimator *)arg1 ;
-(AVScrollViewObserver *)scrollViewObserver;
-(void)setScrollViewObserver:(AVScrollViewObserver *)arg1 ;
-(AVPlaybackControlsVisibilityControllerItem *)playbackControlsContainerVisibilityItem;
-(AVPlaybackControlsVisibilityControllerItem *)volumeControlsContainerVisibilityItem;
-(AVPlaybackControlsVisibilityControllerItem *)turboModePlaybackControlsVisibilityItem;
-(NSArray *)allVisibilityControllerItems;
-(BOOL)prefersVolumeSliderExpanded;
-(BOOL)includesVideoGravityButton;
-(void)setIncludesVideoGravityButton:(BOOL)arg1 ;
-(BOOL)hasStartedUpdates;
-(void)setHasStartedUpdates:(BOOL)arg1 ;
-(BOOL)isCoveringWindow;
-(void)setCoveringWindow:(BOOL)arg1 ;
-(BOOL)isContentViewBeingScrolledOrOffScreen;
-(long long)preferredPlaybackControlsLoadedStatus;
-(void)setPreferredPlaybackControlsLoadedStatus:(long long)arg1 ;
-(BOOL)hasPlaybackBegunSincePlayerControllerBecameReadyToPlay;
-(void)setHasPlaybackBegunSincePlayerControllerBecameReadyToPlay:(BOOL)arg1 ;
-(BOOL)hasBecomeReadyToPlay;
-(void)setHasBecomeReadyToPlay:(BOOL)arg1 ;
-(double)loadingIndicatorTimerDelay;
-(void)setLoadingIndicatorTimerDelay:(double)arg1 ;
-(BOOL)isResumingUpdates;
-(void)setResumingUpdates:(BOOL)arg1 ;
-(BOOL)isPlaybackSuspendedForScrubbing;
-(void)setPlaybackSuspendedForScrubbing:(BOOL)arg1 ;
-(BOOL)hasSeekableLiveStreamingContent;
-(void)setHasSeekableLiveStreamingContent:(BOOL)arg1 ;
-(BOOL)isScrubbingOrSeeking;
-(void)setScrubbingOrSeeking:(BOOL)arg1 ;
-(BOOL)shouldIgnoreTimeResolverUpdates;
-(void)setShouldIgnoreTimeResolverUpdates:(BOOL)arg1 ;
-(long long)videoGravityButtonType;
-(void)setVideoGravityButtonType:(long long)arg1 ;
-(CGRect)playbackViewFrame;
-(void)setPlaybackViewFrame:(CGRect)arg1 ;
-(NSString *)uniqueIdentifer;
-(AVPlayerViewController *)playerViewController;
-(double)maximumTime;
-(double)minimumTime;
-(BOOL)showsPlaybackControls;
-(void)setUpdatesNowPlayingInfoCenter:(BOOL)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(void)setShowsPlaybackControls:(BOOL)arg1 ;
-(BOOL)isFullScreen;
-(void)setTimeControlStatus:(long long)arg1 ;
-(void)dealloc;
-(double)currentTime;
-(void)setRequiresLinearPlayback:(BOOL)arg1 ;
-(void)setPlaybackControlsIncludeTransportControls:(BOOL)arg1 ;
-(void)setPlaybackControlsIncludeVolumeControls:(BOOL)arg1 ;
-(void)setPlaybackControlsIncludeDisplayModeControls:(BOOL)arg1 ;
-(BOOL)requiresLinearPlayback;
@end
