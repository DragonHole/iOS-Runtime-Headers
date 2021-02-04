/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:11 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FitnessUI/FitnessUI-Structs.h>
@class NSString, UIColor;

@interface FIUIChartAxisLabel : NSObject {

	BOOL _useReversePlacement;
	NSString* _text;
	id _location;
	UIColor* _labelColor;
	UIColor* _shadowColor;
	double _shadowBlur;
	CGSize _shadowOffset;

}

@property (nonatomic,retain) NSString * text;                       //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) id location;                           //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL useReversePlacement;              //@synthesize useReversePlacement=_useReversePlacement - In the implementation block
@property (nonatomic,retain) UIColor * labelColor;                  //@synthesize labelColor=_labelColor - In the implementation block
@property (assign,nonatomic) UIColor * shadowColor;                 //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                   //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowBlur;                     //@synthesize shadowBlur=_shadowBlur - In the implementation block
-(void)setLabelColor:(UIColor *)arg1 ;
-(BOOL)useReversePlacement;
-(void)setUseReversePlacement:(BOOL)arg1 ;
-(UIColor *)labelColor;
-(id)description;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowColor:(UIColor *)arg1 ;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(id)location;
-(void)setLocation:(id)arg1 ;
-(double)shadowBlur;
-(void)setShadowBlur:(double)arg1 ;
@end
