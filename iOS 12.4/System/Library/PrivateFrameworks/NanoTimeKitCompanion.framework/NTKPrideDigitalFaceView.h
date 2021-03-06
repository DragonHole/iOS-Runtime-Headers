/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKFaceView.h>

@class NTKComplicationDisplayWrapperView, NTKDigitalTimeLabel, NTKDigitalTimeLabelStyle, NTKFaceViewComplicationFactory, NTKPrideLinearQuad, CLKUIQuadView, NTKRoundedCornerOverlayView, BSUIMappedImageCache;

@interface NTKPrideDigitalFaceView : NTKFaceView {

	NTKComplicationDisplayWrapperView* _touchWrapper;
	NTKDigitalTimeLabel* _timeLabel;
	NTKDigitalTimeLabelStyle* _timeLabelDefaultStyle;
	NTKFaceViewComplicationFactory* _layoutContentProvider;
	NTKPrideLinearQuad* _bandsQuad;
	CLKUIQuadView* _bandsView;
	NTKRoundedCornerOverlayView* _cornerOverlay;
	BOOL _wasSlow;
	BSUIMappedImageCache* _swatchCache;

}
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
-(void)_updatePausedState;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_cleanupAfterEditing;
-(id)_newLegacyViewForComplication:(id)arg1 family:(long long)arg2 slot:(id)arg3 ;
-(void)_loadLayoutRules;
-(void)_applyDataMode;
-(void)_finalizeForSnapshotting:(/*^block*/id)arg1 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(unsigned long long)_keylineLabelAlignmentForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(unsigned long long)_keylineLabelAlignmentForComplicationSlot:(id)arg1 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)_prepareForEditing;
-(void)_applySlow;
-(void)_configureForEditMode:(long long)arg1 ;
-(BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(long long)arg2 ;
-(long long)_complicationPickerStyleForSlot:(id)arg1 ;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(long long)_legacyLayoutOverrideforComplicationType:(unsigned long long)arg1 slot:(id)arg2 ;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 ;
-(long long)_keylineStyleForComplicationSlot:(id)arg1 ;
-(BOOL)_supportsUnadornedSnapshot;
-(double)_contentAlphaForEditMode:(long long)arg1 ;
-(void)_loadBackgroundViews;
-(id)_complicationDisplayWrapperForTouch:(id)arg1 ;
-(double)_timeAlphaForEditMode:(long long)arg1 ;
-(double)_complicationsAlphaForEditMode:(long long)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

