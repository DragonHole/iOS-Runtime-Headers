/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, CAShapeLayer, _NTKCFaceDetailCollectionCellLabel, UIImage, NSString;

@interface _NTKCFaceDetailCollectionCell : UICollectionViewCell {

	UIImageView* _imageView;
	CAShapeLayer* _outlineView;
	_NTKCFaceDetailCollectionCellLabel* _label;
	BOOL _active;
	double _outlineOutset;
	UIImage* _image;
	NSString* _text;
	long long _style;
	CGRect _swatchFrame;

}

@property (assign,nonatomic) CGRect swatchFrame;                //@synthesize swatchFrame=_swatchFrame - In the implementation block
@property (assign,nonatomic) double outlineOutset;              //@synthesize outlineOutset=_outlineOutset - In the implementation block
@property (nonatomic,retain) UIImage * image;                   //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * text;                   //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long style;                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL active;                       //@synthesize active=_active - In the implementation block
+(double)outlineLineWidth;
+(id)reuseIdentifier;
-(CGRect)swatchFrame;
-(void)setSwatchFrame:(CGRect)arg1 ;
-(void)setOutlineOutset:(double)arg1 ;
-(double)outlineOutset;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setStyle:(long long)arg1 ;
-(long long)style;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
@end

