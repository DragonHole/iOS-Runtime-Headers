/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:50 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WMStyle.h>

@class WDStyle;

@interface WMParagraphStyle : WMStyle {

	WDStyle* _baseStyle;
	BOOL _isInTextFrame;

}
+(BOOL)isShadingNull:(id)arg1 ;
-(void)addParagraphPropertiesFromStyle:(id)arg1 ;
-(void)addParagraphProperties:(id)arg1 ;
-(void)addParagraphStyleCharacterProperties:(id)arg1 ;
-(BOOL)isRTLWithOverridesFromProperties:(id)arg1 ;
-(id)leadingMarginPropertyNameWithOverridesFromProperties:(id)arg1 ;
-(id)trailingMarginPropertyNameWithOverridesFromProperties:(id)arg1 ;
-(void)mapBorders:(id)arg1 ;
-(id)initWithWDStyle:(id)arg1 isInTextFrame:(BOOL)arg2 ;
-(void)addParagraphPropertiesFromStyle;
@end

