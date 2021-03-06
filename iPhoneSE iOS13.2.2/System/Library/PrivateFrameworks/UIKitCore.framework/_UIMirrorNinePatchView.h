/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:11:13 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIImageView;

@interface _UIMirrorNinePatchView : UIView {

	UIImage* _originalImage;
	UIEdgeInsets _insets;
	UIImageView* _imageViews[4];

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateResizableImageAndViews;
-(void)setImage:(id)arg1 withResizableCornerSize:(CGSize)arg2 ;
@end

