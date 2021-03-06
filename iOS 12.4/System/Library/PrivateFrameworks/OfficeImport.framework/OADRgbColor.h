/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADColor.h>

@interface OADRgbColor : OADColor {

	float mRed;
	float mGreen;
	float mBlue;

}
+(id)white;
+(id)rgbColorWithTSUColor:(id)arg1 ;
+(id)rgbColorWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3 ;
+(id)rgbColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
+(id)rgbColorWithWhite:(float)arg1 ;
+(id)rgbColorWithWhiteByte:(float)arg1 ;
+(id)black;
-(BOOL)isBlack;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
-(id)initWithRedByte:(float)arg1 greenByte:(float)arg2 blueByte:(float)arg3 ;
-(unsigned char)redByte;
-(unsigned char)greenByte;
-(unsigned char)blueByte;
-(id)initWithWhite:(float)arg1 ;
-(id)initWithWhiteByte:(float)arg1 ;
-(id)rgbColorWithFraction:(float)arg1 ofRgbColor:(id)arg2 ;
-(BOOL)isWhite;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)red;
-(float)green;
-(float)blue;
@end

