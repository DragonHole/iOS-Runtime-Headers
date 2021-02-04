/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:33 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountUI/AppleAccountUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, AAUILabel, UIView;

@interface AAUIImageControl : UIControl {

	UIImageView* _imageView;
	AAUILabel* _label;
	UIView* _overlayView;

}

@property (nonatomic,readonly) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) AAUILabel * label;                    //@synthesize label=_label - In the implementation block
-(void)_updateLabelVisibility;
-(void)_updateOverlayViewVisibility;
-(id)initWithCoder:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)setHighlighted:(BOOL)arg1 ;
-(AAUILabel *)label;
@end
