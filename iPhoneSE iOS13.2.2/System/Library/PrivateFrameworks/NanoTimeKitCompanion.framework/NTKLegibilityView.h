/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:09 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIColor;


@protocol NTKLegibilityView <NSObject>
@property (assign,nonatomic) BOOL legibilityEnabled; 
@property (assign,nonatomic) double shadowBlur; 
@property (nonatomic,retain) UIColor * shadowColor; 
@required
-(UIColor *)shadowColor;
-(void)setShadowColor:(id)arg1;
-(double)shadowBlur;
-(void)setShadowBlur:(double)arg1;
-(void)setLegibilityEnabled:(BOOL)arg1;
-(BOOL)legibilityEnabled;

@end

