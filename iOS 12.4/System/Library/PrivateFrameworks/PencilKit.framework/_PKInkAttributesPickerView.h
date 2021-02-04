/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIControl.h>
#import <libobjc.A.dylib/_PKColorAlphaSliderDelegate.h>

@protocol _PKInkAttributesPickerViewDelegate;
@class PKInk, _PKInkThicknessPicker, _PKColorAlphaSlider, UIView, NSString;

@interface _PKInkAttributesPickerView : UIControl <_PKColorAlphaSliderDelegate> {

	id<_PKInkAttributesPickerViewDelegate> _delegate;
	PKInk* _ink;
	unsigned long long _displayMode;
	_PKInkThicknessPicker* _thicknessPicker;
	_PKColorAlphaSlider* _colorAlphaSlider;
	UIView* _separatorView;

}

@property (nonatomic,retain) _PKInkThicknessPicker * thicknessPicker;                             //@synthesize thicknessPicker=_thicknessPicker - In the implementation block
@property (nonatomic,retain) _PKColorAlphaSlider * colorAlphaSlider;                              //@synthesize colorAlphaSlider=_colorAlphaSlider - In the implementation block
@property (nonatomic,retain) UIView * separatorView;                                              //@synthesize separatorView=_separatorView - In the implementation block
@property (assign,nonatomic,__weak) id<_PKInkAttributesPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PKInk * ink;                                                         //@synthesize ink=_ink - In the implementation block
@property (assign,nonatomic) unsigned long long displayMode;                                      //@synthesize displayMode=_displayMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDisplayMode:(unsigned long long)arg1 ;
-(PKInk *)ink;
-(void)setInk:(PKInk *)arg1 ;
-(id)initWithInk:(id)arg1 ;
-(void)setInk:(id)arg1 animated:(BOOL)arg2 ;
-(void)thicknessValueChanged:(id)arg1 ;
-(_PKInkThicknessPicker *)thicknessPicker;
-(void)opacityValueChanged:(id)arg1 ;
-(_PKColorAlphaSlider *)colorAlphaSlider;
-(void)_colorAlphaSliderUserDidStartDraggingSlider:(id)arg1 ;
-(void)_colorAlphaSliderUserDidEndDraggingSlider:(id)arg1 ;
-(void)setThicknessPicker:(_PKInkThicknessPicker *)arg1 ;
-(void)setColorAlphaSlider:(_PKColorAlphaSlider *)arg1 ;
-(void)setDelegate:(id<_PKInkAttributesPickerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<_PKInkAttributesPickerViewDelegate>)delegate;
-(UIView *)separatorView;
-(void)setSeparatorView:(UIView *)arg1 ;
-(unsigned long long)displayMode;
@end
