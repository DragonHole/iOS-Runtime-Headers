/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:25 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKFaceView.h>
#import <libobjc.A.dylib/NTKActivityFaceViewFactoryDelegate.h>

@class NTKActivityFaceViewFactory, HKRingsView, UILabel, NTKFaceViewTapControl, UIView, NTKPolygonCylinderView, NSDate, NTKDigitalTimeLabel, NSString;

@interface NTKActivityDigitalFaceView : NTKFaceView <NTKActivityFaceViewFactoryDelegate> {

	NTKActivityFaceViewFactory* _faceViewFactory;
	HKRingsView* _ringsView;
	UILabel* _energyLabel;
	UILabel* _briskMinutesLabel;
	UILabel* _standHoursLabel;
	NTKFaceViewTapControl* _tapToLaunchButton;
	UIView* _timeLabelBackgroundView;
	NTKPolygonCylinderView* _densityEditingPolygonView;
	NSDate* _timeDensityEditingOverrideDate;
	RingLayout _currentRingLayout;
	double _lastEnergyPercentage;
	double _lastBriskPercentage;
	double _lastSedentaryPercentage;
	double _blinkerAndSecondsWidth;
	long long _energyStringMetricWidth;
	long long _briskStringMetricWidth;
	long long _standStringMetricWidth;
	BOOL _showSeconds;
	double _rightTimeViewInset;

}

@property (assign,nonatomic) double rightTimeViewInset;                   //@synthesize rightTimeViewInset=_rightTimeViewInset - In the implementation block
@property (nonatomic,retain) NTKDigitalTimeLabel * timeView; 
@property (assign,nonatomic) BOOL showSeconds;                            //@synthesize showSeconds=_showSeconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchColorForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(void)_prewarmForDevice:(id)arg1 ;
+(id)_newRingsView;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_prepareWristRaiseAnimation;
-(void)_performWristRaiseAnimation;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_cleanupAfterEditing;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(BOOL)_needsForegroundContainerView;
-(id)_additionalPrelaunchApplicationIdentifiers;
-(void)_loadLayoutRules;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyShowsCanonicalContent;
-(void)_applyShowsLockedUI;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)_prepareForEditing;
-(void)_layoutForegroundContainerView;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2 ;
-(void)_cleanupAfterZoom;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(UIEdgeInsets)_keylineLabelActiveAreaInsetsForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(CGRect)_keylineFrameForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)slotUsesCurvedText:(id)arg1 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(void)setDataMode:(long long)arg1 ;
-(void)_applyEntryModel:(id)arg1 byFraction:(double)arg2 updateLabels:(BOOL)arg3 animated:(BOOL)arg4 ;
-(void)_applyCurrentEntryModelByFraction:(double)arg1 updateLabels:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_enumerateActivityLabels:(/*^block*/id)arg1 ;
-(void)_launchButtonPressed:(id)arg1 ;
-(double)_ringAlphaForEditMode:(long long)arg1 ;
-(void)applyEntryModel:(id)arg1 animated:(BOOL)arg2 ;
-(void)applyEntryModelWithUnfilledRings:(id)arg1 ;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 ;
-(long long)_keylineStyleForComplicationSlot:(id)arg1 ;
-(void)setShowSeconds:(BOOL)arg1 ;
-(double)_timeAlphaForEditMode:(long long)arg1 ;
-(void)_updateTimeViewSecondsDisplayState;
-(void)_applyCurrentRingLayout;
-(void)_recenterTimeView;
-(void)_updateCurrentRingLayoutIfNecessary;
-(CGPoint)_ringCenterForLayout:(RingLayout)arg1 ;
-(id)_ringGroupController;
-(BOOL)showSeconds;
-(void)_setActivityViewsAlpha:(double)arg1 animated:(BOOL)arg2 ;
-(double)_rightTimeViewInsetForEditMode:(long long)arg1 ;
-(void)setRightTimeViewInset:(double)arg1 ;
-(void)_configureForDetailEditing;
-(void)_cleanUpAfterDetailEditing;
-(long long)_polygonIndexForAccuracy:(unsigned long long)arg1 ;
-(CGRect)_timeViewBackgroundRect;
-(void)timeTravelDateEnteredOrExitedTimelineBounds:(BOOL)arg1 ;
-(double)_blinkerAndSecondsWidth;
-(double)rightTimeViewInset;
-(void)dealloc;
@end
