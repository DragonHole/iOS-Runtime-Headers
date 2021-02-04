/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImageView, UIView, UILabel, NSString;

@interface MSCLComposeLabelValueButton : UIControl {

	BOOL _didHighlightForInitialTouch;
	UIImageView* _disclosureImageView;
	UIView* _highlightView;
	UILabel* _label;
	UIView* _topSeparatorView;
	UILabel* _valueLabel;

}

@property (nonatomic,copy) NSString * labelText; 
@property (nonatomic,copy) NSString * valueText; 
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
-(NSString *)valueText;
-(void)setValueText:(NSString *)arg1 ;
-(void)_reloadHighlightViewAnimated:(BOOL)arg1 ;
-(void)deselectAnimated:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
@end
