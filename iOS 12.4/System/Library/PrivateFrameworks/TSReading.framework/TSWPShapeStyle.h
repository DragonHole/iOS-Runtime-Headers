/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:15 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSSPreset.h>

@class NSString;

@interface TSWPShapeStyle : <TSDShapeStyle : TSSStyle : TSPObject> = {
  516 fill
  517 stroke
  518 opacity
  519 reflection
  520 shadow
} <TSSPreset>

@property (nonatomic,readonly) NSString * presetKind; 
+(id)defaultValueForProperty:(int)arg1 ;
+(int)defaultIntValueForProperty:(int)arg1 ;
+(id)propertiesAllowingNSNull;
+(id)presetStyleDescriptor;
+(id)layoutProperties;
+(id)properties;
-(SEL)mapThemePropertyMapSelector;
-(id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(CGAffineTransform)arg3 ;
-(NSString *)presetKind;
-(void)setDefaultParagraphStyle:(id)arg1 ;
-(id)defaultParagraphStyle;
@end
