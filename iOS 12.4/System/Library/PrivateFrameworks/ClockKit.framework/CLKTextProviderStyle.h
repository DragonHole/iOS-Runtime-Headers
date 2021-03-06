/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLKFont, NSDictionary;

@interface CLKTextProviderStyle : NSObject <NSCopying> {

	BOOL _uppercase;
	BOOL _shouldEmbedTintColors;
	CLKFont* _font;
	CLKFont* _smallCapsBaseFont;
	NSDictionary* _otherAttributes;
	double _minimumScaleFactor;

}

@property (nonatomic,copy) CLKFont * font;                              //@synthesize font=_font - In the implementation block
@property (nonatomic,copy) CLKFont * smallCapsBaseFont;                 //@synthesize smallCapsBaseFont=_smallCapsBaseFont - In the implementation block
@property (assign,nonatomic) BOOL uppercase;                            //@synthesize uppercase=_uppercase - In the implementation block
@property (nonatomic,copy) NSDictionary * otherAttributes;              //@synthesize otherAttributes=_otherAttributes - In the implementation block
@property (assign,nonatomic) double minimumScaleFactor;                 //@synthesize minimumScaleFactor=_minimumScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL shouldEmbedTintColors;                //@synthesize shouldEmbedTintColors=_shouldEmbedTintColors - In the implementation block
+(id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(BOOL)arg3 otherAttributes:(id)arg4 minimumScaleFactor:(double)arg5 ;
+(id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(BOOL)arg3 otherAttributes:(id)arg4 ;
+(id)otherAttributesWithParagraphStyle:(id)arg1 ;
+(id)otherAttributesWithParagraphStyle:(id)arg1 kerning:(double)arg2 ;
+(id)styleWithFont:(id)arg1 smallCapsBaseFont:(id)arg2 uppercase:(BOOL)arg3 otherAttributes:(id)arg4 minimumScaleFactor:(double)arg5 shouldEmbedTintColor:(BOOL)arg6 ;
-(BOOL)shouldEmbedTintColors;
-(NSDictionary *)otherAttributes;
-(void)setSmallCapsBaseFont:(CLKFont *)arg1 ;
-(void)setOtherAttributes:(NSDictionary *)arg1 ;
-(void)setShouldEmbedTintColors:(BOOL)arg1 ;
-(BOOL)uppercase;
-(CLKFont *)smallCapsBaseFont;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(CLKFont *)arg1 ;
-(CLKFont *)font;
-(void)setMinimumScaleFactor:(double)arg1 ;
-(double)minimumScaleFactor;
-(void)setUppercase:(BOOL)arg1 ;
@end

