/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:28 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentCamera/DocumentCamera-Structs.h>
#import <UIKitCore/UIView.h>

@class CALayer, UIImage;

@interface ICDocCamImageQuadEditImageView : UIView {

	double _imageOpacity;
	CALayer* _imageLayer;
	UIImage* _image;
	long long _orientation;

}

@property (nonatomic,retain) CALayer * imageLayer;               //@synthesize imageLayer=_imageLayer - In the implementation block
@property (nonatomic,retain) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long orientation;              //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double imageOpacity;                //@synthesize imageOpacity=_imageOpacity - In the implementation block
-(CALayer *)imageLayer;
-(void)setImageLayer:(CALayer *)arg1 ;
-(void)setImage:(id)arg1 orientation:(long long)arg2 ;
-(void)setImageOpacity:(double)arg1 ;
-(double)imageOpacity;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
@end
