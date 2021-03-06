/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKInlineInkPickerDelegate <NSObject>
@optional
-(void)inlineInkPicker:(id)arg1 didChangeSizeState:(unsigned long long)arg2;
-(void)inlineInkPicker:(id)arg1 didSelectTool:(id)arg2;
-(void)inlineInkPicker:(id)arg1 didSelectColor:(id)arg2;
-(BOOL)inlineInkPickerShouldRespondToPencilGestures:(id)arg1;
-(id)viewControllerForPopoverPresentationFromInlineInkPicker:(id)arg1;
-(BOOL)inlineInkPickerShouldChangeToolColorForSelectedColor:(id)arg1;
-(id)inlineInkPickerBarButtonItemForContentsHiddenColorPickerPresentation:(id)arg1;
-(CGRect*)inlineInkPickerRectForContentsHiddenColorPickerPresentation:(id)arg1;
-(CGRect*)inlineInkPickerCenteringRectForToolIndicator:(id)arg1;
-(void)inlineInkPicker:(id)arg1 toolIndicatorWillPresent:(BOOL)arg2 animated:(BOOL)arg3;
-(void)inlineInkPickerDidToggleRuler:(id)arg1;

@end

