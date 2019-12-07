/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCoreUI/FMCoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIImageView;

@interface FMRule : UIView {

	BOOL _leading;
	UIColor* _color;
	UIImageView* _imageView;

}

@property (assign,nonatomic) BOOL leading;                         //@synthesize leading=_leading - In the implementation block
@property (nonatomic,retain) UIColor * color;                      //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
+(id)imageWithColor:(id)arg1 leading:(BOOL)arg2 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(BOOL)leading;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(void)awakeFromNib;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)prepareForInterfaceBuilder;
-(void)setLeading:(BOOL)arg1 ;
-(void)commonSetup;
@end
