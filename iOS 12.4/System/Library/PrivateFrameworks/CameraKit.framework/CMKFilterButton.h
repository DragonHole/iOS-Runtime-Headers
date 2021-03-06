/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImageView;

@interface CMKFilterButton : UIButton {

	UIImageView* __circlesImageView;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (nonatomic,readonly) UIImageView * _circlesImageView;              //@synthesize _circlesImageView=__circlesImageView - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
+(id)filterButton;
-(void)_commonCMKFilterButtonInitialization;
-(UIImageView *)_circlesImageView;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)_filterImage;
-(id)_filterOnImage;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(double)_selectedIndicatorAlpha;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
@end

