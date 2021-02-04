/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PersonaUI/PersonaUI-Structs.h>
@class NSString, UIColor;

@interface PRMonogram : NSObject {

	NSString* _text;
	unsigned long long _fontIndex;
	UIColor* _color;

}

@property (nonatomic,copy) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned long long fontIndex;              //@synthesize fontIndex=_fontIndex - In the implementation block
@property (nonatomic,retain) UIColor * color;                           //@synthesize color=_color - In the implementation block
+(id)monogram;
+(id)plateGradientStartColor;
+(id)_defaultMonogramColor;
+(id)fontForIndex:(unsigned long long)arg1 plateDiameter:(double)arg2 ;
+(double)kerningForFontIndex:(unsigned long long)arg1 fontSize:(double)arg2 ;
+(id)monogramColors;
+(id)_fontSpecs;
+(void)updatePlateOverlayLayer:(id)arg1 ;
+(id)plateGradientEndColor;
+(id)monogramWithData:(id)arg1 ;
+(id)plateFlatColor;
+(id)plateSelectedActiveColor;
+(id)plateSelectedInactiveColor;
+(id)plateSelectedActiveTextColor;
+(unsigned long long)countOfFonts;
+(id)plateOverlayLayer;
-(id)_initWithData:(id)arg1 ;
-(id)snapshotWithSize:(CGSize)arg1 scale:(double)arg2 options:(id)arg3 ;
-(id)dataRepresentation;
-(void)setFontIndex:(unsigned long long)arg1 ;
-(unsigned long long)fontIndex;
-(void)_takeValuesFromDataRepresentation:(id)arg1 ;
-(BOOL)_renderTextInContext:(CGContextRef)arg1 frame:(CGRect)arg2 ;
-(id)stringAttributesForDiameter:(double)arg1 ;
-(void)setFontIndexToUnsupportedValue;
-(id)snapshotWithOptions:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
@end
