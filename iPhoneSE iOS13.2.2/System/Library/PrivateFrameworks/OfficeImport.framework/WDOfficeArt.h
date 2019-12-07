/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRunWithCharacterProperties.h>

@class OADDrawable;

@interface WDOfficeArt : WDRunWithCharacterProperties {

	OADDrawable* mDrawable;
	BOOL mFloating;

}
+(int)textBoxTextTypeForRegularTextType:(int)arg1 ;
-(id)description;
-(BOOL)isFloating;
-(void)setFloating:(BOOL)arg1 ;
-(id)imageName;
-(id)imageData;
-(id)initWithParagraph:(id)arg1 ;
-(id)drawable;
-(BOOL)isDrawableOverridden;
-(int)runType;
-(void)checkForFloating:(id)arg1 ;
-(void)setDrawable:(id)arg1 ;
-(void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2 ;
-(id)overrideDrawable;
-(void)clearDrawable;
-(id)imageBlipRef;
-(void)setImageBlipRef:(id)arg1 ;
-(void)propagateTextTypeToDrawables;
@end
