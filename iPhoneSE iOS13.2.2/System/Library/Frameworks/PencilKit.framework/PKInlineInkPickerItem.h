/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton;

@interface PKInlineInkPickerItem : UIView {

	double _yOffset;
	UIButton* _button;

}

@property (nonatomic,retain) UIButton * button;              //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) double yOffset;                 //@synthesize yOffset=_yOffset - In the implementation block
-(CGSize)intrinsicContentSize;
-(UIButton *)button;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setButton:(UIButton *)arg1 ;
-(double)yOffset;
-(void)setYOffset:(double)arg1 ;
-(id)initWithButton:(id)arg1 ;
@end
