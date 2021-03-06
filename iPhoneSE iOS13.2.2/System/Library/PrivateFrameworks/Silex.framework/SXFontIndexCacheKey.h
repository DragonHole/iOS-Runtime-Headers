/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:41 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SXFontAttributes;
@interface SXFontIndexCacheKey : NSObject <NSCopying> {

	id<SXFontAttributes> _fontAttributes;
	long long _fontSize;

}

@property (nonatomic,readonly) id<SXFontAttributes> fontAttributes;              //@synthesize fontAttributes=_fontAttributes - In the implementation block
@property (nonatomic,readonly) long long fontSize;                               //@synthesize fontSize=_fontSize - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SXFontAttributes>)fontAttributes;
-(long long)fontSize;
-(id)initWithFontAttributes:(id)arg1 fontSize:(long long)arg2 ;
@end

