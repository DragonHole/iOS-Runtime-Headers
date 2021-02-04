/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <libobjc.A.dylib/MiroAutoEditDownloadProgressControllerDelegate.h>
#import <libobjc.A.dylib/MiroEditorClipCellDataSource.h>
#import <libobjc.A.dylib/MiroEditorClipCellDelegate.h>
#import <libobjc.A.dylib/MiroTrimmerDelegate.h>
#import <libobjc.A.dylib/MiroAssetSuggestionsCollectionViewControllerDelegate.h>
#import <libobjc.A.dylib/MiroEditorClipCollectionDataSource.h>
#import <libobjc.A.dylib/MiroEditorClipCollectionDelegate.h>
#import <libobjc.A.dylib/MiroEditorControllerDelegate.h>
#import <libobjc.A.dylib/MiroApplicationTestingEditorControlling.h>

@protocol MiroContentEditorViewControllerDelegate, MiroTrimmer;
@class MiroTimelineClipCollectionViewController, MiroEditorController, MiroAutoEditor, PHCachingImageManager, MiroEditorClipCollectionViewController, NSString, CALayer, UITapGestureRecognizer, MiroEditorClipCell, MiroAutoEditDownloadProgressController, UINavigationBar, UIView, NSLayoutConstraint, UIToolbar, UIBarButtonItem, UILabel, UIButton, UIVisualEffectView;

@interface MiroContentEditorViewController : UIViewController <UINavigationBarDelegate, MiroAutoEditDownloadProgressControllerDelegate, MiroEditorClipCellDataSource, MiroEditorClipCellDelegate, MiroTrimmerDelegate, MiroAssetSuggestionsCollectionViewControllerDelegate, MiroEditorClipCollectionDataSource, MiroEditorClipCollectionDelegate, MiroEditorControllerDelegate, MiroApplicationTestingEditorControlling> {

	BOOL _didCenterInitialClipOnFirstAppearance;
	BOOL _isPerformingInteractiveMovement;
	BOOL _shouldNoteUserChangedAudioLevelForClip;
	int _initialStartTime;
	int _clipMidTimeToSnapToAfterAutoEdit;
	MiroEditorController* _editorController;
	MiroAutoEditor* _autoEditor;
	id<MiroContentEditorViewControllerDelegate> _delegate;
	MiroTimelineClipCollectionViewController* _timelineViewController;
	PHCachingImageManager* _imageManager;
	MiroEditorClipCollectionViewController* _editorViewController;
	long long _removeClipEnteredCount;
	double _shouldNoteUserTrimmedClipWithPreviousDuration;
	NSString* _assetIdentifierToSnapToAfterAutoEdit;
	/*^block*/id _revertUserAssetChangesBlock;
	/*^block*/id _commitUserAssetChangesBlock;
	CALayer* _maskLayerCompact;
	CALayer* _maskLayerRegular;
	UITapGestureRecognizer* _thumbnailTapGR;
	MiroEditorClipCell* _trimmingCell;
	id<MiroTrimmer> _trimmer;
	MiroAutoEditDownloadProgressController* _progressController;
	UINavigationBar* _topToolbar;
	UIView* _topToolbarBackground;
	NSLayoutConstraint* _topToolbarBackgroundVerticalCenterConstraint;
	NSLayoutConstraint* _topToolbarBackgroundHeightConstraint;
	NSLayoutConstraint* _topToolbarBackgroundWidthConstraint;
	NSLayoutConstraint* _topToolbarBackgroundLeadingConstraint;
	UIToolbar* _bottomToolbar;
	UIBarButtonItem* _doneBarButtonItem;
	UIBarButtonItem* _bottomPlayPauseBarButtonItem;
	UIBarButtonItem* _topPlayPauseBarButtonItem;
	UIBarButtonItem* _dislikeBarButtonItem;
	UIBarButtonItem* _durationBarButtonItem;
	UILabel* _toolbarDurationLabel;
	UIButton* _trimmerPlayPauseButton;
	UILabel* _trimmerDurationLabel;
	UIView* _trimmerControlsContainerView;
	UIBarButtonItem* _debugAutoEditBarButtonItem;
	UILabel* _debugSongDescriptionLabel;
	UILabel* _debugTitleDescriptionLabel;
	UILabel* _debugEditStyleDescriptionLabel;
	UILabel* _debugFilterDescriptionLabel;
	UIBarButtonItem* _addBarButtonItem;
	UIView* _trimmerContainerView;
	NSLayoutConstraint* _trimmerTopConstraint;
	NSLayoutConstraint* _trimmerLeadingConstraint;
	NSLayoutConstraint* _trimmerTrailingConstraint;
	UIView* _timelineMaskView;
	NSLayoutConstraint* _timelineHeightConstraint;
	NSLayoutConstraint* _timelineBottomConstraint;
	NSLayoutConstraint* _timelineLeftConstraint;
	NSLayoutConstraint* _timelineRightConstraint;
	NSLayoutConstraint* _toolbarHeightConstraint;
	UIVisualEffectView* _bottomBlurEffectView;
	NSLayoutConstraint* _bottomBlurEffectViewHeightConstraint;

}

@property (assign,nonatomic) BOOL didCenterInitialClipOnFirstAppearance;                                            //@synthesize didCenterInitialClipOnFirstAppearance=_didCenterInitialClipOnFirstAppearance - In the implementation block
@property (nonatomic,retain) PHCachingImageManager * imageManager;                                                  //@synthesize imageManager=_imageManager - In the implementation block
@property (assign,nonatomic,__weak) MiroEditorClipCollectionViewController * editorViewController;                  //@synthesize editorViewController=_editorViewController - In the implementation block
@property (assign,nonatomic) BOOL isPerformingInteractiveMovement;                                                  //@synthesize isPerformingInteractiveMovement=_isPerformingInteractiveMovement - In the implementation block
@property (assign,nonatomic) long long removeClipEnteredCount;                                                      //@synthesize removeClipEnteredCount=_removeClipEnteredCount - In the implementation block
@property (assign,nonatomic) BOOL shouldNoteUserChangedAudioLevelForClip;                                           //@synthesize shouldNoteUserChangedAudioLevelForClip=_shouldNoteUserChangedAudioLevelForClip - In the implementation block
@property (assign,nonatomic) double shouldNoteUserTrimmedClipWithPreviousDuration;                                  //@synthesize shouldNoteUserTrimmedClipWithPreviousDuration=_shouldNoteUserTrimmedClipWithPreviousDuration - In the implementation block
@property (nonatomic,copy) NSString * assetIdentifierToSnapToAfterAutoEdit;                                         //@synthesize assetIdentifierToSnapToAfterAutoEdit=_assetIdentifierToSnapToAfterAutoEdit - In the implementation block
@property (assign,nonatomic) int clipMidTimeToSnapToAfterAutoEdit;                                                  //@synthesize clipMidTimeToSnapToAfterAutoEdit=_clipMidTimeToSnapToAfterAutoEdit - In the implementation block
@property (nonatomic,copy) id revertUserAssetChangesBlock;                                                          //@synthesize revertUserAssetChangesBlock=_revertUserAssetChangesBlock - In the implementation block
@property (nonatomic,copy) id commitUserAssetChangesBlock;                                                          //@synthesize commitUserAssetChangesBlock=_commitUserAssetChangesBlock - In the implementation block
@property (nonatomic,retain) CALayer * maskLayerCompact;                                                            //@synthesize maskLayerCompact=_maskLayerCompact - In the implementation block
@property (nonatomic,retain) CALayer * maskLayerRegular;                                                            //@synthesize maskLayerRegular=_maskLayerRegular - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * thumbnailTapGR;                                               //@synthesize thumbnailTapGR=_thumbnailTapGR - In the implementation block
@property (assign,nonatomic,__weak) MiroEditorClipCell * trimmingCell;                                              //@synthesize trimmingCell=_trimmingCell - In the implementation block
@property (nonatomic,retain) id<MiroTrimmer> trimmer;                                                               //@synthesize trimmer=_trimmer - In the implementation block
@property (nonatomic,retain) MiroAutoEditDownloadProgressController * progressController;                           //@synthesize progressController=_progressController - In the implementation block
@property (assign,nonatomic,__weak) UINavigationBar * topToolbar;                                                   //@synthesize topToolbar=_topToolbar - In the implementation block
@property (assign,nonatomic,__weak) UIView * topToolbarBackground;                                                  //@synthesize topToolbarBackground=_topToolbarBackground - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topToolbarBackgroundVerticalCenterConstraint;                     //@synthesize topToolbarBackgroundVerticalCenterConstraint=_topToolbarBackgroundVerticalCenterConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topToolbarBackgroundHeightConstraint;                             //@synthesize topToolbarBackgroundHeightConstraint=_topToolbarBackgroundHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * topToolbarBackgroundWidthConstraint;                              //@synthesize topToolbarBackgroundWidthConstraint=_topToolbarBackgroundWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * topToolbarBackgroundLeadingConstraint;                     //@synthesize topToolbarBackgroundLeadingConstraint=_topToolbarBackgroundLeadingConstraint - In the implementation block
@property (assign,nonatomic,__weak) UIToolbar * bottomToolbar;                                                      //@synthesize bottomToolbar=_bottomToolbar - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneBarButtonItem;                                                   //@synthesize doneBarButtonItem=_doneBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * bottomPlayPauseBarButtonItem;                                        //@synthesize bottomPlayPauseBarButtonItem=_bottomPlayPauseBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * topPlayPauseBarButtonItem;                                           //@synthesize topPlayPauseBarButtonItem=_topPlayPauseBarButtonItem - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * dislikeBarButtonItem;                                         //@synthesize dislikeBarButtonItem=_dislikeBarButtonItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * durationBarButtonItem;                                               //@synthesize durationBarButtonItem=_durationBarButtonItem - In the implementation block
@property (assign,nonatomic,__weak) UILabel * toolbarDurationLabel;                                                 //@synthesize toolbarDurationLabel=_toolbarDurationLabel - In the implementation block
@property (assign,nonatomic,__weak) UIButton * trimmerPlayPauseButton;                                              //@synthesize trimmerPlayPauseButton=_trimmerPlayPauseButton - In the implementation block
@property (assign,nonatomic,__weak) UILabel * trimmerDurationLabel;                                                 //@synthesize trimmerDurationLabel=_trimmerDurationLabel - In the implementation block
@property (assign,nonatomic,__weak) UIView * trimmerControlsContainerView;                                          //@synthesize trimmerControlsContainerView=_trimmerControlsContainerView - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * debugAutoEditBarButtonItem;                                          //@synthesize debugAutoEditBarButtonItem=_debugAutoEditBarButtonItem - In the implementation block
@property (assign,nonatomic,__weak) UILabel * debugSongDescriptionLabel;                                            //@synthesize debugSongDescriptionLabel=_debugSongDescriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * debugTitleDescriptionLabel;                                           //@synthesize debugTitleDescriptionLabel=_debugTitleDescriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * debugEditStyleDescriptionLabel;                                       //@synthesize debugEditStyleDescriptionLabel=_debugEditStyleDescriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * debugFilterDescriptionLabel;                                          //@synthesize debugFilterDescriptionLabel=_debugFilterDescriptionLabel - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * addBarButtonItem;                                             //@synthesize addBarButtonItem=_addBarButtonItem - In the implementation block
@property (assign,nonatomic,__weak) UIView * trimmerContainerView;                                                  //@synthesize trimmerContainerView=_trimmerContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trimmerTopConstraint;                                             //@synthesize trimmerTopConstraint=_trimmerTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trimmerLeadingConstraint;                                         //@synthesize trimmerLeadingConstraint=_trimmerLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * trimmerTrailingConstraint;                                        //@synthesize trimmerTrailingConstraint=_trimmerTrailingConstraint - In the implementation block
@property (assign,nonatomic,__weak) UIView * timelineMaskView;                                                      //@synthesize timelineMaskView=_timelineMaskView - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * timelineHeightConstraint;                                  //@synthesize timelineHeightConstraint=_timelineHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * timelineBottomConstraint;                                  //@synthesize timelineBottomConstraint=_timelineBottomConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * timelineLeftConstraint;                                    //@synthesize timelineLeftConstraint=_timelineLeftConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * timelineRightConstraint;                                   //@synthesize timelineRightConstraint=_timelineRightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * toolbarHeightConstraint;                                          //@synthesize toolbarHeightConstraint=_toolbarHeightConstraint - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * bottomBlurEffectView;                                             //@synthesize bottomBlurEffectView=_bottomBlurEffectView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * bottomBlurEffectViewHeightConstraint;                             //@synthesize bottomBlurEffectViewHeightConstraint=_bottomBlurEffectViewHeightConstraint - In the implementation block
@property (nonatomic,retain) MiroEditorController * editorController;                                               //@synthesize editorController=_editorController - In the implementation block
@property (assign,nonatomic,__weak) MiroAutoEditor * autoEditor;                                                    //@synthesize autoEditor=_autoEditor - In the implementation block
@property (assign,nonatomic,__weak) id<MiroContentEditorViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int initialStartTime;                                                                  //@synthesize initialStartTime=_initialStartTime - In the implementation block
@property (assign,nonatomic,__weak) MiroTimelineClipCollectionViewController * timelineViewController;              //@synthesize timelineViewController=_timelineViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PHCachingImageManager *)imageManager;
-(void)setImageManager:(PHCachingImageManager *)arg1 ;
-(MiroEditorController *)editorController;
-(MiroAutoEditor *)autoEditor;
-(void)setAutoEditor:(MiroAutoEditor *)arg1 ;
-(void)assetSuggestionsControllerDidDismiss:(id)arg1 ;
-(void)assetSuggestionsController:(id)arg1 didFinishPickingAssets:(id)arg2 ;
-(unsigned long long)assetSuggestionsController:(id)arg1 clipCountForAsset:(id)arg2 ;
-(id)assetSuggestionsController:(id)arg1 debugMetadataForAsset:(id)arg2 ;
-(void)_handleAutoEditorWillBeginNotification:(id)arg1 ;
-(void)_handleAutoEditorDidEndNotification:(id)arg1 ;
-(void)_handleAutoEditorDidCancelNotification:(id)arg1 ;
-(void)progressController:(id)arg1 noteUserCancelledDuring:(unsigned long long)arg2 ;
-(void)progressController:(id)arg1 willDismissSuccessfully:(BOOL)arg2 ;
-(void)progressController:(id)arg1 didDismissSuccessfully:(BOOL)arg2 ;
-(id)progressControllerRootViewController:(id)arg1 ;
-(void)trimmer:(id)arg1 willStartTrimmingClip:(id)arg2 ;
-(BOOL)trimmer:(id)arg1 shouldContinueTrimmingClip:(id)arg2 startTime:(float)arg3 endTime:(float)arg4 ;
-(void)trimmer:(id)arg1 didContinueTrimmingClip:(id)arg2 startTime:(float)arg3 endTime:(float)arg4 ;
-(void)trimmer:(id)arg1 didEndTrimmingClip:(id)arg2 startTime:(float)arg3 endTime:(float)arg4 ;
-(void)setProgressController:(MiroAutoEditDownloadProgressController *)arg1 ;
-(MiroAutoEditDownloadProgressController *)progressController;
-(void)setEditorController:(MiroEditorController *)arg1 ;
-(void)setInitialStartTime:(int)arg1 ;
-(MiroTimelineClipCollectionViewController *)timelineViewController;
-(void)_alertSomeAssetsFailedWithTitle:(id)arg1 message:(id)arg2 okActionBlock:(/*^block*/id)arg3 ;
-(NSLayoutConstraint *)toolbarHeightConstraint;
-(void)setToolbarHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIToolbar *)bottomToolbar;
-(void)handleTapOnSnappedClip:(id)arg1 ;
-(void)setThumbnailTapGR:(UITapGestureRecognizer *)arg1 ;
-(void)_setupToolbars;
-(id<MiroTrimmer>)trimmer;
-(void)_adjustSnappedClipWhenSplitScreenClosesWorkaround;
-(MiroEditorClipCollectionViewController *)editorViewController;
-(UINavigationBar *)topToolbar;
-(BOOL)didCenterInitialClipOnFirstAppearance;
-(int)initialStartTime;
-(void)_updateInterfaceElementVisibilityForCell:(id)arg1 ;
-(void)_updateTopToolbarVisibilityForCell:(id)arg1 atIndexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)_configureToolbarsForTraitCollection:(id)arg1 ;
-(void)setDidCenterInitialClipOnFirstAppearance:(BOOL)arg1 ;
-(void)_configureFadeMaskLayerForTraitCollection:(id)arg1 ;
-(void)_updateToolbarButtonsWhileAutoEditing;
-(void)_setupNavigationBarAppearanceForContentEditor:(id)arg1 ;
-(void)_setupEditorCollectionViewController:(id)arg1 ;
-(void)_setupTimelineCollectionViewController:(id)arg1 ;
-(void)_setupTrimmerInContainerView:(id)arg1 ;
-(void)_configureClipControlBarMinimumSpacingForCells:(id)arg1 ;
-(void)setEditorViewController:(MiroEditorClipCollectionViewController *)arg1 ;
-(void)setTimelineViewController:(MiroTimelineClipCollectionViewController *)arg1 ;
-(UIView *)trimmerContainerView;
-(void)setTrimmer:(id<MiroTrimmer>)arg1 ;
-(void)backButtonTouchUpInside:(id)arg1 ;
-(void)setDoneBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneBarButtonItem;
-(void)_setupTransparentBackgroundForNavigationBar:(id)arg1 ;
-(void)_setupTransparentBackgroundForToolbar:(id)arg1 ;
-(void)_commitEditChangesAndRefreshDebugOverlays:(id)arg1 ;
-(UIBarButtonItem *)debugAutoEditBarButtonItem;
-(void)_updateDurationLabelVisibilityAnimated:(BOOL)arg1 ;
-(id)revertUserAssetChangesBlock;
-(void)setRevertUserAssetChangesBlock:(id)arg1 ;
-(void)setCommitUserAssetChangesBlock:(id)arg1 ;
-(id)commitUserAssetChangesBlock;
-(UIBarButtonItem *)bottomPlayPauseBarButtonItem;
-(UIView *)trimmerControlsContainerView;
-(UIBarButtonItem *)topPlayPauseBarButtonItem;
-(UIButton *)trimmerPlayPauseButton;
-(UIView *)topToolbarBackground;
-(void)_updateItemNumberLabelForIndexPath:(id)arg1 ;
-(UILabel *)toolbarDurationLabel;
-(UILabel *)trimmerDurationLabel;
-(MiroEditorClipCell *)trimmingCell;
-(void)_updateDebugLabelForClipCell:(id)arg1 ;
-(UIBarButtonItem *)dislikeBarButtonItem;
-(UIBarButtonItem *)addBarButtonItem;
-(UITapGestureRecognizer *)thumbnailTapGR;
-(void)_updatePlayPauseButtonForCell:(id)arg1 ;
-(void)_updateTrimmerClipForCell:(id)arg1 ;
-(void)_updateDurationLabel:(int)arg1 ;
-(BOOL)shouldNoteUserChangedAudioLevelForClip;
-(void)setShouldNoteUserChangedAudioLevelForClip:(BOOL)arg1 ;
-(double)shouldNoteUserTrimmedClipWithPreviousDuration;
-(void)setShouldNoteUserTrimmedClipWithPreviousDuration:(double)arg1 ;
-(UIVisualEffectView *)bottomBlurEffectView;
-(UIView *)timelineMaskView;
-(CALayer *)maskLayerCompact;
-(CALayer *)maskLayerRegular;
-(void)_configureTopToolbarForiPhoneLandscape;
-(void)_configureBottomToolbarForEverythingElse;
-(void)_configureTopToolbarForiPhonePortrait;
-(void)_configureBottomToolbarForiPhonePortrait;
-(void)_configureTopToolbarForEverythingElse;
-(void)_configureConstraintsTopToolbarBackgroundFullSize;
-(void)_configureConstraintsTrimmerBetweenControlsUnderTopToolbar;
-(UIBarButtonItem *)durationBarButtonItem;
-(void)_configureConstraintsTrimmerFullWidthUnderTopToolbar;
-(NSLayoutConstraint *)topToolbarBackgroundVerticalCenterConstraint;
-(NSLayoutConstraint *)topToolbarBackgroundHeightConstraint;
-(NSLayoutConstraint *)topToolbarBackgroundWidthConstraint;
-(NSLayoutConstraint *)topToolbarBackgroundLeadingConstraint;
-(NSLayoutConstraint *)trimmerTopConstraint;
-(NSLayoutConstraint *)trimmerLeadingConstraint;
-(NSLayoutConstraint *)trimmerTrailingConstraint;
-(id)_debugBarButtonItems;
-(NSLayoutConstraint *)timelineBottomConstraint;
-(NSLayoutConstraint *)timelineHeightConstraint;
-(NSLayoutConstraint *)timelineLeftConstraint;
-(NSLayoutConstraint *)timelineRightConstraint;
-(void)_addHighlightRectsToThumbnailForCell:(id)arg1 ;
-(id)_faceRectsInViewSpaceForCell:(id)arg1 ;
-(void)_highlightFacesInCell:(id)arg1 forRects:(id)arg2 ;
-(void)_highlightPOIInCell:(id)arg1 ;
-(CGRect)_poiRectInViewSpaceForCell:(id)arg1 ;
-(id)_editorCellForIndexPath:(id)arg1 ;
-(BOOL)_removePOIsInRect:(CGRect)arg1 fromClip:(id)arg2 ;
-(void)_addPOIInRect:(CGRect)arg1 toClip:(id)arg2 ;
-(long long)removeClipEnteredCount;
-(void)setRemoveClipEnteredCount:(long long)arg1 ;
-(void)_updateControlVisibilityOnCells:(id)arg1 ;
-(void)_updateDebugLabelsForVisibleTimelineClips;
-(void)setAssetIdentifierToSnapToAfterAutoEdit:(NSString *)arg1 ;
-(void)setClipMidTimeToSnapToAfterAutoEdit:(int)arg1 ;
-(id)_maskLayerWithFadeWidth:(double)arg1 ;
-(void)_removeClip:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_didEndEditingForClip:(id)arg1 ;
-(void)addWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)assetIdentifierToSnapToAfterAutoEdit;
-(int)clipMidTimeToSnapToAfterAutoEdit;
-(unsigned long long)_nearestClipIndexForAssetID:(id)arg1 andClipMidTime:(int)arg2 ;
-(void)_reloadCollectionViewsWithHintSnapToIndex:(unsigned long long)arg1 ;
-(void)_updateThumbnailForCell:(id)arg1 indexPath:(id)arg2 startTime:(int)arg3 ;
-(void)setIsPerformingInteractiveMovement:(BOOL)arg1 ;
-(BOOL)isPerformingInteractiveMovement;
-(void)_scrollTimelineToTrackEditorContentOffset;
-(void)_updateTrimmerPlayerForCell:(id)arg1 ;
-(void)_muteClip:(id)arg1 ;
-(id)_assetsToRemoveFromUsedAssetsForNewSelectedAssets:(id)arg1 ;
-(id)_assetsToAddToUsedAssetsForNewSelectedAssets:(id)arg1 ;
-(void)_addAssets:(id)arg1 removeAssets:(id)arg2 ;
-(void)_alertSomeAssetsFailed:(unsigned long long)arg1 unsupported:(unsigned long long)arg2 ;
-(void)_alertSomeAssetsFailedToDownload:(unsigned long long)arg1 ;
-(void)setTrimmingCell:(MiroEditorClipCell *)arg1 ;
-(id)editorClipCellBlueprint:(id)arg1 ;
-(void)editorClipCellWillStartPlaying:(id)arg1 ;
-(void)editorClipCellDidStartPlaying:(id)arg1 ;
-(void)editorClipCellDidStopPlaying:(id)arg1 ;
-(BOOL)editorClipCellShouldShowCircularPlayButton:(id)arg1 ;
-(void)editorClipCellDidChangeAudioLevel:(id)arg1 ;
-(unsigned long long)editorClipCellAudioLevelForClip:(id)arg1 ;
-(id)clipCollection:(id)arg1 clipAtIndex:(long long)arg2 ;
-(long long)clipCollectionClipCount:(id)arg1 ;
-(id)clipCollection:(id)arg1 willSetClip:(id)arg2 onCell:(id)arg3 indexPath:(id)arg4 ;
-(void)clipCollection:(id)arg1 didSetClipOnCell:(id)arg2 indexPath:(id)arg3 ;
-(void)clipCollection:(id)arg1 didSnapToIndexPath:(id)arg2 ;
-(void)clipCollection:(id)arg1 didSelectIndexPath:(id)arg2 ;
-(void)clipCollection:(id)arg1 didBeginDisplayingCell:(id)arg2 indexPath:(id)arg3 ;
-(void)clipCollection:(id)arg1 didEndDisplayingCell:(id)arg2 indexPath:(id)arg3 ;
-(void)clipCollection:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)clipCollectionDidScroll:(id)arg1 ;
-(void)clipCollection:(id)arg1 willBeginInteractiveMovementForItemAtIndexPath:(id)arg2 ;
-(void)clipCollection:(id)arg1 didEndInteractiveMovementForItemAtIndexPath:(id)arg2 ;
-(void)clipCollection:(id)arg1 didCancelInteractiveMovementForItemAtIndexPath:(id)arg2 ;
-(void)editorControllerWillUpdateClips:(id)arg1 ;
-(void)editorControllerDidUpdateClips:(id)arg1 ;
-(void)removeClipAtIndexPath:(id)arg1 ;
-(void)addButtonTouchUpInside:(id)arg1 ;
-(void)playPauseButtonTouchUpInside:(id)arg1 ;
-(void)dislikeButtonTouchUpInside:(id)arg1 ;
-(void)debugAutoEditButtonTouchUpInside:(id)arg1 ;
-(void)setMaskLayerCompact:(CALayer *)arg1 ;
-(void)setMaskLayerRegular:(CALayer *)arg1 ;
-(void)setTopToolbar:(UINavigationBar *)arg1 ;
-(void)setTopToolbarBackground:(UIView *)arg1 ;
-(void)setTopToolbarBackgroundVerticalCenterConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopToolbarBackgroundHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopToolbarBackgroundWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTopToolbarBackgroundLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomToolbar:(UIToolbar *)arg1 ;
-(void)setBottomPlayPauseBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setTopPlayPauseBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setDislikeBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setDurationBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setToolbarDurationLabel:(UILabel *)arg1 ;
-(void)setTrimmerPlayPauseButton:(UIButton *)arg1 ;
-(void)setTrimmerDurationLabel:(UILabel *)arg1 ;
-(void)setTrimmerControlsContainerView:(UIView *)arg1 ;
-(void)setDebugAutoEditBarButtonItem:(UIBarButtonItem *)arg1 ;
-(UILabel *)debugSongDescriptionLabel;
-(void)setDebugSongDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)debugTitleDescriptionLabel;
-(void)setDebugTitleDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)debugEditStyleDescriptionLabel;
-(void)setDebugEditStyleDescriptionLabel:(UILabel *)arg1 ;
-(UILabel *)debugFilterDescriptionLabel;
-(void)setDebugFilterDescriptionLabel:(UILabel *)arg1 ;
-(void)setAddBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setTrimmerContainerView:(UIView *)arg1 ;
-(void)setTrimmerTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTrimmerLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTrimmerTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTimelineMaskView:(UIView *)arg1 ;
-(void)setTimelineHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTimelineBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTimelineLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTimelineRightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setBottomBlurEffectView:(UIVisualEffectView *)arg1 ;
-(NSLayoutConstraint *)bottomBlurEffectViewHeightConstraint;
-(void)setBottomBlurEffectViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MiroContentEditorViewControllerDelegate>)arg1 ;
-(id<MiroContentEditorViewControllerDelegate>)delegate;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(BOOL)navigationBar:(id)arg1 shouldPopItem:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(void)didReceiveMemoryWarning;
-(BOOL)prefersStatusBarHidden;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
@end
