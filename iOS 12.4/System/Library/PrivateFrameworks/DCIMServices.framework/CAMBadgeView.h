/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DCIMServices/DCIMServices-Structs.h>
#import <UIKitCore/UIView.h>

@protocol CAMBadgeViewDelegate;
@class UIColor;

@interface CAMBadgeView : UIView {

	id<CAMBadgeViewDelegate> _delegate;
	double __fillCornerRadius;
	UIColor* __fillColor;
	UIColor* __contentColor;

}

@property (assign,setter=_setFillCornerRadius:,nonatomic) double _fillCornerRadius;              //@synthesize _fillCornerRadius=__fillCornerRadius - In the implementation block
@property (setter=_setFillColor:,nonatomic,retain) UIColor * _fillColor;                         //@synthesize _fillColor=__fillColor - In the implementation block
@property (setter=_setContentColor:,nonatomic,retain) UIColor * _contentColor;                   //@synthesize _contentColor=__contentColor - In the implementation block
@property (assign,nonatomic,__weak) id<CAMBadgeViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(double)_fillCornerRadius;
-(id)_invertMaskImage:(id)arg1 ;
-(void)_setFillCornerRadius:(double)arg1 ;
-(void)_setFillColor:(id)arg1 ;
-(void)_setContentColor:(id)arg1 ;
-(UIColor *)_contentColor;
-(void)setDelegate:(id<CAMBadgeViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<CAMBadgeViewDelegate>)delegate;
-(UIColor *)_fillColor;
-(id)_maskImage;
-(void)drawRect:(CGRect)arg1 ;
@end
