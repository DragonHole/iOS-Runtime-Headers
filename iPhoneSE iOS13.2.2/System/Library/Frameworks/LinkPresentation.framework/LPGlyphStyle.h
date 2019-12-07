/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:40 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPImage, LPPadding, LPImageViewStyle, LPPointUnit;

@interface LPGlyphStyle : NSObject {

	LPImage* _image;
	LPPadding* _padding;
	double _opacity;
	LPImageViewStyle* _imageStyle;
	LPPointUnit* _baselineOffset;

}

@property (nonatomic,retain) LPImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * padding;                 //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double opacity;                               //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,readonly) LPImageViewStyle * imageStyle;              //@synthesize imageStyle=_imageStyle - In the implementation block
@property (nonatomic,retain) LPPointUnit * baselineOffset;                 //@synthesize baselineOffset=_baselineOffset - In the implementation block
-(id)init;
-(LPImage *)image;
-(void)setImage:(LPImage *)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(LPPointUnit *)baselineOffset;
-(void)setBaselineOffset:(LPPointUnit *)arg1 ;
-(LPPadding *)padding;
-(LPImageViewStyle *)imageStyle;
-(id)initSearchGlyph;
@end
