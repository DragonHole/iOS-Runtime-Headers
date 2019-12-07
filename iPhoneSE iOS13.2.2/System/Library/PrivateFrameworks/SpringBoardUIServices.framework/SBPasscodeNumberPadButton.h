/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:56 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <TelephonyUI/TPNumberPadDarkStyleButton.h>
#import <libobjc.A.dylib/SBUIPasscodeNumberPadButton.h>

@class UIColor, NSString;

@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton> {

	UIColor* _reduceTransparencyButtonColor;

}

@property (nonatomic,retain) UIColor * reduceTransparencyButtonColor;              //@synthesize reduceTransparencyButtonColor=_reduceTransparencyButtonColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)defaultSize;
+(double)_numberPadButtonOuterCircleDiameter;
+(UIEdgeInsets)paddingOutsideRing;
+(int)_characterTypeForCharacter:(unsigned)arg1 ;
+(id)_stringCharacterForCharacter:(unsigned)arg1 ;
+(BOOL)_shouldUseAlternativeCirlceViewAlphas;
+(double)unhighlightedCircleViewAlpha;
+(double)highlightedCircleViewAlpha;
-(id)initForCharacter:(unsigned)arg1 ;
-(int)characterType;
-(id)stringCharacter;
-(void)setReduceTransparencyButtonColor:(UIColor *)arg1 ;
-(UIColor *)reduceTransparencyButtonColor;
@end
