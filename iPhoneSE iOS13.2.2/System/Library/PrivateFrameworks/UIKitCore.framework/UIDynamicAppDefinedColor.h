/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:55 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicColor.h>

@class NSDictionary;

@interface UIDynamicAppDefinedColor : UIDynamicColor {

	NSDictionary* _colorsByThemeKey;

}
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithColorsByTraitCollection:(id)arg1 ;
-(id)_resolvedColorWithTraitCollection:(id)arg1 ;
-(id)_initWithColorsByThemeKey:(id)arg1 ;
-(id)_generateColorsByTraitCollection;
@end
