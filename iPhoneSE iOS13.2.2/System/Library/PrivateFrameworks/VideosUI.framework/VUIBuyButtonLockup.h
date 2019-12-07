/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:21:35 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIUIStackView.h>

@class UILabel, UIButton, NSLayoutConstraint;

@interface VUIBuyButtonLockup : VUIUIStackView {

	UILabel* _iAPLabel;
	UIButton* _button;
	NSLayoutConstraint* _buttonHeightConstraint;
	long long _lastOrientation;
	BOOL _hasIAP;

}

@property (nonatomic,retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL hasIAP;                    //@synthesize hasIAP=_hasIAP - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)button;
-(void)setButton:(UIButton *)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(void)setHasIAP:(BOOL)arg1 ;
-(void)_updateForPreferredContentSize;
-(BOOL)_isLargeContentSize;
-(BOOL)hasIAP;
@end
