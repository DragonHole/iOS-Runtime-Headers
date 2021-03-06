/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:52 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneKit/ToneKit-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView, UIColor;

@interface TKPickerDividerTableViewCell : UITableViewCell {

	UIView* _dividerView;
	long long _contentBackdropOverlayBlendMode;

}

@property (nonatomic,retain) UIColor * contentBackgroundColor; 
@property (assign,nonatomic) long long contentBackdropOverlayBlendMode;              //@synthesize contentBackdropOverlayBlendMode=_contentBackdropOverlayBlendMode - In the implementation block
-(void)setContentBackdropOverlayBlendMode:(long long)arg1 ;
-(void)setContentBackgroundColor:(UIColor *)arg1 ;
-(CGRect)_dividerViewFrame;
-(UIColor *)contentBackgroundColor;
-(long long)contentBackdropOverlayBlendMode;
-(void)layoutSubviews;
-(void)setSeparatorStyle:(long long)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

