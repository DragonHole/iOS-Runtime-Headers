/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:07 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTKVictoryAnalogBackgroundColorPalette.h>

@class UIColor, NSString;

@interface NTKVictoryColorPalette : NSObject <NTKVictoryAnalogBackgroundColorPalette> {

	BOOL _hasWhiteElements;
	unsigned long long _color;
	UIColor* _numbersColor;
	UIColor* _handsColor;
	UIColor* _logoColor;
	UIColor* _secondHandColor;
	UIColor* _handInlayColor;
	UIColor* _analogComplicationsColor;
	UIColor* _analogDotColor;
	UIColor* _digitalComplicationsColor;
	UIColor* _digitalComplicationsPlatterColor;
	UIColor* _platterColor;
	UIColor* _cornerComplicationsAccentColor;
	unsigned long long _bleed;
	UIColor* _backgroundColor;

}

@property (nonatomic,readonly) unsigned long long color;                                //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) UIColor * numbersColor;                                  //@synthesize numbersColor=_numbersColor - In the implementation block
@property (nonatomic,readonly) UIColor * handsColor;                                    //@synthesize handsColor=_handsColor - In the implementation block
@property (nonatomic,readonly) UIColor * logoColor;                                     //@synthesize logoColor=_logoColor - In the implementation block
@property (nonatomic,readonly) UIColor * secondHandColor;                               //@synthesize secondHandColor=_secondHandColor - In the implementation block
@property (nonatomic,readonly) UIColor * handInlayColor;                                //@synthesize handInlayColor=_handInlayColor - In the implementation block
@property (nonatomic,readonly) UIColor * analogComplicationsColor;                      //@synthesize analogComplicationsColor=_analogComplicationsColor - In the implementation block
@property (nonatomic,readonly) UIColor * analogDotColor;                                //@synthesize analogDotColor=_analogDotColor - In the implementation block
@property (nonatomic,readonly) UIColor * digitalComplicationsColor;                     //@synthesize digitalComplicationsColor=_digitalComplicationsColor - In the implementation block
@property (nonatomic,readonly) UIColor * digitalComplicationsPlatterColor;              //@synthesize digitalComplicationsPlatterColor=_digitalComplicationsPlatterColor - In the implementation block
@property (nonatomic,readonly) UIColor * platterColor;                                  //@synthesize platterColor=_platterColor - In the implementation block
@property (nonatomic,readonly) UIColor * cornerComplicationsAccentColor;                //@synthesize cornerComplicationsAccentColor=_cornerComplicationsAccentColor - In the implementation block
@property (nonatomic,readonly) BOOL hasWhiteElements;                                   //@synthesize hasWhiteElements=_hasWhiteElements - In the implementation block
@property (nonatomic,readonly) unsigned long long bleed;                                //@synthesize bleed=_bleed - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;                               //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)paletteForColor:(unsigned long long)arg1 style:(unsigned long long)arg2 ;
+(id)paletteForColor:(unsigned long long)arg1 bleed:(unsigned long long)arg2 ;
+(id)voltColor;
-(unsigned long long)color;
-(UIColor *)backgroundColor;
-(UIColor *)platterColor;
-(unsigned long long)bleed;
-(UIColor *)handsColor;
-(UIColor *)secondHandColor;
-(UIColor *)handInlayColor;
-(UIColor *)analogComplicationsColor;
-(UIColor *)analogDotColor;
-(BOOL)hasWhiteElements;
-(UIColor *)numbersColor;
-(UIColor *)logoColor;
-(id)initWithColor:(unsigned long long)arg1 bleed:(unsigned long long)arg2 ;
-(UIColor *)digitalComplicationsColor;
-(UIColor *)digitalComplicationsPlatterColor;
-(UIColor *)cornerComplicationsAccentColor;
@end
