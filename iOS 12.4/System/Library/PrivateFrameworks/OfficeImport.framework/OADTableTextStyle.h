/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADFontReference, OADColor;

@interface OADTableTextStyle : NSObject {

	OADFontReference* mFontReference;
	OADColor* mColor;
	int mBold;
	int mItalic;

}
+(id)defaultStyle;
+(id)defaultFontReference;
+(int)defaultBold;
+(int)defaultItalic;
+(id)defaultColor;
-(id)shallowCopy;
-(int)bold;
-(int)italic;
-(void)setFontReference:(id)arg1 ;
-(void)setBold:(int)arg1 ;
-(void)setItalic:(int)arg1 ;
-(void)applyOverridesFrom:(id)arg1 ;
-(id)fontReference;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)color;
-(void)setColor:(id)arg1 ;
@end

