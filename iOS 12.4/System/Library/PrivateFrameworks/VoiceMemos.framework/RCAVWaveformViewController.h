/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:53 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/RCWaveformViewDelegate.h>
#import <libobjc.A.dylib/RCPreviewControllerObserver.h>
#import <libobjc.A.dylib/RCCaptureSessionObserver.h>

@protocol RCAVWaveformViewControllerDelegate;
@class RCPreviewController, RCCaptureSession, RCCompositionController, NSTimer, RCHitTestForwardingView, RCWaveformDataSource, RCWaveformViewController, RCAVState, RCLayoutMetrics, NSString;

@interface RCAVWaveformViewController : UIViewController <RCWaveformViewDelegate, RCPreviewControllerObserver, RCCaptureSessionObserver> {

	double _defaultVisibleDuration;
	long long _batchUpdatingDisplayableTimesCount;
	BOOL _needsUpdateDisplayableTime;
	BOOL _showingSelectionOverlayEnabled;
	BOOL _didJumpTime;
	RCPreviewController* _activePreviewController;
	RCCaptureSession* _activeCaptureSession;
	RCCompositionController* _activeCaptureCompositionController;
	NSTimer* _autoscrollPlaybackTimer;
	RCHitTestForwardingView* _leftForwardingView;
	RCHitTestForwardingView* _rightForwardingView;
	BOOL _currentTimeTracksCapturedEndPoint;
	BOOL _autocenterCurrentTimeIndicatorAlways;
	BOOL _clipsTimeMarkersToDuration;
	BOOL _userInteractionEnabled;
	BOOL _selectionOverlayVisible;
	BOOL _isEditMode;
	BOOL _isOverview;
	RCWaveformDataSource* _waveformDataSource;
	id<RCAVWaveformViewControllerDelegate> _delegate;
	RCWaveformViewController* _waveformViewController;
	RCAVState* _AVState;
	double _nextPreviewStartTime;
	double _currentTime;
	double _duration;
	RCLayoutMetrics* _layoutMetrics;
	double _maximumSelectionDuration;
	SCD_Struct_RC4 _highlightTimeRange;

}

@property (assign,nonatomic) double duration;                                                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL isEditMode;                                                              //@synthesize isEditMode=_isEditMode - In the implementation block
@property (assign,nonatomic) BOOL isOverview;                                                              //@synthesize isOverview=_isOverview - In the implementation block
@property (nonatomic,retain) RCWaveformDataSource * waveformDataSource;                                    //@synthesize waveformDataSource=_waveformDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<RCAVWaveformViewControllerDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RCWaveformViewController * waveformViewController;                            //@synthesize waveformViewController=_waveformViewController - In the implementation block
@property (nonatomic,retain) RCCaptureSession * activeCaptureSession;                                      //@synthesize activeCaptureSession=_activeCaptureSession - In the implementation block
@property (nonatomic,retain) RCPreviewController * activePreviewController;                                //@synthesize activePreviewController=_activePreviewController - In the implementation block
@property (nonatomic,readonly) RCAVState * AVState;                                                        //@synthesize AVState=_AVState - In the implementation block
@property (nonatomic,readonly) double nextPreviewStartTime;                                                //@synthesize nextPreviewStartTime=_nextPreviewStartTime - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RC4 nextPreviewTimeRange; 
@property (assign,nonatomic) SCD_Struct_RC4 visibleTimeRange; 
@property (assign,nonatomic) SCD_Struct_RC4 highlightTimeRange;                                            //@synthesize highlightTimeRange=_highlightTimeRange - In the implementation block
@property (assign,nonatomic) double currentTime;                                                           //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) BOOL currentTimeTracksCapturedEndPoint;                                       //@synthesize currentTimeTracksCapturedEndPoint=_currentTimeTracksCapturedEndPoint - In the implementation block
@property (nonatomic,readonly) double waveformBottomLineInset; 
@property (nonatomic,readonly) double currentTimeIndicatorCoordinate; 
@property (nonatomic,retain) RCLayoutMetrics * layoutMetrics;                                              //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (assign,nonatomic) BOOL autocenterCurrentTimeIndicatorAlways;                                    //@synthesize autocenterCurrentTimeIndicatorAlways=_autocenterCurrentTimeIndicatorAlways - In the implementation block
@property (assign,nonatomic) BOOL clipsTimeMarkersToDuration;                                              //@synthesize clipsTimeMarkersToDuration=_clipsTimeMarkersToDuration - In the implementation block
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled;                  //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (getter=isSelectionOverlayVisible,nonatomic,readonly) BOOL selectionOverlayVisible;              //@synthesize selectionOverlayVisible=_selectionOverlayVisible - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RC4 selectedTimeRange; 
@property (assign,nonatomic) double maximumSelectionDuration;                                              //@synthesize maximumSelectionDuration=_maximumSelectionDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCurrentTime:(double)arg1 ;
-(void)captureSession:(id)arg1 rateDidChangeToRate:(float)arg2 ;
-(void)captureSession:(id)arg1 destinationFragmentDurationDidChangeToDuration:(double)arg2 captureTime:(double)arg3 usingDisplayLinkSmoothing:(BOOL)arg4 ;
-(void)captureSession:(id)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(RCAVState *)AVState;
-(void)previewController:(id)arg1 playbackDidStopPlayingWithError:(id)arg2 ;
-(void)previewController:(id)arg1 playbackDidBeginWithRate:(float)arg2 ;
-(void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2 ;
-(void)previewController:(id)arg1 playbackTimeDidUpdateToCurrentTime:(double)arg2 didJumpTime:(BOOL)arg3 ;
-(void)setAVState:(RCAVState *)arg1 ;
-(RCCaptureSession *)activeCaptureSession;
-(void)_setWaveformDataSource:(id)arg1 initialTime:(double)arg2 ;
-(RCWaveformViewController *)waveformViewController;
-(id)_selectionOverlay;
-(CGRect)annotatedWaveformRectForLayoutBounds:(CGRect)arg1 ;
-(void)_updateCurrentTimeForCapturedInputAtTime:(double)arg1 ;
-(RCWaveformDataSource *)waveformDataSource;
-(void)_updateDisplayableTimesWithBlock:(/*^block*/id)arg1 ;
-(void)_updateInterfaceForAVState;
-(void)reloadWaveformDataSource:(id)arg1 initialTime:(double)arg2 ;
-(SCD_Struct_RC4)selectedTimeRange;
-(void)setVisibleTimeRange:(SCD_Struct_RC4)arg1 ;
-(SCD_Struct_RC4)visibleTimeRange;
-(void)setHighlightTimeRange:(SCD_Struct_RC4)arg1 ;
-(SCD_Struct_RC4)highlightTimeRange;
-(void)_didUpdateDisplayableTime;
-(CGRect)waveformRectForLayoutBounds:(CGRect)arg1 ;
-(unsigned long long)_currentTimeDisplayOptionsIgnoringSelectionOverlayState:(BOOL)arg1 ;
-(double)currentTimeIndicatorCoordinate;
-(void)setLayoutMetrics:(RCLayoutMetrics *)arg1 ;
-(unsigned long long)_currentTimeDisplayOptions;
-(void)_beginShowingSelectionOverlayAndEnableInsertMode:(BOOL)arg1 ;
-(void)_endShowingSelectionOverlayWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setSelectedTimeRange:(SCD_Struct_RC4)arg1 animationDuration:(double)arg2 ;
-(double)maximumSelectionDuration;
-(void)setMaximumSelectionDuration:(double)arg1 ;
-(RCPreviewController *)activePreviewController;
-(void)setActiveCaptureSession:(RCCaptureSession *)arg1 ;
-(void)_setSelectionOverlayEnabled:(BOOL)arg1 ;
-(BOOL)isOverview;
-(void)resetSelectedTimeRangeToFullDuration;
-(double)nextPreviewStartTime;
-(void)waveformViewController:(id)arg1 didScrubToTime:(double)arg2 finished:(BOOL)arg3 ;
-(void)waveformViewControllerWillBeginEditingSelectedTimeRange:(id)arg1 ;
-(void)waveformViewControllerDidEndEditingSelectedTimeRange:(id)arg1 ;
-(void)waveformViewController:(id)arg1 didChangeToSelectedTimeRange:(SCD_Struct_RC4)arg2 ;
-(void)previewController:(id)arg1 playbackTimeDidJumpWithPreviousTime:(double)arg2 ;
-(id)initWithWaveformDataSource:(id)arg1 isOverview:(BOOL)arg2 isLockScreen:(BOOL)arg3 delegate:(id)arg4 ;
-(void)setActivePreviewController:(RCPreviewController *)arg1 ;
-(void)setIsEditMode:(BOOL)arg1 ;
-(SCD_Struct_RC4)nextPreviewTimeRange;
-(SCD_Struct_RC4)setHighlightTimeRange;
-(double)waveformBottomLineInset;
-(void)setAutocenterCurrentTimeIndicatorAlways:(BOOL)arg1 ;
-(void)setClipsTimeMarkersToDuration:(BOOL)arg1 ;
-(void)showSelectionOverlayAndEnableInsertMode:(BOOL)arg1 ;
-(void)hidSelectionOverlayWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)triggerWaveformAutoScroll:(id)arg1 ;
-(void)setWaveformDataSource:(RCWaveformDataSource *)arg1 ;
-(void)setWaveformViewController:(RCWaveformViewController *)arg1 ;
-(BOOL)currentTimeTracksCapturedEndPoint;
-(void)setCurrentTimeTracksCapturedEndPoint:(BOOL)arg1 ;
-(RCLayoutMetrics *)layoutMetrics;
-(BOOL)autocenterCurrentTimeIndicatorAlways;
-(BOOL)clipsTimeMarkersToDuration;
-(BOOL)isSelectionOverlayVisible;
-(BOOL)isEditMode;
-(void)setIsOverview:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<RCAVWaveformViewControllerDelegate>)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(id<RCAVWaveformViewControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)setDuration:(double)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(double)duration;
-(BOOL)isUserInteractionEnabled;
-(double)currentTime;
@end

