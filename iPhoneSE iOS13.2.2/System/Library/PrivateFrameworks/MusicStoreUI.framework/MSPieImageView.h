/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicStoreUI/MusicStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImage, UIBezierPath;

@interface MSPieImageView : UIView {

	UIImage* _backgroundImage;
	UIBezierPath* _clipPath;
	UIImage* _foregroundImage;
	double _pieFraction;
	double _pieRadius;

}

@property (nonatomic,retain) UIImage * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * foregroundImage;              //@synthesize foregroundImage=_foregroundImage - In the implementation block
@property (assign,nonatomic) double pieFraction;                     //@synthesize pieFraction=_pieFraction - In the implementation block
@property (assign,nonatomic) double pieRadius;                       //@synthesize pieRadius=_pieRadius - In the implementation block
-(void)dealloc;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)sizeToFit;
-(void)drawRect:(CGRect)arg1 ;
-(void)setPieRadius:(double)arg1 ;
-(void)setForegroundImage:(UIImage *)arg1 ;
-(UIImage *)foregroundImage;
-(void)setPieFraction:(double)arg1 ;
-(void)_reloadClipPath;
-(double)pieFraction;
-(double)pieRadius;
@end

