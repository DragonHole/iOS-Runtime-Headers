/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UIView;

@interface SKUIDownloadsView : UIView {

	UIView* _contentView;
	UIView* _overlayView;

}

@property (nonatomic,retain) UIView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
-(UIView *)contentView;
-(void)layoutSubviews;
-(void)setContentView:(UIView *)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(UIView *)overlayView;
@end

