/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CALayer, UIColor;

@interface _NTKColorManager : NSObject {

	CALayer* _layer;
	UIColor* _color;

}

@property (nonatomic,retain) CALayer * layer;                       //@synthesize layer=_layer - In the implementation block
@property (nonatomic,retain) UIColor * color;                       //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) UIColor * contentColor; 
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(CALayer *)layer;
-(void)setLayer:(CALayer *)arg1 ;
-(UIColor *)contentColor;
-(BOOL)shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)_updateFilterColor;
@end

