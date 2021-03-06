/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:21 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIImageView.h>
#import <libobjc.A.dylib/NTKColoringView.h>

@class UIColor, CLKImageProvider, NSString;

@interface NTKColoringImageView : UIImageView <NTKColoringView> {

	UIColor* _overrideColor;
	CLKImageProvider* _imageProvider;
	CGSize _maxSize;

}

@property (assign,nonatomic) CGSize maxSize;                                //@synthesize maxSize=_maxSize - In the implementation block
@property (nonatomic,retain) CLKImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) BOOL usesLegibility; 
@property (nonatomic,retain) UIColor * overrideColor;                       //@synthesize overrideColor=_overrideColor - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(CLKImageProvider *)imageProvider;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(void)setUsesLegibility:(BOOL)arg1 ;
-(BOOL)usesLegibility;
-(id)initWithImage:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)sizeToFit;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)_commonInit;
-(CGSize)maxSize;
-(void)setMaxSize:(CGSize)arg1 ;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
@end

