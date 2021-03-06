/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CFXEffectEditorViewDelegate.h>
#import <libobjc.A.dylib/CFXFullScreenTextEditViewControllerDelegate.h>
#import <libobjc.A.dylib/JTPassThroughContainerViewDelegate.h>
#import <libobjc.A.dylib/CAMControlVisibilityUpdateDelegate.h>
#import <libobjc.A.dylib/CAMZoomControlDelegate.h>
#import <libobjc.A.dylib/CAMZoomSliderDelegate.h>
#import <libobjc.A.dylib/CFXLiveCaptureViewControllerDelegate.h>
#import <libobjc.A.dylib/CFXCameraControlsViewControllerDelegate.h>

@protocol CFXCaptureViewControllerDelegate, OS_dispatch_group;
@class CFXControlsViewController, CFXEffectComposition, UIView, NSLayoutConstraint, CAMTopBar, CAMElapsedTimeView, PUReviewScreenDoneButton, CAMFlashButton, CFXViewfinderFlipTransition, CAMSnapshotView, CAMZoomControl, CAMZoomSlider, CFXEffectBrowserContentPresenterViewController, JTPassThroughContainerView, CFXLiveCaptureViewController, NSObject, CFXEffectEditorView, NSString;

@interface CFXCaptureViewController : UIViewController <CFXEffectEditorViewDelegate, CFXFullScreenTextEditViewControllerDelegate, JTPassThroughContainerViewDelegate, CAMControlVisibilityUpdateDelegate, CAMZoomControlDelegate, CAMZoomSliderDelegate, CFXLiveCaptureViewControllerDelegate, CFXCameraControlsViewControllerDelegate> {

	BOOL _isRecording;
	BOOL _observingOrientationChanges;
	BOOL _dockIsMagnified;
	BOOL _captureContainerUncroppedFrameWasCalculatedWithContentRect;
	BOOL _cameraIsFlipping;
	id<CFXCaptureViewControllerDelegate> _delegate;
	CFXControlsViewController* _cameraControls;
	long long _captureMode;
	CFXEffectComposition* _composition;
	UIView* _cameraControlsContainerView;
	NSLayoutConstraint* _topBarTopConstraint;
	NSLayoutConstraint* _topBarContaineHeightConstraint;
	CAMTopBar* _topBar;
	UIView* _liveCaptureContainer;
	CAMElapsedTimeView* _elapsedTimeView;
	PUReviewScreenDoneButton* _doneButton;
	CAMFlashButton* _flashButton;
	CFXViewfinderFlipTransition* _viewfinderFlipTransition;
	CAMSnapshotView* _liveCaptureContainerSnapshot;
	CAMZoomControl* _zoomControl;
	CAMZoomSlider* _zoomSlider;
	double _zoomFactorAtPinchStart;
	double _zoomFactor;
	NSLayoutConstraint* _captureControlsContainerHeightConstraint;
	NSLayoutConstraint* _captureControlsContainerWidthConstraint;
	NSLayoutConstraint* _captureControlsContainerTrailingConstraint;
	NSLayoutConstraint* _captureControlsContainerLeadingConstraint;
	NSLayoutConstraint* _captureControlsContainerTopConstraint;
	unsigned long long _appliedDirectOverlayEditingGestures;
	double _dockMagnifiedHeightDelta;
	CFXEffectBrowserContentPresenterViewController* _effectBrowserContentPresenterViewController;
	JTPassThroughContainerView* _liveCaptureContainerContainer;
	JTPassThroughContainerView* _effectEditorContainerView;
	CFXLiveCaptureViewController* _cameraViewController;
	NSObject*<OS_dispatch_group> _editingOverlayWithGestureGroup;
	CFXEffectEditorView* _effectEditor;
	CGRect _zoomControlFrame;
	CGRect _zoomSliderFrame;
	CGRect _externalUncroppedPresentationRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIView * cameraControlsContainerView;                                                                      //@synthesize cameraControlsContainerView=_cameraControlsContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topBarTopConstraint;                                                                  //@synthesize topBarTopConstraint=_topBarTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topBarContaineHeightConstraint;                                                       //@synthesize topBarContaineHeightConstraint=_topBarContaineHeightConstraint - In the implementation block
@property (nonatomic,retain) CAMTopBar * topBar;                                                                                        //@synthesize topBar=_topBar - In the implementation block
@property (assign,nonatomic,__weak) UIView * liveCaptureContainer;                                                                      //@synthesize liveCaptureContainer=_liveCaptureContainer - In the implementation block
@property (nonatomic,retain) CAMElapsedTimeView * elapsedTimeView;                                                                      //@synthesize elapsedTimeView=_elapsedTimeView - In the implementation block
@property (nonatomic,retain) PUReviewScreenDoneButton * doneButton;                                                                     //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) CAMFlashButton * flashButton;                                                                              //@synthesize flashButton=_flashButton - In the implementation block
@property (nonatomic,retain) CFXViewfinderFlipTransition * viewfinderFlipTransition;                                                    //@synthesize viewfinderFlipTransition=_viewfinderFlipTransition - In the implementation block
@property (nonatomic,retain) CAMSnapshotView * liveCaptureContainerSnapshot;                                                            //@synthesize liveCaptureContainerSnapshot=_liveCaptureContainerSnapshot - In the implementation block
@property (nonatomic,retain) CAMZoomControl * zoomControl;                                                                              //@synthesize zoomControl=_zoomControl - In the implementation block
@property (nonatomic,retain) CAMZoomSlider * zoomSlider;                                                                                //@synthesize zoomSlider=_zoomSlider - In the implementation block
@property (assign,setter=setZoomFactorAtPinchStart:,nonatomic) double zoomFactorAtPinchStart;                                           //@synthesize zoomFactorAtPinchStart=_zoomFactorAtPinchStart - In the implementation block
@property (assign,nonatomic) double zoomFactor;                                                                                         //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) BOOL isRecording;                                                                                          //@synthesize isRecording=_isRecording - In the implementation block
@property (assign,nonatomic) BOOL observingOrientationChanges;                                                                          //@synthesize observingOrientationChanges=_observingOrientationChanges - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * captureControlsContainerHeightConstraint;                                             //@synthesize captureControlsContainerHeightConstraint=_captureControlsContainerHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * captureControlsContainerWidthConstraint;                                              //@synthesize captureControlsContainerWidthConstraint=_captureControlsContainerWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * captureControlsContainerTrailingConstraint;                                           //@synthesize captureControlsContainerTrailingConstraint=_captureControlsContainerTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * captureControlsContainerLeadingConstraint;                                            //@synthesize captureControlsContainerLeadingConstraint=_captureControlsContainerLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * captureControlsContainerTopConstraint;                                                //@synthesize captureControlsContainerTopConstraint=_captureControlsContainerTopConstraint - In the implementation block
@property (assign,nonatomic) unsigned long long appliedDirectOverlayEditingGestures;                                                    //@synthesize appliedDirectOverlayEditingGestures=_appliedDirectOverlayEditingGestures - In the implementation block
@property (assign,nonatomic) BOOL dockIsMagnified;                                                                                      //@synthesize dockIsMagnified=_dockIsMagnified - In the implementation block
@property (assign,nonatomic) double dockMagnifiedHeightDelta;                                                                           //@synthesize dockMagnifiedHeightDelta=_dockMagnifiedHeightDelta - In the implementation block
@property (nonatomic,retain) CFXEffectBrowserContentPresenterViewController * effectBrowserContentPresenterViewController;              //@synthesize effectBrowserContentPresenterViewController=_effectBrowserContentPresenterViewController - In the implementation block
@property (assign,nonatomic) CGRect zoomControlFrame;                                                                                   //@synthesize zoomControlFrame=_zoomControlFrame - In the implementation block
@property (assign,nonatomic) CGRect zoomSliderFrame;                                                                                    //@synthesize zoomSliderFrame=_zoomSliderFrame - In the implementation block
@property (assign,nonatomic) BOOL captureContainerUncroppedFrameWasCalculatedWithContentRect;                                           //@synthesize captureContainerUncroppedFrameWasCalculatedWithContentRect=_captureContainerUncroppedFrameWasCalculatedWithContentRect - In the implementation block
@property (assign,nonatomic) BOOL cameraIsFlipping;                                                                                     //@synthesize cameraIsFlipping=_cameraIsFlipping - In the implementation block
@property (nonatomic,retain) JTPassThroughContainerView * liveCaptureContainerContainer;                                                //@synthesize liveCaptureContainerContainer=_liveCaptureContainerContainer - In the implementation block
@property (nonatomic,retain) JTPassThroughContainerView * effectEditorContainerView;                                                    //@synthesize effectEditorContainerView=_effectEditorContainerView - In the implementation block
@property (assign,nonatomic) CGRect externalUncroppedPresentationRect;                                                                  //@synthesize externalUncroppedPresentationRect=_externalUncroppedPresentationRect - In the implementation block
@property (nonatomic,retain) CFXLiveCaptureViewController * cameraViewController;                                                       //@synthesize cameraViewController=_cameraViewController - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> editingOverlayWithGestureGroup;                                               //@synthesize editingOverlayWithGestureGroup=_editingOverlayWithGestureGroup - In the implementation block
@property (nonatomic,retain) CFXEffectEditorView * effectEditor;                                                                        //@synthesize effectEditor=_effectEditor - In the implementation block
@property (assign,nonatomic,__weak) id<CFXCaptureViewControllerDelegate> delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CFXControlsViewController * cameraControls;                                                                //@synthesize cameraControls=_cameraControls - In the implementation block
@property (assign,nonatomic) double userInterfaceAlpha; 
@property (assign,nonatomic) long long captureMode;                                                                                     //@synthesize captureMode=_captureMode - In the implementation block
@property (assign,nonatomic) long long flashMode; 
@property (nonatomic,retain) CFXEffectComposition * composition;                                                                        //@synthesize composition=_composition - In the implementation block
@property (nonatomic,retain) UIView * effectsPickerDrawer; 
@property (assign,nonatomic) BOOL useLocalCameraViewfinder; 
@property (nonatomic,readonly) BOOL livePlayerIsSaturated; 
-(double)maxZoom;
-(CFXEffectComposition *)composition;
-(void)setEffectsPickerDrawer:(UIView *)arg1 ;
-(void)setComposition:(CFXEffectComposition *)arg1 ;
-(BOOL)isRecording;
-(void)setFlashMode:(long long)arg1 ;
-(void)setCameraViewController:(CFXLiveCaptureViewController *)arg1 ;
-(CFXLiveCaptureViewController *)cameraViewController;
-(void)doneButtonTapped:(id)arg1 ;
-(void)zoomSliderDidBeginAutozooming:(id)arg1 ;
-(void)zoomSliderDidEndAutozooming:(id)arg1 ;
-(void)zoomSliderDidEndZooming:(id)arg1 ;
-(void)updateControlVisibilityAnimated:(BOOL)arg1 ;
-(void)setFlashButton:(CAMFlashButton *)arg1 ;
-(CAMFlashButton *)flashButton;
-(long long)flashMode;
-(void)zoomControl:(id)arg1 didChangeZoomFactor:(double)arg2 interactionType:(long long)arg3 ;
-(long long)captureMode;
-(void)setTopBar:(CAMTopBar *)arg1 ;
-(void)setCaptureMode:(long long)arg1 ;
-(void)setElapsedTimeView:(CAMElapsedTimeView *)arg1 ;
-(void)setZoomSlider:(CAMZoomSlider *)arg1 ;
-(void)setZoomControl:(CAMZoomControl *)arg1 ;
-(CAMTopBar *)topBar;
-(CAMElapsedTimeView *)elapsedTimeView;
-(CAMZoomSlider *)zoomSlider;
-(CAMZoomControl *)zoomControl;
-(void)setZoomFactor:(double)arg1 ;
-(double)zoomFactor;
-(void)addEffect:(id)arg1 ;
-(void)cameraDidStop;
-(void)updateUIForDevicePosition:(long long)arg1 ;
-(CFXControlsViewController *)cameraControls;
-(CFXEffectBrowserContentPresenterViewController *)effectBrowserContentPresenterViewController;
-(void)cameraDidStart;
-(UIView *)effectsPickerDrawer;
-(void)setUseLocalCameraViewfinder:(BOOL)arg1 ;
-(double)userInterfaceAlpha;
-(void)setUserInterfaceAlpha:(double)arg1 ;
-(void)configureUIForOrientation;
-(void)removeLiveCaptureSnapshot;
-(void)showLiveCaptureSnapshotBlurred:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)saveLiveCaptureSnapshotForReview;
-(void)removeAllEffectsAnimated:(BOOL)arg1 ;
-(void)setLiveCapturePresentationFrame:(CGRect)arg1 withContentRect:(CGRect)arg2 ;
-(void)removeEffectsForCameraSwitch;
-(BOOL)livePlayerIsSaturated;
-(void)willDropCameraFrame;
-(void)addOverlayEffect:(id)arg1 atScreenLocation:(CGPoint)arg2 atScreenSize:(CGSize)arg3 rotationAngle:(double)arg4 ;
-(void)removeAllEffectsOfType:(id)arg1 animated:(BOOL)arg2 ;
-(void)updateUIForDockMagnify:(BOOL)arg1 dockHeightDelta:(double)arg2 ;
-(void)updateUIForVideoRecording:(BOOL)arg1 ;
-(void)addOverlayEffect:(id)arg1 atNormalizedPlanePoint:(CGPoint)arg2 scale:(double)arg3 rotationAngle:(double)arg4 ;
-(void)addEffect:(id)arg1 allowImmediateTextEditing:(BOOL)arg2 ;
-(void)liveCaptureViewController:(id)arg1 didRenderFrame:(id)arg2 ;
-(BOOL)useLocalCameraViewfinder;
-(void)liveCaptureViewController:(id)arg1 livePreviewTappedAtNormalizedPoint:(CGPoint)arg2 ;
-(void)liveCaptureViewController:(id)arg1 livePreviewPannedAtNormalizedPoint:(CGPoint)arg2 gesture:(id)arg3 ;
-(void)liveCaptureViewController:(id)arg1 livePreviewPinchedAtNormalizedCenterPoint:(CGPoint)arg2 gesture:(id)arg3 ;
-(void)liveCaptureViewController:(id)arg1 livePreviewRotatedAtNormalizedCenterPoint:(CGPoint)arg2 gesture:(id)arg3 ;
-(void)liveCaptureViewController:(id)arg1 livePreviewDoubleTappedAtNormalizedCenterPoint:(CGPoint)arg2 gesture:(id)arg3 ;
-(void)shutdownLivePlayer;
-(id)doneButtonForCameraControlsViewController:(id)arg1 ;
-(id)flashButtonForCameraControlsViewController:(id)arg1 ;
-(BOOL)dockIsMagnified;
-(void)setDockIsMagnified:(BOOL)arg1 ;
-(void)setDockMagnifiedHeightDelta:(double)arg1 ;
-(void)cameraControlsViewControllerEffectsButtonWasTapped:(id)arg1 ;
-(void)cameraControlsViewControllerShutterButtonWasTapped:(id)arg1 ;
-(void)cameraControlsViewControllerSwitchCameraButtonWasTapped:(id)arg1 ;
-(double)dockMagnifiedHeightDelta;
-(void)setAppliedDirectOverlayEditingGestures:(unsigned long long)arg1 ;
-(BOOL)shouldUseFaceTracking;
-(BOOL)presentFullScreenTextEditorForEffect:(id)arg1 insertingEffect:(BOOL)arg2 ;
-(void)displayEffectEditorForEffect:(id)arg1 forMode:(unsigned long long)arg2 ;
-(unsigned long long)appliedDirectOverlayEditingGestures;
-(CFXEffectEditorView *)effectEditor;
-(BOOL)isEditingEffect;
-(void)setEffectEditor:(CFXEffectEditorView *)arg1 ;
-(void)updateEffectEditorLayout;
-(void)updateFullScreenTextEditorLayout;
-(void)setEffectBrowserContentPresenterViewController:(CFXEffectBrowserContentPresenterViewController *)arg1 ;
-(void)fullScreenTextEditViewController:(id)arg1 didBeginEditingEffect:(id)arg2 ;
-(void)fullScreenTextEditViewController:(id)arg1 didFinishEditingEffect:(id)arg2 withUpdatedText:(id)arg3 ;
-(void)fullScreenTextEditViewController:(id)arg1 didFinishEditingByRemovingEffect:(id)arg2 ;
-(id)effectEditorView:(id)arg1 effectAtPoint:(CGPoint)arg2 ;
-(BOOL)effectEditorView:(id)arg1 isEffectAtPoint:(CGPoint)arg2 effect:(id)arg3 ;
-(CGRect)effectEditorView:(id)arg1 frameForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 includeTracking:(BOOL)arg4 adjustForMinimumHitTestArea:(BOOL)arg5 ;
-(id)effectEditorView:(id)arg1 viewInfoForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 ;
-(CGPoint)effectEditorView:(id)arg1 removeButtonPositionForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 ;
-(void)effectEditorViewDidBeginEditing:(id)arg1 ;
-(CGPoint)effectEditorView:(id)arg1 spacingBetweenCenterPointOfEffect:(id)arg2 point:(CGPoint)arg3 relativeToBounds:(CGRect)arg4 ;
-(void)effectEditorView:(id)arg1 didTransformEffect:(id)arg2 transform:(CGAffineTransform)arg3 relativeToBounds:(CGRect)arg4 ;
-(BOOL)effectEditorView:(id)arg1 shouldEditTextForEffect:(id)arg2 ;
-(void)effectEditorView:(id)arg1 didBeginEditingTextForEffect:(id)arg2 ;
-(id)effectEditorView:(id)arg1 textEditingPropertiesForEffect:(id)arg2 relativeToBounds:(CGRect)arg3 displayScale:(double)arg4 ;
-(id)effectEditorView:(id)arg1 textForEffect:(id)arg2 ;
-(void)effectEditorView:(id)arg1 didEditTextForEffect:(id)arg2 newText:(id)arg3 ;
-(void)effectEditorView:(id)arg1 didEndEditingTextForEffect:(id)arg2 wasCancelled:(BOOL)arg3 ;
-(void)effectEditorView:(id)arg1 didRemoveEffect:(id)arg2 ;
-(void)effectEditorViewDidEndEditing:(id)arg1 ;
-(void)effectEditorView:(id)arg1 didEndEditingEffect:(id)arg2 ;
-(void)effectEditorView:(id)arg1 didMoveEffect:(id)arg2 withTouchPoint:(CGPoint)arg3 withTransform:(CGAffineTransform*)arg4 ;
-(BOOL)effectEditorView:(id)arg1 presentCustomTextEditingUI:(id)arg2 ;
-(unsigned long long)effectEditorView:(id)arg1 maximumTextLengthForEffect:(id)arg2 ;
-(BOOL)effectEditorViewShouldShowFaceReticle:(id)arg1 ;
-(BOOL)passThroughContainerView:(id)arg1 shouldHandleTouchWithinView:(id)arg2 atPoint:(CGPoint)arg3 ;
-(void)setZoomControlFrame:(CGRect)arg1 ;
-(void)setZoomSliderFrame:(CGRect)arg1 ;
-(void)setObservingOrientationChanges:(BOOL)arg1 ;
-(void)flashModeDidChange:(id)arg1 ;
-(NSLayoutConstraint *)topBarContaineHeightConstraint;
-(NSLayoutConstraint *)topBarTopConstraint;
-(void)setEditingOverlayWithGestureGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)configureZoomControl;
-(void)zoomSliderValueDidChange:(id)arg1 forEvent:(id)arg2 ;
-(void)updateZoomUIVisibility;
-(void)updateTopBar;
-(void)configureUIForWindowOrientation:(long long)arg1 bounds:(CGRect)arg2 ;
-(void)applyAutoRotationCorrectionToEditorViewsIfNeeded;
-(void)applyAutoRotationCorrectionToEditorViews;
-(CGRect)externalUncroppedPresentationRect;
-(JTPassThroughContainerView *)liveCaptureContainerContainer;
-(UIView *)liveCaptureContainer;
-(JTPassThroughContainerView *)effectEditorContainerView;
-(void)applyAutoRotationCorrectionToEditorViewsWithTransitionCoordinator:(id)arg1 ;
-(void)setCameraControls:(CFXControlsViewController *)arg1 ;
-(void)layoutZoomUI;
-(NSLayoutConstraint *)captureControlsContainerTopConstraint;
-(NSLayoutConstraint *)captureControlsContainerWidthConstraint;
-(NSLayoutConstraint *)captureControlsContainerHeightConstraint;
-(NSLayoutConstraint *)captureControlsContainerLeadingConstraint;
-(NSLayoutConstraint *)captureControlsContainerTrailingConstraint;
-(void)CFX_adjustOverlaysForCaptureOrientationChanged:(long long)arg1 oldCaptureOrientation:(long long)arg2 ;
-(void)CFX_setRenderSize;
-(UIView *)cameraControlsContainerView;
-(long long)CFX_captureFlashModeForCAMFlashMode:(long long)arg1 ;
-(long long)CFX_camFlashModeForCaptureFlashMode:(long long)arg1 ;
-(long long)CFX_captureTorchModeForCAMFlashMode:(long long)arg1 ;
-(BOOL)observingOrientationChanges;
-(void)removeEffectEditorAnimated:(BOOL)arg1 ;
-(void)enableAnimationForOverlayEffect:(id)arg1 ;
-(CGAffineTransform)overlayTransformForLocalViewfinder;
-(void)CFX_addEffect:(id)arg1 allowImmediateTextEditing:(BOOL)arg2 ;
-(void)setLiveCaptureContainerSnapshot:(CAMSnapshotView *)arg1 ;
-(CAMSnapshotView *)liveCaptureContainerSnapshot;
-(void)setExternalUncroppedPresentationRect:(CGRect)arg1 ;
-(void)setCaptureContainerUncroppedFrameWasCalculatedWithContentRect:(BOOL)arg1 ;
-(CGRect)zoomControlFrame;
-(void)layoutZoomControlRelativeToBottomBarAndPreview;
-(CGRect)zoomSliderFrame;
-(void)layoutZoomSliderRelativeToBottomBarAndPreview;
-(void)setZoomFactorAtPinchStart:(double)arg1 ;
-(double)zoomFactorAtPinchStart;
-(NSObject*<OS_dispatch_group>)editingOverlayWithGestureGroup;
-(void)stopVideoRecording;
-(void)startVideoRecording;
-(void)updateZoomUIForCapturing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)takeStillPhoto;
-(BOOL)cameraIsFlipping;
-(void)setCameraIsFlipping:(BOOL)arg1 ;
-(void)setViewfinderFlipTransition:(CFXViewfinderFlipTransition *)arg1 ;
-(CFXViewfinderFlipTransition *)viewfinderFlipTransition;
-(void)handleZoomPinchGestureRecognizer:(id)arg1 ;
-(BOOL)captureContainerUncroppedFrameWasCalculatedWithContentRect;
-(void)setEffectEditorContainerView:(JTPassThroughContainerView *)arg1 ;
-(CGRect)CFX_cameraViewFinderUncroppedFrame;
-(void)setIsRecording:(BOOL)arg1 ;
-(void)CFX_hideAppStripUpperBackgroundView:(BOOL)arg1 ;
-(void)completedVideoRecordWithURL:(id)arg1 ;
-(void)completedStillRecordWithURL:(id)arg1 ;
-(void)flashButtonTapped:(id)arg1 ;
-(void)CFX_toggleCaptureUI;
-(void)setCameraControlsContainerView:(UIView *)arg1 ;
-(void)setTopBarTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopBarContaineHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLiveCaptureContainer:(UIView *)arg1 ;
-(void)setCaptureControlsContainerHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCaptureControlsContainerWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCaptureControlsContainerTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCaptureControlsContainerLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCaptureControlsContainerTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLiveCaptureContainerContainer:(JTPassThroughContainerView *)arg1 ;
-(void)CFX_executeBlockAfterNextFrameRendered:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CFXCaptureViewControllerDelegate>)arg1 ;
-(id<CFXCaptureViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(void)setDoneButton:(PUReviewScreenDoneButton *)arg1 ;
-(PUReviewScreenDoneButton *)doneButton;
@end

