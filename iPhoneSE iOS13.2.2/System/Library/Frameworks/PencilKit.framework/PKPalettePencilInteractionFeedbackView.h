/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:31 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView, MTMaterialView, PKPaletteToolPreview;

@interface PKPalettePencilInteractionFeedbackView : UIView {

	UIView* _clippingView;
	MTMaterialView* _backgroundView;
	PKPaletteToolPreview* _toolPreview;

}

@property (nonatomic,retain) UIView * clippingView;                           //@synthesize clippingView=_clippingView - In the implementation block
@property (nonatomic,retain) MTMaterialView * backgroundView;                 //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) PKPaletteToolPreview * toolPreview;              //@synthesize toolPreview=_toolPreview - In the implementation block
-(id)init;
-(MTMaterialView *)backgroundView;
-(void)layoutSubviews;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setBackgroundView:(MTMaterialView *)arg1 ;
-(UIView *)clippingView;
-(void)setClippingView:(UIView *)arg1 ;
-(void)setToolPreview:(PKPaletteToolPreview *)arg1 ;
-(PKPaletteToolPreview *)toolPreview;
-(void)showPreviewForToolWithInk:(id)arg1 scalingFactor:(double)arg2 animated:(BOOL)arg3 ;
@end
