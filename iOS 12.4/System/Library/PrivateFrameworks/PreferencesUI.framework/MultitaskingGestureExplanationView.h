/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, UnderlineButton, UIColor;

@interface MultitaskingGestureExplanationView : UIView <PSHeaderFooterView> {

	UILabel* _labels[4];
	UnderlineButton* _videoLinkButton;
	double _sized;
	double _width;
	UIColor* _footerTextColor;

}
-(double)preferredHeightForWidth:(double)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(id)newRegionSampleLabelUnderlined;
-(id)_accessibilityLabels;
-(void)layoutSubviews;
-(BOOL)isRTL;
@end

