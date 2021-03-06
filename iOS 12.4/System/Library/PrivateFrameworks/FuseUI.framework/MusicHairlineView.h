/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIColor;

@interface MusicHairlineView : UIView {

	UIView* _lineView;
	UIColor* _lineColor;
	long long _verticalAlignment;

}

@property (nonatomic,retain) UIColor * lineColor;                      //@synthesize lineColor=_lineColor - In the implementation block
@property (assign,nonatomic) long long verticalAlignment;              //@synthesize verticalAlignment=_verticalAlignment - In the implementation block
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
-(void)music_inheritedLayoutInsetsDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(long long)verticalAlignment;
-(void)setVerticalAlignment:(long long)arg1 ;
@end

