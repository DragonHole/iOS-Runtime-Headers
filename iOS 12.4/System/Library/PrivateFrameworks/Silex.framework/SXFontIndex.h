/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXFontIndex.h>

@protocol SXFontIndex <NSObject>
@required
-(id)fontNameForFontAttributes:(id)arg1;
-(id)fontAttributesForFontName:(id)arg1;

@end


@class NSDictionary, NSCache, NSMutableArray, NSString;

@interface SXFontIndex : NSObject <SXFontIndex> {

	NSDictionary* _fonts;
	NSCache* _attributeToFontIndex;
	NSCache* _fontToAttributeIndex;
	NSMutableArray* _fontFamilyProviders;

}

@property (nonatomic,readonly) NSDictionary * fonts;                              //@synthesize fonts=_fonts - In the implementation block
@property (nonatomic,readonly) NSCache * attributeToFontIndex;                    //@synthesize attributeToFontIndex=_attributeToFontIndex - In the implementation block
@property (nonatomic,readonly) NSCache * fontToAttributeIndex;                    //@synthesize fontToAttributeIndex=_fontToAttributeIndex - In the implementation block
@property (nonatomic,readonly) NSMutableArray * fontFamilyProviders;              //@synthesize fontFamilyProviders=_fontFamilyProviders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)fonts;
-(id)fontsForFamilyProviders:(id)arg1 ;
-(NSMutableArray *)fontFamilyProviders;
-(NSCache *)attributeToFontIndex;
-(NSCache *)fontToAttributeIndex;
-(id)fontNameForFontAttributes:(id)arg1 ;
-(id)fontAttributesForFontName:(id)arg1 ;
-(id)initWithFontFamilyProviders:(id)arg1 ;
-(void)addFontFamilyProvider:(id)arg1 ;
@end
