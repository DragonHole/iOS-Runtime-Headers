/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:53 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADFill.h>

@class OADColor, OADPattern;

@interface OADPatternFill : OADFill {

	OADColor* mFgColor;
	OADColor* mBgColor;
	OADPattern* mPattern;

}
+(id)defaultProperties;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setParent:(id)arg1 ;
-(id)pattern;
-(void)setColor:(id)arg1 ;
-(id)initWithDefaults;
-(id)bgColor;
-(void)setBgColor:(id)arg1 ;
-(id)fgColor;
-(void)setFgColor:(id)arg1 ;
-(void)setPattern:(id)arg1 ;
-(void)setStyleColor:(id)arg1 ;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isFgColorOverridden;
-(BOOL)isBgColorOverridden;
-(BOOL)isPatternOverridden;
-(id)namedImageDataWithBlipCollection:(id)arg1 ;
@end

